#include<iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string str) {
        int roman[128] = {0}; 

        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int len = str.length(),num,sum=0;

        for(int i=0; i<len; ){
            if(i == (len-1) || (roman[str[i]] >= roman[str[i+1]])){
                num = roman[str[i]];
                i++;
            }
            else{
                num = roman[str[i+1]] - roman[str[i]];
                i = i+2;
            }
            sum = sum + num;
        }
        return sum;
    }
};