#include <iostream>
using namespace std;
int main(){
  int date, time, calendarMonth, calendarDate, calendarYear;

  cout << "Enter date in format (dd/mm/yyyy) and time in hh:ss" << endl;

  cin >> date >> time;

  calendarYear = date % 10000;

  calendarDateAndMonth = date /10000;

  calendarDay = calendarDateAndMonth % 100;

  calendarDate = calendarDateAndMonth / 100;

  if ((calendarDate < 31 || calendarDate > 0) && (calendarMonth < 13) && (calendarYear > 2014)){
    cout << "format is ok" << endl;
  }
  else{
    cout << "Bad format" << endl;
  }

  return 0;

}
