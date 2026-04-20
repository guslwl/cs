// Desenvolva um programa em linguagem C que permita o cadastro de três produtos, incluindo
// nome, quantidade e preço. O programa deve calcular e exibir o valor total do estoque, permitir a
// simulação de uma venda (escolhendo o produto e a quantidade vendida), atualizar o estoque e
// recalcular o valor total após a venda.

// Develop a C program that allows the registration of three products, including
// name, quantity and price. The program must calculate and display the total stock value, allow
// the simulation of a sale (choosing the product and the quantity sold), update the stock and
// recalculate the total value after the sale.

#include<stdio.h>

#define NUM_PRODUCTS 3

struct Product {
  char name[50];
  int quantity;
  float price;
};

float totalStockValue(struct Product products[], int size);

int main()
{
  struct Product products[NUM_PRODUCTS];
  int choice, qtySold;

  for (int i = 0; i < NUM_PRODUCTS; i++)
  {
    printf("Product %d:\n", i + 1);
    // COMPLETE: read products[i].name
    // COMPLETE: read products[i].quantity
    // COMPLETE: read products[i].price
  }

  printf("Total stock value: %.2f\n", totalStockValue(products, NUM_PRODUCTS));

  printf("Choose a product to sell (1-%d): ", NUM_PRODUCTS);
  // COMPLETE: read choice (subtract 1 to use as index)

  printf("Quantity to sell: ");
  // COMPLETE: read qtySold

  // COMPLETE: check if there is enough stock; if so, subtract qtySold from products[choice].quantity

  printf("Updated total stock value: %.2f\n", totalStockValue(products, NUM_PRODUCTS));

  return 0;
}

float totalStockValue(struct Product products[], int size)
{
  float total = 0;

  for (int i = 0; i < size; i++)
  {
    // COMPLETE: add products[i].quantity * products[i].price to total
  }

  return total;
}
