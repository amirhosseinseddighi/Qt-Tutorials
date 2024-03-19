#include "Student.h"

Student::Student() {
    name = "";
    student_number = 0;
    field = "";
    passed_unit = 0;
    GPA = 'C';
}

Student::Student(string std_name,int std_passed_units,string std_field,int std_student_number, char std_GPA) {
    name = std_name;
    passed_unit = std_passed_units;
    field = std_field;
    student_number = std_student_number;
    GPA = std_GPA;
}

int Student::student_number_getter() {
    return student_number;
}

void Student::student_number_setter(int std_number) {
    student_number = std_number;
}

char Student::GPA_getter() {
    return GPA;
}

void Student::GPA_setter(char gpa) {
    GPA = gpa;
}

float Student::avg() {
    switch (GPA)
    {
        case 'A':
            return 20.0;
            break;
        
        case 'B':
            return 16.0;
            break;
        
        case 'C':
            return 12.0;
            break;
        
        case 'D':
            return 8.0;
            break;

        case 'E':
            return 0.0;
            break;
        
        default:
            return 0.0;
            break;
    }
}

float Student::sum_scores() {
    return avg() * passed_unit;
}

void Student::calculate_gpa(int avg) {
    if(avg > 16 && avg <= 20) {
        GPA = 'A';
    }
    else if(avg <= 16 && avg > 12) {
        GPA = 'B';
    }
    else if(avg <= 12 && avg > 8) {
        GPA = 'C';
    }
    else if(avg <= 8 && avg > 4){
        GPA = 'D';
    }
    else {
        GPA = 'E';
    }
}