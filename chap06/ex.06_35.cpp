#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessGame();
bool number( int, int );
void print( int );

int main()
{
   srand( time( 0 ) );
   guessGame();
}
void guessGame()
{
   int answer;
   int guess;
   int total;
   char a;
   do
   {

      answer = 1 + rand() % 1000;
      total = 0;
      cout << "I have a number between 1 and 1000.\n"
         << "Can you guess my number?\n"
         << "Please type your first guess." << endl << "? ";
      cin >> guess;
      total++;


      while ( number( guess, answer ) )
      {
         cin >> guess;
         total++;
      }
      cout << "\nExcellent! You guessed the number!\n";
      print( total );
      cout << "Would you like to play again (y or n)? ";
      cin >> a;
      cout << endl;}
   while ( a == y );
}
bool number( int g, int a )
{
   if ( g == a )
      return false;
   if ( g < a )
      cout << "Too low. Try again.\n? ";
   else
      cout << "Too high. Try again.\n? ";

   return true;
}
void print ( int count )
{
   if ( count < 10 )
      cout << "Either you know the secret or you got lucky!\n";
   else if ( count == 10 )
      cout << "Ahah! You know the secret!\n";
   else
      cout << "You should be able to do better!\n\n";
}
