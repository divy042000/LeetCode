class Solution {
public:
    int reverse(int x) {
         if(x>=INT_MAX || x<=INT_MIN){return 0;}
       bool flag=true;
       if(x>0){flag=true;}
       else
       {flag=false;x=x*-1;}
       long long int reverse=0;
         while(x>0)
        {
           int lastdigit=x%10;
            reverse=(reverse*10)+lastdigit;
            x=x/10;
        }
       if(reverse>=INT_MAX || reverse<=INT_MIN){return 0;}
        if(flag==false){return reverse*-1;}
        return reverse;
    }
};
