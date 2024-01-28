#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int x=0, y=0;
	
	cout<<"\n";
	for(int x=1; x<=10; x++){
		cout<<"\n";
		for(int y=1; y<=10; y++){
			cout<<setw(4) << x * y;
		}
	}
	cout<<"\n";
	
}



