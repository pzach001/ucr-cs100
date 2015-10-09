#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Vehicle {
   
    string name;
    int NumOfSeats;
    double time;
    double speed;
    public:
    virtual  void getnameandspeed(string x, double specTime) {
         name = x;
         speed = specTime;
      } 

 // virtual void printvehicle() {
 // cout << "name: " << name << endl;
 //  cout  << "time: "<<  time << endl; 
  virtual  double go(double x) {

        cout <<"name is: " << name<< " "<< endl;
        double holder = x*speed;
        cout <<"speed per " << x << " hours : " <<  holder << endl;

    }

};

class wheels: public Vehicle {
        int NumOfWheels;
};

class noWheels:public Vehicle {

};

class lessthan4wheels:public wheels {

};

class greaterorequal4: public wheels {
};

class publicwheels :public greaterorequal4 {
        int fare;
	public:
	void setfare(int x){
            fare = x;
	}
	void printfare(){
	cout << "fare: " << endl;
	cout << fare << endl;
	}
};

class privatewheels:public greaterorequal4 {
};

class WaterVehicle:public noWheels {
        string shape;
	public:
        void setshape(string x){
            shape = x;
        }
        void printshape(){
        cout << "shape: " << endl;
        cout << shape << endl;
        }
};    
class AirVehicle:public noWheels {
        double fuel;
        double payload;
       public:
	 void setfuelandpayload(double  x,double y){

            fuel = x;
	    payload = y;
        }
        void printfuelandpayload(){
        cout << "fuel: " << endl;
        cout << fuel << endl;
        cout << "payload: " << endl;
        cout << payload << endl;
        }
};  
int main()
{
 
 vector<Vehicle>x;
  
  privatewheels    Coup;
  Coup.getnameandspeed("Coup", 120);
  x.push_back( Coup);
  privatewheels    Sedan;
  Sedan.getnameandspeed("Sedan",100);
  x.push_back(Sedan);
  privatewheels    HoverBoard;
  HoverBoard.getnameandspeed("HoverBoard", 30);
  x.push_back( HoverBoard);
  lessthan4wheels  Motorcycle;
  Motorcycle.getnameandspeed("Motorcycle", 80);
  x.push_back(Motorcycle); 
  lessthan4wheels  Bicycle;
  Bicycle.getnameandspeed("Bicycle", 25.25);
  x.push_back(Bicycle);
  WaterVehicle	   Paddleboat;
  Paddleboat.getnameandspeed("Coup", 10.00);
  x.push_back(Paddleboat);
  publicwheels     Bus;
  Bus.getnameandspeed("Bus", 50);
  x.push_back(Bus);
  AirVehicle       FalconRocket;
  FalconRocket.getnameandspeed("FalconRocket", 2112662.054);
  x.push_back(FalconRocket);
  double timeparameter;
  timeparameter = 1;
  cout << "time parameter is : " << timeparameter << endl;
  for(int i = 1;i<x.size();++i)
  {
    (x.at(i)).go(timeparameter);
  } 
 // bus.printfare();

}    
