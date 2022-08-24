#pragma once
#include <chrono>
#include <ctime>  
#include<vector>
#include"Trading_position.h"
namespace model{
class check {
public:
	check() = default;
	check(std::string time,std::string counterparty):time_(time),counterparty_(counterparty){}

	
	void Trading_position_add(Trading_position &other) {
		two.emplace_back(other);
	}
	void Trading_position_delete(Trading_position &other) {
		two.clear();
	}
	void set_time(std::string time){
		time_ = time;
	}
	std::string get_time() {
		return time_;
	}
	
	void set_counterparty(std::string counterparty) {
		counterparty_ = counterparty;
	}
	

private:
	
	std::string time_;
	std::string counterparty_;
	std::vector<Trading_position>two;
	};

}