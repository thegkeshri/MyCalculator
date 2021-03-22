#include <iostream>

using namespace std;


int main()
{
    cout << "Welcome to Calculator" << endl<<"---------------------------"<<endl;
    double ans=0;
    int f=1;
    while(f){
            double op1,op2;
            char ch,choice;
            int choiceFlag=0;

        cout<<"Enter first Operand: "<<endl;
        cin>>op1;
        l1:
        cout<<"Enter operator: "<<endl;
        cin>>ch;

        switch(ch){
            case '+':
                cout<<"Enter next Operand: "<<endl;
                cin>>op2;
                if(choiceFlag==0){
                        ans+=(op1+op2);
                        choiceFlag=1;
                }else{
                    ans+=op2;
                }

                cout<<"Do you want to calculate further or get Ans? y/n :"<<endl;
                cin>>choice;
                if(choice=='y' || choice=='Y'){
                    goto l1;
                }else if(choice=='n' || choice=='N'){

                    cout<<"Ans: "<<ans<<endl;
                    f=0;
                    cout<<"Thanks for using our code!!!GKK";


                }

            case '-':
            cout<<"Enter next Operand: "<<endl;
                cin>>op2;
                if(choiceFlag==0){
                        ans=(op1-op2);
                        choiceFlag=1;
                }else{
                    ans-=op2;
                }

                cout<<"Do you want to calculate further or get Ans? y/n :"<<endl;
                cin>>choice;
                if(choice=='y' || choice=='Y'){
                    goto l1;
                }else if(choice=='n' || choice=='N'){

                    cout<<"Ans: "<<ans<<endl;
                    f=0;
                    cout<<"Thanks for using our code!!!GKK";


        }
            case '*':
            cout<<"Enter next Operand: "<<endl;
            cin>>op2;
            if(choiceFlag==0){
                ans=op1*op2;
                choiceFlag=1;
            } else{
                ans*=op2;
            }
            cout<<"Do you want to calculate further or get Ans? y/n :"<<endl;
            cin>>choice;
            if(choice=='y' || choice=='Y'){
                goto l1;
            } else if(choice=='n' || choice=='N'){
                cout<<"Ans: "<<ans<<endl;
                f=0;
                cout<<"Thanks for using our code!!!GKK";
            }
            case '/':
                cout<<"Enter next operand"<<endl;
                cin>>op2;
                if(choiceFlag==0){
                    ans=op1/op2;
                    choiceFlag=1;
                } else {
                ans/=op2;
                }
                cout<<"Do you want to calculate further or get Ans? y/n :"<<endl;
                cin>>choice;
                 if(choice=='y' || choice=='Y'){
                goto l1;
            } else if(choice=='n' || choice=='N'){
                cout<<"Ans: "<<ans<<endl;
                f=0;
                cout<<"Thanks for using our code!!!GKK";
            }
    }

}


    return 0;
}
