#include <iostream>
using namespace std;

int main (){
    int N;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>> N;

    int a,b,c;
    for (a=0, b=1, c=2; a<=N, b<=N, c<=N; a++,b++,c++)
    cout << a <<" " << b <<" " << c <<endl;
}