#include <iostream>
#include "Movie.h"
#include "Movies.h"


#include<string>





void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);


void increment_watched(Movies &movies, std::string name){
	if(movies.increment_watched(name) ){
		std::cout << name << "  watch incremented" << std::endl;
		
	}else{
		std::cout << name << " not found " << std::endl;
		
	}
	
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched){
	if(movies.add_movie(name,rating, watched)){
		std::cout << name << " movie added " << std::endl;
	}else{
		std::cout << name << " already exists" << std::endl;
	}
	
}

int main(){
	Movies my_movies;
	
	my_movies.display();
	
	
}
