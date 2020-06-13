//Bismillahir Rahmanir raheem
#include<bits/stdc++.h>
using namespace std;

class MyFather{
    int savings = 300;
    int pocketMoneyQuota = 100;
public:
    void pocketMoney(int amt);
    void varsityFee(int amt);
};

void MyFather::pocketMoney(int amt){
    if(savings < amt && savings < pocketMoneyQuota){
        cout<<"Get Lost!!\n\n";
        return;
    }
    int givenAmt = amt;
    if(amt > pocketMoneyQuota){
        givenAmt = pocketMoneyQuota;
    }
    savings -= givenAmt;
    cout<< "Asked for "<< amt << "taka.\nGiven "<< givenAmt << " taka\n";
    cout<<"Currnt Savings: "<<savings<<" taka\n\n\n";
}

void MyFather::varsityFee(int amt){
    savings -= amt;
    cout<< "Asked for "<< amt << "taka.\nGiven "<< amt << " taka\n";
    cout<<"Currnt Savings: "<<savings<<" taka\n\n\n";

}


int main()
{
    MyFather st;
    st.pocketMoney(1080);
    st.pocketMoney(10);
    st.pocketMoney(100);
    st.pocketMoney(1070);
    st.varsityFee(10770);
    st.varsityFee(14400);
    st.varsityFee(1030);
    st.varsityFee(100);
    return 0;
}




