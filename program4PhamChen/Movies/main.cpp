#include <iostream>
#include "Movie.h"
#include "Drama.h"
#include "Comedy.h"
#include "Classics.h"

using namespace std;

int main()
{
    Classics c_movie;
    Comedy f_movie;
    Comedy f_movie1;
    Drama d_movie;

    string movie_line1 = "F, 10, Nora Ephron, You've Got Mail, 1998";
    string movie_line4 = "F, 10, Nora Ephron, You've Got Mail, 1998";

    string movie_line2 = "D, 10, Steven Spielberg, Schindler's List, 1993";
    string movie_line3 = "C, 10, George Cukor, Holiday, Katherine Hepburn 9 1938";

    f_movie.parseString(movie_line1);
    d_movie.parseString(movie_line2);
    c_movie.parseString(movie_line3);

    cout << f_movie << endl;
    cout << d_movie << endl;
    cout << c_movie << endl;

    cout << (f_movie == f_movie1) << endl;

    cout << "Hello World!" << endl;
}