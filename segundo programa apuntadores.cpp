#include<iostream>

    using namespace std;
    void inter(int *p, int*q)
    {
        int temp;
        temp = *p;
        *p = *q;
        *q = temp;
    }
    int main(){
        int x = 10, y=20;
        cout<<"\n X=" <<x<<endl<<"Y = "<<y<<endl;
        inter(&x,&y);
        cout<<"\n X="<<x<<endl<<"Y ="<<y<<endl;
        system("pause");
        return 0;
}