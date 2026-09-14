class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if(k==n)
        return "0";
        stack<int>st;
        for(int i=0;i<n;i++)
        {   int a;
            if(st.empty())
            {
                a=num[i]-'0';
                st.push(a);
            }
            else
            {   
                 a=num[i]-'0';
                if(st.top()<=a)
                st.push(a);
                else
                {
                    while(!st.empty() && k && st.top()>a)
                    {
                        st.pop();
                        k=k-1;
                    }
                    st.push(a);
                }
            }
        }
        while(k--){
            st.pop();
        }
        string s;
       while(!st.empty())
       {
            s.push_back(st.top()+'0');
            st.pop();
       }
       
       reverse(s.begin(),s.end());
        int i = 0;
        while (i < s.size() && s[i] == '0') {
            i++;
        }

        s = s.substr(i);
         if (s.empty())
            return "0";
       return s;
    }
};
