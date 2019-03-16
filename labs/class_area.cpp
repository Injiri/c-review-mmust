/*this class shows how to work with overloaded constractors
 */
#include <iostream>
using namespace std;


class area {
	private:
		int length;
		int width;

	public:	
		//a parameterles constractor
		area(): length(5), width(8) {}
		area(int l ,int w): length(l), width(w){ }

		void get_lenth(){
	cout << "Enter length ";
	cin>> length;
		cout<< "Enter width :";
		cin >> width;
		}

		int calculate_area(){
			return length * width;
		}
};

int main(){
	area area1 ,area2(2,1);

	cout<<"Area of the initial defaultconstractor:"<<area1.calculate_area();

	cout<<"Area of the parameterized constractor:"<<area2.calculate_area()<<endl;
}
