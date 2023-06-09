// File: CWords.h
// This header file contains the declaration for the CWords class. The class is used in CSnowmanGame to set up the words.

#ifndef CWords_h
#define CWords_h

const int NUM_WORDS = 30;	// number of words (functionally the number of newlines) in the file
const int CHAR_SIZE = 256;

class CWords
{
public:
	// constructor(s)
	CWords();

	// destructor
	~CWords();

	// public member functions
	void ReadFile();
	const char* GetRandomWord() const;

private:
	char* m_words[NUM_WORDS];	// NUM_WORDS pointers to a char
	int m_numWords;			// total words actually read from the file
};

#endif /* CWords_h */
