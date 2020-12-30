#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main (){
    string status;
    int age;
    int height;
    int property;
    //"Enter your age: "
    cout << "Enter your age: ";
    cin >> age;
    

    if(age <= 20)
    {
        //"Enter your height: "
        cout << "Enter your height: ";
        cin >> height;
        if(height < 160)
        {
            status = "UNFRIEND";
        }

        if(height >= 160 && height < 175)
        {
            status = "FRIEND";
        }
        if(height >= 175){
            cout << "Enter your property: ";
            cin >> property;
            if(property > 69000000){
                status = "MARRIED";
            }else{
                status = "ONE-NIGHT-STAND";
            }
        }
    }

    if(age > 20 && age < 30){
        cout << "Enter your property: ";
        cin >> property;
        if(property > 10000000){
            status = "BEST FRIEND";
        }else{
            status = "UNFRIEND";
        }
    }
    if(age >= 30){
        status = "UNFRIEND";
    }
    
    cout << "Your status = " << status;
    return 0;
}



