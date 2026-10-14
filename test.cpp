#include<iostream>
using namespace std;
class Vehicle{
    protected :
    string vehicleNumber;
    string OwnerName;
    int hours;

    Vehicle(string v, string o, int h){
        vehicleNumber = v;
        OwnerName = o;
        hours = h;
    }
    
    void showdetails(){
        cout<<"---------- Mall parking biling system ----------"<<endl;
        cout<<"VehicleNumber : "<<vehicleNumber<<endl;
        cout<<"OwnerName : "<<OwnerName<<endl;
        cout<<"Hours : "<<hours<<endl;
    }
    virtual int calculatefee(){

        int fees = calculatefee();
        
    }
};
class Bike : public Vehicle{
    public :
    int  calculatefee(){
        hours*10;
    }
};
class Car : public Vehicle{
    public :
    int calculatefee(){
        hours*20;
    }
};
class Truck : public Vehicle{
     public :
    int calculatefee(){
        hours*30;
    }

};
int main(){
    
}