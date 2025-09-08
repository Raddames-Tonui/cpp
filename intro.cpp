

#include <iostream>
#include <iomanip> // for setw
using namespace std;
int main()
{

    long pop1=2425785, pop2=47, pop3=9761;
    cout << setw(8) << "LOCATION" << setw(12) << "POPULATION" << endl
    << setw(8) << "Portcity" << setw(12) << pop1 << endl
    << setw(8) << "Hightown" << setw(12) << pop2 << endl
    << setw(8) << "Lowville" << setw(12) << pop3 << endl;

    int sigVar = 1500000000;
    unsigned int unsVar = 1500000000;

    // sigVar = (sigVar * 2) ;

    double sigVar2 = (static_cast<double>(sigVar)) * 2; // static Type casting
    unsVar = (unsVar * 2);

    cout << sigVar2 << endl;
    cout << unsVar << endl;


    int count = 10;
    cout << "count=" << count << endl; //displays 10
    cout << "count=" << ++count << endl; //displays 11 (prefix)
    cout << "count=" << count << endl; //displays 11
    cout << "count=" << count++ << endl; //displays 11 (p
    cout << "count=" << count << endl; //displays 12

    int weight = 5;
    int count1 = 10;
    // int prefixTotal = weight * ++count1;
    // cout << "prefixTotal: " <<  prefixTotal << endl; // 55

    int postfixTotal = weight * count1++;
    cout << "postfixTotal: " << postfixTotal  << endl; // 50

    return 0;

}