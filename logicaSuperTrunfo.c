#include <stdio.h>

int main() {
   
nome = input("Nome da Cidade: ")
populacao = int(input("População: "))
area = float(input("Área (km²): "))
pib = float(input("PIB (em reais): "))

# Cálculos (variáveis do tipo float)
densidade populacional = float(populacao) / area
pib per capita = pib / float(populacao)

print(f"\nNome da Cidade: {nome}")
print(f"Densidade Populacional: {densidade_populacional:.2f} hab/km²")
print(f"PIB per Capita: {pib_per_capita:.2f} reais")

    return 0;
}
