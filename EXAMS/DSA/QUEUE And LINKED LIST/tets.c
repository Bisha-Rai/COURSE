#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node *next;
};

struct node *head = NULL;

void insert_at_beginning(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->info = data;
    newnode->next = head;
    head = newnode;
}

void insert_at_end(int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->info = data;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
        return;
    }
    struct node *ptr = head;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = newnode;
}

void insert_at_position(int data, int pos) {
    if (pos < 1) {
        printf("Invalid position.\n");
        return;
    }
    if (pos == 1) {
        insert_at_beginning(data);
        return;
    }

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    struct node *ptr = head;
    for (int i = 1; i < pos - 1; i++) {
        if (ptr == NULL) {
            printf("Enter valid position.\n");
            free(newnode);
            return;
        }
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Enter valid position.\n");
        free(newnode);
        return;
    }

    newnode->info = data;
    newnode->next = ptr->next;
    ptr->next = newnode;
    printf("Success!\n\n");
}

void delete_at_beginning() {
    if (head == NULL) {
        printf("List underflow.\n\n");
        return;
    }
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    printf("Deletion success.\n\n");
}

void delete_at_end() {
    if (head == NULL) {
        printf("List underflow.\n\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Deletion success.\n\n");
        return;
    }

    struct node *ptr = head;
    while (ptr->next->next != NULL)
        ptr = ptr->next;

    free(ptr->next);
    ptr->next = NULL;
    printf("Deletion success.\n\n");
}

void delete_at_position(int pos) {
    if (head == NULL) {
        printf("List underflow.\n\n");
        return;
    }

    if (pos == 1) {
        struct node *temp = head;
        head = head->next;
        free(temp);
        printf("Deletion success.\n\n");
        return;
    }

    struct node *ptr = head;
    for (int i = 1; i < pos - 1 && ptr != NULL; i++) {
        ptr = ptr->next;
    }

    if (ptr == NULL || ptr->next == NULL) {
        printf("Invalid position.\n\n");
        return;
    }

    struct node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
    printf("Deletion success.\n\n");
}

void display() {
    struct node *ptr = head;
    if (head == NULL) {
        printf("The list is empty.\n\n");
        return;
    }
    printf("List: ");
    while (ptr != NULL) {
        printf("%d\t", ptr->info);
        ptr = ptr->next;
    }
    printf("\n\n");
}

int main() {
    int choice, data, pos;
    while (1) {
        printf("\n1. Insertion at beginning\n2. Insertion at specified position\n3. Insertion at end\n");
        printf("4. Deletion at beginning\n5. Deletion at specified position\n6. Deletion at end\n");
        printf("7. Display\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insert_at_beginning(data);
                break;
            case 2:
                printf("Enter position and data: ");
                scanf("%d %d", &pos, &data);
                insert_at_position(data, pos);
                break;
            case 3:
                printf("Enter data: ");
                scanf("%d", &data);
                insert_at_end(data);
                break;
            case 4:
                delete_at_beginning();
                break;
            case 5:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                delete_at_position(pos);
                break;
            case 6:
                delete_at_end();
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}