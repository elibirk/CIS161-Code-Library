void StringSearch(string FullStr, string FindTerm, ofstream &Output) {
	/* ========================================================
	Leah Perry				CIS 161 Spring 2015
	MP3					Submitted: 1/30/15
	Finds String In String and Reports	Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	string FullStr				store the string to search within
	string FindTerm				term to find
	int found				position where the term is found
	int size				stores the size of the term
	int i					determining how many times for should loop

	Functions Called		What They Do
	----------------		------------

	==========================================================*/

	int found; //position where the term is found
	int size = FindTerm.size();//gets the size of the term
	found = FullStr.find(FindTerm); //finds position of term within FullStr
	if (found == string::npos){ //if it was not found
		cout << "Term was not found within file." << endl;
		Output << "Term was not found within file." << endl;
	} else {
		cout << "String was found at position: " << found << endl; //prints where it was found
		Output << "String was found at position: " << found << endl; //prints where it was found
		
		if (FullStr.size() > 50 + size && found > 26 && found < FullStr.size() - 25 - size){//this one is first bc its most likely, speeds up code
			
			for (int i = found - 25; i < found; i++){
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << " "; //space to separate found string
			Output << " "; //space to separate found string
			for (int i = found; i < found + size; i++){
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << " "; //space to separate found string
			Output << " "; //space to separate found string
			for (int i = found + size; i < found + size + 25; i++){
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << endl;
			Output << endl;
			
		} else if (FullStr.size() < 50 + size) {//if the full string is less than the term + 25 on each end
			
			for (int i = 0; i < found; i++){//just print the full string, up to found
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << " "; //space to separate found
			Output << " "; //space to separate found string
			for (int i = found; i < size; i++){//just print found
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << " "; //space to separate found
			Output << " "; //space to separate found
			for (int i = found + size; i < FullStr.size(); i++){//just print the rest of the string
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << endl;
			Output << endl;
			
		} else if (found < 26) { //if the term is found 26 chars or earlier
		
			for (int i = 0; i < found; i++){//start at beginning of string and print up to found
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << " "; //space to separate found string
			Output << " "; //space to separate found string
			
			for (int i = found; i < found + size; i++){//print found
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << " "; //space to separate found string
			Output << " "; //space to separate found string
			
			for (int i = found + size; i < found + size + 25; i++){//print from found
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << endl;
			Output << endl;
			
		} else if (found > FullStr.size() - 25 - size) {//if the term is close to the end
		
			for (int i = found - 25; i < found; i++){//print until end of file
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << " "; //space to separate found string
			Output << " "; //space to separate found string
			
			for (int i = found; i < found + size; i++){//print until end of file
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << " "; //space to separate found string
			Output << " "; //space to separate found string
			
			for (int i = found + size; i < FullStr.size(); i++){//print until end of file
				cout << FullStr[i];
				Output << FullStr[i];
			}//end for
			
			cout << endl;
			Output << endl;
			
		}//end final else if

	}//end else	

}//StringSearch
