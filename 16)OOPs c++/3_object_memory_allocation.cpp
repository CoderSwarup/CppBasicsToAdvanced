

#include <iostream>
using namespace std;

class shop{
	int itemid[100];
	int itemprice[100];
    int counter;
    
    public:
    void initcounter(void){ counter = 0;}
   
    void  setprice();
    void displayprice();
    void sumprice();
    
    
    };
    
    
    //setprice function
    
  void shop  :: setprice(){
  	cout <<"Enter Id of your item number is "<<counter +1<<endl;
  	cin >> itemid[counter];
  	cout <<"Enter price of your item"<<endl;
  	cin >>itemprice[counter];
  	counter++;
  	}
  	
  	
  	
  	//display fun
  	void shop :: displayprice(){
  		for(int i = 0;i<counter;i++)
  		{
  		cout<<"your item id is "<<itemid[i] <<" and its price is : " << itemprice[i] <<endl;
  		}
  		}
  	  
  		
  		
  		//sum function
  	void shop :: sumprice(){
 	int sum=0; 
 		int i = 0;
  	for(;i<counter;i++)
  		{
  			
  			sum += itemprice[i];
  		
  			}
  			
  	//using while loop	
    /* int i = 0;
  			while(i<counter){
  				sum+=itemprice[i];
  				i++;
  				}*/				
  			
  cout<<endl<<"Your Total price of "<<i<<" item is :" <<sum<<endl;
  			
  			}
  			
	


int main(){
	
	shop mystore;
	mystore.initcounter();
	for(int i = 0 ; i < 3;i++){
	mystore.setprice();
		}

	mystore.displayprice();	
		
	mystore.sumprice();
	


   return 0;
	}
