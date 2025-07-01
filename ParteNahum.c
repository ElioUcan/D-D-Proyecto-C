#include <stdio.h>

/*NOTA PRINCIPAL ERROR:
 this statement may fall through [-Wimplicit-fallthrough=]
 Este es un error muy comun con el que me tope el error ocurre porque 
 no se escribe un break; al final de cada linea dentro del SWITCH
 aunque tengamos un if si ese se encuentra dentro de un switch obligatoriamente
 tenemos que poner un break; es como un continue en python*/
 
/*
Linea 79 

LINEA 140

EN esas lineas les corresponde terminar la historia terminenla con sentido y con los if o switch que quieran pero no la hagan muy corta porfa
*/

//Otra cosa en cualquier else(en caso de if) o default(en caso de switch) pongan el siguiente mensaje:
/*printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
  return 0; */


//ES TODO MUCHA SUERTE 

int main(){
    char seleccion; /*Seleccion es la variable que ustedes tienen que usar siempre en su codigo lo que dice esta variable es que seleccion toma el usuario
                      Como pueden ver en el codigo siempre se reutiliza no la cambien para llevar un orden y no andar reescribiendo codigo*/

    printf("Apareces en un bosque nublado y te encuentras con una puerta, entras a un cuarto grande donde ves a un Ogro\n");
    printf("Que haces?\na.Le pregunto la hora"); 
    printf("\nb. Lo ataco\n");
    printf("c.regreso a casa a dormir\n");
    scanf(" %c", &seleccion); //Primera seleccion que se hizo
    switch (seleccion) //Aqui uso el switch para no andar poniendo muchos if else ni else if ni else(Traten de hacer lo mismo)
    {
        case 'a':
            printf("Te contesta que son las 5:30pm");
            printf("\na.Le das las gracias");
            printf("\nb.Lo retas a un duelo de caballeros\n");
            scanf(" %c", &seleccion); //Como ven aqui reescribo la variable
            break; //Lo que hace este break es salir del SWITCH mas no termina la ejecucion del codigo, esto es necesario para que continuemos con las opciones
        case 'b':
            printf("Te ataca de vuelta");
            printf("\nMueres");
            printf("\nGRACIAS POR JUGAR!!\n");
            return 0; //Por el contrario aqui uso un return 0 terminando el codigo ya que como dice el mensaje es usuario a muerto entonces se acaba el juego
        case 'c':
            printf("Tenias mucho sueño y descansas");
            printf("\n GRACIAS POR JUGAR!!\n");
            return 0;
        default: //default es como el else es lo que se ejecuta si no se cumplio ningun case
            printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
            return 0; 
    }
    switch (seleccion)
    {
        case 'a': //case A
            printf("Te dice que no es nada y te invita a continuar a la siguiente habitacion no sin antes, advertirte que hay peligros mas adelante");
            printf("\nEntras en la siguiente habitacion y hay un  cofre del tesoro que haces?");
            printf("\na.Lo tomas y piensas que es lo mejor");
            printf("\nb.Lo ignoras y sigues tu camino");
            printf("\nEntras en la siguiente habitacion y hay un  cofre del tesoro que haces?");
            scanf(" %c", &seleccion);
            if (seleccion == 'a'){//En este caso tuve que usar un if debido a que tanto en el case 'a' como en el 'b' pregunto por respuestas.
                printf("El cofre era un cofre trampa y...MUERES\nGRACIAS POR JUGAR!!\n");
                return 0;
            }else if (seleccion == 'b'){

                printf("Continuas a la siguiente sala donde yacen 2 personas");
                printf("\nQue haces?");
                printf("\na.Los ignoras, te gusta mucho ignorar y avanzar");
                printf("\nb.Le preguntas a uno de ellos que hacen ahi\n");
                scanf(" %c", &seleccion);
                switch (seleccion)
                {
                case 'a':
                    printf("Avanzas y llegas a un cuarto enorme, una voz resuena por toda la sala");
                    printf("\nAQUEL QUE VIVE EN SOLEDAD SU VIDA PARA OTROS IMPORTANTE NO ES. SIN NADIE NO PUEDES PASAR\nMUERE!!");
                    printf("\nMueres solo eso te pasa por ignorar tanto");
                    printf("\nGRACIAS POR JUGAR!!\n");
                    return 0;
                case 'b':
                    printf("Te contesta que en la siguiente sala deben de haber tres personas para pasar y te preguntan si te unes a ellos\nQue haces?");
                    printf("\na.Los ignoras crees que son unos estafadores");
                    printf("\nb.Te unes a ellos\n");
                    scanf(" %c", &seleccion);
                    if (seleccion == 'a'){
                        printf("Avanzas y llegas a un cuarto enorme, una voz resuena por toda la sala");
                        printf("\nAQUEL QUE VIVE EN SOLEDAD SU VIDA, SU VIDA PARA OTROS IMPORTANTE NO ES SIN NADIE NO PUEDES PASAR");
                        printf("\nMUERE!!");
                        printf("\nMueres solo eso te pasa por ignorar tanto");
                        printf("\nGRACIAS POR JUGAR!!\n");
                        return 0;
                    } else if(seleccion == 'b'){
                        printf("Te dicen que en la siguiente sala hay que estar preparados, te comentan que es el primer jefe de dos");
                        printf("nDescubres que la puerta a la que entraste es una mazmorra");
                        printf("\nY que al final se encuentran riquezas");
                        printf("\nEntras a la puerta del jefe y se escucha\nVEO QUE SON 3 PERSONAS MUY BIEN ENFRENTENSE A MI\n*Aparece el jefe*\nLo ves\nQue haces?\na.Lo atacas\nb.Te organizas con tus compañeros\nc.Huyes\n");
                        scanf(" %c", &seleccion);
                        switch (seleccion)
                        {
                            case 'a':
                                printf("GOLPE CERTERO el jefe se debilita y tus dos compañeros tenian tendencia a sacrificarse asi que");
                                printf("\nse acercan al jefe y se inmolan haciendo un daño brutal");
                                printf("\n\nQue haces?");
                                printf("\na.Le das otro golpe");
                                printf("\nb.No haces nada quedas en shock ante tal escena\n");
                                scanf(" %c", &seleccion);
                                if(seleccion == 'a'){
                                    printf("Excelente el jefe muere y suelta una advertencia, el siguiente jefe esta en la siguiente recamara el no sera tan facil como yo");
                                    printf("\nQue haces?");
                                    printf("\na.Continuas a la siguiente recamara eres valiente");
                                    printf("\nb.Te vas ya esto ha sido suficiente para ti\n");
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
                                    //Termine el final bueno
                                    return 0;
                                }else if (seleccion == 'b')
                                {
                                    printf("Mueres el jefe te mata\nGRACIAS POR JUGAR!!");
                                    return 0;
                                }else
                                {
                                    printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); //Intenten poner en lo suyo mensajes variados y bonitos
                                    return 0;              
                                }
                                break;
                            case 'b':
                                printf("Tardas mucho en organizarte y el jefe los ataca muriendo los tres\nGRACIAS POR JUGAR!!\n");
                                return 0;
                            case 'c':
                                printf("Das un paso hacia atras y el jefe se fija en ti matandote al instante\nGRACIAS POR JUGAR!!\n");
                                return 0;
                            default:
                                printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); //Intenten poner en lo suyo mensajes variados y bonitos
                                return 0; 
                        }
                        break;
                    }else{
                        printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); //Intenten poner en lo suyo mensajes variados y bonitos
                        return 0;                       
                    }
                      
                    
                default:
                    printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); //Intenten poner en lo suyo mensajes variados y bonitos
                    return 0; 
                }

            }else if (seleccion == 'c'){
                printf("Era un cofre trampa, ocurre una explosion pero logras correr y llegar a la siguiente sala protegiendote");
                printf("\nEncuentras a dos personas, \nQue haces?");
                printf("\na.Los ignoras, tu vas directo a tu objetivo");
                printf("\nb.Le preguntas a uno de ellos que hacen ahi");
                printf("\nc.Les preguntas la hora, eres muy puntual siempre preguntas el tiempo\n");
                scanf(" %c", &seleccion);
                switch (seleccion)
                {
                case 'a':
                    printf("Avanzas y llegas a un cuarto enorme, una voz resuena por toda la sala"),
                    printf("\nAQUEL QUE VIVE EN SOLEDAD SU VIDA SU VIDA PARA OTROS IMPORTANTE NO ES. SIN NADIE NO PUEDES PASAR");
                    printf("\nMUERE!!, Mueres solo eso te pasa por ignorar tanto");
                    printf("\nGRACIAS POR JUGAR!!\n");
                    return 0;



                case 'b':
                        printf("Te dicen que en la siguiente sala hay que estar preparados te comentan que es el primer jefe de 3");
                        printf("\nDescubres que la puerta a la que entraste es una mazmorra");
                        printf("\nY que al final se encuentra un genio que te concede deseos ademas de muchas riquezas");
                        printf("\nEntras a la puerta del jefe y se escucha");
                        printf("\nVEO QUE SON 3 PERSONAS MUY BIEN ENFRENTENSE A MI");
                        printf("\n*Aparece el jefe*\nLo ves\nQue haces?");
                        printf("\na. Lo atacas");
                        printf("\nb.Te organizas con tus compañeros");
                        printf("\nc.Huyes");
                        scanf(" %c", &seleccion);
                        switch (seleccion)
                        {
                            case 'a':
                                printf("GOLPE CERTERO el jefe se debilita y tus dos compañeros tenian tendencia a sacrificarse. ");
                                printf("\nse acercan al jefe y se inmolan, haciendo un daño brutal");
                                printf("\nQue haces?");
                                printf("\na.Le das otro golpe");
                                printf("\nb.No haces nada quedas en shock ante tal escena\n");
                                scanf(" %c", &seleccion);
                                if(seleccion == 'a'){
                                    printf("Excelente el jefe muere y suelta una advertencia, el siguiente jefe esta en la siguiente recamara.");
                                    printf("No sera tan facil como yo"); 
                                    printf("\nQue haces?");
                                    printf("\na.Continuas a la siguiente recamara eres valiente");
                                    printf("\nb.Te vas ya esto ha sido suficiente para ti\n");
                                    scanf(" %c", seleccion);

                                    //AQUI VA SU CODIGO CONTINUEN LA HISTORIA VEROOO



                                }else if (seleccion == 'b')
                                {
                                    printf("Mueres el jefe te mata\nGRACIAS POR JUGAR!!");
                                    return 0;
                                }else
                                {
                                    printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
                                    return 0;              
                                }
                                
                                
                                break;
                            case 'b':
                                printf("Tardas mucho en organizarte y el jefe los ataca muriendo los tres\nGRACIAS POR JUGAR!!\n");
                                return 0;
                            case 'c':
                                printf("Das un paso hacia atras y el jefe se fija en ti matandote al instante\nGRACIAS POR JUGAR!!\n");
                                return 0;
                            default:
                                printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
                                return 0; 
                        }
                        break;




                case 'c':
                    printf("Te contestan que en aquella mazmorra los relojes no sirven probablemente por que en la siguiente sala hay un jefe");
                    printf("\nQue haces?");
                    printf("\na.Preguntas si puedes unirte a ellos");
                    printf("\nb.Te vas ya es muy tarde de todas maneras hay que descansar\n");
                    scanf(" %c", &seleccion);
                    if (seleccion == 'a'){
                        printf("Te dicen que en la siguiente sala hay que estar preparados te comentan que es el primer jefe de 3");
                        printf("\nDescubres que la puerta a la que entraste es una mazmorra");
                        printf("\nY que al final se encuentra un genio que te concede deseos ademas de muchas riquezas");
                        printf("\nEntras a la puerta del jefe y se escucha");
                        printf("\nVEO QUE SON 3 PERSONAS MUY BIEN. ENFRENTENSE A MI");
                        printf("\n*Aparece e; jefe*\nLo ves");
                        printf("\nQue haces?");
                        printf("\na.Lo atacas");
                        printf("\nb.Te organizas con tus compañeros");
                        printf("\nc.Huyes");
                        scanf(" %c", &seleccion);
                        switch (seleccion)
                        {
                            case 'a':
                                printf("GOLPE CERTERO el jefe se debilita y tus dos compañeros tenian tendencia a sacrificarse asi que");
                                printf("\nse acercan al jefe y se inmolan haciendo un daño brutal");
                                printf("\n\nQue haces?");
                                printf("\na.Le das otro golpe");
                                printf("\nb.No haces nada quedas en shock ante tal escena\n");
                                scanf(" %c", &seleccion);
                                break;
                            case 'b':
                                printf("Tardas mucho en organizarte y el jefe los ataca muriendo los tres");
                                printf("\nGRACIAS POR JUGAR!!\n");
                                return 0;
                            case 'c':
                                printf("Das un paso hacia atras y el jefe se fija en ti matandote al instante");
                                printf("\nGRACIAS POR JUGAR!!\n");
                                return 0;
                            default:
                                printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
                                return 0; 
                        }
                        break;    
                    } else if (seleccion == 'b')
                    {
                        printf("Regresas caminando por los cuartos donde habias pasado que aunque solo hayan sido 2 han marcado tu vida para siempre");
                        printf("\nLlegas a casa y duermes");
                        printf("\nGRACIAS POR JUGAR!!\n");
                        return 0;
                    }else{
                        printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n");
                        return 0;
                    }
                    
                default:
                    printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n");
                    return 0;
                }
            }else{ //Como siempre si no da ninguna opcion ponemos un mensaje y return 0
                printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n");
                return 0;
            }
            break; //Aqui para salir del case 'a'
        



        case 'b': //case B este path esta completo nada que modificar aqui

            printf("Acepta el duelo y se lanza al ataque.");
            printf("Que haces?");
            printf("\na.Esquivas y contraatacas");
            printf("\nb.Le dices que era broma y que se calme\n");
            scanf(" %c", &seleccion);
            if (seleccion == 'a'){//Como explique en la anterior aqui el if se usa por que tenemos opciones tanto en el case 'a' como en el 'b'
                printf("Logras dar un gole efectivo que lo deja tambaleando lo atacas de nuevo  y cae\nEl ogro pide piedad tiene familia\nQue haces?\na.Lo rematas el que perdona murio en la cruz\nb.Lo perdonas matar es malo\n");
                scanf(" %c", &seleccion);
                switch (seleccion)
                {
                case 'a':
                    printf("Lo mastaste... se supone que eres un heroe....\nNo tenia esto para ti\nEres un peligro\nDebes...MOrir\nMueres\nGRACIAS POR JUGAR!!\n");
                    return 0;
        
                case 'b':
                    printf("Era un engaño no tenia familia te ataca por detras y mueres\nGRACIAS POR JUGAR!!\n");
                    return 0;
                default:
                    printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n");
                    return 0;
                }
            }else if (seleccion == 'b'){
                printf("Se enoja más y te mata de un golpe, no debiste jugar con el de esa manera\nGRACIAS POR JUGAR!!\n");
                return 0;
            }else{
                printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n");
                return 0;
            }
            break;
        default:
            printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito\n");
            return 0;
    }
    return 0;
}
