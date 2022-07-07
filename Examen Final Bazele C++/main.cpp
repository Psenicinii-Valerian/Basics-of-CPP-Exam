 	#include <iomanip>
 	#include <iostream>   //  cout si cin 
 	#include <cstdlib>  // <stdlib.h>   rand srand exit
 	#include <ctime>    // <time.h>  time 
 	#include <conio.h> 
 	#include <cstring>  // string.h   
 	#include <windows.h>
	
 	using namespace std;
 	
 	#include "struct.cpp";
 	#include "table.cpp";
 	#include "tabel.cpp";
 	#include "ui.cpp";	
 	#include "source.cpp";
		
 	//   Structuri de date
	
 	/*	
 	struct nume_tip_date_user
 	{
		tip_date var1;
		tip_date var2;
		tip_date var3;
		....
		tip_date varN;
 	}....;
	
 	*/ 	 
 	
 	// student  =>  nume, grupa , ani, media .......... N info
	 
	 
 	int main() 
 	{   
	   	srand(time(0));
	   	
	   	FILE *fp;
	   	
	   	fp = fopen("conf.ini", "r+");
	    
 	    fscanf( fp, "%s", &FNS);
 	    fscanf( fp, "%s", &FNL);
	    
 	    fclose(fp);
 	    
 	    
 	    FILE *fa;
	   	
	   	fa = fopen("config.ini", "r+");
	    
 	    fscanf( fa, "%s", &FSAVE);
 	    fscanf( fa, "%s", &FLOAD);
	    
 	    fclose(fa);
	    
	 	//int n=load();     
	 	//cout<<" n = "<<n<<endl;
	 	
	 	int a = 0;
	 	a = file_load();
	 	
	 	if ( sizeof(user)*a == 0 ) user_credentials(&a);
	 	
	 	else check_credentials(&a);
	 	
	 	cout<<"\n a = "<<a<<endl;	 	
	 	cout<<" sizeof(user) = "<<sizeof(user)<<" sizeof(user)*"<<a<<" = "<<sizeof(user)*a<<endl;
	 		 	
	 	int n = 0;
	 	n = load();
	 		 
	 	cout<<"\n n = "<<n<<endl;
	 	
	 	cout<<" sizeof(stud) = "<<sizeof(stud)<<" sizeof(stud)*"<<n<<" = "<<sizeof(stud)*n<<endl<<endl;
	 	
	 	system("pause");
	  
 		// meniu
		  
 		// 1. structura student cu minim 4 elem.
 		// 2. meniu. 
 		//    1. insert struct
 		//    2. show struct 
		     
	 	while(1)
	 	{	
		  	switch( meniu() )
		  	{
		  		
		  		case 49 :  insert(&n); system("pause"); break; 
		  		case 50 :  show(n); system("pause"); break; 
		  		
		  		case 51 :  nume_stud(&n); system("pause"); break;
		  		
		  		case 52 : show_user_credentials(a); system("pause"); break;
		  		case 53 : more_credentials(&a); system("pause"); break;
		  		case 54 : file_save(a); system("pause"); break; 
		  		case 55 : a = file_load(); system("pause"); break; 
		  		
		  		case 56 : 	 save(n); system("pause"); break; 
		  		case 57 : n = load(); system("pause"); break; 
		  		
		  		case 27 : save(n); exit(0);
		 	}
			 		  	
	 	}
		  	  
	   	return 0;   
 	}
    
