#include <iostream>

using namespace std;

class Developer{
private:
    string first_name;
    string last_name;
public:

    Developer(string first_name, string last_name){
        first_name = first_name;
        last_name = last_name;
    }
    string name(){
        return first_name + " " + last_name;
    }
    Developer() {}
};

class Title{
private:
    string title_in_english;
    string title_in_polish;
public:
    Title(string title_in_polish, string title_in_english){
        title_in_polish = title_in_polish;
        title_in_english = title_in_english;
    }
    string polish(){
        return title_in_polish;
    }
    string english(){
        return title_in_english;
    }
    Title() {}
    };



class Game {
private:
    Developer developer;
    Title title;
    int year_of_release;
    int pegi;
public:
    Game(Developer developer, Title title, int year_of_release, int pegi){
    developer = developer;
    title = title;
    year_of_release = year_of_release;
    pegi = pegi;
    }
};


int main()
{
    Developer developer("Alexey", "Pajitnov");
    Title title("Tetris", "Tetris");
    Game tetris(developer, title, 1984, 3);
}
