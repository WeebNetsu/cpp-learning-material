#include <iostream>

using namespace std;

class Movie{
	private:
		// now only the Movie class can access these
		string title, director, rating;

	public:
		// constructor
		Movie(string aTitle, string aDirector, string aRating){
			setTitle(aTitle); //this->title = aTitle;
			setDirector(aDirector);
			setRating(aRating);
		}

		string getTitle(){
			return title;
		}

		string getDirector(){
			return director;
		}

		string getRating(){
			return rating;
		}

		void setTitle(string newTitle){
			title = newTitle;
		}

		void setDirector(string newDirector){
			director = newDirector;
		}

		void setRating(string newRating){
			if(newRating == "G" || newRating == "PG" || newRating == "PG-13" || 
				newRating == "R" || newRating == "NR"){
				rating = newRating;
			}else{
				cout << endl << "Invalid rating entered!" << endl;
				rating = "NR"; //sets default rating as NR (No rating)
			}
		}
};

int main(){
	Movie torodoro("Totrodoro", "Japanese man", "PG-13");

	torodoro.setRating("A");

	cout << torodoro.getRating();

	torodoro.setRating("PG");

	cout << endl << torodoro.getRating();


	return 0;
}