#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{
    cout<<"��س��"<<endl;;
    for(;;)
    {   
        string p;
        cin>>p;
        if(p=="����")
        {
            system("cls");
            cout<<p<<endl;
            string n,y;
            cout<<"������������"<<endl;
            cin>>n;
            cout<<"��������������գ�"<<endl;
            cin>>y;
			srand(time(0));
            int a[6]={0};//掷铜钱六组
            for(int i=0;i<=5;i++)
            {
                int b[3]={0};//每组掷三枚铜钱
                for(int j=0;j<=2;j++)
                {
                    b[j]=rand()%2 ;
                }
                a[i]=b[1]+b[2]+b[0]; 
            }
            int c[6][2];//将卦相存于此 0为阴 1为阳
            for(int i=5;i>=0;i--)//从下往上写
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
            for(int i=5;i>=0;i--)//输出
            {
                cout<<"������������"<<endl;
                cout<<n<<endl;
                cout<<"��������������գ�"<<endl;
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
            cout<<endl<<endl<<"�Դǣ�"<<endl;	
            stringstream st;
            for(int i=0;i<=5;i++)
                st<<c[i][0];
            string find=st.str();

            
            freopen("����ԭ��ANSI.txt","r",stdin);
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
                cout<<"δ�ҵ�����"; 
            }
            
            cout<<endl;
            freopen("con","r",stdin);
            
        }
        cout<<endl<<endl;
    }
    return 0;
}
