#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> students;
    while(true)
    {
        int rollno;
        cin>>rollno;
        if(rollno<0)
        {
            break;
        }
        students.insert(rollno);
    }
    int s;
    cin>>s;
    cout<<"the number of students are : "<<students.size()<<endl;
    cout<<"number of occurences of "<<s<<" are "<<students.count(s)<<endl;
    cout<<"set elements"<<endl;
    for(auto r:students)
    {
        cout<<r<<endl;
    }
    return 0;
}