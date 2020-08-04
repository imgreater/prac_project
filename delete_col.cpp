#include "iostream"
#define size_max 100
using namespace std;
// xoa mot cot trong mang 2 chieu
void enterarr(int arr[][size_max],int row,int col){
    cout <<"enter array:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout <<"arr["<<i<<"]["<<j<<"] = ";  cin >>arr[i][j];
        }
    }
    return ;
}

void swap(int &a,int &b){
    int tmp= a;
    a= b;
    b= tmp;
    return ;
}

void delecol(int arr[][size_max],int row,int &col,int delcol){
    do{
        cout <<"enter column is deleted: "; cin >>delcol;
    }while(delcol<0 || delcol>=col);
    while(delcol <col-1){
        for(int i=0;i<row;i++){
            swap(arr[i][delcol],arr[i][delcol+1]);
        }
        delcol++;
    }
    col--;
    return ;
}

void showarr(int arr[][size_max],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout <<arr[i][j]<<"  ";
        }
        cout <<endl;
    }
    return ;
}

int main(){
    int row,col;
    do{
        cout <<"enter number of row: "; cin >>row;
    }while(row<=0 && row>size_max);
    do{
        cout <<"enter number of col: "; cin >>col;
    }while(col<= 0 && col >size_max);
    int arr[size_max][size_max];
    enterarr(arr,row,col);
    cout <<"the array before deleting"<<endl;
    showarr(arr,row,col);
    int delcol;
    delecol(arr,row,col,delcol);
    cout <<"the array after deleting"<<endl;
    showarr(arr,row,col);
    return 0;
}