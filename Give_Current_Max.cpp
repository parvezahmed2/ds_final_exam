
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
    student(string name,int roll, int marks){
        this->name=name;
        this->marks=marks;
        this->roll=roll;
    }
};
class cmp{
    public:
    bool operator()(student a, student b){
        if(a.marks < b.marks) return true;
        else if(a.marks > b.marks) return false;
        else{
            if(a.roll > b.roll) return true;
            else return false;
        }
    }
};
int main(){
    int n,q;
    cin>>n;
    // priority_queue<student> pq;
     priority_queue<student,vector<student>,cmp> pq;
    for(int i=0; i<n; i++){
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        pq.push(student(name,roll,marks));
    }
    cin>>q;
    while (q--)
    {
        int c;
        cin>>c;
        if(c==0){
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            pq.push(student(name,roll,marks));
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(c==1){
            if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                 cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }

        }
        else if(c==2){
            if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                pq.pop();
                if(pq.empty()){
                    cout<<"Empty"<<endl;
                }
                else{
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                }
            }
        }
    }
    
    
    return 0;
}