#ifndef TIME_H
#define TIME_H
//if 0
/*comment this code */

class Time
{
public:
	Time();
	Time(int h,int m, int s);
	void set_sec(int);
	void set_min(int);
	void set_hour(int);

	int get_hour() const;	
	int get_min() const;
	int get_sec() const;

	void print_time() const;

private :
	int hour;
	int min;
	int sec;

};
/*the code above will be commented*/
//endif
#endif


