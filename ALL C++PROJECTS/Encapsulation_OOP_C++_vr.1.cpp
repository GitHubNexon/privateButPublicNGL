#include <iostream>
#include <windows.h>

using namespace std;

class Trader {
  private:
    // Private attribute
    float Sell;
    float Buy;
    

  public:
    // Setter
    void setSell(int s) {
      Sell = s;
      int = 9;
    }
    // Getter
    float getSell() {
      return Sell;
    }
    
    void setBuy(int s) {
      Buy = s;
    }
    // Getter
    float getBuy() {
      return Buy;
    }
};

int main() {
	cout << "\t\t Bitcoin Trading \n\n";
		Sleep(2000); 
	
	cout <<"Trader: Elon Reeve Musk \n\n";
	Sleep(1000); 
	
	
  Trader myObj;
  cout << "Trader Accumalate Sells \n\n";
		Sleep(1000); 
		
  myObj.setSell(42542);
  Sleep(1000); 
  
  cout << myObj.getSell();
  
  cout <<"\n\n";
  
  cout << "Trader Accumalate Buy \n\n";
		Sleep(1000); 
		
	myObj.setBuy(23254);
  
  cout << myObj.getBuy();
   Sleep(1000); 
   
   cout <<"\n\n";
  
   cout <<"Investor\n\n";
  cout << "Pulmano John Mark L - Thursday, February 17, 2022 at 3:34PM \n\n";
		Sleep(2000); 
  
  system("pause");
	return 0;
}

