#include <iostream>
#include<deque>
using namespace std;
template <typename T>
class Stack
{
private:
deque<T> stack;//the internal represantation of a stack

public :
//return top elements of the stack
const T& top(){return stack.front();}


//push an element to thetop of the stack
void push(const T& val){stack.push_front(val);}

//pop the top element on the stack]
void pop(){stack.pop_front();}

bool is_empty(){return stack.empty();}

//return the size  of a stack
int size(){return stack.size(); }

const T& bottom(); //function  outside the class

};

template<typename T>

/**
**implementing the bottom() function defined in the class Stack
each function must start with the template keyword followed by the same set of parameters
as the class template. the member function must be qualified with the class name and a scope resolution opperator
for instance bellow the bottom() member functio.
*
*/
inline const T& Stack<T>::bottom(){
return stack.back();}
int main(){
Stack<int> s;
cout<< "pushing elements into the stack \n";
for(int i=0; i<20; i++){
s.push(i);
cout<< "element at thetop :"<< s.top();
}
cout << "Ellement at the botton"<<s.bottom()<<"\n";
while(!s.is_empty()){
s.pop();
cout<<"the stack has "<<s.size()<<" Element \n";
}
cout<<" the stack is now empty with size:"<<" "<<s.size();
return 0;
}
