
#include <iostream>

using namespace std;
class user
{
private:
    string name;
    string phone;
public:
    void setname()
    {
        cout<<"Enter your name: \n";
        cin>>name;
        cout<<"Enter Your phone number: \n";
        cin>>phone;
    }
    void getname()
    {
        cout<<name;
    }
};
class mainmenu : public user
{
private:
    int n;
public:
    void fristchoice()
    {
        cout <<"\n\n****** main menu **\n";
        cout<<"\n 1-Dessert \n 2-Soda \n 3-Yogurt \n 4-Smoothie \n 5-Milkshake \n";
        cout<<"\n Enter your choice: ";
    }
};
class Dess_soda
{
private:
    int y;
public:
    Dess_soda()
    {
        cout <<"\n\n****** Dessert **\n";
        cout<<"\n 1-Moltencake          40\n 2-Nutella moltencake  45\n 3-Lotus moltencake    50\n 4-Cheesecake          40\n 5-Waffle              35\n 6-SpecialWaffle       45\n 7-Cinnabon            45\n 8-Brownies            40\n 9-fruit_salade        35\n 10-Ice.cream          15\n";
        cout<<"\n Enter your choice: ";
    }
    Dess_soda(int l)
    {
        cout<<"\n\n****** Soda **\n";
        cout<<"\n 1-Red bull        35\n 2-Red bull mix    40\n 3-Red bull white  40\n 4-Soda            15\n 5-Sun shine       25\n 6-Cherry cola     30\n";
        cout<<"\n Enter your choice: ";
    }
};
class Yog_Smoo_Milk
{
private:
    int y;
public:
    Yog_Smoo_Milk()
    {
        cout<<"\n\n****** Yogurt **\n\n";
        cout<<" 1-Fruit Yogurt       30\n 2-Strawberry Yogurt  30\n 3-Honey Yogurt       30\n";
        cout<<"\n Enter your choice: ";
    }
    Yog_Smoo_Milk(int v)
    {
        cout<<"\n\n****** Smoothie **\n\n";
        cout<<" 1-Peach       35\n 2-Mango       35\n 3-Apple       35\n 4-strawberry  35\n 5-Blueberry   35\n 6-Raspberry   35\n";
        cout<<"\n Enter your choice: ";
    }
    Yog_Smoo_Milk(int v,int t)
    {
        cout<<"\n\n****** Milk Shake **\n\n";
        cout<<" 1-Chocolate   35\n 2-Vanilla     35\n 3-Strawberry  35\n 4-Mango       35\n 5-Apple       35\n 6-Peach       35\n 7-Banana      35\n";
        cout<<"\n Enter your choice: ";
    }
};
int fristif(int g)
{
    if(g==1)
    {
        Dess_soda b;
    }
    else if(g==2)
    {
        Dess_soda b(1);
    }
    else if(g==3)
    {
        Yog_Smoo_Milk b;
    }
    else if(g==4)
    {
        Yog_Smoo_Milk b(1);
    }
    else if(g==5)
    {
        Yog_Smoo_Milk b(1,2);
    }
    else
    {
        cout<<"\n\nSorry, your request wasn't understood ,please try again.\n\n";
        return 0;
    }
}
int total(int h,int A,int B)
{
    int sum=0;
    if(h==1)
    {
        int arr[]={40,45,50,40,35,45,45,40,35,15};
        sum=B*arr[A-1];
        return sum;
    }
    else if(h==2)
    {
        int arr[]={35,40,40,15,25,30};
        sum=B*arr[A-1];
        return sum;
    }
    else if(h==3)
    {
        sum=B*30;
        return sum;
    }
    else if(h==4 || h==5)
    {
        sum=B*35;
        return sum;
    }
    else
    {
        cout<<"\n\nSorry, your request wasn't understood ,please try again.\n\n";
        return 0;
    }

}

int main()
{
    mainmenu m;
    m.setname();
    int fai=0,d=0;
    do{
        m.fristchoice();
        int x,Z,S;
        cin>>x;
        fristif(x);
        cin>>Z;
        cout<<" Enter quantity: ";
        cin>>S;
        int G=total(x,Z,S);
        fai+=G;
        cout<<"Do you want to order something else? \n 1-true. \n 2-false. \n  ";
        cout<<"....";
        cin>>d;
    }while(d==1);
    cout<<"\n\nDear ";
    m.getname();
    cout<<", Your account is \" "<<fai<<" LE \"\n\n";
    return 0;
}