#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	private:
	public:
		// Constructors and destructor
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& other );
		virtual ~WrongAnimal( void );
		WrongAnimal &operator=( const WrongAnimal& other );

		// Member functions
		std::string	const&	getType( void ) const;
		void				makeWrongSound( void ) const;
};

std::ostream &operator<<( std::ostream & o, WrongAnimal const & i );

#endif