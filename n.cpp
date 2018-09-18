#include<iostream>
using namespace std;

const int MAXSIZE=1000;
template<class T>
class Seqlist
{
public:
    Seqlist(){length=0;}
    Seqlist(const  T a[],int n);
    int Getlength(){return length;}
    void Printlist();
    void Insert(int i,T x);
    T Delete(int i);
    T Get(int i);
    int Locate(T x);
private:
    T data[MAXSIZE];
    int length;

};
template<class T>
Seqlist<T>::Seqlist(const T a[],int n)
{
    if(n>MAXSIZE)
        throw "error";
        for(int i=0;i<n;i++)
    data[i]=a[i];
    length=n;
}
template<class T>
void Seqlist<T>::Printlist()
{
    cout<<"按序号依次遍历线性表中的各个数据元素："<<endl;
    for(int i=0;i<length;i++)
        cout<<data[i]<<" ";
    cout<<endl;
}
template<class T>
void Seqlist<T>::Insert(int i,T x)
{

    if(length>=MAXSIZE)
    if(i<1||i>length+1)
    for(int j=length;j>=i;j--)
    data[j]=data[j-1];
data[i-1]=x;
length++;
}
template<class T>
T Seqlist<T>::Delete(int i)
{
    if(0==length)
        if(i<1||i>length)
            throw "error";
        T x=data[i-1];
    for(int j=i;j<length;j++)
       {
           data[j-1]=data[j];}
    length--;
    return x;

}
template<class T>
T Seqlist<T>::Get(int i)
{
    if(i<1||i>length)
        return data[i-1];

}
template<class T>
int Seqlist<T>::Locate(const T x)
{
    for(int i=0;i<length;i++)
        if(x==data[i])
        return 0;
        }
int main()
{
    int a[7]={1,2,3,4,5,6,7};
    Seqlist<int >list(a,7);
    list.Printlist();
    list.Insert(1,0);
    list.Printlist();
    int x=list.Delete(8);
    cout<<"删除元素:"<<x<<endl;
    list.Printlist();
    int p=list.Locate(4);
    cout<<"元素4的位置:"<<p<<endl;


}
