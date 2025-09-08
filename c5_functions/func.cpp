#include <iostream>

using namespace std;

struct Student {
    int age;
    int height;
};
void printStudent(Student);

struct Distance{
    int feet;
    float inches;
};

Distance addeng(Distance, Distance);
void engDisp(Distance);

void scale(Distance &dd, float factor);

int main (){
    Student s1, s2;
    s1.age =5;
    s1.height = 2;

    s2.age = 8;
    s2.height = 5;
    printStudent(s1);
    printStudent(s2);

    Distance d1, d2, d3;
    cout << "\nEnter feet: ";
    cin >> d1.feet;
    cout << "\nEnter Inches: ";
    cin >> d1.inches;
    cout << "\nEnter Feet: ";
    cin >> d2.feet;
    cout << "\nEnter inches: ";
    cin >> d2.inches;

    d3 = addeng(d1, d2);
    cout << endl;

    engDisp (d3); 

    return 0;
}

void printStudent(Student st) {
    cout << st.age << endl;
    cout << st.height << endl;
}


// Returning a struct 
Distance addeng(Distance dd1, Distance dd2) {
    Distance dd3;

    dd3.inches = dd1.inches + dd2.inches;
    dd3.feet = 0;
    if (dd3.inches >= 12.0)
    {
        dd3.inches -= 12.0;
        dd3.feet++;
    }
    dd3.feet += dd1.feet + dd2.feet;

    scale(dd1, 0.5);
    scale(dd2,  2);

    cout << "Scalling (PASS BY STRUCT REFERENCE)" << endl;
    engDisp(dd1);
    engDisp(dd2);

    return dd3;
}

void engDisp (Distance dd) {
    cout << dd.feet << "\'-" << dd.inches << "\"" << endl;
}



void scale (Distance& dd, float factor){
    float inches =(dd.feet *12 + dd.inches) * factor;
    dd.feet = static_cast<int>(inches / 12);
    dd.inches = inches - dd.feet * 12;
}
// g++ func.cpp -o func