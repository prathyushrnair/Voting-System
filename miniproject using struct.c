#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure definition for Candidate
typedef struct {
    int id;
    char name[50];
    int votes;
} Candidate;

// Function prototypes
void display_results(Candidate candidates[], int num_candidates, int is_final);
void clear_input_buffer();

int main() {
    int num_candidates, vote;
    Candidate *candidates = NULL;

    // Get number of participants
    printf("Enter the number of participants: ");
    if (scanf("%d", &num_candidates) != 1 || num_candidates <= 0) {
        printf("Invalid number of participants.\n");
        return 1;
    }
    clear_input_buffer();

    // Allocate array of Candidate structures
    candidates = (Candidate *)malloc(num_candidates * sizeof(Candidate));
    if (candidates == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize candidates
    for (int i = 0; i < num_candidates; i++) {
        candidates[i].id = i + 1;
        candidates[i].votes = 0;

        printf("Enter name for Candidate %d: ", i + 1);
        fgets(candidates[i].name, 50, stdin);
        candidates[i].name[strcspn(candidates[i].name, "\n")] = '\0'; // Remove newline
    }

    printf("\nVoting starts now. Options:\n");
    printf("- Enter candidate number (1-%d) to vote\n", num_candidates);
    printf("- Enter -1 to see current results\n");
    printf("- Enter 0 to end voting\n");

    // Voting loop
    while (1) {
        printf("\nEnter your choice: ");
        if (scanf("%d", &vote) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            continue;
        }

        if (vote == 0) {
            break;
        } else if (vote == -1) {
            display_results(candidates, num_candidates, 0);
        } else if (vote < 1 || vote > num_candidates) {
            printf("Invalid candidate number. Please try again.\n");
        } else {
            candidates[vote - 1].votes++;
            printf("Vote recorded for %s (Candidate %d).\n",
                  candidates[vote - 1].name, vote);
        }
    }

    // Display final results
    display_results(candidates, num_candidates, 1);

    free(candidates);
    return 0;
}

void display_results(Candidate candidates[], int num_candidates, int is_final) {
    printf("\n%s Vote Counts:\n", is_final ? "Final" : "Current");
    printf("---------------------------------\n");
    printf("ID\tName\t\tVotes\n");
    printf("---------------------------------\n");
    for (int i = 0; i < num_candidates; i++) {
        printf("%d\t%-15s\t%d\n",
              candidates[i].id,
              candidates[i].name,
              candidates[i].votes);
    }
    if (is_final) printf("\nVoting closed.\n");
}

void clear_input_buffer() {
    while (getchar() != '\n');
}
