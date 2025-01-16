#include <iostream>
#include <string>

using namespace std;



// In this project, we will be converting a number to words
// Ex. 300,000 to Three Hundred Thousand

// Thought process; Create an array to store ones, tenths, hundredths, thousandths place.

const std::string ones[] = {"one", "two", "three", "four", "five","six", "seven","eight","nine"};
const std::string teens[] = {"ten", "eleven", "twelve", "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const std::string tens[] = {"twenty", "thirty", "forty", "fifty","sixty","seventy","eighty","ninety"};
const std::string hundred[] = {"hundred"};
const std::string thousand[] = {"thousand"};

// Function to convert the number to words

string conversion(int num){
    if (num == 0) return "zero";

    std::string result = "";
    
    if (num>= 100){
    }

    if (num>= 1000){
    }

    if (num>= 10000){

    }

}






int number;


int main(){

cout << "Enter the number" << "\n";
cin >> number;

// Put conversion function here




string preconversion = conversion(number);
cout << "The number is: " << conversion << "\n";

return 0;

    

    
}
