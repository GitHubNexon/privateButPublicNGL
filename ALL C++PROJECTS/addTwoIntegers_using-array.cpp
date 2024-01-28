#include<iostream> 

using namespace std;

int main()

{
	int arr[5]={ 4, 7, 8, 9, 10},i=0;
	
	printf ("Array is ");
	
	while(i<5)
	{
		printf("%d ", arr[i]);
		
		i++;
	}
	cout << "\n\n";
	int X = arr[1];
	int Y = arr[2];
	int Z = X + Y;
	cout <<"position 1 in array element : " <<  X ;
	cout << "\n";
	cout <<"position 2 in array element : " <<  Y ;
	cout << "\n";
	cout <<"Adding two integer : " <<  Z ;
	return 0;
}
