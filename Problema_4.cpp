#include <iostream>
using namespace std;

class Date{
    public:
        explicit Date(int initialMonth, int initialDay, int initialYear) : month{initialMonth}, day{initialDay}, year{initialYear}{
            if (month > 12 || month < 1){
                month = 01;
            }
        }
        void setMonth(int initialMonth){
            month = initialMonth;
            if (initialMonth > 12 || initialMonth < 1){
                month = 1;
            }
        }
        int getMonth()const{
            return month;
        }
        void setDay(int initialDay){
            day = initialDay;
        }
        int getDay()const{
            return day;
        }
        void setYear(int initialYear){
            year = initialYear;
        }
        int getYear()const{
            return year;
        }
        void displayDate(){
            cout<<month<<"/"<<day<<"/"<<year<<endl;
        }
    private:
        int month;
        int day;
        int year;
};

int main(){
    Date fecha{03,07,2004};
    Date fecha2{99,13,2013};

    fecha.displayDate();
    fecha2.displayDate();
    return 0;
}