#include <stdio.h>

const struct dialing_code {
  char *country;
  int code;
} country_codes[] = {
{"Argentina", 54}, {"Bangladesh", 880},
{"Brazil", 55}, {"Burma (Myanmar)", 95},
{"China", 86}, {"Colombia", 57},
{"Congo, Dem. Rep. of", 243}, {"Egypt", 20},
{"Ethiopia", 251}, {"France", 331},
{"Germany", 49},{"India", 91},
{"Indonesia", 62}, {"Iran", 98},
{"Italy" , 39}, {"Japan" , 81},
{"Mexico", 52}, {"Nigeria", 234},
{"Pakistan", 92}, {"Philippines", 63},
{"Poland" , 48}, {"Russia" , 7},
{"South Africa", 27}, {"South Korea", 82},
{"Spain" , 34}, {"Sudan" , 249},
{"Thailand", 66}, {"Turkey" , 90},
{"Ukraine" , 380}, {"United Kingdom", 44},
{"United States", 1}, {"Vietnam", 84 }
};

int main(void) 
{
  int usercode, len = (int) sizeof(country_codes) / (int) sizeof(country_codes[0]);
  printf("Enter a dialing code to look up: ");
  scanf("%d", &usercode);

  for (int i = 0; i < len; i++)
    if (usercode == country_codes[i].code) {
      printf("You have entered the country code for %s\n", country_codes[i].country);
      return 0;
    }
  printf("Country code not found.\n");
  return 1;

}
