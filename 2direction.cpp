#include "iostream"
#define max_size 100
using namespace std;
// Tính tổng các phần tử trên đường chéo chính
void enterarr(int arr[max_size][max_size],int row){
    cout <<"enter arr: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout <<"arr["<<i<<"]["<<j<<"] = ";  cin >>arr[i][j];
        }
    }
    return ;
}

void showarr(int arr[max_size][max_size],int row){
    cout <<"show array: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }
}

int sumarr(int arr[max_size][max_size],int row){
    int sum= 0;
    for(int i=0;i<row;i++){
        sum+=arr[i][i];
    }
    return sum;
}

int main(){
    int arr[max_size][max_size];
    int row=0,col=0;
    do{
        if(row != col) cout <<"enter again!"<<endl;
        cout <<"enter the number of rows: ";    cin >>row;
        cout <<"enter the number of cols: ";    cin >>col;
    }while(row != col);
    enterarr(arr,row);
    showarr(arr,row);
    cout <<"the sum is: "<<sumarr(arr,row)<<endl;
    return 0;
}