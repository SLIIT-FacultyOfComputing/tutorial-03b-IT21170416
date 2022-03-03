#include <iostream>
#include<iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "\tNo\tName\tMarks" << endl;
 for (int r = 0; r < 5; r++) {
     cout
          <<setw(5)
          << r+1 
          <<setw(15)
          <<  names[r]
          <<setprecision(2)
          <<setw(10)
          <<setiosflags(ios::fixed)
          <<marks[r] << endl;
        
 }
}
