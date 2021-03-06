#ifndef _GENRE_H
#define _GENRE_H

#include <iostream>

class Genre {
  
  private:
    int _ID = 0;
    std::string _genre_name;

  public:
    Genre() = default;
    Genre(int,const std::string&);
    Genre(int);
    Genre(const std::string&);

    int& ID();
    std::string& genre_name();
    const int& ID() const;
    const std::string& genre_name() const;

    bool operator == (const Genre&) const;
    bool operator != (const Genre&) const;
    bool operator < (const Genre&) const;
    bool operator > (const Genre&) const;
    bool operator <= (const Genre&) const;
    bool operator >= (const Genre&) const;

    friend std::ostream& operator << (std::ostream&,const Genre&);
    friend std::istream& operator >> (std::istream&,Genre&);
};

#endif 






