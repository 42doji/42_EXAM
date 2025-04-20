#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <vector>
#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock( const Warlock& );
		Warlock& operator=( const Warlock& );

	public:
		Warlock( const std::string&, const std::string& );
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;

		void introduce() const;
		void setTitle( const std::string& );
};


#endif
