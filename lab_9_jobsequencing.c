#include <stdio.h>
#include <stdlib.h>

// Structure to represent a job
struct Job
{
	char id;
	int deadline;
	int profit;
};

// Function to compare two jobs based on profit
int compareJobs(const void *a, const void *b)
{
	return ((struct Job *)b)->profit - ((struct Job *)a)->profit;
}

// Function to find the maximum profit using job sequencing with deadlines
void jobSequencing(struct Job jobs[], int n)
{
	// Sort the jobs based on profit in descending order
	qsort(jobs, n, sizeof(struct Job), compareJobs);

	int maxDeadline = 0;
	for (int i = 0; i < n; i++)
	{
		if (jobs[i].deadline > maxDeadline)
		{
			maxDeadline = jobs[i].deadline;
		}
	}

	// Array to store the time slot allocation status
	int timeSlots[maxDeadline];
	for (int i = 0; i < maxDeadline; i++)
	{
		timeSlots[i] = -1; // -1 indicates a slot is empty
	}

	int totalProfit = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = jobs[i].deadline - 1; j >= 0; j--)
		{
			if (timeSlots[j] == -1)
			{
				timeSlots[j] = i;
				totalProfit += jobs[i].profit;
				break;
			}
		}
	}

	// Print the selected jobs and total profit
	printf("Selected Jobs: ");
	for (int i = 0; i < maxDeadline; i++)
	{
		if (timeSlots[i] != -1)
		{
			printf("%c ", jobs[timeSlots[i]].id);
		}
	}
	printf("\nTotal Profit: %d\n", totalProfit);
}

int main()
{
	struct Job jobs[] = {
		{'1', 2, 100},
		{'2', 1, 19},
		{'3', 2, 27},
		{'4', 1, 25},
		{'5', 3, 15}};

	int n = sizeof(jobs) / sizeof(jobs[0]);

	printf("Job Sequencing with Deadlines:\n");
	jobSequencing(jobs, n);

	return 0;
}
