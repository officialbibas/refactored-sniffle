#include<iostream>
using namespace std;

int division(int a, int b) throw(int)
{
    if(b==0)
        throw 1;
    return a/b;
}

int main()
{
    int x=10, y=0, z;
    try
    {
        
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"Division By Zero "<<e<<endl;
    }
    
   
}