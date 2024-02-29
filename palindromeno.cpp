//PROBLEM LINK:https://leetcode.com/problems/palindrome-number/description/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int original=x;
        long long reverse=0;
        while(x!=0){
            int lastdigit=x%10;
            reverse=(reverse*10)+lastdigit;
            x=x/10;
        }
        if(original==reverse){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};