Task:
To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. on a single line, 
and finally print the value of your variable on a second line.
You've got this!

Input Format
A single line of text denoting inputString (the variable whose contents must be printed).

Output Format
Print Hello, World. on the first line, and the contents of inputString on the second line.

Sample Input
Welcome to 30 Days of Code!

Sample Output
Hello, World. 
Welcome to 30 Days of Code!
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<"Hello, World."<<endl;
    cout<<s;
    return 0;
}
