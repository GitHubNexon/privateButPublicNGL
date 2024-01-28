#include <iostream>
#include <windows.h>

using namespace std;
// Base class
class JDMCars {
  public:
    string brand = "\t\tNissan";
 	void model() {
      cout << "\t\tSkyline GTR-R34 \n\n\n" ;
      Sleep(1000);
    }
     void Engine() {
      cout << "Engine \t\t In-line 6-cyl, twin-turbo V6 \n\n" ;
      Sleep(1000);
    }
     void Power() {
      cout << "Power\t\t 276bhp @ 7000rpm \n\n" ;
      Sleep(1000);
    }
     void Torque() {
      cout << "Torque \t\t 289lb ft @ 4400rpm \n\n" ;
      Sleep(1000);
    }
     void Transmission() {
      cout << "Transmission\t Six-speed manual, four-wheel drive, active rear rear LSD \n\n" ;
      Sleep(1000);
    }
     void Topspeed() {
      cout << "Topspeed\t 165mph (claimed) \n\n\n" ;
      Sleep(1000);
    }
};

// Derived class
class Car: public JDMCars {
  public:
    string Specs = "\tSpecification \n\n\n\n";
};



int main() {
  Car myCar;
  
  myCar.model();
  myCar.Engine();
  myCar.Power();
  myCar.Torque();
  myCar.Transmission();
  myCar.Topspeed();
  
  
  cout << myCar.brand + " " + myCar.Specs;
  
  cout << "Pulmano John Mark L - Thursday, February 17, 2022 at 2:17PM \n\n";
		Sleep(2000);
  

  
  system("pause");
	return 0;
}
