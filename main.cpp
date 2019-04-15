//
//  main.cpp
//  Recursion
//
//  Created by Ariosto Kuit on 3/2/19.
//  Copyright © 2019 Ariosto Kuit. All rights reserved.
//

#include <iostream>
#include "Recursion.h"
#include "RecursiveChallenges.h"
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
   //Example 1
    message(3);
    
    //Example 2
    string inputString = "abcdddef";
    cout << "The letter d appears " << frequency('d', inputString,0) << " times.\n";
    
    //Example 3 factorial recursion
    cout << "The factorial of 5 is " << factorial(5) << endl;
    
    //Example 4 gcd recursion
    cout << "The greatest common divisor of 49 and 28 is " << gcd(49,28) << endl;
    
    
    //PROGRAMMING CHALLENGES
    
    //#1 Iterative Factorial
    cout << "The factorial of 4 is" << factorial_(4) << endl;
    
    //#2 Recursive Conversion
    sign(3);
    
    //#4 Recursive Array Sum
    const int ARRSIZE = 5;
    int arr[ARRSIZE] = {10,20,30,40,50};
    cout << "The sume of the array is " << r_ArrSum(arr, ARRSIZE) << endl;
    
    //#5 mulitplication recursion
    int x = 5;
    int y = 6;
    cout << "5 times 6 is " << R_mul(x, y) << endl;
    
    //#8 isMember function
    int isMemberArr[5] = {1,3,5,7,9};
    if(isMember(isMemberArr,5,5) == true){cout << "5" << " exist in the isMemberArr\n";}
    else
        cout << "5" << " does not exist in the isMemberArr\n";
        
    
    
    //#7 recursive string
    char word[] = "Hello";
    StringReverser(word);
    cout << endl;
    
    //#8 Palindrome Test
    string str = "optimistic";
    string str2 = "racecar";
    string str3 = "abba";
    cout << PalindromeTest(str, 0, str.size()-1) << endl;
    cout << PalindromeTest(str2, 0, str2.size()-1) << endl;
    
    
    
    return 0;

}
