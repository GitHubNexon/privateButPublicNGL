#include<iostream>
using namespace std;
int main()

{

 
 int length=0, width=0;

 cout << "Enter the length of the hollow rectangle\n";

 cin>>length;

 cout << "Enter the width of the hollow rectangle\n";

 cin>>width;

 for(int x=0; x<length; x++)

 {

  for(int y=0; y<width; y++)

  {

   if(x==0 || x==length-1 || y==0 || y==width-1)

    cout << "*";
   else
   
    cout << " ";
  }
  cout<<endl;
 }
}

