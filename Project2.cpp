// The purpose of this project is to help me understand constructors in C++.
//Constructor = A special method that is automatically called when an object is instantiated 
// Useful for assigning values to attributes as arguments

#include <iostream>

// Example 1


class Student{
    public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

// Example 2
class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;

    }

};

// My own example
class AaronTest{
    public:

    std::string name;
    int age;
    std::string food;

    AaronTest(std::string name, int age, std::string food){
        this->name = name;
        this->age = age;
        this->food = food;
    }
};

int main(){

    
    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 40, 1.5);
    Student student3("Sandy", 21, 4.0);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';



    Car car1("Chevy", "Corvette", 2022, "Blue");
    Car car2("Ferrari", "SF90", 2024, "Red");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';

    AaronTest aaron1("Aaron", 24, "Steak");

    std::cout << aaron1.name << '\n';
    std::cout << aaron1.age << '\n';
    std::cout << aaron1.food << '\n';



    return 0;
}


// Summary to create a class, initialize it like this
class Practice{
    public:

    
    


// Constructor; Think of it like a function
    Practice(){

    }
};

// To call it in main
 
// Practice.practice1(Parameters);
