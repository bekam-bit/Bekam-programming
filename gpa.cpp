#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() {
float GPA= 0.0f;
int id;

// Define Student class
class Student {
    int id;
    string name;

public:
    Student(int id, string name) : id(id), name(name) {}
    int get_id() const { return id; }
    string get_name() const { return name; }
};

// Define Course class
class Course {
    int id;
    string name;
    int credits;

public:
    Course(int id, string name, int credits) : id(id), name(name), credits(credits) {}
    int get_id() const { return id; }
    int get_credits() const { return credits; }
};

// Define Grade class
class Grade {
    int student_id;
    int course_id;
    char grade;

public:
    Grade(int student_id, int course_id, char grade) : student_id(student_id), course_id(course_id), grade(grade) {}
    int get_student_id() const { return student_id; }
    int get_course_id() const { return course_id; }
    char get_grade() const { return grade; }
};

vector<Student> students= {Student(1,"Thomas"),
                         Student(2,"Addis"),
                         Student(3,"Yisak"),
                         Student(4,"Bekam")};
 vector<Course> courses= {Course(1,"Fundamentals of programming",3),
                       Course(2,"Introduction to software engineering and computing",4),
                       Course(3, "History",3),
                       Course(4,"Discrete Mathematics",3)};
   vector<Grade> grades= {Grade(1,1,'A'),Grade(1,2,'B'),Grade(1,3,'A'),Grade(1,4,'B'),
                           Grade(2,1,'A'),Grade(2,2,'A'),Grade(2,3,'B'),Grade(2,4,'B'),
                           Grade(3,1,'C'),Grade(3,2,'D'),Grade(3,3,'A'),Grade(3,4,'B'),
                           Grade(4,1,'F'),Grade(4,2,'B'),Grade(4,3,'D'),Grade(4,4,'A')};

   cout<<"Enter a student Id: "<<flush;
   cin>>id;

   float points=0.0f,credits=0.0f;
   for(Grade& grd:grades)
   if(grd.get_student_id() == id){

    float num_grd;
   switch(grd.get_grade()){
     case'A': num_grd=4.0f;
      break;
      case'B': num_grd=3.0f;
       break;
      case'C': num_grd=2.0f;
       break;
       case'D': num_grd=1.0f;
         break;
       dafault: num_grd=0.0f;
        break;
    };
    int j=0;
    while(j<courses.size() && courses[j].get_id() != grd.get_course_id())
        j++;
    credits += courses[j].get_credits();
    points += num_grd*courses[j].get_credits();
}
   GPA=points/credits;


   string student_str;
   int i=0;
   while(i<students.size() && students[i].get_id()!= id)
    i++;
   student_str= students[i].get_name();

   cout<<"The GPA for "<< student_str<< " is "<< GPA<<endl;

return 0;
}

