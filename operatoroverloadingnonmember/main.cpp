// Challenge
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    
    
    cout << boolalpha << endl;
    Mystring a {"emre"};
    Mystring b {"emre"};
    
    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;          // false

    b = "ahmet";
    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true

    cout << (a<b) << endl;          // true
    cout << (a>b) << endl;           // false
    
    Mystring s1 {"EMRE"};
    s1 = -s1;       
    cout << s1 << endl;               // emre              

    s1 = s1 + "*****";
    cout << s1 << endl;               // emre*****       
    
    s1 += "-----";                        // emre*****-----
    cout << s1 << endl;
   
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;              // 123451234512345

    Mystring s3{"abcdef"};  
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef

    Mystring s = "Emre";
    ++s;
    cout << s << endl;                  // EMRE
    
    s = -s; 
    cout << s << endl;                  // emre

    Mystring result;
    result = ++s;                           
    cout << s << endl;                  // EMRE
    cout << result << endl;             // EMRE

    s = "Emre";
    s++;
    cout << s << endl;                  // EMRE
    
    s = -s;
    cout << s << endl;                  // emre
    result = s++;
    cout << s << endl;                  // EMRE
    cout << result << endl;             // emre
 
    return 0;
}

