#ifndef ANAGRAMSET_JACOB_H
#define ANAGRAMSET_JACOB_H
#include <iostream>
#include <vector>
//#include


class AnagramSet
{
	friend std::ostream& operator<<(std::ostream& out, const AnagramSet& o);

public:

	AnagramSet(std::string word)//key not in hashtable
	{
		key = letterSort(word);
		wordSet.push_back(word);
	}

	bool contains(std::string word); //if the word is in the AnagramSet

	void insert(std::string word);//if word not found adds it to the anagramSet

	void remove(std::string word);//looks for the word. If it finds it it removes it



	std::string getKey() const;

	//std::

private:

	std::vector<std::string> wordSet; // <...; "beast", "abets"...>

	std::string key;

};


#endif // !ANAGRAMSET_JACOB_H
