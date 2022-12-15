#include <iostream>

using namespace std;

class Student{
private:
    int ID;
    int hoursEarned;
    int pointsEarned;
    double gradePointAvg;
public:
    Student(){
        setID();
        setHours();
        setPoints();
        computeAverage();
    }

    void displayAll(){
        cout << "Student ID: " << ID << endl;
        cout << "Hours Credited: " << hoursEarned << endl;
        cout << "Points Earned: " << pointsEarned << endl;
        cout << "Grade Point Average: " << gradePointAvg << endl;
    }
    void displayID(){
        cout << "Student ID: " << getID() << endl;
    }
    void displayHours(){
        cout << "Hours Credited: " << getHours() << endl;
    }
    void displayPoints(){
        cout << "Points Earned: " << getPoints() << endl;
    }
    void displayAverage(){
        cout << "Grade Point Average: " << getAverage() << endl;
    }

    int getID(){
        return ID;
    }
    int getHours(){
        return hoursEarned;
    }
    int getPoints(){
        return gradePointAvg;
    }
    int getAverage(){
        return gradePointAvg;
    }

    void setID(){
        cout << "Enter Student ID Number: ";
        cin >> ID;
    }

    void setHours(){
        cout << "Enter Hours Credited: ";
        cin >> hoursEarned;
    }

    void setPoints(){
        cout << "Enter Points Credited: ";
        cin >> gradePointAvg;
    }

    void computeAverage(){
        gradePointAvg = (double) getPoints() / (double) getHours();
    }
};

int main()
{
    Student stdnt;
    stdnt.displayAll();
}
