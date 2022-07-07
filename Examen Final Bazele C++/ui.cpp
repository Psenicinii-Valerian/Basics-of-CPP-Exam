
 	int meniu()
 	{ 
 		system("cls");	
	    
 		cout<<"\n\n\t *** MENIU STUDENT ***"<<endl;
 		cout<<"\t  1. Insert STUDENT  "<<endl;
 		cout<<"\t  2. Show STUDENT  "<<endl;
 		cout<<"\t  3. Cautare student dupa nume "<<endl;
 		cout<<"\t  4. SECRET!!! Show CREDENTIALS  "<<endl;
 		cout<<"\t  5. Insert more CREDENTIALS  "<<endl;
 		cout<<"\t  6. Save CREDENTIALS  "<<endl;
 		cout<<"\t  7. Load CREDENTIALS  "<<endl;
 		cout<<"\t  8. Save STUDENT  "<<endl;
 		cout<<"\t  9. Load STUDENT  "<<endl;
 		cout<<"\tESC. EXIT  "<<endl;
	
 		return _getch(); 
 	}
	 
	 
 	int meniu_note()
 	{
 		cout<<"\n\n\t *** MENIU EDITARE NOTE *** "<<endl;
		cout<<"\t 1. Continuare introducere note "<<endl;
 		cout<<"\t 2. Reintroducerea note "<<endl;
 		
 		return _getch(); 
 	}
 	
 	
 	int meniu_stud()
 	{ 
 		cout<<endl;
 		system("pause");	
	    
 		cout<<"\n\n\t *** MENIU STUDENT ALES ***"<<endl;
 		cout<<"\t  1. Editare Informatie Nume  "<<endl;
 		cout<<"\t  2. Editare Informatie Varsta  "<<endl;
 		cout<<"\t  3. Editare Note  "<<endl;
 		cout<<"\tESC. EXIT  "<<endl;
	 	
	 	return _getch(); 
 	}
	
