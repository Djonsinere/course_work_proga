#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Определение структуры узла
typedef struct Node {
    int value;
    int count; // Счетчик для хранения количества повторений
    struct Node* left;
    struct Node* right;
} Node;

// Создание нового узла
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Ошибка выделения памяти\n");
        exit(1);
    }
    newNode->value = value;
    newNode->count = 1;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Вставка элемента в дерево
Node* insert(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value == root->value) {
        root->count++;
    } else if (value < root->value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

// Поиск элемента и подсчет его вхождений
int search(Node* root, int value) {
    if (root == NULL) {
        return 0;
    }
    if (value == root->value) {
        return root->count;
    } else if (value < root->value) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Симметричный обход дерева
void inOrderTraversal(Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d(%d) ", root->value, root->count);
        inOrderTraversal(root->right);
    }
}

// Освобождение памяти дерева
void freeTree(Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    Node* root = NULL;
    char input[512]; // Для ввода строки чисел
    int number;

    // Ввод данных
    printf("Введите список чисел через пробел (не более 100 чисел): ");
    fgets(input, sizeof(input), stdin);

    // Разделение строки на числа
    char* token = strtok(input, " ");
    while (token != NULL) {
        int value = atoi(token);
        root = insert(root, value);
        token = strtok(NULL, " ");
    }

    // Симметричный обход дерева
    printf("Симметричный обход дерева: ");
    inOrderTraversal(root);
    printf("\n");

    // Поиск числа
    printf("Введите число для поиска: ");
    scanf("%d", &number);
    int count = search(root, number);
    if (count > 0) {
        printf("Число %d встречается %d раз(а) в дереве.\n", number, count);
    } else {
        printf("Число %d не найдено в дереве.\n", number);
    }

    // Очистка памяти
    freeTree(root);
    return 0;
}
