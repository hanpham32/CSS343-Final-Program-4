// ------------------------------------------------ movieFactory.cpp----------------------------------------------------------
// Kristina Chen, Hannah Pham CSS 343 D
// 03/10/23
// 03/15/23
//--------------------------------------------------------------------------------------------------------------------
// Purpose - The header file which is a static class that has the ability to determine
//           movie genre and create the movie based on given input (factory design pattern)
//--------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions
// There are only 3 genres at this moment
//--------------------------------------------------------------------------------------------------------------------

#ifndef CSS343_FINAL_PROGRAM_4_MOVIEFACTORY_H
#define CSS343_FINAL_PROGRAM_4_MOVIEFACTORY_H
#include "Movie.h"
#include "Comedy.h"
#include "Classics.h"
#include "Drama.h"
const char COMEDY = 'F';
const char CLASSICS = 'C';
const char DRAMA = 'D';

class movieFactory {
    public:
        MovieFactory();     // constructor
        ~MovieFactory();    // destructor
        static Movie* createMovie(const char type);
};


#endif //CSS343_FINAL_PROGRAM_4_MOVIEFACTORY_H
