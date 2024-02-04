#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 40;
const int MAX_COURSES = 8;

// struct for course
struct Course {
  string course_code;
  string course_name;
};

// Struct for Grade
struct Grade {
  int mark;
  char the_grade;
};

// Struct for the student
struct Student {
  string registration_number;
  string name;
  int age;
  Course course;
  Grade grades;
};

Student students[MAX_STUDENTS];
int num_students = 0;

// Fucntion to add students
void add_students() {
  if (num_students == MAX_STUDENTS) {
    cout << "Maximum number of students reached!" << endl;
    return;
  }
  cout << "Enter the registration number: " << endl;
  cin >> students[num_students].registration_number;

  cout << "Enter the name: " << endl;
  cin >> students[num_students].name;

  cout << "Enter the age: " << endl;
  cin >> students[num_students].age;

  for (int i = 0; i < MAX_COURSES; i++) {

    cout << "Enter the course Code: " << endl;
    cin >> students[num_students].course.course_code;

    cout << "Enter the course name: " << endl;
    cin >> students[num_students].course.course_name;

    cout << "Enter the marks: " << endl;
    cin >> students[num_students].grades.mark;

    if (students[num_students].grades.mark > 69 &&
        students[num_students].grades.mark <= 100) {
      students[num_students].grades.the_grade = 'A';
    } else if (students[num_students].grades.mark > 59) {
      students[num_students].grades.the_grade = 'B';
    } else if (students[num_students].grades.mark > 49) {
      students[num_students].grades.the_grade = 'C';
    } else if (students[num_students].grades.mark > 39) {
      students[num_students].grades.the_grade = 'D';
    } else {
      students[num_students].grades.the_grade = 'E';
    }

    cout << "Student added successfully" << endl;
  }
}

void editStudent(int studentNum) {
  if (studentNum >= num_students) {
    cout << "Invalid student number" << endl;
    return;
  }

  cout << "Enter the registration number: " << endl;
  cin >> students[studentNum].registration_number;

  cout << "Enter the new Name: " << endl;
  cin >> students[studentNum].name;

  cout << "Enter the new age: " << endl;
  cin >> students[studentNum].age;

  cout << "Enter the new course code: " << endl;
  cin >> students[studentNum].course.course_code;

  cout << "Enter the new course name: " << endl;
  cin >> students[studentNum].course.course_name;
}

void displayStudent(int studentNum) {
  if (studentNum >= num_students) {
    cout << "Invalid student number" << endl;
    return;
  }

  cout << "Registration Number: " << students[studentNum].registration_number
       << endl;
  cout << "Name: " << students[studentNum].name << endl;
  cout << "Age: " << students[studentNum].age << endl;

  for (int i = 0; i < MAX_COURSES; i++) {
    cout << "Course Code: " << students[studentNum].course.course_code << endl;
    cout << "Course Name: " << students[studentNum].course.course_name << endl;
    cout << "Mark: " << students[studentNum].grades.the_grade << endl;
    cout << "Grade: " << students[studentNum].grades.the_grade << endl;
  }
}

int main() {

  while(true) {
    int choice;
    std::cout << "Student Record System" << std::endl;
    std::cout << "1. Add Student" << std::endl;
    std::cout << "2. Edit Student" << std::endl;
    std::cout << "3. Display Student" << std::endl;
    std::cout << "4. Exit" << std::endl;

    std::cout << "Enter choice: ";
    std::cin >> choice;

    if(choice == 1) {
      add_students();
    }
    else if(choice == 2) {
      int studentNum;
      std::cout << "Enter student number to edit: ";
      std::cin >> studentNum;
      editStudent(studentNum);
    }
    else if(choice == 3) {
      int studentNum;
      std::cout << "Enter student number to display: ";
      std::cin >> studentNum;
      displayStudent(studentNum);
    }
    else if(choice == 4) {
      break;
    }
  }

  return 0;
}
