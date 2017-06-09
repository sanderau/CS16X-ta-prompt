#include <iostream>
using namespace std;

class HeartRates
{ 
private:
string first_name;
string last_name;
int day;
int month;
int year; 
int age; 
int max_heart_rate; 

public:

string get_first_name()//gets first_name data member
{return first_name;}

string get_last_name()//gets last_name data member 
{return last_name;}

int get_day()//gets day data member
{return day;}

int get_month()//gets month data member
{return month;}

int get_year()//gets year data member 
{return year;}

void set_first_name(string first)//sets first_name data member
{first_name = first;}

void set_last_name(string last)//sets last_name data member 
{last_name = last;}

void set_day( int day_0)//sets day data member
{day = day_0;}

void set_month(int month_0)//sets month data member
{month = month_0;}

void set_year(int year_0)//sets year data member
{year = year_0;} 

int get_age()
{
int today_day, today_month, today_year, bday, bmonth, byear;

cout << "Enter todays date seperated by spaces mm dd yyyy." << endl << "Example: October 10 2007 is entered as 10 31 2007\nEnter: ";
cin >> today_month >> today_day >> today_year; 
cout << endl << "Enter your birthdate using the same format." << endl; 
cin >> bmonth >> bday >> byear; 

age = ((today_day -bday) + ((today_month - bmonth) * 30) + ((today_year - byear) * 365))/365;

return age; 
}

int get_maximum_heart_rate()
{ 
int max_heart; 

max_heart = 220 - age; 

return max_heart; 
}

double get_low_target_heart_rate()
{
double low_target; 

low_target = max_heart_rate * .50; 

return low_target; 
}

double get_high_target_heart_rate()
{
double high_target; 

high_target = max_heart_rate * .85; 

return high_target; 
}

HeartRates (string first = "", string last ="", int day_0 = 0, int month_0 = 0, int year_0 = 0, int anos = 0, int maxhr = 0)
{
first_name = first; 
last_name = last; 
day = day_0;
month = month_0;
year = year_0; 
age = anos; 
max_heart_rate = 220;
} 
};

int main()
{
cout << "Welcome to the target heart rate calculator!" << endl;

HeartRates Defib; 

Defib.get_age(); 


cout << "Your maximum heart rate is " << Defib.get_maximum_heart_rate() << endl; 

cout << "Your target heart rate is between" << Defib.get_low_target_heart_rate() << " & " << Defib.get_high_target_heart_rate() << endl << "Thank you for using the calculator!\n"; 

return 0; 


}
