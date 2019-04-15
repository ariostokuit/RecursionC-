//
//  Recursion.h
//  Recursion
//
//  Created by Ariosto Kuit on 3/2/19.
//  Copyright © 2019 Ariosto Kuit. All rights reserved.
//

#ifndef Recursion_h
#define Recursion_h
#include <iostream>
#include <string>
using namespace std;
void message(int times){
    if(times > 0){
        cout << "This is a recursive function.\n";
        message(times - 1);}
}

// Counts the numbers of times the character ch appears in inputString
int frequency(char ch, string inputString, int position){
    if(position == inputString.length())//base case
        return 0;
    if(inputString[position] == ch)
        return 1 + frequency(ch, inputString, position+1); //counts if ch matches with position
    else
        return frequency(ch,inputString, position +1);
}

int factorial(int n){
    if(n > 0){return n * factorial(n-1); }
    else
        return 1;
}
int gcd(int n1, int n2){
    if(n1%n2 == 0) // base case
    {return n2;}
    else return gcd(n2,n1%n2);
}

int fib(int n){
    if(n <= 0) return 0;
    else if(n==1)return 1;
    else
        return fib(n-1) + fib(n-2);
}
#endif /* Recursion_h */
