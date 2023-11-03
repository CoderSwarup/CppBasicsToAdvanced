#include <iostream>
using namespace std;
  
class car {
private:
    int car_id;
    int price;
    double distance;
    void distance_travelled();
    
    public:
void getdata(int a1 , int b2 , int c3);
  
  
    void display()
    {
        cout << "car id is = " << car_id<<"\n car price = "<< price<< " Rs " << "\ndistance travelled = " << distance<<" km"<<endl;
    }
    
      
};

void car :: getdata(int a1 , int b2 , int c3){
	   car_id = a1;
	   price = b2;
	   distance = c3;
	   }
  
	   
	   
int main()
{
    car c1; // Declare c1 of type car
  /*  c1.car_id = 3246371;
    c1.price = 200000;
    c1.distance = 12;*/
    c1.getdata(321, 12,200000);
    c1.display();
  
    return 0;
}
