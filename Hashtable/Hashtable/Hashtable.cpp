#include "Hashtable.h"

bool Hashtable::contains(const std::string &word) const // tells you if a word is in the hastable
{

}

void Hashtable::inserWord(const std::string &word)
{


}

void Hashtable::removeWord(const std::string &word)
{


}

std::vector<std::string> Hashtable::getMatches(const std::string &word) const
{


}

std::vector<std::string> Hashtable::printMatches(const std::string &word) const
{
	std::string key = letterSort(word);
	int hashLoc = hasher(word);
	for (int i = 0; i < table.size(); i++)
	{
		AnagramSet.getKey();
	}

}

std::string Hashtable::letterSort(const std::string &word) {

	char temp;
	std::string tempWord = word;
	for (int i = 0; i < tempWord.size(); i++)
	{
		for (int j = 0; j < (tempWord.size() - 1); j++)
		{
			if (tempWord[i] < tempWord[j])
			{
				temp = tempWord[i];
				tempWord[i] = tempWord[j];
				tempWord[j] = temp;
			}
		}
	}
	return tempWord;
}

int Hashtable::hasher(const std::string &word) {

	std::string key;
	key = letterSort(word);
	int number = 0;
	int hashedNumber;
	for (int i = 0; i < word.size(); i++)
	{
		number = word[i];
		number *= 3;
		number = number * number;
		hashedNumber = number + hashedNumber;
	}
	return hashedNumber % 50, 000;

}