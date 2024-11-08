#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char salaryLevel;
    double s,ans;
    cin>>s;
    if(s<1000){
        salaryLevel='1';
    }else if (s<2000.0)
    {
        salaryLevel='2';
    }else if (s<3000.0)
    {
        salaryLevel='3';
    }else if (s<4000.0)
    {
        salaryLevel='4';
    }else if(s<=4000.0){
        salaryLevel='5';
    }

    switch(salaryLevel){
        case '1':
            cout << fixed << setprecision(2) << s ;
        break;
        case '2':
            cout << fixed << setprecision(2) << s*0.9 ;
        break;
        case '3':
            cout << fixed << setprecision(2) << s*0.85 ;
        break;
        case '4':
            cout << fixed << setprecision(2) << s*0.80 ;
        break;
        default:
            cout << fixed << setprecision(2) << s*0.75 ;
        break;
    }
    
    return 0;
}