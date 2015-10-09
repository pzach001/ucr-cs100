
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Vehicle {
    protected:
    string name;    
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
  virtual  double go(double x) {}
};

class wheels: public Vehicle {
        protected:
        int NumOfWheels;
        int NumofDoors;
        int NumOfSeats;
        //int NumOfSeats

        public:
        void GetSeats(int seatval)
        {
            NumOfSeats =seatval;
        }
        void GetWheels(int wheelval){
                //cout << "went into Get wheels" << endl;
                NumOfWheels = wheelval;
        }
        virtual void GetDoors(int doorval){
                NumofDoors =doorval;
                //cout << "went into GetDoors" << endl;
        }
                 double go(double x){
                 //cout << "went in " << endl;
                 double holder = x*speed;
                 cout <<"name is: " << name<< " "<< endl;
                 cout <<"speed_per_hour:  " <<  holder    << endl;
                 cout <<"number_of_seats: " << NumOfSeats << endl;
                 cout <<"number_of_wheels: "<< NumOfWheels<< endl;
                 cout << "number_of_doors: "<< NumofDoors << endl;
                }
};
class noWheels:public Vehicle {
};
class lessthan4wheels:public wheels {
};
class Motor :public lessthan4wheels {               
         public:
                double go(double x){
                 double holder = x*speed;
                 cout <<"name is: "         << name       << endl;
                 cout <<"speed_per_hour:  " <<  holder    << endl;
                 cout <<"number_of_seats: " << NumOfSeats << endl;
                 cout <<"number_of_wheels: "<< NumOfWheels<< endl;
        }
};
class greaterorequal4: public wheels {
};
class publicwheels :public greaterorequal4 {
        protected:
        double fare;
        public:
        void setfare(double fareval){
            fare = fareval;
        }
         double go(double x){
                double holder = x*speed;
                 cout <<"name is: "         << name       << endl;
                 cout <<"speed_per_hour:  " <<  holder    << endl;
                 cout <<"number_of_seats: " << NumOfSeats << endl;
                 cout <<"number_of_wheels: "<< NumOfWheels<< endl;
                 cout << "number_of_doors:" << NumofDoors << endl;
                 cout << "fare: "           << fare       << endl;
                 
                }
};
class NoPassenger :public greaterorequal4{
           public:
                double go(double x){
                 double holder = x*speed;
                 cout <<"name is: " << name<< " "<< endl;
                 cout <<"speed_per_hour:  " <<  holder << endl;
                 cout <<"number_of_wheels: "<< NumOfWheels<< endl;
                }

};
class MilitaryVehicle:public greaterorequal4{
       string Weapon;
       public:
       void Getweapon(string w){
           Weapon = w;
       }
    
    
                double go(double x){
                double holder = x*speed;
                 cout <<"name is: "         << name       << endl;
                 cout <<"speed_per_hour:  " <<  holder    << endl;
                 cout <<"number_of_seats: " << NumOfSeats << endl;
                 cout <<"number_of_wheels: "<< NumOfWheels<< endl;
                 cout << "number_of_doors:" << NumofDoors << endl; 
                 cout << "Weapon: "         << Weapon     << endl;
                }
};

class WaterVehicle:public noWheels {
    int NumOfSeatz;
    int NumOfDoorz;
    string shape;
        public:
       virtual void GetSeatz(int seatsNUM)
       {
          NumOfSeatz =seatsNUM;
       }
       virtual void GetDoorz(int DoorsNUM)
       {
          NumOfDoorz =DoorsNUM;
       }
        void setshape(string x){
            //cout << "went into SetShape" << endl;
            shape = x;
        }
         double go(double x){
                double holder = x*speed;
                 cout <<"name is: "         << name       << endl;
                 cout <<"speed_per_hour:  " <<  holder    << endl;
                 cout <<"number_of_seats: " << NumOfSeatz << endl;
                 cout << "number_of_doors: "<< NumOfDoorz << endl;
                 cout << "shape: "          << shape      << endl;
                }
};
class AirVehicle:public noWheels {
       
        protected:
        int NumOfSeated;
        int NumOfDoored;
        double fuel;
        double payload;
       public:
       virtual void GetSeat(int seatNUM)
       {
          NumOfSeated =seatNUM;
       }
       virtual void GetDoor(int DoorNUM)
       {
          NumOfDoored =DoorNUM;
       }
         void setfuel(double  x){
             //cout << "setfuelandpayload" << endl;
            fuel = x;
        }
        void setpayload(double y)
        {
            payload=y;
        }
};
class SpaceVehicle:public AirVehicle{
    
