/*Shipping Cost Calculator*/


#include<iostream>
using namespace std;
int main(){
    double length{};
    double breadth{};
    double height{};

    double volume{};

    cout << "Welcome to Shipping 69!" << endl;
    cout << "Enter your package dimensions in inches- " << endl;
    cout << "length: ";
    cin >> length;
    cout << "\nbreadth: " ;
    cin >> breadth;
    cout << "\nheight: ";
    cin >> height;

    volume = length * breadth * height;

    if (length <= 10 && breadth <= 10 && height <= 10 ){

        // +10% tax on shipping volume between 100 and 500 

        if(volume > 100 && volume < 500 ){
            cout << "Your total shipping cost is: " << "$" << 2.50 + (0.10 * 2.50) << endl;
        }    

        //+25% tax on shipping volume above 500

        else if (volume > 500){
            cout << "Your total shipping cost is: " << "$" << 2.50 + (0.25 * 2.50) << endl;
        }else{
            cout << "Your total shipping cost is: $ 2.50";
        }    
    //package dimensions exceed 10 units 
    
    }else {
        cout << "Your package is too big to be shipped." << endl;
    }

    
    return 0;
}