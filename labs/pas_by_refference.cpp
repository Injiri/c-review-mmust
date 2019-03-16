/** passing refference can be achieved by using either refference by pointers or without pointers. in this case the actual values are not passed to the function.
 *
 */

#include <iostream>
using namespace std;

void swap_by_pointers( int*, int*);
void swap_without_pointers(int& ,int&);

int main(){
	int a = 1;
       	int b = 3;

	cout << "Before swaping a and b :" << endl;
	cout << "a =" <<a <<endl;
	cout << "b =" <<b <<endl;

//swap by pointer values
	swap_by_pointers(&a ,&b);
	 	  cout<<"after swaping c and d:"<<endl;
        	  cout<< " a :" << a<< endl;
	 	  cout<<" b :" << b<< endl;

//this shall rewap the values of a and b to original formart.
	 swap_without_pointers(a,b);

	cout<< "after re-swaping "<< endl;
	cout<< "a= "<<a <<endl;
	cout<<"b ="<<b << endl;
	return 0;}
/**
 *only the reference(address) of the variables are recieved in the swap()
swapping takes pace in the original addresses of int n1 and n2
*
* --- *n1 gives the values of elements stored at address n1
*/
	void swap_by_pointers(int* n1 , int* n2){
		int temp ;
		temp = *n1;
		*n1 = *n2;
		*n2 =temp;
	}
	
	void swap_without_pointers(int& m1 ,int& m2){
		int temp2 = m1;
		m1  = m2;
		m2 = temp2;
	}
