#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "deepak";
    int len = str.length();

    char a = 0;
    char b = len - 1;
    char temp = 0;
    while (a < b)
    {
        temp = str[a];
        str[a] = str[b];
        str[b] = temp;

        a++;
        b--;
    }
    cout << str;

    return 0;
}


/* 2nd method */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "deepak";

    int len = str.length();
    int n = len - 1;
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n];
        str[n] = temp;
        n = n - 1;
    }

    cout << str;

    return 0;
}

// 3rd method
#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
     int low = 0; // 1 //2
     int high = str.length() - 1;  // 3, 2

     while(low < high){
         if (str[low] != str[high]) // str[a] != str[a], str[b] != str[b]
            return false;
        low ++;
        high --;
     }
     return true; //true
}

int main() {
    string str = "abba";
    if (isPalindrome(str))
        cout << "yes" << endl; //output => true
    else
        cout << "no" << endl;

    return 0;
}
