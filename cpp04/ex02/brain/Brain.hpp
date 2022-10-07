#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		Brain(std::string ideas[]);
		
		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
		// Getters / Setters
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
		
	private:
		std::string _ideas[100];
		
};

#endif
