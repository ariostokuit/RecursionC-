//
//  RecursiveChallenges.h
//  Recursion
//
//  Created by Ariosto Kuit on 3/3/19.
//  Copyright © 2019 Ariosto Kuit. All rights reserved.
//

#ifndef RecursiveChallenges_h
#define RecursiveChallenges_h
using namespace std;

//PRogramming challenge #1 ITerative factorial
int factorial_(int n){
    int total = 1;
    for(; n > 0; n--){ // just use n to iterative until it reaches 0
        total *= n;
    }
    return total;
}

//Programming challenge #2 Recursive Conversion
void sign(int n){
     cout << "No Parking\n";
    if(n > 1){ // will print out exact amount of times
        return sign(n-1);
    }
}

//Programming Challenge #4 Recursive Array Sum
int r_ArrSum(const int arr[], int size){
    if(size == 0){return 0;}
    else
        return arr[size-1] + r_ArrSum(arr,size-1);
}

//Programming Challenge #5 Recursive Mulitplication
int R_mul(int x, int y){
    if(y == 1){return x;}
    else
        return x + R_mul(x,y-1);
}

//Programming Challenge 6 Recursive Member Test
bool isMember(int arr[], int size, int searchVal){
    if(size != 0){
        if(arr[size] == searchVal){return true;}
        else
            return isMember(arr,--size, searchVal);
    }
    else
        return false; //return false since the function recursively checked each index
}

//Programming #7 String Reverser
void StringReverser(const char *s){
    if(*(s+1) != '\0'){
    StringReverser(s+1); // will tranverse through the string
    }
    cout << *s; //print outs the input in reverse
}

//Programming #8 Palindrome Testing
bool PalindromeTest(string str, int lower, int upper){
    if(str[lower] == str[upper]){
        if(lower == upper){
            cout << str << " is a palindrome\n";
            return true;
        }
        return PalindromeTest(str, lower + 1, upper-1);
    }
    else{
        cout << str << " is not a palindrome\n";
        return false;
        }
}



#endif /* RecursiveChallenges_h */
