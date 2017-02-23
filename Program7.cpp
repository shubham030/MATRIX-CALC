#include<iostream.h>
using namespace std;
class matrix
{
 	int r1,r2,c1,c2,sum;
		
		public:
		matrix(int m1,int n1,int m2,int n2)
		{
			r1=m1;c1=n1;r2=m2;c2=n2;
		}
 public:void operations();	
};
void matrix ::operations()
{
		int n=0;
		int **a,**b;
		int c[10][10];
	a=new int *[r1];
	for(int i=0;i<r1;i++)
	a[i]=new int [c1];
	
	b=new int *[r2];
	for(int i=0;i<r2;i++)
	b[i]=new int [c2];
	
		cout<<"\nEnter the elements of matrix 1\n";
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			cin>>a[i][j];
		}
		cout<<"\nEnter the elements of matrix 2\n";
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
			cin>>b[i][j];
		}
		do{
		cout<<"\nchoose the operation to b performed\n";
		cout<<"1-addition\n2-subtraction\n3-multiplication\n4-Transpose\n";
		int x;
		cin>>x;
		switch(x)
		{
			case 1:if(r1==r2&&c1==c2)
					{
						cout<<"The sum of two matrices is\n";
						for(int i=0;i<r2;i++)
						{
							for(int j=0;j<c2;j++)
							cout<<a[i][j]+b[i][j]<<" ";
							cout<<endl;
						}
					}
					else{cout<<"\nWrong dimensions\n";}
					break;
					
			case 2:	if(r1==r2&&c1==c2)
					{
						cout<<"The difference of two matrices is\n";
						for(int i=0;i<r2;i++)
						{
							for(int j=0;j<c2;j++)
							cout<<a[i][j]-b[i][j]<<" ";
							cout<<endl;
						}
					}
					else{cout<<"\nWrong dimensions\n";}
					break;
					
			case 3:if(c1==r2)
					{
						cout<<"\nThe product of 2 matrices is\n";
						for(int i=0;i<r1;i++)
						for(int j=0;j<c2;j++)
						{
							sum=0;
							for(int k=0;k<c1;k++)
							{
								sum+=a[i][k]*b[k][j];
							}
							c[i][j]=sum;
						}
						
						for(int i=0;i<r1;i++)
						{
							for(int j=0;j<c2;j++)
							cout<<c[i][j]<<" ";
							cout<<endl;
						}
					}
					else cout<<"Dimensional Error\n";
					break;
			case 4:	cout<<"\nTranspose of matrix 1 is\n"; 
					for(int i=0;i<r1;i++)
						{
							for(int j=0;j<c2;j++)
							cout<<a[j][i]<<" ";
							cout<<endl;
						}
						
						cout<<"\nTranspose of matrix 2 is\n"; 
					for(int i=0;i<r1;i++)
						{
							for(int j=0;j<c2;j++)
							cout<<b[j][i]<<" ";
							cout<<endl;
						}
						break;
			default: cout<<"\ninvalid selection\n";
						
		}
			for(int i=0;i<80;i++)
		cout<<"_";
		cout<<"Press 1 to go to previous menu or 0 for main menu\n";
		cin>>n;
		}while(n==1);
}
int main()
{
	int r1,r2,c1,c2,sum,f=0;
	
	do
	{
		cout<<"Enter the dimensions of matrix 1\n";
	cin>>r1>>c1;
	cout<<"Enter the dimensions of matrix 2\n";
	cin>>r2>>c2;
	matrix a(r1,c1,r2,c2);
		a.operations();
		for(int i=0;i<80;i++)
		cout<<"_";
		cout<<"Hit 1 to continue\n";
		cin>>f;
	}while(f==1);
}