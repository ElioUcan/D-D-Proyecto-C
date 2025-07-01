#include <stdio.h>

int main(){
    char seleccion;
    seleccion = 'a';
    //unión con la parte de Elio
    printf("Excelente el jefe muere y suelta una advertencia, el siguiente jefe esta en la siguiente recamara el no sera tan facil como yo");
    printf("\nQue haces?");
    printf("\na.Continuas a la siguiente recamara eres valiente");
    printf("\nb.Te vas ya esto ha sido suficiente para ti\n");
    scanf(" %c", &seleccion);
    switch (seleccion)
    {
    case 'a': 
    //Parte Nahum
    //PRIMERA PREGUNTA
        printf("continuas en la siguiente habitacion y ves hasta el fondo una recompensa que no pueden creer tus ojos");
        printf("\nDe pronto te das cuenta que estas rodeado por miles de copias en todas las direcciones que intentan ir por tus tesoro");
        printf("\nla incertidumbre de invade, el miedo te ataca \nQue hacesn?\n");
        printf("\na. Atacar a tus copias para no compartir tu recompensa"); //case a
        printf("\nb. ignoras y pones los ojos en tu objetivo"); //case b
        scanf(" %c", &seleccion);
        break;
    case 'b':  
        printf("\nHasta aquí has decido dejar la aventura, sin recompesa, pero vivo.");
        printf("\nvolviste a tu casa, tuviste una larga vida, hiciste una familia y te volviste granjero");
        printf("\npero en ningun momento de tu vida olvidaste la duda de lo que se ocultaba tras la mazmorra.");
        printf("\nSeguiste, pero nunca resolviste la gran incognita que arrastrastró tu juventud y te persiguio en tu vejez");
        return 0;                                    
    default:
    printf("\nEsa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino");
        return 0;
    }
    if (seleccion=='a'){ 
        printf("\ngolpeas brutalmente a la primera copia que se te acerca, la furia te hace darle un golpe morta");
        printf("\natraviesas su corazon por la espalda");
        printf("\ntan pronto como lo acuchillas, viene alguien a ti y te atraviesan");
        printf("\nen cuestion de minutos mueres y lo ulitmo que ves es como tus copias una por una se atraviesan entre ellos por tu avaricia");
        return 0;
    //SEGUNDA PREGUNTA
    }else if (seleccion=='b'){ 
        printf("\nignoras a tus ojos y empiezas a correr, de pronto tus copias se desvanecen para dar paso a una cascada de monedas de plata que lentamente sube su intensidad");
        printf("\nque haces?\n"); //esta pregunta tiene truco, da igual si elige A ó B, le va a llevar al mismo resultado.
        printf("\na. irte con pocas monedas para no ser aplastado");  //case a
        printf("\nb. ganar más monedas aunque la cascada de plata te pueda matar"); //case b
    }else{
        printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino");
        return 0;
    }
    //TERCERA PREGUNTA
    printf("\nTe das cuenta que puerta no se ha abierto, tienes que esperar"); 
    printf("\nde pronto empiezan a caer joyas de oro, monedas, coronas de todos los reinos y obejetos tan lujos nunca vistos por un campesino como tu");
    printf("\nves tanto oro que te deslumbra su brillo, la mazmorra parece estar hecha de piedras preciosas con tantas joyas rodeandote");
    printf("\nLa euforia de gozar las riquezas del mundo te ciega, aunque la puerta ya esta abierta.");
    printf("\nQue haces?"); 
    printf("\na. Dejar de un lado la riquezas e irte"); //case a
    printf("\nb. Seguir agarrando el oro para asegurar tu felicidad"); //case b
    scanf(" %c", &seleccion);
    
    switch (seleccion)
    {
    case 'a':
        printf("\nagarraste todo lo que pudiste, lo suficiente para vivir un par de vista fuera de la pobreza y el trabajo duro");
        printf("\ntan pronto como saliste se destruyó la mazmorra y la montaña que la contenía.");
        printf("\nEl mar de riquezas que dejaste atras quedo sepultado bajo miles de toneladas de piedra");
        printf("\nno puedes creer lo que paso, el dia que cambio tu vida para siempre, pero no puedes contarlo.");
        printf("\nel pueblo cuenta la historia del dia que un terremoto destruyo la montaña");
        printf("\nviviste una larga vida, tuviste una gran familia y supiste multiplicar tus riquezas");
        printf("\ntu nombre se volvió poderoso en toda la tierra, pero te llevaste este secreto a tu tumba.");
        printf("\ngracias por jugar");
        break; //aquí termina el caso A del juego con el good ending, debo poner break o return 0?
    case 'b':
        printf("\ntu avaricia te hizo pargarlo caro. la gran cascada de oro te aplasto en tus riquezas");
        printf("\nestabas tan concentrado en saber como ibas a gastar tanto dinero que ni te diste cuenta que moriste");
        printf("\nen las tierras vecinas se cuenta la historia de un hombre que encontró una fortuna que ni el mil vidas podría gastar");
        printf("\nTe convertiste en un mito por tu egoismo"); //aquí termina el caso A del juego con el good ending, debo poner break o return 0?
        break;
    default:
        printf("\nEsa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino");
        break; //aquí termina el caso A del juego con el good ending, debo poner break o return 0?
    }

    return 0;
}

