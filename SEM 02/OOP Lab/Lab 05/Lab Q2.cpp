
#include<iostream>
#include<vector>
using namespace std;

class Car {
	private:
		int id;
	  string name;

	public:
		Car(int x , string n) : id(x) , name(n){
		};
		
		string get_name() {
			return name;
		}
		
		int get_id() {
			return id;
		}
	
};

class Garage {
	
	private:
		vector<Car*> cars;
		
	public: 
		
		void parkCar(Car *e) {
			cars.push_back(e);			
		}
	    
	    void listCars() {	    	
	    	for(Car* c : cars) {
	    	 cout<<c->get_name()<<" , "<<c->get_id()<<'\n';
	    	 
		     }
		  }
};

int main() {
	Car c1(001,"Mark X") , c2(095,"Crown");
	Garage g1;
	g1.parkCar(&c1);
	g1.parkCar(&c2);
	g1.listCars();

	return 0;
}
