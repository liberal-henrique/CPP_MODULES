# ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock {
    public:
            Warlock(std::string const & name, std::string const & title);
            ~Warlock();
            std::string const & getName() const;
            std::string const & getTitle() const;
            void    setTitle(std::string const & newTitle);
            void introduce() const;
    private:
            Warlock();
            Warlock &operator=(Warlock const &other);
            std::string _name;
            std::string _title;
};

#endif