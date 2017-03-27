#include<iostream>
#include<map>
using namespace std;
int main()
{
     int M,N;
	 map<int,int>count;
	 scanf("%d %d",&M,&N);
	 int col;
	 for(int i=0;i<N;i++)
	 {
     for(int j=0;j<M;j++)
     {
    	scanf("%d",&col);
    	count[col]++;
     }
	 }
     int step=(M*N)/2;
     map<int,int>::iterator it;
     for(it=count.begin();it!=count.end();it++)
     {
 	if(it->second>=step)
 	 printf("%d",it->first);
     }
 	return 0;
}
/*map是hash的高级形态，具有hash所不具备的不连续性*/