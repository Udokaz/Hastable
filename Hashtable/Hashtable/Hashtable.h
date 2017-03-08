#ifndef HASHTABLE_JACOB_H
#define HASHTABLE_JACOB_H
#include <iostream>
#include <vector>
#include "AnagramSet.h"

class Hashtable
{
	std::vector<AnagramSet> *table;//dynamic array
	int tableSize;

	Hashtable(int tableSize)
	{
		table = new std::vector<AnagramSet>[tableSize];
		this->tableSize = tableSize;
	}

	bool contains(const std::string &word) const; // tells you if a word is in the hashtable

	void inserWord(const std::string &word);

	void removeWord(const std::string &word);

	std::vector<std::string> getMatches(const std::string &word) const;

	std::vector<std::string> printMatches(const std::string &word) const;

	std::string letterSort(const std::string &word); //sorts the letters alphabetically

	int hasher(const std::string &word); //hashes the word and returns a number. The number will be the element location

};



#endif // !HASHTABLE_JACOB_H
