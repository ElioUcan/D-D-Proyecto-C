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
                        printf("Entras a la puerta del jefe y se escucha\nVEO QUE SON 3 PERSONAS MUY BIEN ENFRENTENSE A MI\n*Aparece el jefe*\nLo ves\nQue haces?\na.Lo atacas\nb.Te organizas con tus compañeros\nc.Huyes\n");
                        scanf(" %c", &seleccion);
                        switch (seleccion)
                        {
                            case 'a':
                                printf("GOLPE CERTERO el jefe se debilita y tus dos compañeros tenian tendencia a sacrificarse asi que\nse acercan al jefe y se inmolan\nhaciendo un daño brutal\nQue haces?\na.Le das otro golpe\nb.No haces nada quedas en shock ante tal escena\n");
                                scanf(" %c", &seleccion);
                                if(seleccion == 'a'){
                                    printf("Excelente el jefe muere y suelta una advertencia, el siguiente jefe esta en la siguiente recamara el no sera tan facil como yo\nQue haces?\na.Continuas a la siguiente recamara eres valiente\nb.Te vas ya esto ha sido suficiente para ti\n");
                                    scanf(" %c", seleccion);

                                    //AQUI VA SU CODIGO CONTINUEN LA HISTORIA 




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
                printf("Era un cofre trampa, ocurre una explosion pero logras correr y llegar a la siguiente sala protegiendote\nEncuentras a dos personas\nQue haces?\na.Los ignoras, tu vas directo a tu objetivo\nb.Le preguntas a uno de ellos que hacen ahi\nc.Les preguntas la hora, eres muy puntual siempre preguntas el tiempo\n");
                scanf(" %c", &seleccion);
                switch (seleccion)
                {
                case 'a':
                    printf("Avanzas y llegas a un cuarto enorme, una voz resuena por toda la sala\nAQUEL QUE VIVE EN SOLEDAD SU VIDA SU VIDA PARA OTROS IMPORTANTE NO ES SIN NADIE NO PUEDES PASAR\nMUERE!!\nMueres solo eso te pasa por ignorar tanto\nGRACIAS POR JUGAR!!\n");
                    return 0;



                case 'b':
                        printf("Te dicen que en la siguiente sala hay que estar preparados te comentan que es el primer jefe de 3\nDescubres que la puerta a la que entraste es una mazmorra\nY que al final se encuentra un genio que te concede deseos ademas de muchas riquezas\n");
                        printf("Entras a la puerta del jefe y se escucha\nVEO QUE SON 3 PERSONAS MUY BIEN ENFRENTENSE A MI\n*Aparece el jefe*\nLo ves\nQue haces?\na.Lo atacas\nb.Te organizas con tus compañeros\nc.Huyes");
                        scanf(" %c", &seleccion);
                        switch (seleccion)
                        {
                            case 'a':
                                printf("GOLPE CERTERO el jefe se debilita y tus dos compañeros tenian tendencia a sacrificarse asi que\nse acercan al jefe y se inmolan\nhaciendo un daño brutal\nQue haces?\na.Le das otro golpe\nb.No haces nada quedas en shock ante tal escena\n");
                                scanf(" %c", &seleccion);
                                if(seleccion == 'a'){
                                    printf("Excelente el jefe muere y suelta una advertencia, el siguiente jefe esta en la siguiente recamara el no sera tan facil como yo\nQue haces?\na.Continuas a la siguiente recamara eres valiente\nb.Te vas ya esto ha sido suficiente para ti\n");
                                    scanf(" %c", seleccion);

                                    //AQUI VA SU CODIGO CONTINUEN LA HISTORIA



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
                    printf("Te contestan que en aquella mazmorra los relojes no sirven probablemente por que en la siguiente sala hay un jefe\nQue haces?\na.Preguntas si puedes unirte a ellos\nb.Te vas ya es muy tarde de todas maneras hay que descansar\n");
                    scanf(" %c", &seleccion);
                    if (seleccion == 'a'){
                        printf("Te dicen que en la siguiente sala hay que estar preparados te comentan que es el primer jefe de 3\nDescubres que la puerta a la que entraste es una mazmorra\nY que al final se encuentra un genio que te concede deseos ademas de muchas riquezas\n");
                        printf("Entras a la puerta del jefe y se escucha\nVEO QUE SON 3 PERSONAS MUY BIEN\nENFRENTENSE A MI\n*Aparece e; jefe*\nLo ves\nQue haces?\na.Lo atacas\nb.Te organizas con tus compañeros\nc.Huyes");
                        scanf(" %c", &seleccion);
                        switch (seleccion)
                        {
                            case 'a':
                                printf("GOLPE CERTERO el jefe se debilita y tus dos compañeros tenian tendencia a sacrificarse asi que\nse acercan al jefe y se inmolan\nhaciendo un daño brutal\nQue haces?\na.Le das otro golpe\nb.No haces nada quedas en shock ante tal escena\n");
                                scanf(" %c", &seleccion);
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
                    } else if (seleccion == 'b')
                    {
                        printf("Regresas caminando por los cuartos donde habias pasado que aunque solo hayan sido 2 han marcado tu vida para siempre\nLlegas a casa y duermes\nGRACIAS POR JUGAR!!\n");
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
