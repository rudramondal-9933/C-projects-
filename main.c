// SCIENTIFIC CALCULATOR 
// Made by Saptarshi & Rudra

#include <stdio.h>
#include <math.h>

int main() {
    int choice, x, y, temp, i, gcd, n,fact=1, minute, second,  q, binary,  remainder, place, result;
            
float a, b, meter, kilometre,cp,sp, profit,loss,p,r,t,si, weight, height,bmi, inch,cm,sec, min,c,f;
                
                
printf("\n===================================");
    printf("\n----📟 Scientific Calculator 📟----\n");
                printf("====================================\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Percentage (%)\n");
    printf("6. Square (^)\n");
    printf("7. Square Root\n");
    printf("8. Hours to Minutes\n");
    
    printf("9. Sceond to minute\n");
    printf("10. GCD\n");
    printf("11. LCM\n");
    printf("12. Sin(x°)\n");
    printf("13. Cos(x°)\n");
    printf("14. tan(x°)\n");
    printf("15. Meters to Kilometres\n");
    printf("16. kilometres to meters\n");
            printf("17. calculet your profit and loss\n");
            printf("18. Simple interest:\n");
            printf("19. Factorial calculation(!)\n");
            printf("20. Inch to cm:\n");
            printf ("21. CM to Inch\n");
                printf("22. Minutes to Hours\n");
    printf("23. Minute to sceond\n");
                            
            printf("24. Celsius to fahrenheit\n");
            printf("25. Fahrenheit to celsius \n");
            printf("26. Decimal to Binary\n");
            printf("27. Decimal to Octal\n");
                printf("28. Decimal to Hexadecimal \n");
                printf("29. Binary to Decimal\n");
                printf("30. Binary to Octal\n");
                printf("31. Binary to Hexadecimal\n");
                printf("32. Octal to Decimal\n");
                printf("33. Octal to Binary\n");
                printf("34. Octal to Hexadecimal\n");
                printf("35. Hexadecimal to Decimal\n");
                printf("36. Hexadecimal to Binary\n");
                printf("37. Hexadecimal to Octal\n");

    printf("===================================\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
                        printf("You selected Addition😎\n");
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", a + b);
                        printf("__________________________________\n");
            break;

        case 2:
                        printf("You selected Subtraction 👍\n");
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", a - b);
                        printf("__________________________________\n");
            break;

        case 3:
                        printf("You selected Multiplication 😅\n");
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", a * b);
                        printf("__________________________________\n");
            break;

        case 4:
                        printf("You selected division ☺️\n");
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            if (b != 0)
                printf("Result: %.2f\n", a / b);
            else
                printf("Cannot divide by zero!\n");
                        printf("__________________________________\n");
            break;

        case 5:
                       printf("You selected Persentage 🎉\n"); 
            printf("Enter obtained value and total value: ");
            scanf("%f %f", &a, &b);

            if (b != 0)
                printf("Percentage: %.2f%%\n", (a / b) * 100);
            else
                printf("Total value cannot be zero!\n");
                        printf("__________________________________\n");
            break;

        case 6:
                    printf("You selected Square ⬜\n");
            printf("Enter a number: ");
            scanf("%f", &a);
            printf("Square: %.2f\n", a * a);
                        printf("__________________________________\n");
            break;

        case 7:
                        printf("You selected Square Root 😮‍💨\n");
            printf("Enter a number: ");
            scanf("%f", &a);

            if (a >= 0)
                printf("Square Root: %.2f\n", sqrt(a));
            else
                printf("Negative number has no real square root!\n");
                        printf("__________________________________\n");
            break;

        case 8:
                        printf("You selected Hours to Minutes 😀\n");
            printf("Enter hours: ");
            scanf("%f", &a);
            printf("Minutes: %.2f\n", a * 60);
                        printf("__________________________________\n");
            break;
                       
                case 9:
                                printf("You selected Second to Minutes 😁\n");
                 
printf("Enter Second: ");
scanf("%f", &sec);

min = sec/ 60;

printf("Minute = %.2f", min);
                                printf("__________________________________\n");
                break;
                    

        case 10:
                        printf("You selected GCD 🎉\n");
            printf("Enter two integers: ");
            scanf("%d %d", &x, &y);

            if (x == 0 && y == 0) {
                printf("GCD is undefined!\n");
                
                break;
            }

            if (x < 0) x = -x;
            if (y < 0) y = -y;

            while (y != 0) {
                temp = y;
                y = x % y;
                x = temp;
            }

            printf("GCD: %d\n", x);
                        printf("__________________________________\n");
            break;

        case 11:
                       printf("You selected LCM 👍\n"); 
            printf("Enter two positive integers: ");
            scanf("%d %d", &x, &y);

            if (x <= 0 || y <= 0) {
                printf("Enter positive integers!\n");
                break;
            }

            for (i = 1; i <= x && i <= y; i++) {
                if (x % i == 0 && y % i == 0) {
                    gcd = i;
                }
            }

            temp = (x / gcd) * y;

            printf("LCM: %d\n", temp);
                        printf("__________________________________\n");
            break;
    
            case 12:
                            printf("You selected sin 🤔\n");
                        printf("Enter angle:");
                        scanf ("%f",&a);
                        printf("sin=%f\n",sin(a*3.14/180));
                            printf("__________________________________\n");
                break;
                
                case 13:
                                printf("You selected cos ✨ \n");
                                printf("Enter angle:");
                        scanf ("%f",&a);
                        printf("cos=%f",cos(a*3.14/180));
                                printf("__________________________________\n");
                break;
                    
                
                case 14:
                               printf("You selected ten 😉\n"); 
                                
                printf("Enter angle:");
                        scanf ("%f",&a);
                        printf("tan=%f",tan(a*3.14/180));
                                printf("__________________________________\n");

                break;
                    
                case 15:
                               printf("You selected Meter to kilometres 🚲\n"); 
                                
                printf("Enter dictation in metar:");
                scanf("%f",&meter);
                            kilometre=meter/1000;
                printf("%.2fkm", kilometre);
                                printf("__________________________________\n");
                break;
                    
                case 16:
                               printf("You selected Kilometer to Meter 🚲\n"); 
                                
                printf("Enter dictation in kilometre: ");
                scanf("%f",& kilometre);
                meter=kilometre*1000;
                printf("%.2fm", meter);
                                printf("__________________________________\n");
                                
                break;
                    
                case 17:
                                printf("You selected profit & Loss 💸💵🎉\n");

printf("Enter Cost Price: ");
scanf("%f", &cp);

printf("Enter Selling Price: ");
scanf("%f", &sp);

if (cp <= 0 || sp <= 0) {
    printf("Invalid Input! Try Again.\n");
}
else if (sp > cp) {
    profit = sp - cp;
    printf("Profit = %.2f\n", profit);
}
else if (cp > sp) {
    loss = cp - sp;
    printf("Loss = %.2f\n", loss);
}
else {
    printf("No Profit, No Loss\n");
}
                                printf("__________________________________\n");
                break;
                    
                case 18:
                               printf("You selected Simple interest 💵\n"); 
                
printf("Enter Principal: ");
scanf("%f", &p);

printf("Enter Rate: ");
scanf("%f", &r);

printf("Enter Time: ");
scanf("%f", &t);

si = (p * r * t) / 100;

printf("Simple Interest = %.2f", si);
                                printf("__________________________________\n");
                
                break;
                    
                case 19:
                                printf("You selected factorial 📟\n");

printf("Enter a number: ");
scanf("%d", &n);

for(i = 1; i <= n; i++)
{
    fact = fact * i;
}

printf("Factorial = %d", fact);
                                printf("__________________________________\n");
                break;
                    
                case 20:  
                                printf("You selected Inch to CM 🧑‍🦯\n");

printf("Enter Inch: ");
scanf("%f", &inch);

cm = inch * 2.54;

printf("CM = %.2f", cm);
                                printf("__________________________________\n");
                break;
                    
                case 21:
                                printf("You selected CM to Inch 🧑‍🦯\n");
                
printf("Enter CM: ");
scanf("%f", &cm);

inch = cm / 2.54;

printf("Inch = %.2f", inch);
                                printf("__________________________________\n");
                break;

                     case 22:
                                     printf("You selected Minutes to Hours 🫤\n");
            printf("Enter minutes: ");
            scanf("%f", &a);
            printf("Hours: %.2f\n", a / 60);
                        printf("__________________________________\n");
            break;

                    case 23:
                                    printf("You selected Minutes To second 🫤\n");
                                    
printf("Enter Minute: ");
scanf("%d", &minute);

second = minute * 60;

printf("Second = %d", second);
                printf("__________________________________\n");
                break;
                    
                case 24:
                                printf("You selected Celcius to fahrenheit 🥶🎉\n");
                
printf("Enter Celsius: ");
scanf("%f", &c);

f = (c * 9 / 5) + 32;

printf("Fahrenheit = %.2f", f);
                               printf("__________________________________\n");
                                break;
                    
                case 25:
                                
 printf("You selected Fahrenheit to celcius 🥵\n");               
printf("Enter Fahrenheit: ");
scanf("%f", &f);

c = (f - 32) * 5 / 9;

printf("Celsius = %.2f", c);
                                printf("__________________________________\n");
                    break;
                    

                case 26:
                                printf("You selected Decimal to Binary 📟\n");

                printf("Enter Decimal Number: ");
                scanf("%d", &q);
                binary = 0;
                place = 1;

                while(q > 0)
                            {
                                        remainder = q % 2;
                                        binary = binary + remainder * place;
                                        q = q / 2;
                                        place= place * 10;
                            }
                printf("Binary: %d\n", binary);
              printf("__________________________________\n");
                                break;

                case 27:
                                printf("You selected Decimal to Octal 🤔\n");
                            
                printf("Enter Decimal Number: ");
                scanf("%d", &q);
                int octal = 0;
                place = 1;

                while(q > 0)
                            {
                                        remainder = q % 8;
                                        octal = octal + remainder * place;
                                        q = q / 8;
                                        place= place * 10;
                            }
                printf("Octal: %d\n", octal);
                                printf("__________________________________\n");
                break;                    

                case 28:
                                printf("You selected Decimal to Hexadecimal 😎\n");

                char hexa[50];
                int w= 0;

                printf("Enter Decimal Number: ");
                scanf("%d", &q);
                if(q == 0)
                {
                   printf("Hexadecimal = 0\n");
                            break;
                }

                while(q > 0)
                            {
                                        remainder= q % 16;
                                        if(remainder < 10)
                                                    hexa[w] = remainder + '0';
                                       else
                                                    hexa[w]= remainder - 10 + 'A';
                                        w++;
                                        q = q / 16;
                            }
                printf("Hexadecimal: ");
                for(w = w - 1; w >= 0; w--)
                            printf("%c", hexa[w]);
                                printf("__________________________________\n");
                break;

                    case 29:
                                    printf("You selected Binary to decimal 😅\n");
                    {
                                    int bin, digit, decimal= 0, place= 1;
                                    printf("Enter Binary Number: ");
                                    scanf("%d", &bin);
                                    while(bin > 0)
                                                    {
                                                                    digit = bin % 10;
                                                                    if(digit != 0 && digit != 1)
                                                                    {
                                                                                    printf("Invalid Binary Number !\n");
                                                                                    decimal= -10;
                                                                                    break;
                                               }
                                                                    decimal= decimal + digit * place;
                                                                    place = place * 2;
                                                                                    bin = bin / 10;
                                                    }
                                    if(decimal != -1)
                                                   printf("Decimal: %d\n", decimal);
                                    printf("__________________________________\n");
                                     break;
                
                   }

                    case 30:
                                    printf("You selected Binary to octal 😁\n");
                                    
{
                    int bin, digit, decimal = 0, power = 1;
                
                                int octal = 0, place = 1;

                    printf("Enter Binary Number: ");
                    scanf("%d", &bin);

                    while(bin > 0)
                                    {
                                                    digit = bin % 10;
                                                    decimal += digit * power;
                                                    power *= 2;
                                                    bin /= 10; 
                                    }

                    while(decimal > 0)
                                    {
                                                    digit = decimal % 8;
                                                    octal += digit * place;
                                                    place *= 10;
                                                   decimal /= 8;
                                }
                    printf("Octal: %d\n", octal);
               printf("__________________________________\n"); 
                    break;
}

                    case 31:
                                    printf("You selected Binary to Hexadecimal 🎉\n");
                                    {
                                                    int bin, digit, decimal = 0, power = 1;
                                                    int remainder, i = 0;
                                                    char hexa[50];
                                                    printf("Enter Binary Number: ");
                                                    scanf("%d", &bin);
                                                    while(bin > 0)
                                                                    {
                                                                      digit = bin % 10;
                                                    decimal += digit * power;
                                                    power *= 2;
                                                    bin /= 10;
                                                                    }
                                                    while(decimal > 0)
                                                                    {
                                                                                    remainder = decimal % 16;
                                                                                    if(remainder < 10)
                                                    hexa[i] = remainder + '0';
                                       else
                                                    hexa[i]= remainder - 10 + 'A';
                                        i++;
                                         decimal /= 16;
                                                               }
                                                    printf("Hexadecimal: ");
                for(i = i - 1; i >= 0; i--)
                            printf("%c", hexa[i]);
                                                    printf("\n");
                                                   printf("__________________________________\n"); 
                                            break;
                                                    case 32:
                                                                    printf("You selected Octal to Decimal 🫡🎉\n");
                                                                    {
                                                                                    int oct, digit, decimal = 0, place = 1;
                            
                printf("Enter Octal Number: ");
                scanf("%d", &oct);

                while(oct > 0)
                            {
                                        digit = oct % 10;
                                        decimal += digit * place;
                                            place *= 8;
                                        oct /= 10;
                
                            }
                printf("Decimal: %d\n", decimal);
                                                                                    printf("__________________________________\n");
                break;
                                                                    }
                                    }
                

                    case 33:
                                   printf("You selected octal to binary 📟\n"); 
                                                    {
                    int oct, digit, decimal = 0, power = 1;
                                                                    int binary = 0, place = 1;
                

                    printf("Enter Octal Number: ");
                    scanf("%d", &oct);

                    while(oct > 0)
                                    {
                                                    digit = oct % 10;
                                                    decimal += digit * power;
                                                    power *= 8;
                                                    oct /= 10; 
                                    }

                    while(decimal > 0)
                                    {
                                                    digit = decimal % 2;
                                                    binary += digit * place;
                                                    place *= 10;
                                                   decimal /= 2;
                                }
                    printf("Binary: %d\n", binary);
                   printf("__________________________________\n");
                                                                    break;
                                                    }

                    case 34:
                                   printf("You selected Octal to Hexadecimal 🥲\n"); 
                                    {
                                                    int oct, digit, decimal = 0, power = 1, remainder, i= 0;
                                                    char hexa[50];
                                                    printf("Enter Octal Number: ");
                                                    scanf("%d", &oct);
                                                    while(oct > 0)
                                    {
                                                    digit = oct % 10;
                                                    decimal += digit * power;
                                                    power *= 8;
                                                    oct /= 10; 
                                    }
                                                    while(decimal > 0)
                                                                    {
                                                                                                                                                              remainder = decimal % 16;
                                                                                    if(remainder < 10)
                                                    hexa[i] = remainder + '0';
                                       else
                                                    hexa[i]= remainder - 10 + 'A';
                                        i++;
                                         decimal /= 16;
                                                               }
                                                    printf("Hexadecimal: ");
                for(i = i - 1; i >= 0; i--)
                            printf("%c", hexa[i]);
                                                    printf("\n");
                                                    printf("__________________________________\n");
                                            break;                      
                                    }
             case 35:
                            printf("You selected Hexadecimal to decimal 🫠\n"); 
                             
{
    char hexa[20];
                
    int decimal = 0, value, i;

    printf("Enter Hexadecimal: ");
    scanf("%s", hexa);

    for(i = 0; hexa[i] != '\0'; i++)
    {
        if(hexa[i] >= '0' && hexa[i] <= '9')
                        
            value = hexa[i] - '0';
        else if(hexa[i] >= 'A' && hexa[i] <= 'F')
                        
            value = hexa[i] - 'A' + 10;
        else
                        
            value = hexa[i] - 'a' + 10;

        decimal = decimal * 16 + value;
    }

    printf("Decimal = %d\n", decimal);
                printf("__________________________________\n");
    break;
}  
                    case 36:
                                    printf("You selected Hexadecimal To Binary 😀\n");
                                    
{
    char hexa[20];
    int i, value;

    printf("Enter Hexadecimal: ");
    scanf("%s", hexa);
                

    for(i = 0; hexa[i] != '\0'; i++)
                    
    {
        if(hexa[i] >= '0' && hexa[i] <= '9')
                        
            value = hexa[i] - '0';
        else if(hexa[i] >= 'A' && hexa[i] <= 'F')
                        
            value = hexa[i] - 'A' + 10;
        else
                        
            value = hexa[i] - 'a' + 10;

        printf("Binary: %d\n", (value / 8) % 2 * 1000 +
               (value / 4) % 2 * 100 +
               (value / 2) % 2 * 10 + value % 2);
    }

    printf("\n");
               printf("__________________________________\n"); 
    break;
}

                    case 37:
                                    printf("You selected Hexadecimal to Octal🎉\n");
                            
{
    int decimal = 0, digit, octal = 0, power = 1, i;
                
    char hexa[50];

    printf("Enter Hexadecimal: ");
    scanf("%s", hexa);

    for(i = 0; hexa[i] != '\0'; i++)
    {
        if(hexa[i] >= '0' && hexa[i] <= '9')
            digit = hexa[i] - '0';
        else
            digit = hexa[i] - 'A' + 10;

        decimal = decimal * 16 + digit;
    }

    while(decimal > 0)
    {
        octal += (decimal % 8) * power;
        power *= 10;
        decimal /= 8;
    }

    printf("Octal = %d\n", octal);
               printf("__________________________________\n"); 
    break;
}
                   
      
default: 
                                    printf("Invalid Choice❌\n");                  

    
     }

    return 0;
}
