#pragma once
#include <string>

using namespace std;

class Student {
  public:

    // Constructors
    Student();
    Student(string std_name,int std_passed_units,string std_field,int std_student_number, char std_GPA);

    // VAriables
    string name;
    int passed_unit;
    string field;

    // Functions
    int student_number_getter();
    void student_number_setter(int std_number);
    char GPA_getter();
    void GPA_setter(char gpa);
    float avg();
    float sum_scores();
    void calculate_gpa(int avg);
  private:
    int student_number;
    char GPA;  
};