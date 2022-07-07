	
 	void file_save(int a)
 	{
 		FILE *fa;
 		
 		if ( (fa = fopen (FSAVE, "w+b") ) == NULL )
 		{
 			cout<<" ERROR :: W+B "<<endl;
 			system("pause");
 			return;
 		}
 		
 		fwrite(U, sizeof(user), a, fa);
 		
 		fclose(fa);
 	}
 	
 	
 	int file_load()
 	{
 		FILE *fa;
 		
 		if ( (fa = fopen (FLOAD, "r+b") ) == NULL )
 		{
 			cout<<" ERROR :: R+B "<<endl;
 			system("pause");
 			return 0;
 		}
 		
 		int a = fread(U, sizeof(user), 1000, fa);
 		
 		fclose(fa);
 		
 		return a;
 	}
 	
 		
 	void user_credentials(int *a)
 	{	
 		bool K;
 		int key, i;
 		
	 	do
 		{  
		 	system("cls");
	   	 	cout<<" Authentification ["<<(*a)+1<<"]"<<endl<<endl;
	   	 
	  	 	cout<<" Register email  :: "; cin>>U[*a].email;
	  	 	
		 	cout<<" Register password   :: " ;
		 	
		 	K=true, i=0;
			
	   		while (K)
	   		{
		 		key=_getch();
	   			if ( key == 13 && (strlen(U[*a].password) > 0) )
			 	{
			 		U[*a].password[i] = '\0';
				 	K=false;
			 	}
				 	
			 	else if ( key == 8 )
	 			{
					if( i > 0 ) { cout<<"\b \b"; i--; }
					
	 			}	
	 				
			 	else if ( key != 13 && key !=27  ) 
				 	{
					 	U[*a].password[i] = key;
				 		cout<<"*";
				 		i++;
				 	}
	  	 	}
	   		
		 	cout<<"\n ESC - exit,  any key ...."<<endl;
		 	
	   	 	(*a)++;
		   
 		} while( _getch() != 27 );
 		
 		file_save(*a);
 	}
 	
 	
 	void show_user_credentials(int a)
 	{
	 	// x- stud per pagina
	 	// in - inceput
	 	// sf - sfirsit
	 	
	 	int x=2, in=0, sf=x;
	 	bool EXIT=0;
	 	
	   		
	   	if( a > 0 )
	   	{
        
 			while(1)		
	  		{
	 	 		system("cls");

	 			lineA();cout<<(char)186<<setw(3)<<"ID"<<setw(3)<<(char)186<<setw(20)<<"EMAIL"
				 			<<setw(15)<<(char)186<<setw(22)<<"PASSWORD"<<setw(13)<<(char)186
							<<endl;lineB();
	
	 			for(int i=in; i < sf ; i++)
		 		{
	 				cout<<(char)186<<setw(3)<<i+1
		   				<<setw(3)<<(char)186<<setw(28)<<U[i].email
				 		<<setw(7)<<(char)186<<setw(22)<<U[i].password<<setw(13)<<(char)186<<endl;
					 	
					 	if (i<sf-1)
		  				lineB();
	 			}
	 			
	 			lineC();
		
		 		switch(_getch())
		 		{
		 			case 43 : in+=x; sf+=x; if( sf > a ){ in=a-2; sf=a; } break;
		 			case 45 : in-=x; sf-=x; if( in < 0 ){ in=0;   sf=x; } break;
		 			case 27 : EXIT=true;  
	 			}
	
		 		if( EXIT ) break;
 			}	
 		} 
		
 	}	
 	
	 			 
 	void more_credentials(int *a)
 	{	
 		bool K;
 		int key, i;
 		
	 	do
 		{  
		 	system("cls");
	   	 	cout<<" Authentification ["<<(*a)+1<<"]"<<endl<<endl;
	   	 
	  	 	cout<<" Register email  :: "; cin>>U[*a].email;
	  	 	
		 	cout<<" Register password   :: " ;
		 	
		 	K=true, i=0;
			
	   		while (K)
	   		{
		 		key=_getch();
	   			if ( key == 13 && (strlen(U[*a].password) > 0) )
			 	{
			 		U[*a].password[i] = '\0';
				 	K=false;
			 	}
				 	
			 	else if ( key == 8 )
	 			{
					if( i > 0 ) { cout<<"\b \b"; i--; }
	 			}	
	 				
			 	else if ( key != 13 && key !=27 ) 
				 	{
						U[*a].password[i] = key;
				 		cout<<"*";
				 		i++;
				 	}
	  	 	}
	   		
		 	cout<<"\n ESC - exit,  any key ...."<<endl;
		 	
	   	 	(*a)++;
		   
 		} while( _getch() != 27 );

 	}
 	
 	
 	void check_credentials(int *a)
 	{	
 		system("cls");
		
	 	bool xxx, temp, xx;
	 	int key, c=0, x;
	 	
	 	char email[256];
	 	char pass[256];
	 	
	 	U[*a].email;
	 	U[*a].password;		 	
		
	 	while( c<3 ) 
	 	{
	 		xxx = true;
	 		
		 	cout<<"\n Enter email :: ";
 			cin>>email;
 				
 			cout<<" Enter password :: ";
 			
 			x = 0;	
 			
 			while (xxx)		
		 	{
			 	key=_getch();
			
 				if ( key == 13 && strlen(pass) > 0 )
			 	{
			 		pass[x] = '\0';
				 	xxx=false;
			 	}
			 		
			 	else if ( key == 8 )
	 			{
					if( x > 0 ) { cout<<"\b \b"; x--; }
	 			}
	 				
 				else if ( key != 13 && key !=27 ) 
			 	{
				 	pass[x] = key;
				 	cout<<"*";
				 	x++;
			 	}	 			 	
		 	}
				
		 	cout<<endl;	

	 		temp = false;		 		 	 	
	 		for (int i=0; i < *a; i++)
 			{				  		 						
	 			if ( strcmp(U[i].email, email) == 0  && ( strcmp(U[i].password, pass) == 0 ) )
	 			{
				 	cout<<"\n YOU'VE ENTERED THE RIGHT CREDENTIALS !!!"<<endl<<endl;
				 	temp = true;
 					system("pause");
		 		}
			 			 	
	 		}	
	 		
	 		xx = false;
	 		
	 		if (temp) return;
	 			
	 		else
	 		{			 
	 			for (int i=0; i < *a; i++)
 				{				  		 						
	 				if ( ( strcmp(U[i].email, email) == 0 ) )
	 				{
	 					xx = true;
	 					c++;
					 	cout<<"\n WRONG PASSWORD !!! "<<endl<<" ATTEMPTS LEFT :: "<<3-c<<endl;
 						system("pause");
 						break;
		 			}
			 			 	
	 			}
				
			 	if (!xx)
			 	{
					c++;
					cout<<"\n WRONG CREDENTIALS!!! "<<endl<<" ATTEMPTS LEFT :: "<<3-c<<endl;
			 	}
	 		}
	 		
	 		cout<<endl;
	 		
	 	}
			 	cout<<"\n NO MORE ATTEMPTS LEFT!!! LEAVING PROGRAM..."<<endl<<endl;
			 	system("pause");
			 	exit (0);
 	}
 	
 	void edit_info_nume(int *n)
 	{	
 		system("cls");

	 	cin.getline(S[*n].nume,255);
	 		
	 	char replace_nume[256];
	 	
	 	cout<<"\n Cu ce nume doriti sa schimbati numele studentului ales ? :: ";
	 	cin.getline(replace_nume,255);	
		
 		strcpy(S[*n].nume, replace_nume);
	 	
	 	cout<<endl;
 	}
	 
	 
 	void edit_info_varsta(int *n)
 	{ 
 		system("cls");
 		
 		int replace_varsta;

	 	cout<<"\n Cu ce varsta doriti sa schimbati varsta de "<<S[*n].ani<<" ani ?  :: ";
	 	cin>>replace_varsta;	
		
	 	S[*n].ani = replace_varsta;
	 	cout<<endl;
 	}
 	
 	
 	void edit_note(int *n)
 	{
 		system("cls");
 		
 		switch( meniu_note() )
 		{	
 			
 			case 49 : 
 			{			
			 	cout<<endl;	 	
			 	
	 			do
	   			{
	   	 			cout<<"\t Enter nota ["<<S[*n].NrNOTE+1<<"]   :: "; cin>>S[*n].NOTE[ S[*n].NrNOTE ].NOTA;
	   	 	
	   	 			S[*n].Suma += S[*n].NOTE[  S[*n].NrNOTE  ].NOTA;

	   	 			S[*n].NrNOTE++;
	   	 		
	   	 			cout<<"\t --   NOTE   --   ESC - exit, any key ...."<<endl;
	   	 	 	
	     		} 	while( _getch() != 27 );
	
	     		S[*n].media = S[*n].Suma / S[*n].NrNOTE;
	      	   			
	     	} break;
 			
 			
 			case 50 : 
 			{			
			 	cout<<endl;	 
			 	S[*n].media = 0; S[*n].NrNOTE = 0; S[*n].Suma = 0; 
	 	
	 			do
	   			{
	   	 			cout<<"\t Enter nota ["<<S[*n].NrNOTE+1<<"]   :: "; cin>>S[*n].NOTE[ S[*n].NrNOTE ].NOTA;
	   	 	
	   	 			S[*n].Suma += S[*n].NOTE[  S[*n].NrNOTE  ].NOTA;

	   	 			S[*n].NrNOTE++;
	   	 		
	   	 			cout<<"\t --   NOTE   --   ESC - exit, any key ...."<<endl;
	   	 	 	
	     		} 	while( _getch() != 27 );
	
	     		S[*n].media = S[*n].Suma / S[*n].NrNOTE;
	     		
	     		(*n)++;
	      	   			
	     	} break;
	     	
 	    }		
 	}
 	
 	
 	void nume_stud(int *n)
 	{	
 		char stud[256];
 		S[*n].nume;
 		
 	  	if( *n > 0 )
	  	{
	 		do
	 		{
		 		system("cls");
		 				 		 			
	 			cout<<"\n Dati numele student cautat :: ";
	 			cin>>stud;
	 		
		 		
	 			for (int i=0; i<*n; i++)
	 			{				
	 				if ( strcmp(S[i].nume, stud) == 0 )
	 				{
	 					do
	 					{	 
		 					line1();cout<<(char)186<<setw(3)<<"ID"<<setw(3)<<(char)186<<setw(9)<<"NUME"
					 		<<setw(7)<<(char)186<<setw(7)<<"ANI"<<setw(4)<<(char)186
					 		<<setw(13)<<"NOTE"<<setw(10)<<(char)186
							<<setw(9)<<"MEDIA"<<setw(4)<<(char)186<<endl;line2();
		
		 					cout<<(char)186<<setw(3)<<i+1
			   				<<setw(3)<<(char)186<<setw(11)<<S[i].nume
					 		<<setw(5)<<(char)186<<setw(6)<<S[i].ani<<setw(5)<<(char)186;
			 				
						 	for (int j=0; j<S[i].NrNOTE; j++)
						 	{						 
							 	cout<<setw(3)<<S[i].NOTE[j].NOTA;
						 	}
						 	
						 	cout<<setw(23-S[i].NrNOTE*3)<<(char)186<<setw(9)<<S[i].media<<setw(4)<<(char)186<<endl;
							 		
			  				line3();		  				
						 							 
			  				switch( meniu_stud() )
			  				{
			  					case 49 : edit_info_nume(&i); break;
					 		 	case 50 : edit_info_varsta(&i); break;
					 		 	case 51 : edit_note(&i); break;
					 		 	case 27 : break;
						 	}
						 			
						} while( _getch() != 27 ); 	
			 			
				 	}	
				 	
			 	} 
						
		 	} while( _getch() != 27 );
	 	}
	 
	  	else
 	  	{ 
		 	system("cls");
	 		cout<<" Nu sunt studenti pentru cautare"<<endl;	
 	 	}		
 	}
 	
 	
 	void insert(int *n) 
 	{
 	    do
 		{  
		 	system("cls");
	   	 	cout<<" Student ["<<(*n)+1<<"]"<<endl;
	   	 
	  	 	cout<<" Enter nume  :: "; cin>>S[*n].nume;
	   		cout<<" Enter ani   :: "; cin>>S[*n].ani;
	   	 
	   		// cout<<" Enter media :: "; cin>>S[*n].media;
	   	 
	  	 	do
	   		{
	   	 		cout<<" Enter nota ["<<S[*n].NrNOTE+1<<"]   :: "; cin>>S[*n].NOTE[ S[*n].NrNOTE ].NOTA;
	   	 	
	   	 		S[*n].Suma += S[*n].NOTE[  S[*n].NrNOTE  ].NOTA;
	   	 		
	   	 		S[*n].NrNOTE++;
	   	 		
	   	 		cout<<"   --   NOTE   --   ESC - exit, any key ...."<<endl;
	   	 	 	
	     	} while( _getch() != 27 );
	     
 		S[*n].media = S[*n].Suma / S[*n].NrNOTE;
	    
 		(*n)++;
		 
 		cout<<" ESC - exit,  any key ...."<<endl;
		   
 		} while( _getch() != 27 );
 	}
	 
	 
 	void show(int n)
 	{
	 	// x- stud per pagina
	 	// in - inceput
	 	// sf - sfirsit
	 	
	 	int x=2, in=0, sf=x;
	 	bool EXIT=0;
	 	
	   		
	   	if( n > 0 )
	   	{
        
 			while(1)		
	  		{
	 	 		system("cls");

	 			line1();cout<<(char)186<<setw(3)<<"ID"<<setw(3)<<(char)186<<setw(9)<<"NUME"
				 			<<setw(7)<<(char)186<<setw(7)<<"ANI"<<setw(4)<<(char)186
				 			<<setw(13)<<"NOTE"<<setw(10)<<(char)186
						 	<<setw(9)<<"MEDIA"<<setw(4)<<(char)186<<endl;line2();
	
	 			for(int i=in; i < sf ; i++)
		 		{
	 				cout<<(char)186<<setw(3)<<i+1
		   				<<setw(3)<<(char)186<<setw(11)<<S[i].nume
				 		<<setw(5)<<(char)186<<setw(6)<<S[i].ani<<setw(5)<<(char)186;
		 				
					 	for (int j=0; j<S[i].NrNOTE; j++)
					 	{						 
						 	cout<<setw(3)<<S[i].NOTE[j].NOTA;
					 	}
					 	
					 	cout<<setw(23-S[i].NrNOTE*3)<<(char)186<<setw(9)<<S[i].media<<setw(4)<<(char)186<<endl;
					 	
					 	if (i<sf-1)
		  				line2();
	 			}
	 			
	 			line3();
		
		 		switch(_getch())
		 		{
		 			case 43 : in+=x; sf+=x; if( sf > n ){ in=n-2; sf=n; } break;
		 			case 45 : in-=x; sf-=x; if( in < 0 ){ in=0;   sf=x; } break;
		 			case 27 : EXIT=true;  
	 			}
	
		 		if( EXIT ) break;
 			}	
 		} 
		
 		else
 		{ 
		 system("cls");
		 cout<<" Nu sunt studenti pentru afisare"<<endl;	
 		}
 	}
	 
	 
 	void save(int n)
 	{
 		FILE *fp;
 		
 		if ( (fp = fopen (FNS, "w+b") ) == NULL )
 		{
 			cout<<" ERROR :: W+B "<<endl;
 			system("pause");
 			return;
 		}
 		
 		fwrite(S, sizeof(stud), n, fp);
 		
 		fclose(fp);
 	}
 	
 	
 	int load()
 	{
 		FILE *fp;
 		
 		if ( (fp = fopen (FNL, "r+b") ) == NULL )
 		{
 			cout<<" ERROR :: R+B "<<endl;
 			system("pause");
 			return 0;
 		}
 		
 		int n = fread(S, sizeof(stud), 1000, fp);
 		
 		fclose(fp);
 		
 		return n;
 	}
