#include<iostream>
#include<cstring>
using namespace std;
// int main(){
//     char str1[100];
//     char str2[100]="hello world";
//     strcpy(str1, str2); //copy string 2 to 1
//     cout<<str1<<endl;
//     return 0;
// }

// int main(){
//     char str1[100]="abc";
//     char str2[100]="xyz";
//     strcat(str1, str2); //concatnate
//     cout<<str1<<endl;
//     cout<<str2<<endl;
//     return 0;
// }

int main(){
    char str1[100]="mango";  // 1st value greater so answer wil be positive
    char str2[100]="hello world";
    cout<<strcmp(str1, str2)<<endl;//compare
    return 0;
}