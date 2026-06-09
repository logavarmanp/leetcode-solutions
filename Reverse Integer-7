class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x!=0){
             int digit = x%10;
//to check overflow INT_MAX = 2147483647
//INT_MIN = -2147483648 so if condition under 32 bit integer range
              if(
    rev > INT_MAX/10 ||
    rev < INT_MIN/10 ||
    (rev == INT_MAX/10 && digit > 7) ||
    (rev == INT_MIN/10 && digit < -8)
            )
{
    return 0;
}
           
            rev = rev*10+digit;
            x=x/10;

          
        
}
        return rev;
    }
};
