class Solution { 
public: 
    vector<int> findNSE(vector<int> arr) { 
        int n = arr.size(); 
        vector<int> v(n); 
        stack<int> st; 

        for (int i = n - 1; i >= 0; i--) { 
            while (!st.empty() && arr[st.top()] >= arr[i]) {  // CHANGE
                st.pop(); 
            } 

            v[i] = !st.empty() ? st.top() : n; 
            st.push(i); 
        } 

        return v; 
    } 

    vector<int> findPSEE(vector<int> arr) { 
        int n = arr.size(); 
        vector<int> v(n); 
        stack<int> st; 

        for (int i = 0; i < n; i++) { 
            while (!st.empty() && arr[st.top()] > arr[i]) { 
                st.pop(); 
            } 

            v[i] = !st.empty() ? st.top() : -1; 
            st.push(i); 
        } 

        return v; 
    } 

    int sumSubarrayMins(vector<int>& arr) { 
        int n = arr.size(); 
        long long a = 0; 
        const long long MOD = 1e9 + 7; 

        vector<int> nse = findNSE(arr); 
        vector<int> psee = findPSEE(arr); 

        for (int i = 0; i < n; i++) { 
            long long left = i - psee[i]; 
            long long right = nse[i] - i; 

            long long f = (left * right) % MOD; 
            a = (a + f * arr[i]) % MOD; 
        } 

        return (int)a; 
    } 
};
