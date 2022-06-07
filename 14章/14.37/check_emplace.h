#pragma once
class check_emplace {
public:
	check_emplace(int c1,int c2) :check_number(c1),change_number(c2) {};
	void operator()(int& goal) {
		if (goal == check_number) {
			goal = change_number;
		}
	}
private:
	int check_number;
	int change_number;
	
};