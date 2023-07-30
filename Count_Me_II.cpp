 #include<bits/stdc++.h>
 using namespace std;
 

 int main(){
 
     int t;
     cin>>t;
     while (t--)
     {
         int n;
         cin>>n;

         int ar[n];
         for(int  i=0; i<n; i++){
            cin>>ar[i];
         }

            map<int, int> cntV;
            for(int i=0; i<n; i++){
                cntV[ar[i]]++;
            }
            int maximum_value=ar[0];
             int cnt_val=0;

            for(const auto &e : cntV){
        if(e.second > cnt_val || (e.second == cnt_val && e.first >maximum_value ) ){
            cnt_val=e.second;
            maximum_value=e.first;
        }
        }

        pair<int, int> result({maximum_value,cnt_val});
        cout<<result.first<<" "<<result.second<<endl;
             
          
     }
     
     return 0;
 }