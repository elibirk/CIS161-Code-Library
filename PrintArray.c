void PrintArray(char room[14][14], ofstream &outputstream) {
	/* ========================================================
	Leah Perry							CIS 161 Spring 2015
	MP6							 	Submitted: 4/25/15
	Prints the Array						Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	array room				array to print
	int row					row
	int column				column

	Functions Called		What They Do
	----------------		------------

	==========================================================*/
	//print array:
	for (int row = 0; row < 14; row++){
		for (int col = 0; col < 14; col++){
			cout << room[row][col];
			outputstream << room[row][col];
		}//end col for
		cout << endl;
		outputstream << endl;
	}//end row for

} //PrintArray
