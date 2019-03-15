#include <iostream>
#include<stdexcept>
#include "Time.hpp"

using namespace std;

Time::Time()
{
 hour =  0;
 min= 0;
 sec = 0;

}
Time::Time(int h, int m, int s)
{
 hour =h;
 min =m;
 sec =s;
}

void Time::set_hour(int h)
{
 if((h >=0 && h<= 24))
 {
  hour =h;
 } else
  throw invalid_argument("hour ivalid");
}

void Time::set_min(int m)
{
 if((m >=0 && m<60))
  {
  min = m;
  } 
  else
 throw invalid_argument("invalid min");
}

void Time::set_sec(int s)
{
 if((s>0 && s<60))
  {
  sec = s;
  }
  else 
     throw invalid_argument("invalid second val");
}

void Time::print_time() const
{
	cout<<hour<< ":"<<min <<":"<< sec << endl;
}

int Time::get_hour() const
{
 return hour;
}
int Time::get_min() const
{
 return min;
}
int Time::get_sec() const
{
return sec;
}
