#include <iostream>

using namespace std;

class Distance {
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {};
    Distance(int ft, float in): feet(ft), inches(in) {};

    ~Distance() {}

    void showdist()
    {
        cout << feet << "\'-" << inches << '\"' << endl;
    };

    void getdist() {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
    };

    void add_dist(Distance, Distance);
    Distance double_dist();
};

void Distance::add_dist(Distance d2, Distance  d3) {
    inches = d2.inches + d3.inches;
    feet = 0;
    if (inches >= 12.0){
        inches -= 12.0;
        feet++;
    };
    feet += d2.feet + d3.feet;
}

Distance Distance::double_dist(){
    Distance temp;
    temp.inches = inches * 2;
    temp.feet = feet * 2;

    if (temp.inches >= 12) {
        temp.inches -= 12;
        temp.feet++;
    }
    return temp;
}

int main (){
    Distance d1, d3;
    Distance d2(11, 6.25);


    Distance d4 = d2;  // Default copy constructor
    Distance d5(d2);   // Default copy constructor

    d1.getdist();
    d3.add_dist(d1, d2);

    Distance d6;
    d6.getdist();
    Distance d7 = d6.double_dist();

    cout << "\ndist1 = "; d1.showdist();
    cout << "\ndist2 = "; d2.showdist();
    cout << "\ndist3 = "; d3.showdist();
    cout << "\ndist4 = "; d4.showdist();
    cout << "\ndist5 = "; d5.showdist();
    cout << "\ndist7 = "; d7.showdist();
    cout << endl;

    return 0;
}

// g++ dist.cpp -o dist