#pragma once
class GymMembership
{
private:
	int userID{};
	std::string name{};
	int months{};

public:
	GymMembership(int userID, std::string name, int months);
	GymMembership();
	int getID();
	void extendMembership(int months);
	void cancelMembership();
	void printMembership();
};

