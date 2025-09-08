PREPROCESSOR DIRECTIVES - > 
    Instruction to compiler eg 
        #include <> -> e directive tells the compiler to insert
            another file into the present source file
        #define PI =3.142 ->directive tells it to substitute 
            one thing for another
PROGRAM STATEMENT -> 
    instruction instruction to comp to do something eg cout << "hello world n" <<endl;

EXPRESSIONS
    Any arrangement of variables, constants, and operators that specifies a computation
    specify a computation eg 5 + 4(3 * 3);

header/include files ->
using -> only known in the namespace 

1bye = 4bits
'\n' escape sequence
'xdd' hexadecimal 
'\b' backspace

MANIPULATORS -> 
    istruction to the output stream that modify the output in various ways eg 
        endl - causes the buffer to be flushed;
        setw - changes the field width of ouput 
                cout <<  setw(8) << "LOCATION" << setw(12)  << pop1 << endl;


declarations vs definitions 
Initializations 

DATATYPES - 
    INTEGERS
        int - system dependent 2 bytes or 4 bytes eg windows 32 bit msdos  16 bit
        short - 2 bytes 16 bit   –32,768 to 32,767
        long (long int) - always occupies 4 bytes –2,147,483,648 to 2,147,483,647
        longvar = 7678L => constant of long
        __int8 - char
        __int16 - short
        __int32 - int and long
        __int64 -huge integers

    CHAR
        -128 -> 127
        store ASCII Characters
        0 -127 used to store characters
        but in windows 128 - 255 store foreign characters

        Escape seuences '\n' '\t'  '\xdd'' 

    FLOATING POINT (Real Numbers)
        Float -3.4x10–38 to 3.4x1038, precision of 7 digits 4 bytes
        double  - 8 bytes  precision 15 digits
        long double - compiler dependent

        Exponential notation (writing no. without full zeros eg 1000 = 1.0E3 or 1234.56 = 1.23456E3 or 6.234E-4 = 0.0006234)

        const float PI = 3.142 => constant thus no alter or 
        #define PI = 3.142 => m specifies that the identifier PI will be replaced with 3.142 throught the progam (Not Advisable)

    BOOLEAN
        true false

    UNSIGNED DATATYPES
        unsigned char -> 0 - 255  1 byte
        unsigned short -> 0 - 63,535 2 bytes
        unsigned int -> 0 - over 4 billion 4 bytes
        unsigned long -> 0 - over 4 billion 4bytes

    Understand wrapping in C++ on signed and unsigned datatypes

cin >> and cout << are objects in c++ std input and ouptut stream
    cout << insertion operator
    cin >> is the extraction or get from operatorIt takes the value
        from the stream object on its left and places it in the variable on its right. eg:  cin >> ftemp;



AUTO CONVERSION 
    done automatically from 
        char -> short -> int -> long -> float -> double -> long double

CASTS / TYPE CASTS
    - static casts  inntVar = (static_cast<double>(intVar) *10) /10
    - dynamic casts
    - reinterpret casts
    - const casts

PRECEDENCE
    -which is calculated/ computed first before the other 
        eg cout << 6 % 8 <<  would do the % modulous/ remainder first

ARITHMETIC ASSIGNMENT OPERATORS 
    +=, -=, *=, /= 

    INCREMENT OPERATORS- adds 1 eg ++count
        - PREFIX  ++count 
            does the incrementing first before displaying
                eg total = weight * ++count 
        - POSTFIX count++
            does the displaying first then increment late
                eg total = weight * count++
    DECREMENT OPERATORS just like above


LIBRARY AND HEADER FILES
    - library eg .so and .lib 
        fuctions connected to your prog by linker
    - header .h 
        names and types of functions and other elements in library file are given in header files
        #include <>  in the INCLUDE dir
        #include " "  in current directory

      myprog.cpp   <---- #include "myprog.h" ----  myprog.h (user header file)
    (Source file)  <----#include <somelib.h> ---- somelib.h (header file)
        |
        |
    ( compiler )
        |
    myprog.obj ------> ( Linker )<--------somelib.lib (.so)
  (object file)             |
                            |
                        myprog.exe


                    

                    CHAPTER 4 : STRUCTURES AND ENUMERATIONS
STUCTURES (struct)
    struct part {
        int modelNumber;
        int partNumber;
        float cost;
    };
    A structure  is a collection of data ( simple variables.)
    while a class is a collection of both data and functions.

    It does not itself create any structure variables; that is, it does not set aside any space in memory or even name any variables


ENUMERATIONS (enum)
    An enum declaration defines the set of all names that will be permissible values of the type  eg 
        enum gender {MALE, FEMALE, OTHER};
        enum days_of_week{ Sun, Mon, Tue, Wed, Thu, Fri, Sat };



       
        # CHAPTER 5: FUNCTIONS
    functions are stored in function registers
SIMPLE FUNCTION
    FUNCTION DECLARATION
        void starline();  
         => also  called the function signature
            (return type, func name and the arguments)
    
    FUNCTION CALL
        starline();
    
    FUNCTION DEFINITION
        void starline()   => declarator
        {
            return "Hello world!";
        }

    void print (word)

    word -> parameter
    "hello" -> argument

PASSING ARGUMENTS
    1. PASSING BY VALUE-> creates copies
        - can pass Struct as argument eg 
            struct Student {
                int age;
                int class;
            }

            void PrintStudent(Student);

        - A function can return many values by : -
            - using references
            - using struct
        -PASSING ARGUMENTS
            - pass constants
            - pass variables
            - pass Struct


    2. PASSING BY REFERENCE (REFERENCE ARGUMENTS )
        -  provides a mechanism for passing
            more than one value from the function back to the calling program. (just like struct)
        - indicated by ampersand (&) following datatype 
        float& intp

    3. PASSING BY POINTERS


- OVERLOADED FUNCTIONS
    - Same Name but
        - Different Numbers of arguments
        - Different kind of arguments

- RECURSION 
    Recursion involves a function calling itself.
    - Stores the variables but only 1 value will be returned.
    - Note- must make a way to exit the loop else it will do recursion till crush.
    - Since values stored, must have enough space

- INLINE FUNCTIONS
    To save execution time in short functions, you may elect to put the code in the function body
    directly inline with the code in the calling program

        inline float lbstokg(float pounds)
            {
            return 0.453592 * pounds;
            }
    - inline keyword is actually just a request to the compiler.
    - Sometimes the compiler will ignore the request and compile the function as a normal function


- DEFAULT ARGUMENTS
    Missing arguments must be the trailing arguments—those at the end of the argument list.
    void repchar(char='*', int=45); 

- SCOPE AND STORAGE CLASS
    - Interaction of variables and functions
    - Two different kinds of scope are important here: local and file.
        • Variables with local scope are visible only within a block.
        • Variables with file scope are visible throughout a file.
    - Storage classes
        * Automatic/ Local -exist during the lifetime of the function in which
                        they’re defined.
        * Static - exist for the lifetime of the program.
    - Scope
        local variables
        global/ external variables

    NOTE :-
        - Global variables initialized automatically to 0 when it is created.   int n; 
        - Unlike local variables, which are not initialized and probably contain random or garbage values when they are created.

    - STATIC LOCAL VARIABLES
        - Visibility like automatic local variable.(Inside func containing it)
        - Lifetime same as global variable but doesn't come into existence until the  first call to the function containing it.
        - Thereafter remains in existence for thelife of the program.
