#include <iostream>
#include <vector>

using namespace std;

int main(){

int sumaX=0,sumaY=0,sumaZ=0;
int maxSum=0;
vector <int> A={3,2,6,-1,4,5,-1,2};
for(int i=0;i<A.size()-2;i++)
{
    for(int j=i+1;j<A.size()-1;j++)
    {
        for(int k=j+1;k<A.size();k++)
        {
            //cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;

            for(int x=i+1;x<j-1;x++)
                sumaX=sumaX+A[x];
            for(int y=j-1;y<k-1;y++){
                sumaY=sumaY+A[y];
                if(y==j)
                    sumaY=sumaY-A[y];
            }
            int z=k-1;
                sumaZ=sumaZ+A[z];

            if(maxSum<sumaX+sumaY+sumaZ){
                maxSum=sumaX+sumaY+sumaZ;
            }
            sumaX=sumaY=sumaZ=0;
        }
    }
}

cout<<maxSum;
return 0;
}
