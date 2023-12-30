#include <cs50.h>
#include <stdio.h>
#include <strings.h>

// Max number of candidates
#define MAX 9

// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];

// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
} pair;

// Array of candidates
string candidates[MAX];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: tideman [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i + 1];
    }

    // Clear graph of locked in pairs
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }

    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

    // Query for votes
    for (int i = 0; i < voter_count; i++)
    {
        // ranks[i] is voter's ith preference
        int ranks[candidate_count];

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }

        record_preferences(ranks);

        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}


// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcasecmp(name, candidates[i]) == 0)
        {
            ranks[rank] = i;
            return true;
        }
    }
    return false;
}

// Update preferences given one voter's ranks
void record_preferences(int ranks[])
{
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = i + 1; j < candidate_count; j++)
        {
            preferences[ranks[i]][ranks[j]]++;
        }
 }
 return;
}

// Record pairs of candidates where one is preferred over the other
void add_pairs(void)
{
    for (int row = 0 ; row < candidate_count; row++)
    {
        for (int col = row + 1; col < candidate_count; col++)
        {
            //pref [row][col] = x , x people pref row over col...compare that to x people pref col over row.

            int candidate_A = preferences[row][col];
            int candidate_B = preferences[col][row];
            if (candidate_A != candidate_B)
            {
                pair c;
                if (candidate_A > candidate_B)
                {
                    c.winner = row;
                    c.loser = col;
                }
                else
                {
                    c.winner = col;
                    c.loser = row;
                }
                pairs[pair_count++] = c;
            }
            }
        }


    return;
}

// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{

   for (int i = 0; i < pair_count; i++)
   {
        int maxIdx = i;
        int margin =  preferences[pairs[i].winner][pairs[i].loser] - preferences[pairs[i].loser][pairs[i].winner];
        {
            for (int j = i + 1; j < pair_count; j++)
            {
                int tempMargin = preferences[pairs[j].winner][pairs[j].loser] - preferences[pairs[j].loser][pairs[j].winner];
                if (tempMargin > margin)
                {
                    maxIdx = j;
                    margin = tempMargin;
                }
            }
            pair temp = pairs[maxIdx];
            pairs[maxIdx] = pairs[i];
            pairs[i] = temp;
        }
   }
 return;
}
// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
    int findcycle[pair_count - 1];
     for (int i = 0; i < pair_count; i++)
    {
    for (int j = 0; j < pair_count; j++)
        {
            if (findcycle[j] == pairs[i].loser)
            {
                locked[pairs[i].winner][pairs[i].loser] = false;
                break;
            }
            else
            {
                locked[pairs[i].winner][pairs[i].loser] = true;
                findcycle[i] = pairs[i].winner;
            }

        }
    }
    return;
}
// Print the winner of the election
void print_winner(void)
{
    // TODO
    return;
}


