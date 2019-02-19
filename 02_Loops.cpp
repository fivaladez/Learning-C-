#include <iostream>
using namespace std;

int main(){
    /*Initialization of variables*/
    int a = 0;
    char b = '\0';
    float c = 0;
    double d = 0;
    int* p = NULL;
    bool e = true;//false
    /* ====================== */
    int index;
    cout << "\n";
    for(index = 0; index < 10; index++){
        if( 5 < index){
            cout << "\tNow index is " << index << endl;
            break;/*It stops the loop*/
        }else if( 3 == index ){
            cout << "\tNow index is" << index << "and the rest of the loop will be skiped" << endl;
            continue;/*Stops the current iteration and starts the next one*/
        }else if( 30 == index ){
            LABEL:cout << "\tArrive here is IMPOSIBLE unless you use goto LABEL. Index = " << index << endl;
        }else if( 2 == index ){
            goto LABEL;/*Jumps to the defined label in code*/
        }
        cout << index << endl;
    }

    return 0;
}
