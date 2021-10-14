#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{ 
int e;
cout << "First game, second game, third game or fourth, a calculator? (1, 2, 3 or 4) ";
cin >> e;

if (e == 1){
int c;
 cout << "You find 4 caves, one contains treasure, the rest are traps. Which one will you choose? (1, 2, 3 or 4) ";
cin >> c; 

    srand((unsigned)time(0)); 
    int i;
    i = (rand()%4)+1; 
    cout << i << "\n"; 

if (i == c) {
  cout << "You walked into the cave, and saw the most gold, diamonds and gems that you have ever seen. You Win!" << endl; 
}
   
if (i != c) {
  srand((unsigned)time(0)); 
    int d;
    d = (rand()%3)+1; 
    if (d==1){
      cout << "You walked into the cave, and a wave of poison darts hits you! You Lose!" << endl;
    }
if (d == 2){
  cout << "You walked into the cave, and the cave floor dissapeared! You Lose!" << endl;
}

if (d == 3){
  cout << "You walked into the cave, and a spike impaled you from the ceiling! You Lose!" << endl;
}

}

}

if (e == 2){

int fn, sn, sotn, an; 

cout << "Type two numbers and try to guess the answer (The first one has to be bigger than the second one, It's either multiplucation, subtraction or addition) : ";
cin >> fn >> sn;


 srand((unsigned)time(0)); 
    int k;
    k = (rand()%3)+1;

    if (k == 1){
    cout << "What is your guess? ";
    cin >> an;

    sotn = fn + sn;

    if (sotn == an) {
      cout << "Correct!" << endl;
    }
    if (sotn != an){
      cout << "Wrong! The answer was " << sotn << endl;
    }
    } 
  if (k == 2){
    cout << "What is your guess? ";
    cin >> an; 

    sotn = fn - sn;

    if (sotn == an) {
      cout << "Correct!" << endl;
    }
    if (sotn != an){
      cout << "Wrong! The answer was " << sotn << endl;
  }


}
if (k == 3){
cout << "What is your guess? ";
cin >> an;

sotn = fn * sn;

 if (sotn == an) {
      cout << "Correct!" << endl;
    }
    if (sotn != an){
      cout << "Wrong! The answer was " << sotn << endl;
}

}

}

if (e == 3){
int w;
cout << "Guess how much jelly beans are in the jar (limit of 178): ";
cin >> w; 
srand((unsigned)time(0)); 
    int p;
    p = (rand()%178)+1; 
    
    if (p == w) {
      cout << "You guessed correctly! There were " << p << " jelly beans in the jar." << endl;
    }
if (p != w) {
cout << "Sorry, your guess was incorrect. There were " << p << " jelly beans in the jar." << endl;
}

}
if (e == 4) { 
  double fn, sn, sotn;
 char ch;

cout << "Multiplication, addition, subtraction, division, square root, exponent, percent increase, percent decrease, decrease percent of change, or increase percent of change? (m, a, s, d, z, h, w, x, l, or j): ";
cin >> ch;
if (ch == 'm') {  

cout << "Enter two numbers: ";
cin >> fn >> sn;

sotn = fn * sn; 

cout << fn << " * " << sn << " = " << sotn <<endl;
}

if (ch== 'a') {

cout << "Enter two numbers: ";
cin >> fn >> sn;

sotn = fn + sn;

cout << fn << " + " << sn << " = " << sotn <<endl;

}

if (ch == 's'){

cout << "Enter two numbers in the order you want them to be subtracted: ";
cin >> fn >> sn;

sotn = fn - sn;

cout << fn << " - " << sn << " = " << sotn <<endl; 

}

if (ch == 'd'){

cout << "Enter two numbers in the order you want them divided: ";
cin >> fn >> sn;
sotn = fn / sn; 

cout << fn << " ÷ " << sn << " = " << sotn << endl;

}

if (ch == 'z'){

cout << "Enter a number that you want the square root of: ";
cin >> fn;
sotn = sqrt(fn);

cout << "The square root of " << fn << " is " << sotn << "." << endl;

}

if (ch == 'h'){

cout << "Enter the base then the power: ";
cin >> fn >> sn;

sotn = pow(fn,sn); 

cout << "The answer is " << sotn << "." << endl;

}

if (ch == 'w') {

cout << "Type in the starting value and then the percent as a decimal: ";
cin >>  fn >> sn;

sotn = fn * (1 + sn);

cout << "The snawer is " << sotn << "." << endl;


}

if (ch == 'x') {

cout << "Type in the starting value and then the percentage rate as a decimal: ";
cin >> fn >> sn;

sotn = fn * (1 - sn);

cout << "The answer is " << sotn << "." << endl;

}


if (ch == 'l'){

cout << "Type in the starting number and then the decreased number: ";
cin >> fn >> sn;

sotn = (((sn / fn) - 1) / -1) * 100;

cout << "The answer is " << sotn << "%." << endl;

}

if (ch == 'j'){

cout << "Type in the starting value and then the increased value: ";
cin >> fn >> sn;

sotn = ((sn / fn) - 1) * 100;

cout << " The answer is " << sotn << "%." << endl;

}

}


}