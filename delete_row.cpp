#include "iostream"
#define size_max 100
using namespace std;

void swap(int &a,int &b){
    int tmp = a;
    a= b;
    b= tmp;
    return ;
}

void enterarr(int arr[size_max][size_max],int row,int col){
    cout <<"enter array: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout <<"arr["<<i<<"]["<<j<<"] = ";  cin >>arr[i][j];
        }
    }
    return ;
}

void deleterow(int arr[size_max][size_max],int &row,int col, int delerow){
    while(delerow < row){
        for(int i=0;i<col;i++){
        swap(arr[delerow][i], arr[delerow+1][i]);
        }
        delerow++;
    }
    row --;
    return ;
}

void showarr(int arr[size_max][size_max],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j< col;j++){
            cout <<arr[i][j]<<"  ";
        }
        cout <<endl;
    }
    return ;
}

int main(){ 
    int row,col;
    do{
        cout <<"enter row: ";   cin >>row;
    }while(row<= 0 && row>size_max);
    do{
        cout <<"enter col: ";   cin >>col;
    }while(col>=0 && col>size_max);
    int arr[size_max][size_max];
    enterarr(arr,row,col);
    int delerow;
    cout <<"the first row is one"<<endl;
    do{
        cout <<"enter row deleting: "; cin >>delerow;
    }while(delerow<=0 && delerow>row);
    cout <<"show array before deleting"<<endl;
    showarr(arr,row,col);
    deleterow(arr,row,col,delerow);
    cout <<"show array after deleting"<<endl;;
    showarr(arr,row,col);
    return 0;
}