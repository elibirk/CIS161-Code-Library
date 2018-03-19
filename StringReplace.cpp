string StringReplace(string FullStr, int count, string Replacement, ofstream&Output){
	/* ========================================================
	Leah Perry				CIS 161 Spring 2015
	MP3					Submitted: 1/30/15
	Replaces a string within a string	Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	string FullStr				the full string to replace a piece of
	string tempReplace			a temp string to store the length of the string piece to be replaced
	string Replacement			the string to replace with
	int count				the position where replacement begins
	int count2				points to the characters in FullStr, in order to collect tempReplace
	char ch					characters to add to tempReplace

	Functions Called			What They Do
	----------------			------------

	==========================================================*/
	string tempReplace;
	int count2;
	char ch;
	count2 = count;
	ch = FullStr[count];

	while (ch != ' ') {//up until the next space
		tempReplace = tempReplace + ch; //add ch to tempReplace
		count++;//increment position
		ch = FullStr[count];//ch is next char from file
	}//end while
	
	FullStr.replace(count2, tempReplace.length(), Replacement); //replaces the content
	cout << tempReplace << " replaced with " << Replacement << "." << endl;
	Output << tempReplace << " replaced with " << Replacement << "." << endl;
	return FullStr;
	
}//StringReplace
