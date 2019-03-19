#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>//To use system functions
#include <exception>
using namespace std;


struct Agenda{

    string complete_name;
    string cellphone_number;

}agenda;

void add_contact(void);
void lookfor_contact(void);
void eliminate_contact(void);
void erase_agenda(void);

string file_path = "MyAgendaTest.txt";
string temporary_file_path = "Temporary_MyAgendaTest.txt";
fstream fp, ft;

int main(){

    int control = 0;
    for(;;)
    {
        system("cls");

        cout << "\n\n        === MENU ===" << endl;
        cout << "\n    1 - Add new contact "  << endl;
        cout << "\n    2 - Loof for a contact" << endl;
        cout << "\n    3 - Eliminate a contact" << endl;
        cout << "\n    4 - Erase agenda" << endl;
        cout << "\n    5 - Exit\n\n" << endl;

        cout << "    Introduce the option desired: " << endl;
        cin >> control;

        switch(control)
        {

            case 1: add_contact();
                break;
            case 2: lookfor_contact();
                break;
            case 3: eliminate_contact();
                break;
            case 4: //erase_agenda();
                break;
            case 5: //exit(0);
                break;
            default: cout << "\n\n" << control << "is not an option. Try again." << endl;
                break;
        }
        cout << "\n\n";
        system("pause");
    }

    return 0;
}

void add_contact(void)
{
    ADD_CONTACT:system("cls");
    cout << "\n\n    ===== Add a contact =====\n\n";

    cout << "\n    Introuce the first and last name: ";
    cin.ignore();
	getline( cin, agenda.complete_name );

    cout << "\n    Introuce the cellphone number: ";
    cin.ignore();
	getline( cin, agenda.cellphone_number );

    fp.open(file_path, fstream::out);
    /* NOTE: use of .is_open() it is ONLY for ifstream or ofstrem, NOT for fstream */

    if( fp )/* File succesfully open */
    {
        fp << agenda.complete_name << " --- " << agenda.cellphone_number << endl;
        fp.close();
	}
    else
    {
        system("cls");
        cout << "\n\n    There was an ERROR opening or creating your file\n\n";
        system("pause");
		throw std::exception();//End the program
        /*NOTE: We could use exit(1) to end the program, but that function is designed
        for C, which is not prepared for OOP (classes). So, exit() does not end
        the process as calling destructors for classes. This is why you shall not use it */
    }

    char again = ' ';
    cout << "\n  Do you want yo add another contact (y/n)? ";
    cin >> again;

    if( 'y' == again )
    {
        goto ADD_CONTACT;
    }

}

void lookfor_contact(void)
{
    string look_for_name;
    system("cls");
    cout << "\n\n    ===== Loof for name =====\n\n";

    cout << "\n    Introuce the first and last name to look for: ";
    cin.ignore();
    getline( cin, look_for_name );

    fp.open(file_path, fstream::in );
    if( fp )/* File succesfully open */
    {
        string line = "";
        unsigned int control_var = 0;

        while ( getline ( fp, line ) )
        {
            cin.ignore();
            size_t found = line.find(look_for_name);
            if( found != string::npos )
    		{
                //String exists
                cout << "\n    The info that you are looking for is: " << line;
                control_var = 1;
            }
            else
            {
                //String doesnt exists
            }
        }
        fp.close();
        if( 0 == control_var)
        {
            cout << "\n\n    The contact doesn´t exist";
        }
	}
    else
    {
        system("cls");
        cout << "\n\n    There was an ERROR opening or creating your file\n\n";
        system("pause");
		throw std::exception();//End the program
    }

}

void eliminate_contact(void)
{
    string name_to_eliminate;
    system("cls");
    cout << "\n\n    ===== Eliminate contact =====\n\n";

    cout << "\n    Introuce the first and last name to eliminate: ";
    cin.ignore();
    getline( cin, name_to_eliminate );

    fp.open(file_path, fstream::in);
    ft.open(temporary_file_path, fstream::out);

    if( fp || ft )/* File succesfully open */
    {
        string line = "";
        unsigned int control_var = 0;
        while ( getline ( fp, line ) )
        {
            //cin.ignore();
            size_t found = line.find(name_to_eliminate);
            if( found != string::npos )
    		{
                //String exists
                control_var = 1;
            }
            else
            {
                //String doesnt exists
                ft << line << endl;
            }
        }
        fp.close();
        ft.close();
        if( 0 == control_var)
        {
            cout << "\n\n    The contact doesn´t exist";
        }
        else
        {
            /* .c_str( )  -> It is for casting the variables "string" into the
            required ones.*/
            remove( file_path.c_str()  );
    		rename( temporary_file_path.c_str() , file_path.c_str()  );
        }

	}
    else
    {
        system("cls");
        cout << "\n\n    There was an ERROR opening or creating your file\n\n";
        system("pause");
		throw std::exception();//End the program
    }

}
