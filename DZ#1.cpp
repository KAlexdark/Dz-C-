#inclube <iostream>

int schet(int x) {
  int schetchic{ 0 };
  int peremens_vivod{ 0 };
  while (schetchic += 2) {
    peremens_vivod += % 10;
    x + x /10;
    schetchic++;
  }
  std::cout << peremens_vivod << "\n";
  return 0;
}

int schet2(int x) {
  int y = ((x % 100) / 10) * ((x % 100) / 10);
  int t = (x / 100) + (x % 100);
  t > y ? std::cout << "Yes" : std::cout << "No";
  return 0;
}

int proverka(int proverka_peremens, int x) {
  if(99 < proverka_peremens && proverka_peremens < 1000){
    x == 1 ? schet(proverka_peremens): schet2(proverka_peremens);
  }
  else
  {
    std::cout << "Error: не правильный тип данных \n";
    return 0;
  }
}

int vivod(int proverka_vhod,int peremen_vibor) {
  std::cout << "Program vibor cactvia\n";
  std::cout << "1: Zadacha_#1\n";
  std::cout << "2: Zadacha_#2\n";
  std::cin >> peremen_vibor;
  switch(peremen_vibor)
  {
  case 1:
      std::cout << "Vedite chislo: \n";
      std::cin >> peremen_vibor;
      proverka(proverka_vhod, peremen_vibor);
      break;
  case 2:
      std::cout << "Vedite chislo: \n";
      std::cin >> peremen_vibor;
      proverka(proverka_vhod, peremen_vibor);
      break;
  default:
      std::cout << "Error2: нет такого номера\n";
      break;
  }
  return 0;
}

 int main (int vibor) {
   vibod();
 }
