#include<iostream>
#include<string>
using namespace std;

class shopItem{
    int id;
    float price;
    string name;
    public:
    void set_data(int i,string n, float p){
        id = i;
        name = n;
        price = p;
    }
    void get_data(){
        cout<<"The id of the product is: "<<id<<endl;
        cout<<"The name of the product is: "<<name<<endl;
        cout<<"The price of the product is: "<<price<<endl;
    }
};

int main(){
    int size,Id;
    float rate;
    string item_name;
    cout<<"Enter the number of products: ";
    cin>>size;
    shopItem *ptr = new shopItem[size];
    for(int i = 0;i<size;i++){
        cout<<"Product: "<<i+1<<endl;
        cout<<"Id: ";
        cin>>Id;
        cout<<"Name: ";
        cin>>item_name;
        cout<<"Price: ";
        cin>>rate;
        ptr->set_data(Id,item_name,rate);
        ptr++;
        cout<<endl;
    }
    for(int j = 0;j<size;j++){
        ptr->get_data();
        ptr++;
    }
    return 0;
}