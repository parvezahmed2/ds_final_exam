 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 
     int n;
    cin >> n;
    vector< long long int> a(n);
    for (int i=0; i <n; i++) {
        cin>>a[i];
    }
    priority_queue<long long int, vector<long long int>, greater<long long int>>  pq;
     

    for(int i=0; i<n; i++){
        pq.push(a[i]);
         
    }

    int q;
    cin>>q;
    while (q--)
    {
        long long int c;
        cin>>c;
        if(c==0){
           long long int x;
            cin>>x;
            pq.push(x);
             
            cout<<pq.top()<<endl;
        }
        else if(c==1){
            if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                cout<<pq.top()<<endl;
            }
        }
        else if(c==2){
            if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                 
                 
                 if(!pq.empty()){
                    pq.pop();
                 }
               if(!pq.empty()){
                     
                    cout<<pq.top()<<endl;
                }
                else{
                    cout<<"Empty"<<endl;
                }
                
            }
        }
    }
    

     return 0;
 }