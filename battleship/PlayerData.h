#pragma once
#include <iostream>

//using namespace std;

/**
 * @brief - It stores player data as int or double
 * @tparam T1 - Saving the result as int/double.
*/
template <typename T1>
class PlayerData
{
	std::string PlayerName;
	T1 score;
public:

	PlayerData();

	friend std::ostream& operator<<(std::ostream& os, PlayerData<T1>& player) {
		os << player.playerName << " Your score is: " << player.score;
		return os;
	}


	void setScore(T1 score);
	T1 getScore();

};

template<typename T1>
inline PlayerData<T1>::PlayerData() : score(0),PlayerName("")
{}

template<typename T1>
inline void PlayerData<T1>::setScore(T1 score)
{
	this->score = score;
}

template<typename T1>
inline T1 PlayerData<T1>::getScore()
{
	return score;
}




