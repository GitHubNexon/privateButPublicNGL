#include<iostream>
using namespace std;
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
int main()
{
    float numOne, numTwo, res;
    int choice;
    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers:\n";
            cin>>numOne>>numTwo;
        }
        switch(choice)
        {
            case 1:
                res = add(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 2:
                res = sub(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = mul(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 4:
                res = div(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;
    return 0;
}
float add(float a, float b)
{
    return (a+b);
}
float sub(float a, float b)
{
    return (a-b);
}
float mul(float a, float b)
{
    return (a*b);
}
float div(float a, float b)
{
    return (a/b);
}
