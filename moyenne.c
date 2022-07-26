#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int verif(char s[20]) {
    int count = 0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
                count++;
        }
        
    }
    if (count == strlen(s))
    {
        return 1;
    }
    
    return 0;
}
int main()
{
     
    float note1, note2, moyenne, note, total;
    int i=3, som_coef=0, total_som=0, coef;
    char prenom[20],nom[20];
    char nmbr[20];
    char matiere[20];
    printf ("entrer prenom et nom: %s \n", prenom);
    scanf("%s", prenom);
    printf("entrer votre nom: %s \n", nom);
    scanf("%s", nom);
    printf("entrer le nombre de matiere  a composé: ");
    scanf("%s",nmbr);
while (verif(nmbr)==0)
{
    printf("incorrecte veuillez saisir des entiers : ");
    scanf("%s",nmbr);
}
for ( i=0; i<2; i++)                                             
{   
    printf ("entrer la matiere: ",matiere);
    scanf ("%s",matiere);                                                      
    printf("entrer vos deux notes en %s : ",matiere);        
    scanf("%f %f",&note1,&note2);
    while (note1<0 || note1>20 || note2>20 || note2<0)
    {
        printf("veuillez entrer des notes comprises entre 0 et 20: ");
        scanf("%f %f",&note1,&note2);    
    }                                      
    printf("entrer son coef: ");
    scanf("%d",&coef);
    note=(note1+note2)/2;                                 
    som_coef=som_coef+coef;
    total=note*coef;
    total_som=total_som+total;                                                      
    printf("la moyenne en %s est %f\n",matiere,note);                             
}
moyenne=(total_som)/som_coef;
printf("moyenne semestrielle est %f ",moyenne);
printf("la mention est ");
if (moyenne<10)
{
    printf("médiocre");
}
else if (moyenne==10)
{
    printf("passable");
}
else if (moyenne>=12 && moyenne<=14)
{
    printf("trés bien");
}
else if (moyenne>14)
{
    printf("excellent");
}
return 0;
}
  