 	#include <iomanip>
 	#include <iostream>   // cout si cin 
 	#include <cstdlib>    // <stdlib.h>   rand srand exit
 	#include <ctime>      // <time.h>  time 
 	#include <conio.h> 
 	#include <cstring>    // string.h
 	#include <windows.h>
 	using namespace std;
 	
 	template <typename T1>
 	int insertINT(T1 mess[256])
 	{
 	 	cout<<mess;
 	 	int x;
 	 	cin>>x;
 		
 		return x;
 	}
 	
 	
 	void insertV(int v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		v[i] = rand()%10;
 	}
 	
 	
 	void insertV(double v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		v[i] = rand()%10*1.357;
 	}
 	
 	
 	void insertV(char v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		v[i] = 'a' + rand()%26 ;
 	}
 	
 	
 	template <typename T1, typename T2>
 	void showV( T1 v[], T2 n )
 	{
 		for (int i=0; i<n; i++) cout<<setw(7)<<v[i];
 	}
 	
 	template <typename T1>
 	void CalculX( T1 v[], int n )
 	{
 		int c = 0;
 		int X[100];
 		
 		cout<<"\n\n  X int ::";
 		
	 	for (int i=0; i<n/2 && c<5; i++) 
 		{	
		 	if ( (v[i] % 2 == 0) && v[i] > 0)
		 	{
		 		X[c] = v[i];
		 		cout<<setw(3)<<X[c];
			 	c++;
		 	}
	 	}
	 	
	 	FILE* fp;
 		
     	if ((fp = fopen("Rez.Step","w+b")) == NULL)
     	{
   		    cout<< " Error:: W+B "<<endl;
       		system("pause");
   		}
   		
   		else
 		{
      	  	fp = fopen("Rez.Step","w+b");
       	 	fwrite(X, sizeof(X), 1, fp);
         	fclose(fp);
 		}
	 	 	
	 	cout<<endl;
 	}
 	
 	
 	template <typename T1>
 	void CalculY( T1 v[], int n )
 	{
 		int xxx = 0;
 		int Y[100];
 		
 		cout<<"\n  Y int ::";
 		
	 	for (int i=n-1; i>=n/2 && xxx<5; i--) 
 		{	
		 	if ( (v[i] % 2 != 0) && (i % 2 == 0) )
		 	{
		 		Y[xxx] = v[i];
		 		cout<<setw(3)<<Y[xxx];
			 	xxx++;
		 	}
	 	}
		 
	 	cout<<endl;	 
		 	
	 	FILE* fp; 	
	 	
	 	fp = fopen("Rez.Step","a+b");
       	fwrite(Y, sizeof(Y), 1, fp);
 		fclose(fp);
	 		
 	}


 	int main()
 	{
 		srand(time(0));
 		
 		int D[100];
 		double D1[100];
 		char D2[256];
 		
 		int n = insertINT("  Enter n = ");
 		
 		cout<<"\n  v double ::";
 		insertV(D1, n);  	 
	 	showV(D1, n);  
	 	
	 	cout<<"\n\n  v char ::";
	 	insertV(D2, n);  	 
	 	showV(D2, n); 
	 	
	 	cout<<"\n\n  v int::";
	 	insertV(D, n);  	 
	 	showV(D, n); 
	 	
 		CalculX(D, n);	
	 	CalculY(D, n);	
			  	
 		return 0;
  	}
