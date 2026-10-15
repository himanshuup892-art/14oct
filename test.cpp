#include<iostream>
using namespace std;
class Vehicle{
    protected :
    string vehicleNumber;
    string OwnerName;
    int hours;

    public :
    Vehicle(string v, string o, int h){
        vehicleNumber = v;
        OwnerName = o;
        hours = h;
    }
    
    void showdetails(){
        cout<<"VehicleNumber     : "<<vehicleNumber<<endl;
        cout<<"OwnerName         : "<<OwnerName<<endl;
        cout<<"Hours             : "<<hours<<endl;
    }
    virtual int calculatefee(){
        return 0;
        
    }
};
class Bike : public Vehicle{
    public :
    Bike(string v, string o, int h) : Vehicle(v,o,h) { }
    int calculatefee(){
        return hours*10;
    }
};
class Car : public Vehicle{
    public :
    Car(string v, string o, int h) : Vehicle(v,o,h) { }
    int calculatefee(){
        return hours*20;
    }
};
class Truck : public Vehicle{
    public :
    Truck(string v, string o, int h) : Vehicle(v,o,h) { }
    int calculatefee(){
        return hours*30;
    }
};
int main(){
    Bike b("UP62RG2007","Ramesh", 4);
    Car c("UP62DG8959","Ram", 5);
    Truck t("UP62RG3457","Ramu", 6);

    cout<<endl; 
    cout<<endl;
    cout<<"========== MALL PARKING BILLING SYSTEM =========="<<endl;
    cout<<endl;
    cout<<endl;

    cout<< "Vehicle Type      : Bike" <<endl;
    b.showdetails();
    cout<< "Parking Fee       : Rs. "<< b.calculatefee() <<endl;
    cout <<endl;

    cout<< "Vehicle Type      : Car" <<endl;
    c.showdetails();
    cout<< "Parking Fee       : Rs. "<< c.calculatefee() <<endl;
    cout<<endl;

    cout<< "Vehicle Type      : Truck" <<endl;
    t.showdetails();
    cout<< "Parking Fee       : Rs. "<< t.calculatefee() <<endl;

    return 0;
    
}