#include <stdio.h>
#include <string.h>
struct Movie {
    char title[100];
    char genre[50];
    char director[50];
    int releaseYear;
    float rating;
};
int addMovie(struct Movie movies[], int count) {
    if (count >= 100) {
        printf("\nMovie list is full. Cannot add more movies.\n");
        return count;
    }

    printf("\nEnter movie title: ");
    scanf(" %[^\n]s", movies[count].title);
    printf("Enter genre: ");
    scanf(" %[^\n]s", movies[count].genre);
    printf("Enter director: ");
    scanf(" %[^\n]s", movies[count].director);
    printf("Enter release year: ");
    scanf("%d", &movies[count].releaseYear);
    printf("Enter rating (0.0 to 10.0): ");
    scanf("%f", &movies[count].rating);

    printf("\nMovie added successfully!\n");
    return count + 1;
}

void searchByGenre(struct Movie movies[], int count) {
    char searchGenre[50];
    printf("\nEnter genre to search: ");
    scanf(" %[^\n]s", searchGenre);
    int found = 0;
    int i;
    for ( i = 0; i < count; i++) {
        if (strcasecmp(movies[i].genre, searchGenre) == 0) {
            printf("\nTitle: %s\nGenre: %s\nDirector: %s\nRelease Year: %d\nRating: %.1f\n",
                   movies[i].title, movies[i].genre, movies[i].director,
                   movies[i].releaseYear, movies[i].rating);
            found = 1;
        }
    }

    if (!found) {
        printf("\nNo movies found in the genre '%s'.\n", searchGenre);
    }
}
void displayAllMovies(struct Movie movies[], int count) {
    if (count == 0) {
        printf("\nNo movies to display.\n");
        return;
    }
	int i;
    for ( i = 0; i < count; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Director: %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].releaseYear);
        printf("Rating: %.1f\n", movies[i].rating);
    }
}

int main() {
    struct Movie movies[100];
    int movieCount = 0;
    int choice;
     while (choice != 4) {
        printf("\n--- Movie Management System ---\n");
        printf("1. Add a New Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                movieCount = addMovie(movies, movieCount);
                break;
            case 2:
                searchByGenre(movies, movieCount);
                break;
            case 3:
                displayAllMovies(movies, movieCount);
                break;
            case 4:
                printf("\nExiting the program. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }

    return 0;
}

