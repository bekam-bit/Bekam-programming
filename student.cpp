#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
string student_names[5];
double student_marks[5];

cout<< "Please enter five students name with their respective mark: ";

 for(int i=0; i<5; i++) {
    cout<< "\nStudent name "<<i+1<<": ";
          cin>>student_names[i];

   do{ cout<< "\nStudent "<<i+1<<" mark: ";
         cin>>student_marks[i];
    if(student_marks[i]<0){
            cout<< "Negative numbers are invalid!"<<endl;
         cout<< "Please enter 0 or a positive number."<<endl;
}
}
while(student_marks<0);
}

int max_mark=INT_MIN,min_mark=INT_MAX;
int max_index=0,min_index=0;


 for(int i=0; i<5; i++){
     if(min_mark>=student_marks[i]){
        min_mark=student_marks[i];
        min_index=i;
    }
}
 for(int i=0; i<5; i++) {
    if(max_mark<=student_marks[i]){
    max_mark=student_marks[i];
    max_index=i;
}
}

cout<< "\nThe maximum mark is "<<max_mark;
cout<< " and the top scorer is "<<student_names[max_index];

cout<< "\nThe minimum mark is "<<min_mark;
cout<< " and the least scorer is "<<student_names[min_index];
return 0;
}
