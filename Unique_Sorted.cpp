 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 
     int t;
     cin>>t;
     while (t--)
     {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i]; }
            sort(v.begin(),v.end(),greater<int>());


        v.erase(unique(v.begin(),v.end()), v.end());
        

        int sz=v.size();
        for(int i=0; i<sz; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
     }
     
     return 0;
 }