         double go(double x){
            double holder = x*speed;
            cout <<"name is: "         << name       << endl;
            cout <<"speed_per_hour:  " << holder    << endl;
            cout <<"number_of_seats: " << NumOfSeated << endl;
            cout << "number_of_doors: "<< NumOfDoored << endl;
            cout << "tons_of_fuel: "    << fuel       << endl;
            cout << "tons_of_payload:"  << payload    << endl;
        }
};
class LandAirVehicle:public AirVehicle{
             double go(double x){
            double holder = x*speed;
            cout <<"name is: "         << name       << endl;
            cout <<"speed_per_hour:  " << holder    << endl;
            cout <<"number_of_seats: " << NumOfSeated << endl;
            cout << "number_of_doors: "<< NumOfDoored << endl;
            cout << "tons_of_fuel: "    << fuel       << endl;
        }
    
};
int main()
{

 vector<Vehicle*> x;
 
  
  publicwheels Bus;
  Bus.getnameandspeed("Bus", 50);
  Bus.GetWheels(6);
  Bus.GetDoors(2);
  Bus.GetSeats(40);
  Bus.setfare(1.25);
  Vehicle* buspoint;
  buspoint = &Bus;
  x.push_back(buspoint);

  wheels    Coup;
  Coup.getnameandspeed("Coup", 120);
  Coup.GetWheels(4);
  Coup.GetDoors(2);
  Coup.GetSeats(4);
  Vehicle* Couppoint;
  Couppoint = &Coup;
  x.push_back( Couppoint);
  
  wheels    Sedan;
  Sedan.getnameandspeed("Sedan",100);
  Sedan.GetWheels(4);
  Sedan.GetDoors(4);
  Sedan.GetSeats(4);
  Vehicle*  Sedanpoint;
  Sedanpoint = &Sedan;
  x.push_back(Sedanpoint);
  
  Motor  Motorcycle;
  Motorcycle.getnameandspeed("Motorcycle", 80);
  Motorcycle.GetWheels(2);
  Motorcycle.GetSeats(1);
  Vehicle* MotorcyclePoint;
  MotorcyclePoint = &Motorcycle;
  x.push_back(MotorcyclePoint);
  

  Motor Bicycle;
  Bicycle.getnameandspeed("Bicycle", 25.25);
  Bicycle.GetWheels(2);
  Bicycle.GetSeats(1);
  Vehicle* bicyclePoint;
  bicyclePoint = &Bicycle;
  x.push_back(bicyclePoint);
  
  NoPassenger    HoverBoard;
  HoverBoard.getnameandspeed("HoverBoard", 30);
  HoverBoard.GetWheels(4);
  Vehicle* HoverBoardPoint;
  HoverBoardPoint = &HoverBoard;
  x.push_back( HoverBoardPoint);
  



  WaterVehicle     Paddleboat;
  Paddleboat.getnameandspeed("Paddleboat", 10.00);
  Paddleboat.setshape("swan");
  Paddleboat.GetSeatz(2);
  Paddleboat.GetDoorz(2); 
  Vehicle* PaddleboatPoint;
  PaddleboatPoint = &Paddleboat;
  x.push_back( PaddleboatPoint);
  
  SpaceVehicle       FalconRocket;
  FalconRocket.getnameandspeed("FalconRocket", 2112662.054);
  FalconRocket.GetDoor(1);
  FalconRocket.GetSeat(6);
  FalconRocket.setfuel(9000);
  FalconRocket.setpayload(2000);
  Vehicle* FalconRocketPoint;
  FalconRocketPoint = &FalconRocket;
  x.push_back( FalconRocketPoint);
  
  LandAirVehicle    BOEING;
  BOEING.getnameandspeed("BOEING777", 11000);
  BOEING.GetDoor(7);
  BOEING.GetSeat(1700);
  BOEING.setfuel(47890);
  Vehicle* BOEINGPoint;
  BOEINGPoint = &BOEING;
  x.push_back( BOEINGPoint);


  MilitaryVehicle  Tank;
  Tank.getnameandspeed("Tank", 45);
  Tank.GetWheels(6);
  Tank.GetDoors(3);
  Tank.GetSeats(5);
  Tank.Getweapon("artillery");
  Vehicle* Tankpoint;
  Tankpoint =&Tank;
  x.push_back(Tankpoint);
  
  
   WaterVehicle     FishingBoat;
  FishingBoat.getnameandspeed("FishingBoat", 10.00);
  FishingBoat.setshape("dinghy");
  FishingBoat.GetSeatz(2);
  FishingBoat.GetDoorz(2); 
  Vehicle* FishingBoatPoint;
  FishingBoatPoint = &FishingBoat;
  x.push_back( FishingBoatPoint);
  double timeparameter;
  timeparameter = 1;
  cout << "time parameter is : " << timeparameter << endl;
  for(int i = 0;i<x.size();++i)
  {
        ( x.at(i))->go(timeparameter);
        cout <<endl;
  }
}

