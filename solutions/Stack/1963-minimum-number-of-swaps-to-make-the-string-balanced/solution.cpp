class Solution {
public:
    int minSwaps(string s) {
    int c=0;
    int a=0;
    stack<int>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='[')
        c++;
        else
        {
            c--;
            {
                if(c<0)
                {
                    a++;
                    c=0;
                }
            }
        }
    }
    return (a+1)/2;
    }
};
