//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    

    long long minCost(long long arr[], long long n) {
        long long sum = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        
        for(int i=0;i<n;i+=1){
            pq.push(arr[i]);
        }
        while(pq.size() > 1){
            long long a = pq.top();pq.pop();
            long long b = pq.top();pq.pop();
            
            long long c = a + b;
            sum += c;
            pq.push(c);
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends