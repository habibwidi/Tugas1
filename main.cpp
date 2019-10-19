#include <iostream>

using namespace std;

int main()
{
    string item="";
    string item_sblm="nothing";

    int stat=0;
    int stat_sblm=0;
    char ulang='y';

    while(ulang == 'y'){
        cout<<"masukan item: ";
        cin>>item;
        cout<<"masukan stat: ";
        cin>>stat;
        cout<<"nama Item: "<<item<<endl;
        cout<<"stat : "<<stat<<endl;
        cout<<"item sebelum: ;"<<item_sblm<<endl;

        if(stat>stat_sblm){
            cout<<"item terkuat: "<< item <<endl;
            cout<<"item terlemah: "<<item_sblm<<endl<<endl;
        }else if(stat<stat_sblm){
            cout<<"item terkuat: "<< item <<endl;
            cout<<"item terlemah: "<<item_sblm<<endl<<endl;
        }
        cout<<"Masukan item Lagi?: (y/n): ";
        cin>>ulang;
        cout<<"============================\n"<<endl;

        item_sblm=item;
        stat_sblm=stat;
    }
    return 0;
}
