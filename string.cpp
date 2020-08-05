#include "iostream"
#include "string"
using namespace std;

int main(){
    string str1;
    string str2;
    string str3;


    // input the strings
    cout <<"enter the str1: ";  getline(cin,str1);
    cout <<"enter the str2: ";  getline(cin,str2);
    cout <<"enter the str3: ";  getline(cin,str3);

    // show the length of strings
    cout <<"the size of str1 is: "<<str1.size()<<endl;
    cout <<"the size of str2 is: "<<str2.size()<<endl;
    cout <<"the size of str3 is: "<<str3.size()<<endl;

    // show the first index and last index
    cout <<"the first index is: "<<str1.front()<<endl;
    cout <<"the last index is: "<<str1.back()<<endl;

    // put index end of string
    str1.push_back('1');
    str2.push_back('2');
    str3.push_back('3');
    cout <<str1<<endl;
    cout <<str2<<endl;
    cout <<str3<<endl;

    // delete last charater
    str1.pop_back();
    str2.pop_back();
    str3.pop_back();
    cout <<"the strings after using pop_back"<<endl;
    cout <<str1<<endl;
    cout <<str2<<endl;
    cout <<str3<<endl;

    // phuong thuc append noi vao sau chuoi cuoi cung
    str1.append("dontgiveup");
    str2 += ("dontgiveup");
    str3.append("dontgiveup");
    cout <<str1<<endl;
    cout <<str2<<endl;
    cout <<str3<<endl;
    
    // phuong thuc insert
    str1.insert(str1.size()," dontever");
    cout <<str1<<endl;

    // phuong thuc thay the replace
    str1.replace(str1.size()-8,8," dontnever");
    cout <<str1<<endl;

    // phuong thuc find
    cout <<"the index of dont is: "<<str1.find("dont");

    // phuong thuc compare
    cout <<"the result of compare is: "<<str1.compare(str2)<<endl;
    
    return 0;
}
