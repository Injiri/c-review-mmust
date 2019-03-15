#include<iostream>
#include "Time.hpp"
#include "Time.cpp"
#include <array>
using namespace std;
int main(){
Time time;
array<Time, 5> arrays ;// can be used to call both cons & non cons functions
Time& ref = time;// refferences to the time object
Time* time_ptr = &time ; //a pointer to the time object
const Time con_time; //can only be used to call constant functions

Time sunset;
const Time& mem = sunset;// constant refferene ,can only be used too call constant functions
cout << "Object lives in "<< &time << endl;
cout << "object lives in "<<time_ptr <<endl;
cout <<"const object lives in" <<&con_time<< endl;
time.get_hour();
time.set_hour(12);
time.set_min(45);
time.set_sec(2);
cout<<"Time as per the new settings"<<endl;
time_ptr->print_time();//can use the arrow selection operator to access member fuchtions
cout << "pointer is pointing at "<<time_ptr<<endl;
time_ptr ->set_min(23);
cout<< "value after editing is:"<<endl;
time_ptr-> print_time();
ref.set_sec(66);// when using refference use a dot operator


}
