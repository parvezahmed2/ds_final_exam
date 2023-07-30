 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 
     int t;
     cin>>t;
     cin.ignore();
     while (t--)
     {
         string s;
         getline(cin,s);
          
        map<string, int> wCount;
        
        stringstream ss(s);
        string word;
        while ( ss>>word)
        {
            wCount[word]++;
        }
         
        string mWord;
        int mCount=0;

        for(auto e:wCount){
                  
             if(e.second>mCount || (e.second == mCount && e.first <mWord) ){
                
                mCount = e.second;
                mWord=e.first;
                
            }
        }
        cout<<mWord<<" "<<mCount<<endl;
     }
     
     return 0;
 }