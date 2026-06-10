class Solution {
public:
    bool isPalindrome(string s) {
        // to clean number and remove spaces am i right??
        string cleaned =""; //why this string is declared?? bcaz to add new string removing space
        for(char c:s ){ // goes to the each character one by one and checks if space or number exsits?
            if (isalnum(c)){// what is the exact role of isalnum function
                cleaned += (char)tolower(c);//removes space and updates cleaned
            }
        }
        return checkPalindrome(0,cleaned);// can this method be used like making a different private function and calling it in public?
    }
private:
   bool checkPalindrome(int i,string &s){

       if(i>=s.length()/2)
       return true;
       else if(s[i]!=s[s.length()-i-1])
       return false;
       return checkPalindrome(i+1,s);
    }
};
