#include <iostream>
#include <iomanip>

using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;

const int SIZE = 4;

struct part{
    int modelnumber;
    int partnumber;
    float cost;
};

int main()
{
    int d, m;

    double sales[DISTRICTS] [MONTHS] = {{ 1432.07, 234.50, 654.01 },
                                        { 322.00, 13838.32, 17589.88 },
                                        { 9328.34, 934.00, 4492.30 },
                                        { 12838.29, 2332.63, 32.93 } };
    cout << "\n\n";
    cout << " Month\n";
    cout << "                 1         2        3";
    for (d = 0; d < DISTRICTS;  d++)
    {
        cout << "\nDistrict " << d + 1;
        for (m = 0; m < MONTHS; m++){
            cout << setw(10) << setiosflags(ios::fixed)
            << setiosflags(ios::showpoint) << setprecision(2)
            << sales[d][m];
        }
    }

    cout << endl;


    // USING ARRAY OF STRUCTURES
    int n;
    part apartArray[SIZE];

    for (n = 0; n < SIZE; n++){
        cout << "Enter model number " ;
        cin >> apartArray[n].modelnumber;
        cout << "Enter part number " ;
        cin >> apartArray[n].partnumber;
        cout << "cost: " ;
        cin >> apartArray[n].cost;
    }
    cout << endl;

    for (n = 0; n < SIZE; n++){
        cout << "Model: " << apartArray[n].modelnumber << "\n";
        cout << "Part: " << apartArray[n].partnumber << "\n";
        cout << "Cost: " << apartArray[n].cost << "\n";
    }
        return 0;
}
// g++ saleinit.cpp -o saleinit
