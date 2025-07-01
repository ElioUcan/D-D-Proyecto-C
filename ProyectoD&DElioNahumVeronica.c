#include <stdio.h>

/*NOTA PRINCIPAL ERROR:
 this statement may fall through [-Wimplicit-fallthrough=]
 Este es un error muy comun con el que me tope el error ocurre porque 
 no se escribe un break; al final de cada linea dentro del SWITCH
 aunque tengamos un if si ese se encuentra dentro de un switch obligatoriamente
 tenemos que poner un break; es como un continue en python*/
 


//Otra cosa en cualquier else(en caso de if) o default(en caso de switch) pongan el siguiente mensaje:
/*printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
  return 0; */


int main(){
    char seleccion; /*Seleccion es la variable que ustedes tienen que usar siempre en su codigo lo que dice esta variable es que seleccion toma el usuario. Como pueden ver en el codigo siempre se reutiliza no la cambien para llevar un orden y no andar reescribiendo codigo*/
    int llave = 0; //Llave es el booleano que usamos para acceder a la siguiente recamara, la recamara del jefe

    printf("Apareces en un bosque nublado y te encuentras con una puerta, entras a un cuarto grande donde ves a un Ogro\nQue haces?\na.Le pregunto la hora\nb. Lo ataco\nc.regreso a casa a dormir\n");
    scanf(" %c", &seleccion); //Primera seleccion que se hizo
    switch (seleccion) //Aqui uso el switch para no andar poniendo muchos if else ni else if ni else(Traten de hacer lo mismo)
    {
        case 'a':
            printf("Te contesta que son las 5:30pm\na.Le das las gracias\nb.Lo retas a un duelo de caballeros\n");
            scanf(" %c", &seleccion); //Como ven aqui reescribo la variable
            break; //Lo que hace este break es salir del SWITCH mas no termina la ejecucion del codigo, esto es necesario para que continuemos con las opciones
        case 'b':
            printf("Te ataca de vuelta \nMueres\nGRACIAS POR JUGAR!!\n");
            return 0; //Por el contrario aqui uso un return 0 terminando el codigo ya que como dice el mensaje es usuario a muerto entonces se acaba el juego
        case 'c':
            printf("Tenias mucho sueño y descansas\n GRACIAS POR JUGAR!!\n");
            return 0;
        default: //default es como el else es lo que se ejecuta si no se cumplio ningun case
            printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
            return 0; 
    }
    switch (seleccion)
    {
        case 'a': //case A
            printf("Te dice que no es nada y te invita a continuar a la siguiente habitacion no sin antes\nAdvertirte que hay peligros mas adelante\n\nEntras en la siguiente habitacion y hay un  cofre del tesoro que haces?\na.Lo tomas y piensas que es lo mejor\nb.Lo ignoras y sigues tu camino\nc.Lo atacas antes de abrirlo\n");
            scanf(" %c", &seleccion);
            if (seleccion == 'a'){//En este caso tuve que usar un if debido a que tanto en el case 'a' como en el 'b' pregunto por respuestas.
                printf("El cofre era un cofre trampa y...MUERES\nGRACIAS POR JUGAR!!\n");
                return 0;
            }else if (seleccion == 'b'){
                printf("Ignoras el cofre... Al inspeccionar la habitación antes de irte, encuentras una LLAVE brillante y la guardas.\n");
                llave = 1;
                printf("Continuas a la siguiente sala donde yacen 2 personas\nQue haces?\na.Los ignoras, te gusta mucho ignorar y avanzar\nb.Le preguntas a uno de ellos que hacen ahi\n");
                scanf(" %c", &seleccion);
                switch (seleccion)
                {
                case 'a':
                    printf("Avanzas y llegas a un cuarto enorme, una voz resuena por toda la sala\nAQUEL QUE VIVE EN SOLEDAD SU VIDA SU VIDA PARA OTROS IMPORTANTE NO ES SIN NADIE NO PUEDES PASAR\nMUERE!!\nMueres solo eso te pasa por ignorar tanto\nGRACIAS POR JUGAR!!\n");
                    return 0;
                case 'b':
                    printf("Te contesta que en la siguiente sala deben de haber tres personas para pasar y te preguntan si te unes a ello\nQue haces?\na.Los ignoras crees que son unos estafadores\nb.Te unes a ellos\n");
                    scanf(" %c", &seleccion);
                    if (seleccion == 'a'){
                        printf("Avanzas y llegas a un cuarto enorme, una voz resuena por toda la sala\nAQUEL QUE VIVE EN SOLEDAD SU VIDA\nSU VIDA PARA OTROS IMPORTANTE NO ES\nSIN NADIE NO PUEDES PASAR\nMUERE!!\nMueres solo eso te pasa por ignorar tanto\nGRACIAS POR JUGAR!!\n");
                        return 0;
                    } else if(seleccion == 'b'){
                        printf("Te dicen que en la siguiente sala hay que estar preparados te comentan que es el primer jefe de 2\nDescubres que la puerta a la que entraste es una mazmorra\nY que al final se encuentran riquezas\n");
                        printf("Llegan a una gran puerta con símbolos mágicos...\n");
                        if (llave) {
                            printf("Usas la llave que encontraste antes. La puerta se abre lentamente revelando la sala del jefe...\n");
                        } else {
                            printf("Intentas abrir la puerta, pero está cerrada con magia. No puedes continuar sin una llave.\nGRACIAS POR JUGAR!!\n");
                            return 0;
                        }

                        printf("Entras a la puerta del jefe y se escucha\nVEO QUE SON 3 PERSONAS MUY BIEN ENFRENTENSE A MI\n*Aparece el jefe*\nLo ves\nQue haces?\na.Lo atacas\nb.Te organizas con tus compañeros\nc.Huyes\n");
                        scanf(" %c", &seleccion);
                        switch (seleccion)
                        {
                            case 'a':
                                printf("GOLPE CERTERO el jefe se debilita y tus dos compañeros tenian tendencia a sacrificarse asi que\nse acercan al jefe y se inmolan\nhaciendo un daño brutal\nQue haces?\na.Le das otro golpe\nb.No haces nada quedas en shock ante tal escena\n");
                                scanf(" %c", &seleccion);
                                if(seleccion == 'a'){
                                    printf("Excelente el jefe muere y suelta una advertencia, el siguiente jefe esta en la siguiente recamara el no sera tan facil como yo\nQue haces?\na.Continuas a la siguiente recamara eres valiente\nb.Te vas ya esto ha sido suficiente para ti\n");
                                    scanf(" %c", &seleccion);
                                    if (seleccion == 'a'){
                                        printf("Estás frente al jefe. ¿Qué haces?\na. Enfrentarlo\nb. Huir\n");
                                        scanf(" %c", &seleccion);
                                        //Parte vero
                                        if (seleccion == 'a') {
                                            printf("Avanzas con determinación. Entras en la siguiente recámara...\n");
                                            printf("Una figura imponente aparece, el segundo jefe: 'YO DOMINO LOS MIEDOS. ¿ERES DIGNO?'\n");
                                            printf("¿Qué haces?\na. Lo enfrentas sin temor\nb. Intentas razonar con él\nc. Buscas un lugar donde esconderte\n");
                                            scanf(" %c", &seleccion);

                                            if (seleccion == 'a') {
                                                printf("Luchas con valentía. El jefe reconoce tu coraje y desaparece dejándote pasar.\n");
                                                printf("¡Te acercas al último desafío! ¡Estás cerca de tu deseo!\n");
                                                printf("Ahi encuentras tu recompensa y regresas a casa lleno de riquezas\nGRACIAS POR JUGAR!!\n");
                                                return 0;
                                            }
                                            else if (seleccion == 'b') {
                                                printf("El jefe escucha tus palabras... y ríe. 'Los débiles hablan. Los fuertes actúan.'\n");
                                                printf("Te lanza un rayo de oscuridad. Mueres.\nGRACIAS POR JUGAR!!\n");
                                                return 0;
                                            }
                                            else if (seleccion == 'c') {
                                                printf("Te escondes, pero el miedo te consume y el jefe se alimenta de él.\n");
                                                printf("Te conviertes en su siervo eterno.\nGRACIAS POR JUGAR!!\n");
                                                return 0;
                                            }
                                            else {
                                                printf("Esa opción se sale de las reglas del juego. TODO ya está escrito, sigue tu destino\n");
                                                return 0;
                                            }
                                        }
                                        else if (seleccion == 'b') {
                                            printf("Te das la vuelta y decides que has tenido suficiente aventura por hoy.\n");
                                            printf("Sales de la mazmorra con vida, pero sabiendo que podrías haber logrado más...\nGRACIAS POR JUGAR!!\n");
                                            return 0;
                                        }
                                        else {
                                            printf("Esa opción se sale de las reglas del juego. TODO ya está escrito, sigue tu destino\n");
                                            return 0;
                                        }
                                    }else if(seleccion == 'b'){
                                        printf("Regresas a tu casa, impresionado de los peligros que existen en este mundo al que consideras normal\nGRACIAS POR JUGAR!!\n");
                                        return 0;
                                    }else{
                                        printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
                                        return 0;  
                                    }
        

                                }else if (seleccion == 'b')
                                {
                                    printf("Mueres el jefe te mata\nGRACIAS POR JUGAR!!\n");
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
                    }else{
                        printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
                        return 0;                       
                    }
                      
                    
                default:
                    printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino\n"); 
                    return 0; 
                }

            }else if (seleccion == 'c'){
                printf("Era un cofre trampa, ocurre una explosion pero logras correr y llegar a la siguiente sala protegiendote, ves que la explosion arrojo una LLAVE asi que la recoges\n");
                printf("Encuentras a dos personas\nQue haces?\na.Los ignoras, tu vas directo a tu objetivo\nb.Le preguntas a uno de ellos que hacen ahi\nc.Les preguntas la hora, eres muy puntual siempre preguntas el tiempo\n");
                scanf(" %c", &seleccion);
                llave = 1;
                switch (seleccion)
                {
                case 'a':
                    printf("Avanzas y llegas a un cuarto enorme, una voz resuena por toda la sala\nAQUEL QUE VIVE EN SOLEDAD SU VIDA SU VIDA PARA OTROS IMPORTANTE NO ES SIN NADIE NO PUEDES PASAR\nMUERE!!\nMueres solo eso te pasa por ignorar tanto\nGRACIAS POR JUGAR!!\n");
                    return 0;



                case 'b':
                        printf("Te dicen que en la siguiente sala hay que estar preparados te comentan que es el primer jefe\nDescubres que la puerta a la que entraste es una mazmorra\nY que al final hay muchas riquezas\n");
                        printf("Llegan a una gran puerta con símbolos mágicos...\n");
                        if (llave) {
                            printf("Usas la llave que encontraste antes. La puerta se abre lentamente revelando la sala del jefe...\n");
                        } else {
                            printf("Intentas abrir la puerta, pero está cerrada con magia. No puedes continuar sin una llave.\nGRACIAS POR JUGAR!!\n");
                            return 0;
                        }
                        printf("Entras a la puerta del jefe y se escucha\nVEO QUE SON 3 PERSONAS MUY BIEN ENFRENTENSE A MI\n*Aparece el jefe*\nLo ves\nQue haces?\na.Lo atacas\nb.Te organizas con tus compañeros\nc.Huyes\n");
                        scanf(" %c", &seleccion);
                        switch (seleccion)
                        {
                            case 'a':
                                printf("GOLPE CERTERO el jefe se debilita y tus dos compañeros tenian tendencia a sacrificarse asi que\nse acercan al jefe y se inmolan\nhaciendo un daño brutal\nQue haces?\na.Le das otro golpe\nb.No haces nada quedas en shock ante tal escena\n");
                                scanf(" %c", &seleccion);
                                if(seleccion == 'a'){
                                    printf("Excelente el jefe muere y suelta una advertencia, el siguiente jefe esta en la siguiente recamara el no sera tan facil como yo\nQue haces?\na.Continuas a la siguiente recamara eres valiente\nb.Te vas ya esto ha sido suficiente para ti\n");
                                    scanf(" %c", &seleccion);

                                    switch (seleccion)
                                    {
                                    case 'a': 
                                    //Parte Nahum
                                    //PRIMERA PREGUNTA
                                        printf("continuas en la siguiente habitacion y ves hasta el fondo una recompensa que no pueden creer tus ojos");
                                        printf("\nDe pronto te das cuenta que estas rodeado por miles de copias en todas las direcciones que intentan ir por tus tesoro");
                                        printf("\nla incertidumbre de invade, el miedo te ataca \nQue haces?\n");
                                        printf("\na. Atacar a tus copias para no compartir tu recompensa"); //case a
                                        printf("\nb. ignoras y pones los ojos en tu objetivo\n"); //case b
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
                                        printf("\nen cuestion de minutos mueres y lo ultimo que ves es como tus copias una por una se atraviesan entre ellos por tu avaricia\nGRACIAS POR JUGAR!!\n");
                                        return 0;
                                    //SEGUNDA PREGUNTA
                                    }else if (seleccion=='b'){ 
                                        printf("\nignoras a tus ojos y empiezas a correr, de pronto tus copias se desvanecen para dar paso a una cascada de monedas de plata que lentamente sube su intensidad");
                                        printf("\nque haces?\n"); //esta pregunta tiene truco, da igual si elige A ó B, le va a llevar al mismo resultado.
                                        printf("\na. irte con pocas monedas para no ser aplastado");  //case a
                                        printf("\nb. ganar más monedas aunque la cascada de plata te pueda matar\n"); //case b
                                        scanf(" %c", &seleccion);
                                        //TERCERA PREGUNTA
                                        printf("\nTe das cuenta que puerta no se ha abierto, tienes que esperar"); 
                                        printf("\nde pronto empiezan a caer joyas de oro, monedas, coronas de todos los reinos y obejetos tan lujos nunca vistos por un campesino como tu");
                                        printf("\nves tanto oro que te deslumbra su brillo, la mazmorra parece estar hecha de piedras preciosas con tantas joyas rodeandote");
                                        printf("\nLa euforia de gozar las riquezas del mundo te ciega, aunque la puerta ya esta abierta.");
                                        printf("\nQue haces?"); 
                                        printf("\na. Dejar de un lado la riquezas e irte"); //case a
                                        printf("\nb. Seguir agarrando el oro para asegurar tu felicidad\n"); //case b
                                        scanf(" %c", &seleccion);
                                                                    
                                        switch (seleccion){
                                            case 'a':
                                                printf("\nagarraste todo lo que pudiste, lo suficiente para vivir un par de vista fuera de la pobreza y el trabajo duro");
                                                printf("\ntan pronto como saliste se destruyó la mazmorra y la montaña que la contenía.");
                                                printf("\nEl mar de riquezas que dejaste atras quedo sepultado bajo miles de toneladas de piedra");
                                                printf("\nno puedes creer lo que paso, el dia que cambio tu vida para siempre, pero no puedes contarlo.");
                                                printf("\nel pueblo cuenta la historia del dia que un terremoto destruyo la montaña");
                                                printf("\nviviste una larga vida, tuviste una gran familia y supiste multiplicar tus riquezas");
                                                printf("\ntu nombre se volvió poderoso en toda la tierra, pero te llevaste este secreto a tu tumba.");
                                                printf("\nGRACIAS POR JUGAR!!\n");
                                                return 0; //aquí termina el caso A del juego con el good ending, debo poner break o return 0?
                                            case 'b':
                                                printf("\ntu avaricia te hizo pargarlo caro. la gran cascada de oro te aplasto en tus riquezas");
                                                printf("\nestabas tan concentrado en saber como ibas a gastar tanto dinero que ni te diste cuenta que moriste");
                                                printf("\nen las tierras vecinas se cuenta la historia de un hombre que encontró una fortuna que ni el mil vidas podría gastar");
                                                printf("\nTe convertiste en un mito por tu egoismo"); //aquí termina el caso A del juego con el good ending, debo poner break o return 0?
                                                printf("\nGRACIAS POR JUGAR!!\n");
                                                return 0;
                                            default:
                                                printf("\nEsa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino");
                                                return 0; //aquí termina el caso A del juego con el good ending, debo poner break o return 0?
                                        }

                                    }else{
                                        printf("Esa opcion se sale de las reglas del juego TODO ya esta escrito, sigue tu destino");
                                        return 0;
                                    }
                        



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
                    printf("Te contestan que en aquella mazmorra los relojes no sirven probablemente por que en la siguiente sala hay un jefe\n");
                    printf("Un jefe? te preguntas asustado asi que huyes\nRegresas a casa y todo fue un sueño\nY la razon por la que preguntabas tanto la hora era porque tenias examen mañana\nGRACIAS POR JUGAR!!\n");
                    return 0;                    
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

            printf("Acepta el duelo y se lanza al ataque. Que haces?\na.Esquivas y contraatacas\nb.Le dices que era broma y que se calme\n");
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
