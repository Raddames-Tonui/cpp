#include <iostream>

using namespace std;

class Distance {
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {};
    Distance(int ft, float in): feet(ft), inches(in) {};

    // Distance() {}

    void showdist()
    {
        cout << feet << "\'-" << inches << '\"' << endl;
    };

    void getdist() {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
    };

    void add_dist(Distance, Distance);
};

void Distance::add_dist(Distance d2, Distance d3) {
    inches = d2.inches + d3.inches;
    feet = 0;
    if (inches >= 12.0){
        inches -= 12.0;
        feet++;
    };
    feet += d2.feet + d3.feet;
}

int main (){
    Distance d1, d3;
    Distance d2(11, 6.25);

    d1.getdist();
    d3.add_dist(d1, d2);

    cout << "\ndist1 = "; d1.showdist();
    cout << "\ndist2 = "; d2.showdist();
    cout << "\ndist3 = "; d3.showdist();
    cout << endl;

    return 0;
}

// g++ dist.cpp -o dist