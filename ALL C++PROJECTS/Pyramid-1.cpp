#include<iostream>
using namespace std;
int main()
{
    int a, space, b=0;
    for(a=1; a<=6; a++)
    {
        for(space=1; space<=(6-a); space++)
            cout<<"  ";
        while(b!=(2*a-1))
        {
            cout<<"* ";
            b++;
        }
        b=0;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
