// "How OOP helps in saving space" :  https://share.google/aimode/mpi9fSeBfjcNBF2RK
// Constructor OVERLOADING
// Method overloading and overriding
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

class AriOps{
public:
    float a;
    float b;

    AriOps(float x, float y): a(x),b(y) {}
    // inline function
    inline float multiply (){
        return a*b;
    }

    // default argument
    double sum(int c = 0){
        return a+b+c;
    }

    // function overloading
    int divide(int c){
        if (b != 0) {
            return a/b;
        }
        return a/c;
    }
    float divide(float c){
        if (b != 0) {
            return a/b;
        }
        return a/c;
    }

};
// int main(){
//     float x, y;
//     cout << "Enter the two operands: \n";
//     cin >> x >> y;
//     AriOps A(x, y);
//     cout << A.divide(23) << endl;
//     cout << A.multiply() << endl;
//     cout << A.sum(24) << endl;
// }


class Student {
private:
    int id;
    string name;
    vector<double> marks;

public:
    Student(int stId, const string& stName, const vector<double>& stMarks)
        : id(stId), name(stName), marks(stMarks) {}

    // Getters and Setters
    int getId() const { return id; }
    string getName() const { return name; }
    
    void setName(const string& newName) {
        if (!newName.empty()) {
            name = newName;
        }
    }

    void setMarks(const vector<double>& newMarks) {
        marks = newMarks;
    }

    double calculateAverage() const {
        if (marks.empty()) return 0.0;
        double sum = 0.0;
        for (double mark : marks) {
            sum += mark;
        }
        return sum / marks.size();
    }

    char calculateGrade() const {
        double avg = calculateAverage();
        if (avg >= 90.0) return 'A';
        if (avg >= 80.0) return 'B';
        if (avg >= 70.0) return 'C';
        if (avg >= 60.0) return 'D';
        return 'F';
    }

    void display() const {
        cout << left << setw(8) << id
                  << setw(20) << name
                  << setw(12) << fixed << setprecision(2) << calculateAverage()
                  << setw(6) << calculateGrade() << "\n";
                }
};

// Manages the collection of records (Separation of Concerns)
class StudentManager {
private:
    vector<Student> records;

    // Helper to find index by ID
    auto findStudentIterator(int id) {
        return find_if(records.begin(), records.end(), 
            [id](const Student& s) { return s.getId() == id; });
    }

public:
    bool addStudent(const Student& student) {
        if (findStudentIterator(student.getId()) != records.end()) {
            cout << "Error: Student with ID " << student.getId() << " already exists.\n";
            return false;
        }
        records.push_back(student);
        return true;
    }

    bool removeStudent(int id) {
        auto it = findStudentIterator(id);
        if (it != records.end()) {
            records.erase(it);
            cout << "Student ID " << id << " removed successfully.\n";
            return true;
        }
        cout << "Student ID " << id << " not found.\n";
        return false;
    }

    void displayAll() const {
        if (records.empty()) {
            cout << "No student records available.\n";
            return;
        }

        cout << "\n" << string(46, '-') << "\n";
        cout << left << setw(8) << "ID"
                  << setw(20) << "Name"
                  << setw(12) << "Average"
                  << setw(6) << "Grade" << "\n";
        cout << string(46, '-') << "\n";

        for (const auto& student : records) {
            student.display();
        }
        cout << string(46, '-') << "\n";
    }

    void searchStudent(int id) const {
        auto it = find_if(records.begin(), records.end(), 
            [id](const Student& s) { return s.getId() == id; });

        if (it != records.end()) {
            cout << "\nRecord Found:\n";
            it->display();
        } else {
            cout << "Student ID " << id << " not found.\n";
        }
    }
};

int main() {  
    StudentManager sms;

    // Adding initial student objects
    sms.addStudent(Student(101, "Aman Shukla", {91.5, 92.0, 98.5}));
    sms.addStudent(Student(102, "Anuj Kumar", {90.5, 85.5, 89.0}));
    sms.addStudent(Student(103, "Akshit Satti", {92.5, 93.0, 95.5}));

    sms.displayAll();

    cout << "\nSearching for ID 102:";
    sms.searchStudent(102);

    cout << "\nRemoving ID 103:\n";
    sms.removeStudent(103);

    sms.displayAll();

    return 0;
}
// 