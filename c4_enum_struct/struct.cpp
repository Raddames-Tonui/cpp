#include <iostream>
using namespace std;

// defining the structure
struct part {
    int modelNumber;
    int partNumber;
    float cost;
};

struct Distance {
    int feet;
    float inches;
};

struct Room {
    Distance length;
    Distance width;
};

int main()
{
    part part1; // defining a structure variable,

    part1.modelNumber = 788;
    part1.partNumber = 64;
    part1.cost = 213.45F;

    // accessing the members of the structure
    cout << "Model " << part1.modelNumber << endl;
    cout << "Part " << part1.partNumber << endl;
    cout << "Cost " << part1.cost << endl;

    cout << "\n ---DISTANCE STRUCT ---" << endl;
    Distance d1, d3;
    Distance d2 = {11, 6.25};

    cout << "\nEnter feet: ";
    cin >> d1.feet;
    cout << "\nEnter inches: ";
    cin >> d1.inches;

    d3.inches = d1.inches + d2.inches;
    d3.feet = 0;
    if (d3.inches >= 12.0)
    {
        d3.inches -= 12.0;
        d3.feet++;
    }
    d3.feet += d1.feet + d2.feet;

    cout << d1.feet << "\'-" << d1.inches << "\" + ";
    cout << d2.feet << "\'-" << d2.inches << "\" = ";
    cout << d3.feet << "\'-" << d3.inches << "\" \n" <<  endl;

    Room dining;
    dining.length.feet = 13;
    dining.length.inches = 6.5;
    dining.width.feet = 5;
    dining.width.inches = 4;
    float l = dining.length.feet + dining.length.inches/12;
    float w = dining.width.feet + dining.width.inches/12;

    cout << "Dining room area is " << l * w << " square feet\n" <<endl;

    return 0;
}