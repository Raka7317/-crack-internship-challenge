#include<bits/stdc++.h>
using namespace std;

int main(){
    
    const char* str1 = "42";
    const char* str2 = "3.14159";
    const char* str3 = "31337 geek";
  
    int num1 = atoi(str1); // explicit type casting
    int num2 = atoi(str2); // explicit type casting
    int num3 = atoi(str3); // explicit type casting
  
    cout << "atoi(\"" << str1 << "\") is " << num1 << '\n';
    cout << "atoi(\"" << str2 << "\") is " << num2 << '\n';
    cout << "atoi(\"" << str3 << "\") is " << num3 << '\n';
  
    return 0;
}