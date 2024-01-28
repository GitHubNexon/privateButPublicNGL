#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setw(34) <<"Multiplication Table\n\n";
	int r=1;
	do{
		int d=1;
		do{
			cout<<setw(4)<<r*d;
			d++;
		}while(d<=10);
		cout<<endl;
		r++;
	}while(r<=10);
	return 0;
}
	

