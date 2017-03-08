#include "AnagramSet.h"

bool AnagramSet::contains(std::string word) {

	for (int i = 0; i < wordSet.size(); i++)
	{
		if (wordSet[i] == word)
			return true;
	}
	return false;
}

void AnagramSet::insert(std::string word) {

	wordSet.push_back(word);

}

void AnagramSet::remove(std::string word) {

	for (int i = 0; i < wordSet.size(); i++)
	{
		if (wordSet[i] == word)
			wordSet.erase(i);
	}
}

std::string AnagramSet::getKey() const {

	return key;
}



std::ostream& operator<<(std::ostream &out, const AnagramSet &o)
{
	//out << o.mo << '/' << o.da << '/' << o.yr;


	return out;
}