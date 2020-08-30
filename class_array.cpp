#include<iostream>
#include<conio.h>
using namespace std;
class Array
{
    private:
            int *a;
            int size;
            int length;
    public:
            Array()
            {
                size=10;
                a=new int[10];
                length=0;
            }
            Array( int sz)
            {
                size=sz;
                a=new int[sz];
                length=0;
            }
            ~Array()
            {
                delete []a;
            }
            void circular(int ind)
            {
                for(int i=ind;i<length+ind;i++)
                   cout<<a[(i%length)]<<" ";
                cout<<endl;
            }
            void display()
            {
                cout<<"ARRAY ELEMENT: ";
                for(int i=0;i<length;i++)
                cout<<a[i]<<" ";
                cout<<endl;
                getch();
                system("CLS");
            }
            void Insert(int index,int x)
            {
                if(index>=0 && index<=length)
                {
                    for(int i=length-1;i>=index;i--)
                        a[i+1]=a[i];
                        a[index]=x;
                        length++;
                }
                getch();
                system("CLS");
            }
            int Delete(int index)
            {
                int x=0;
                if(index>=0 && index<length)
                {
                    x=a[index];
                    for(int i=index;i<=length-1;i++)
                        a[i]=a[i+1];
                        length--;
                }
                getch();
                system("CLS");
                return x;
            }
            void Search(int x)
            {
                for(int i=0;i<length;i++)
                {
                 if(x==a[i])
                        cout<<"Found at position "<<i<<endl;
                }
                getch();
                system("CLS");
            }
            void Append(int x)
            {
             a[length++]=x;
             system("CLS");
            }
            void Binary_search(int x)
            {
                int first=0;
                int temp;
                int last=length;
                int middle;
                for(int i=0;i<length;i++)
                {
                    for(int j=i+1;j<length-1;j++)
                    {
                        if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
                while(first<=last)
                {
                    middle=(first+last)/2;
                    if(a[middle]==x)
                    {
                        cout<<"found\n";
                        break;
                    }
                    else if(a[middle]>x)
                        last=middle-1;
                    else
                        first=middle+1;
                }
                getch();
                system("CLS");
            }
            int Max()
            {
                int max=a[0];
                for(int i=0;i<length;i++)
                {
                    if(max<a[i])
                        max=a[i];
                }
                return  max;
                getch();
                system("CLS");
            }
             int Min()
            {
                int min=a[0];
                for(int i=0;i<length;i++)
                {
                    if(min>a[i])
                        min=a[i];
                }
                return min;
                getch();
                system("CLS");
            }
            void get(int index)
            {
                cout<<"Element at index "<<index<<" : "<<a[index]<<"\n";
                getch();
                system("CLS");
            }
            void Rotate()
            {
                int i=0,j=length-1;
                int temp;
                while(i<j)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    i++;
                    j--;
                }
                getch();
                system("CLS");
            }

            void right_Rotate()
            {
                int temp;
                temp=a[length-1];
                for(int i=length;i>=0;i--)
                    a[i+1]=a[i];
                a[0]=temp;
                getch();
                system("CLS");
            }
            void left_Rotate()
            {
                int temp;
                temp=a[0];
                for(int i=0;i<length;i++)
                    a[i]=a[i+1];
                a[length-1]=temp;
                getch();
                system("CLS");
            }
            void Swap(int index,int x)
            {
                int temp;
                temp=a[x];
                a[x]=a[index];
                a[index]=temp;
                getch();
                system("CLS");

            }
            void SORT()
            {
                int temp;
                for(int i=0;i<length;i++)
                {
                    for(int j=i+1;j<length;j++)
                    {
                        if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
                        getch();
                    system("CLS");
            }
            void SUM()
            {
                int sum=0;
                for(int i=0;i<length;i++)
                    sum+=a[i];
                cout<<"sum of array elements:"<<sum<<endl;
                getch();
                system("CLS");
            }
            void AVG()
            {
                int sum=0;
                for(int i=0;i<length;i++)
                sum+=a[i];
                cout<<"Average of array elements:"<<sum/length<<endl;
                getch();
                system("CLS");
            }
            void psum()
            {
                int k;
                cout<<"Enter sum value:"<<endl;
                cin>>k;
                for(int i=0;i<length;i++)
                {
                    for(int j=0;j<length-1;j++)
                    {
                        if(a[i]+a[j]==k)
                            cout<<"sum of "<<a[i]<<"and "<<a[j]<<"is :"<<k<<endl;
                    }
                }
                    getch();
                system("ClS");

            }
            int _remove_duplicate()
            {
            for(int i=0;i<length;i++)
            {
                for(int j=i+1;j<length;)
                {
                    if(a[j]==a[i])
                    {
                    for(int k=j;k<length;k++)
                        {
                        a[k]=a[k+1];
                        }
                        length--;
                    }
                    else{
                        j++;
                    }
                }
            }
                getch();
                system("ClS");

            }
            void Replace(int index,int x)
            {
                a[index]=x;
                cout<<"Element replace at index "<<index<<endl;
                getch();
                system("ClS");
            }
            void getlength()
            {
            cout<<"length of array is: "<<length<<endl;
            getch();
            system("ClS");
            }
            void countduplicate()
            {
                int k=Max();
                int *h;
                h=new int[k];
                h[k]={0};
                for(int i=0;i<length;i++)
                h[a[i]]++;
                for(int i=0;i<=k;i++)
                {
                    if(h[i]>1)
                        cout<<i<<" element appearing "<<h[i]<<" times"<<endl;
                }
                    getch();
                    system("CLS");
            }
            void Findmissing()
            {
                int k=Max();
                int *h;
                h=new int[k];
                h[k]={0};
                for(int i=0;i<length;i++)
                h[a[i]]++;
                for(int i=1;i<=k;i++)
                {
                    if(h[i]==0)
                        cout<<i<<" Missing element: "<<i<<endl;
                }
                    getch();
                    system("CLS");
            }
            void findsubset()
            {
                cout<<"every possible subsets of array\n";
                    for(int i=0;i<length;i++)
                    {
                        for(int j=i;j<length;j++)
                        {
                            cout<<"{";
                            for(int k=i;k<=j;k++)
                            {
                                        cout<<a[k]<<",";
                            }
                            cout<<"}\t";
                        }
                    }
                            getch();
                    system("CLS");

            }


};
int main()
{
    int index,x,ch;
    Array arr;
    do{
    cout<<"---------MENU-------------"<<endl;
    cout<<"1.Insert Element\n";
    cout<<"2.Display list\n";
    cout<<"3.Delete Element\n";
    cout<<"4.Search\n";
    cout<<"5.Append\n";
    cout<<"6.Find maximum\n";
    cout<<"7.Find minimum\n";
    cout<<"8.Get element by index\n";
    cout<<"9.Binary search\n";
    cout<<"10.Rotation of array\n";
    cout<<"11.left Rotation of array\n";
    cout<<"12.right Rotation of array\n";
    cout<<"13.Swap index Element\n";
    cout<<"14.Sum of Array Elements\n";
    cout<<"15.Average of Array elements\n";
    cout<<"16.Sort Array list\n";
    cout<<"17.find pair of given Sum\n";
    cout<<"18.Remove Duplicate Elements\n";
    cout<<"19.Replace elements \n";
    cout<<"20.Count duplicate\n";
    cout<<"21.Find missing element\n";
    cout<<"22.Get length\n";
    cout<<"23.find subset of array \n";
    cout<<"24.Circular array\n";
    cout<<"25.Exit\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter index: "<<"\t";
            cin>>index;
            cout<<"\nenter number"<<"\t";
            cin>>x;
            arr.Insert(index,x);
            break;
        case 2:
            arr.display();
            break;
        case 3:
            cout<<"enter index: "<<"\t";
            cin>>index;
            arr.Delete(index);
            break;
         case 4:
            cout<<"\nenter number"<<"\t";
            cin>>x;
            arr.Search(x);
            break;
        case 5:
            cout<<"\nenter number"<<"\t";
            cin>>x;
            arr.Append(x);
            break;
        case 6:
            arr.Max();
            cout<<"Maximum Element of array:"<<arr.Max()<<"\n";
                    getch();
                    system("CLS");
            break;
        case 7:
            arr.Min();
            cout<<"Minimum Element of array:"<<arr.Min()<<"\n";
                    getch();
                    system("CLS");
            break;
        case 8:
            cout<<"enter index: "<<"\t";
            cin>>index;
            arr.get(index);
            break;
        case 9:
            cout<<"\nenter number"<<"\t";
            cin>>x;
            arr.Binary_search(x);
            break;
        case 10:
            arr.Rotate();
            break;
        case 11:
            arr.left_Rotate();
            break;
        case 12:
            arr.right_Rotate();
            break;
        case 13:
            cout<<"enter Index 1: "<<"\t";
            cin>>index;
            cout<<"\nenter Index 2:"<<"\t";
            cin>>x;
            arr.Swap(index,x);
            break;
        case 14:
            arr.SUM();
            break;
        case 15:
            arr.AVG();
            break;
        case 16:
            arr.SORT();
            break;
        case 17:
            arr.psum();
            break;
        case 18:
            arr._remove_duplicate();
            break;
        case 19:
            cout<<"enter index: "<<"\t";
            cin>>index;
            cout<<"\nenter number"<<"\t";
            cin>>x;
            arr.Replace(index,x);
            break;
        case 20:
            arr.countduplicate();
            break;
        case 21:
            arr.Findmissing();
            break;
        case 22:
            arr.getlength();
            break;
        case 23:
            arr.findsubset();
            break;
        case 24:
            cin>>index;
            arr.circular(index);
            break;
        case 25:
            exit(0);
            break;
            }
    }while(1);
    return 0;
}
