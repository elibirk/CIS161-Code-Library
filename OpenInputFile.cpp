ifstream OpenInputFile(string file) {
	/* ========================================================
	Leah Perry				CIS 161 Spring 2015
	MP1					Submitted: 1/30/15
	Opens Input File			Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	string file				get filename
	ifstream instream			create input stream to file

	Functions Called			What They Do
	----------------			------------

	==========================================================*/
	ifstream instream;

	instream.open(file.c_str());  // Open the input stream
	if (instream.fail())    // If the input stream cannot open, report it then close the program
	{
		cerr << "\n\n Error. Cannot open " << file << endl;
	}
	else {
		cout << file << " has been opened.\n";
	}

	return instream;
}//opens instream
