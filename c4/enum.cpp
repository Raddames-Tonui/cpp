#include <iostream>
using namespace std;

enum HttpStatus
{
    OK = 200,
    NotFound = 404,
    internalError = 500
};

enum class Direction
{
    North, East, West, South
};

// bit flags pattern with enums — 
// very common in systems programming, graphics, file permissions, etc.
enum FilePermission {
    Read    = 1 << 0,  // 0001 = 1
    Write   = 1 << 1,  // 0010 = 2
    Execute = 1 << 2,  // 0100 = 4
    Delete  = 1 << 3   // 1000 = 8
};

int main()
{
    HttpStatus status = NotFound;

    if (status == 404){
        cout << "Error Not Found" << endl;
    }

    Direction dir = Direction::North;

    switch (dir) {
        case Direction::North: cout << "Going North" <<endl; break;
        case Direction::South: cout << "Going South" <<endl; break;
        case Direction::East:  cout << "Going East" <<endl; break;
        case Direction::West:  cout << "Going West" <<endl; break;
    }


    // Combine permissions using bitwise OR (|)
    int userPermissions = Read | Execute;

    // Check if permission is present using bitwise AND (&)
    if (userPermissions & Read) {
        cout << "User can read" << endl;
    }

    if (userPermissions & Execute) {
        cout << "User can execute" << endl;
    } else {
        cout << "User cannot execute" << endl;
    }

    // Add a new permission
    userPermissions |= Execute;
    cout << "Execute added, permissions value: " << userPermissions << endl;

    // Remove a permission
    userPermissions &= ~Write;
    cout << "Write removed, permissions value: " << userPermissions << endl;



    return 0;
}

// g++ enum.cpp -o enum