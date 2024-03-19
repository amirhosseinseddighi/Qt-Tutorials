#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
        There is 3 types of variable initialization
            1. C-Like initialization
            2. Constructor initialization
            3. Uniform initialization
    */
   int my_age = 10; // C-Like initialization
   int brother_age (9); // Constructor initialization
   int siste_age {5}; // Uniform initialization
   int nothing;
   //-----------------------------------------------
   // Type Deduction
   /*
    Variable types can also be specified automatically
    by initialization value with auto
    Variables that are not initialized can also make
    use of type deduction with decltype
   */
  auto score_a = 10; // same as int score_a
  decltype(score_a) score_b; // same as int score_b;
  //---- Using Strings
  // First of all should import string header
  string fname = "AmirHossein";
  string lname("Seddighi");
  string middle_name {"-"};
  cout << fname << middle_name << lname << endl;
    return 0;
}