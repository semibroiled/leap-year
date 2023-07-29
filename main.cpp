#include <iostream>
#include <string>

using namespace std;

constexpr const unsigned short int check_4 {4};
constexpr const unsigned short int check_100 {100};
constexpr const int check_400 {400};   

bool is_leap_year (unsigned int year){
    
    bool is_leap{};
    
     //check if year is leap year
     if ((year%check_4)==0){

        is_leap = true;
        
        if ((year%check_100)==0){
            

            if ((year%check_400)==0){
                is_leap = true;

     } else {
        is_leap = false;
     }

     };
    
} else{
    is_leap = false;
}

return is_leap;

}

int main(){
    unsigned int year_to_eval {};
    cout << "Provide a year to evaluate" << endl;
    cin >> year_to_eval;

    std::cout << std::boolalpha;
    cout << year_to_eval << "is a leap is " << is_leap_year(year_to_eval);

}