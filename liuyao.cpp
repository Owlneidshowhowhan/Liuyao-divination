#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{
    cout<<"ÁùØ³ØÔ"<<endl;;
    for(;;)
    {   
        string p;
        cin>>p;
        if(p=="ÆðØÔ")
        {
            system("cls");
            cout<<p<<endl;
            string n,y;
            cout<<"ÇëÊäÈëÐÕÃû£º"<<endl;
            cin>>n;
            cout<<"ÇëÊäÈë³öÉúÄêÔÂÈÕ£º"<<endl;
            cin>>y;
			srand(time(0));
            int a[6]={0};//æŽ·é“œé’±å…­ç»„
            for(int i=0;i<=5;i++)
            {
                int b[3]={0};//æ¯ç»„æŽ·ä¸‰æžšé“œé’±
                for(int j=0;j<=2;j++)
                {
                    b[j]=rand()%2 ;
                }
                a[i]=b[1]+b[2]+b[0]; 
            }
            int c[6][2];//å°†å¦ç›¸å­˜äºŽæ­¤ 0ä¸ºé˜´ 1ä¸ºé˜³
            for(int i=5;i>=0;i--)//ä»Žä¸‹å¾€ä¸Šå†™
            {
                int x=a[i];
                switch(x)
                {
                    case 0:
                        c[i][0]=0;
                        c[i][1]=1;
                        break;
                    case 1:
                        c[i][0]=0;
                        c[i][1]=0;
                        break;
                    case 2:
                        c[i][0]=1;
                        c[i][1]=1;
                        break;
                    case 3:
                        c[i][0]=1;
                        c[i][1]=0;
                    break;
                }
            }
            system("cls");
            for(int i=5;i>=0;i--)//è¾“å‡º
            {
                cout<<"ÇëÊäÈëÐÕÃû£º"<<endl;
                cout<<n<<endl;
                cout<<"ÇëÊäÈë³öÉúÄêÔÂÈÕ£º"<<endl;
                cout<<y<<endl;
				for(int j=0;j<=i;j++)
                    cout<<endl;
                for(int k=i;k<=5;k++)
                {
                    for(int n=0;n<=1;n++)
                    {
                        if(c[5-k][n]==0)
                            cout<<"_ _  ";
                        else
                            cout<<"___  ";
                    }
                    if(c[5-k][0]==c[5-k][1])
                        cout<<" ";
                    else
                        cout<<".";
                    cout<<endl;
                }
                Sleep(700);
                if(i>0)
                    system("cls");
            }

            string str1;
            cout<<endl<<endl<<"ØÔ´Ç£º"<<endl;	
            stringstream st;
            for(int i=0;i<=5;i++)
                st<<c[i][0];
            string find=st.str();

            
            freopen("ÖÜÒ×Ô­ÎÄANSI.txt","r",stdin);
            bool flag=0;
            for(int i=1;i<=64*9-1;i++)
            {
                cin>>str1;
                if(str1==find)
                {
                    for(int j=1;j<=7;j++)
                    {
                        cin>>str1;
                        cout<<str1<<endl;
                    }
                    flag=1;
                    break;
                }
            }
            
            if(!flag)
            {
                cout<<"Î´ÕÒµ½ØÔÏó"; 
            }
            
            cout<<endl;
            freopen("con","r",stdin);
            
        }
        cout<<endl<<endl;
    }
    return 0;
}
