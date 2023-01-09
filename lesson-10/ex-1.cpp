   #include <iostream>

using namespace std;


class Shiritori final{
private:
    string words[100];
    bool game_over = false;
    int counter = 0;
    string message = "Game over";
public:
    shiritori();
    shiritori(string words){
        words = words;
    }
    string* play(string word){

        if (game_over == true){
            cout << "Game over. Restart the game.";
        }

        else{
            for(int i = 0; i <= counter; i++){
                if (words[i] == word){
                    game_over = true;
                    return &message;
                }
            }
            if (counter == 0){
                words[counter] = word;
                return words;
            }
            else{
                if (word[0] == words[counter].back()){
                    counter++;
                    words[counter] = word;
                    return words;
                }

            }
        }
        game_over = true;
        return &message;
    }
    void restart(){
        for(int i = 0; i < 100; i++){
            words[i] = "none";
        }
        game_over = false;
        counter = 0;
    }

    string* print_words(){
        return words;
        }
    };
