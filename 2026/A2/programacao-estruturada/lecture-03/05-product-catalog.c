// Crie uma estrutura Produto com nome, codigo, preco e quantidade. Escreva funcoes para
// cadastrar, listar e buscar um produto pelo codigo.
// Create a Product struct with name, code, price, and quantity. Write functions to
// register, list, and search for a product by code.

#include <stdio.h>

#define NAME_LEN 50
#define MAX_PRODUCTS 100

typedef struct {
    char name[NAME_LEN + 1];
    int code;
    float price;
    int quantity;
} Product;

int register_product(Product products[], int count, int max_count);
void list_products(const Product products[], int count);
int find_product_by_code(const Product products[], int count, int code);

int main(void)
{
    Product products[MAX_PRODUCTS];
    int count = 0;

    while(1 == 1)
    {
        printf("Menu:\n");
        printf("1. Register Product\n");
        printf("2. List Products\n");
        printf("3. Search Product by Code\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);
        getchar(); // Consume newline after choice input

        if (choice == 1) {
            register_product(products, count, MAX_PRODUCTS);
            count++;
        } else if (choice == 2) {
            list_products(products, count);
        } else if (choice == 3) {
            int code;
            printf("Enter product code to search: ");
            scanf("%d", &code);
            getchar(); // Consume newline after code input
            print_product_by_code(products, count, code);
        } else if (choice == 4) {
            break; // Exit the loop
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

int register_product(Product products[], int count, int max_count)
{
    if (count >= max_count) {
        printf("Product limit reached. Cannot register more products.\n");
        return count;
    }

    int newCount = count; // Use a separate variable to avoid modifying count until registration is successful

    products[newCount].code = count + 1; // Simple code assignment based on count

    printf("Enter name for product %d: ", products[newCount].code);
    fgets(products[newCount].name, sizeof(products[newCount].name), stdin);

    printf("Enter price for product %d: ", products[newCount].code);
    scanf("%f", &products[newCount].price);

    printf("Enter quantity for product %d: ", products[newCount].code);
    scanf("%d", &products[newCount].quantity);
    getchar(); // Consume newline after quantity input

    return newCount;
}

void list_products(const Product products[], int count)
{
    for (int i = 0; i < count; i++) {
        printf("Code: %d, Name: %s, Price: %.2f, Quantity: %d\n",
               products[i].code, products[i].name, products[i].price, products[i].quantity);
    }
}

int find_product_by_code(const Product products[], int count, int code)
{
    for (int i = 0; i < count; i++) {
        if (products[i].code == code) {
            return i;
        }
    }
    return -1;
}

void print_product_by_code(const Product products[], int count, int code)
{
    int index = find_product_by_code(products, count, code);
    if (index != -1) {
        printf("Code: %d, Name: %s, Price: %.2f, Quantity: %d\n",
               products[index].code, products[index].name, products[index].price, products[index].quantity);
    } else {
        printf("Product with code %d not found.\n", code);
    }
}
