#include "iostream"
#include "cmath"
#include "ctime"
#include "string"
using namespace std;

void sleep_time(int milli){
    // the clock_t is an especially int;
    clock_t sleep;
    // the variable sleep is taken real time addition milli;
    sleep= clock()+ milli;
    while(clock()< sleep){}
    return ;
}

string storeOperation= "+-*/sincos";

// this func is used to take what type of calculation;
string getUserOperation(){
    string op;
    fflush(stdin);
    cout <<"What operation do you want: ";
    cin >>op;
    return op;
}

// this func is used to take value 
float getUserInput(){
    float value;
    cout <<"Enter value: ";     cin >>value;
    return value;
}

// this func is used for determining type of calculation;
int compareOperation(){
    // string opeInput=getUserOperation();
    int pos_useroperation= storeOperation.find(getUserOperation());
    return pos_useroperation;
}

float addition(){
    float val1= getUserInput();
    float val2= getUserInput();
    return val1+ val2;
}

float subtraction(){
    float val1= getUserInput();
    float val2= getUserInput();
    return val1- val2;
}

float multiplication(){
    float val1= getUserInput();
    float val2= getUserInput();
    return val1* val2;
}

float division(){
    float val1= getUserInput();
    float val2= getUserInput();
    return val1/ val2;
}

float sin(){
    cout <<"Only enter angle"<<endl;
    float val1= getUserInput();
    return sin(val1);
}

float cos(){
    cout <<"Only enter angle"<<endl;
    float val1= getUserInput();
    return cos(val1);
}

// when user enter case is 1, there is defining of function Calculator;
void Calculator(){
    // this line is determined the operation;
    int compare_operation = compareOperation();
    // to save the result of functions;
    int result;
    switch(compare_operation){
        case 0:
            result= addition();
            cout <<"The result is "<<result<<endl;
            break;
        case 1:
            result= subtraction();
            cout <<"The result is "<<result<<endl;
            break;
        case 2:
            result= multiplication();
            cout <<"The result is "<<result<<endl;
            break;
        case 3:
            result= division();
            cout <<"The result is "<<result<<endl;
            break;
        case 4:
            result= sin();
            cout <<"The result is "<<result<<endl;
            break;
        case 7:
            result= cos();
            cout <<"The result is "<<result<<endl;
            break;
        default :
            break;
    }
    sleep_time(1000);
    return ;
}


void otherProgram(){
    cout <<"The other program is under construction";
    sleep_time(1000);
    return ;
}

int main(){
    int choosenUser;
    do{
        cout <<"________________________________Program List______________________________"<<endl;
        cout <<"(1)     Calculator                                                        "<<endl;
        cout <<"(2)     Other Program                                                     "<<endl;
        cout <<"(0)     Exit                                                              "<<endl;
        cout <<"__________________________________________________________________________"<<endl;
        cin >>choosenUser;
        switch (choosenUser){
            case 0:
                break;
            case 1:
                Calculator();
                break;
            case 2:
                otherProgram();
                break;
            default:
                cout <<"The request is denied";
                break;
        }
        system("cls");  //used to delete colsole;
    }while(choosenUser != 0);
    system("cls");
    return 0;
}

