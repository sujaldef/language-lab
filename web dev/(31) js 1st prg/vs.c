
#include <stdio.h>

#define MAX 100

void insert(int arr[], int *n, int element, int position);
void delete(int arr[], int *n, int position);
int search(int arr[], int n, int element);
void display(int arr[], int n);

int main()
{
  int arr[MAX], n, choice, element, position, result;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter the elements:\n");
  for (int i = 0; i < n; i++)
  {

    scanf("%d", &arr[i]);
  }
  while (1)
  {
    printf("\nOperations:\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter element to insert: ");
      scanf("%d", &element);
      printf("Enter position (0-based index): ");
      scanf("%d", &position);
      insert(arr, &n, element, position);
      break;
    case 2:
      printf("Enter position to delete (0-based index): ");
      scanf("%d", &position);
      delete (arr, &n, position);
      break;
    case 3:
      printf("Enter element to search: ");
      scanf("%d", &element);

      result = search(arr, n, element);
      if (result != -1)
        printf("Element found at index %d\n", result);
      else
        printf("Element not found\n");
      break;
    case 4:
      display(arr, n);
      break;
    case 5:
      return 0;
    default:
      printf("Invalid choice. Please try again.\n");
    }
  }

  return 0;
}

void insert(int arr[], int *n, int element, int position)
{
  if (position < 0 || position > *n)
  {
    printf("Invalid position\n");
    return;
  }

  for (int i = *n; i > position; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[position] = element;
  (*n)++;

  PrintF("Element inserted successfully\n");
}
void delete(int arr[], int *n, int position)
{
  if (position < 0 || position >= *n)
  {
    printf("Invalid position\n");
    return;
  }
  for (int i = position; i < *n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  (*n)--;

  printf("Element deleted successfully\n");
}

int search(int arr[], int n, int element)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == element)
      return i;
  }
  return -1;
}
void display(int arr[], int n)
{
  printf("Array elements: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}
