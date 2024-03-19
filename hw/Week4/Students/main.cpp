#include "Student.h"
#include <iostream>

using namespace std;

int main() {
    Student std1;
    Student std2("Amir Seddighi",5,"CS",402126,'A');
    Student std3("Alireza Bagheri",13,"CS",40212644,'B');
    // -------
    std1.student_number_setter(1022634);
    cout << std1.student_number_getter() << endl;

    cout << std2.avg() << endl;

    std2.calculate_gpa(14);
    cout << std2.GPA_getter() << endl;

    cout << std3.sum_scores() << endl;
    return 0;
}