class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        int n=asteroids.size();
        
        for(int i=0;i<n;i++)
        {
            int f=0;
            if(st.empty())
            st.push(asteroids[i]);
            else if( asteroids[i]>0)
            {
                st.push(asteroids[i]);
            }
            else if(asteroids[i]<0)
            {
                
                if(st.top()>0)
                {
                while( !st.empty() && st.top()>0)
                    {
                        if( st.top()<abs(asteroids[i]))
                        st.pop();
                        else if( st.top()>abs(asteroids[i]))
                        {   
                            f=1;
                            break;
                        }
                        else if(abs(st.top())==abs(asteroids[i]))
                        {
                            f=1;
                            st.pop();
                            break;
                        }
                    }
                }
                if(f==0 &&(st.empty() || st.top()<0))
                st.push(asteroids[i]);
            }

        }
         while(!st.empty())
         {
            ans.push_back(st.top());
            st.pop();
         }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};
