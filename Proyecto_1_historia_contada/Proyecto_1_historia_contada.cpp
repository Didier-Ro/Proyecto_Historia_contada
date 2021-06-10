// Proyecto_1_historia_contada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int Decision;

    cout << "Hace mucho tiempo en una galaxia muy muy lejana...\n" << endl;
    cout << "Presiona ENTER" << endl;
    cin.get();
    cout << "Son tiempos inciertos en la Galaxia, a comenzado la Gran Guerra Civil Galactica"<<endl;
    cout << "Debes decidr en que bando pelearas, solo debes tener en cuenta que la decision que tomes cambiara tu destino\n" << endl;
    cout << "\nPresiona ENTER  para continuar..." << endl;
    cin.get();
    cout << "Que es lo que decides?\n" << endl;
    cout << "1.Rebelde   2.Imperial" << endl;
    cin >> Decision;
    switch (Decision)
    {
    case 1: //Rebelde
        cout << "Has elegido ser parte de La Alianza para Restarurar la Republica" << endl;
        cout << "Lograste hacer contacto con los miembros de la alianza sin ser detectado por las fuerzas imperiales" << endl;
        cout << "Ahora debes elegir si ser un arriesgado piloto o un valiente soldado en tierra\n" << endl;
        cout << "1.piloto  2.Soldado" << endl;
        cin >> Decision;
        switch (Decision)
        {
        case 1: //piloto rebelde
            cout << "Como piloto es importante definir que clase de nave quieres pilotar\n" << endl;
            cout << "1.X-Wing  2.Y-Wing  3.A-Wing" << endl;
            cin >> Decision;
            switch (Decision)
            {
            case 1: //X-Wing
                cout << "Has elegido pilotar un X-Wing la nave insignia de la rebelion y la que siempre debera estar en el frente de batalla\n" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Has logrado sobrevivir a arduas batallas acompañado del General Skywalker y combatiendo en la batalla de Endor," << endl;
                cout << "Venciendo al imperio" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Tienes una siguente eleccion, retirarte o seguir persiguiendo al los restos imperiales\n" << endl;
                cout << "1.Retirarse  2.Continuar luchando" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //Retirse
                    cout << "Es comprensible, es un buen soldado y se lo merece mas que ningun otro, ha perdido muchas colegas en esta guerra" << endl;
                    cout << "Pero aun puede ayudar de otras formas, puede elegir entre tener su famila tranquilamente o expandir por la Galaxia en mensaje de la" << endl;
                    cout << "Nueva Republica en los mundos distantes\n" << endl;
                    cout << "1.Formar una familia  2.Apoyar la Nueva Republica" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //Familia
                        cout << "Le deseamos la mas feliz de las vidas y esperamos que encuentre se camino en esta gran Galaxia llena de misterios\n" << endl;
                        cout << "Que la fuerza te acompañe siempre" << endl;
                        break;
                    case 2: //Apoyo
                        cout << "Has dedicado mucho tiempo viajando de mundo en mundo dando el mensaje de cambio de la Nueva Republica" << endl;
                        cout << "Acompañando en muchas ocasiones a la cansiller de la Nueva Republica Mon Mothma" << endl;
                        cout << "Finalmente estableciendote en el planeta capital de la Republica, Chandrila, formando tarde pero seguro una familia" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                case 2: //Combatir
                    cout << "Muy bien soldado, la lucha continua, solo recuerda que no hay garantias de salir con vida" << endl;
                    cout << "El imperio se ha resistido pero cada vez su poder es menor, se han acorralado en Jakku, es ahora o nunca\n" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Es una batalla complicada, perdimos muchos soldados, pero estamos dominando" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Al final pudimos obtener la victoria, a un alto costo, las perdidas de grandes hombres y mujeres" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Puedes elegir si continuar patrullando y buscando pequeñas celdas imperiales o hacer tu vida que deseabas\n" << endl;
                    cout << "1.Continuar  2.Hacer tu vida" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //continuar
                        cout << "Con el paso del tiempo ha sido muy importante el mantener el orden en las Regiones mas lejanas de la Galaxia" << endl;
                        cout << "Por eso se ta a asignado como un Ranger de la Nueva Republica y tu mision sera el mantener el orden y paz" << endl;
                        break;
                    case 2: //hacer tu vida
                        cout << "Despues de tanto tiempo peleando mas que nadie te lo mereces, buen viaje y que la fuerza tu acompañe siempre" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                default:
                    break;
                }
                break;
            case 2: //Y-Wing
                cout << "Has elegido el Y-Wing, la nave bombardero, muy importante para derribar destructores estelares" << endl;
                cout << "Tus batallas han sido epicas, haz desabilitado decenas de destructores y dado al la rebelion grandes victorias" << endl;
                cout << "Has logrado sobrevivir a arduas batallas acompañado del General Skywalker y combatiendo en la batalla de Endor, venciendo al imperio" << endl;
                cout << "Tienes una siguente eleccion, retirarte o seguir persiguiendo al los restos imperiales\n" << endl;
                cout << "1.Retirarse  2.Continuar luchando" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //Retirarse
                    cout << "Es comprensible, es un buen soldado y se lo merece mas que ningun otro, ha perdido muchas colegas en esta guerra" << endl;
                    cout << "Pero aun puede ayudar de otras formas, puede elegir entre tener su famila tranquilamente o expandir por la Galaxia en mensaje de la" << endl;
                    cout << "Nueva Republica en los mundos distantes\n" << endl;
                    cout << "1.Formar una familia  2.Apoyar la Nueva Republica" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //Familia
                        cout << "Le deseamos la mas feliz de las vidas y esperamos que encuentre se camino en esta gran Galaxia llena de misterios\n" << endl;
                        cout << "Que la fuerza te acompañe siempre" << endl;
                        break;
                    case 2: //Apoyo
                        cout << "Has dedicado mucho tiempo viajando de mundo en mundo dando el mensaje de cambio de la Nueva Republica" << endl;
                        cout << "Acompañando en muchas ocasiones a la cansiller de la Nueva Republica Mon Mothma" << endl;
                        cout << "Finalmente estableciendote en el planeta capital de la Republica, Chandrila, formando tarde pero seguro una familia" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                case 2: //Combatir
                    cout << "Muy bien soldado, la lucha continua, solo recuerda que no hay garantias de salir con vida" << endl;
                    cout << "La batalla es dura y se requieren de todos los bombarderos disponibles para deshabilitar los destructores" << endl;
                    cout << "Varios destructores han caido pero la batalla sigue" << endl;
                    cout << "..."<< endl;
                    cin.get();
                    cout << "Decide si ir al espacio a continuar la batalla o continuar la batalla o quetarte abajo para ver se ayudas a alguien\n" << endl;
                    cout << "1.Seguir la batalla  2.Quedarte" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //Seguir batalla
                        cout << "Arriba es un caos, el piloto Wedge Antilles requiere apoyo para derribar los ultimos destructores antes de que escapen" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Tras una serie de ataques seguidos las ultimas naves imperiales fueron derribadas y el imperio finalmente derrotado" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Despues de la batalla de Jakku se firmo el Concordato Galactico, que dictaba el fin de las hostilidades del imperio" << endl;
                        cout << "Dando por terminada la Guerra Civil Galctica" << endl;
                        break;
                    case 2: //Quedarte
                        cout << "Aterrizaste tu nave en el desertico planeta en busca de sobrevivientes de aquella feroz batalla" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Pocos fueron los heridos que encontraste pero eso no detuvo las celebraciones por ver la ultima nave imperial caer" << endl;
                        cout << "La guerra porfin habia acabado" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                default:
                    break;
                }
                break;
            case 3: //A-Wing
                cout << "Has elegido el A-Wing, la nave caza mas veloz de la rebelion, muy util para sorprender a tus enemigos" << endl;
                cout << "Tus hazañas como piloto se han exparsido por muchos rebeldes, la velocidad con las que atacas a tus enemigos es asombrosa" << endl;
                cout << "Has logrado sobrevivir a arduas batallas acompañado del General Skywalker y combatiendo en la batalla de Endor, venciendo al imperio" << endl;
                cout << "Tienes una siguente eleccion, retirarte o seguir persiguiendo al los restos imperiales\n" << endl;
                cout << "1.Retirarse  2.Continuar luchando" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //Retirarse
                    cout << "Es comprensible, es un buen soldado y se lo merece mas que ningun otro, ha perdido muchas colegas en esta guerra" << endl;
                    cout << "Pero aun puede ayudar de otras formas, puede elegir entre tener su famila tranquilamente o expandir por la Galaxia en mensaje de la" << endl;
                    cout << "Nueva Republica en los mundos distantes\n" << endl;
                    cout << "1.Formar una familia  2.Apoyar la Nueva Republica" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //Familia
                        cout << "Le deseamos la mas feliz de las vidas y esperamos que encuentre se camino en esta gran Galaxia llena de misterios\n" << endl;
                        cout << "Que la fuerza te acompañe siempre" << endl;
                        break;
                    case 2: //Apoyo
                        cout << "Has dedicado mucho tiempo viajando de mundo en mundo dando el mensaje de cambio de la Nueva Republica" << endl;
                        cout << "Acompañando en muchas ocasiones a la cansiller de la Nueva Republica Mon Mothma" << endl;
                        cout << "Finalmente estableciendote en el planeta capital de la Republica, Chandrila, formando tarde pero seguro una familia" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                case 2: //Combatir
                    cout << "muy bien soldado, la lucha continua, solo recuerda que no hay garantias de salir con vida" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "La batalla en la orbita del planeta es intensa al poco tiempo de empezar" << endl;
                    cout << "Debes ser veloz con tu escuadron para destruir la mayor cantidad de cazas TIE y evitar que se replieguen" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Es dificil, muchas naves se estan perdiendo, la unica solucion es un ataque concentrado sobre los destructores"<<endl;
                    cout << "La prioridad es proteger los bombarderos restantes para realizar un solo ataque concentrado" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "El ataque fue un exito los destructores estelar comenzaron a apagar sus motores y los caza TIE eran destruidos" << endl;
                    cout << "Los ultimos imperiales se rindieron, la guerra termino" << endl;
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            break;
        case 2: //soldado rebelde
            cout << "Como soldado estaras siempre al frente de batalla enfrentado todo riesgo posible" << endl;
            cout << "..." << endl;
            cin.get();
            cout << "Debes elegir que tipo de soldado quieres ser\n" << endl;
            cout << "1.Asalto  2.Pesado  3.Tirador" << endl;
            cin >> Decision;
            switch (Decision)
            {
            case 1: //Asalto
                cout << "Los asalto son veloces y deben infiltrarse en las lineas enemigas, equipados con armas cortas" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Has sobrevivido a varias batallas, pero esta es importante para derrotar al imperio, La batalla de Endor" << endl;
                cout << "Elige si combatir al lado del General Solo o asaltar un pequeña base al norte de la luna\n" << endl;
                cout << "1.General Solo  2.Base pequeña" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //General Solo
                    cout << "La mision del General Solo y Skywalker es llegar a la superficie de la luna y deshabilitar el escudo" << endl;
                    cout << "que protege la Estrella de la Muerte" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "A pesar de que se trataba de un trampa, con ayuda de los nativos la destruccion del escudo fue posible" << endl;
                    cout << "Solo faltaba que en el espacio los demas cumplieran con su mision" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "No paso mucho tiempo cuando la estrella de la muerte estallo, se podia ver desde la superficie" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "El imperio habia sido derrotado, pero muchas de sus fuerzas escaparon" << endl;
                    cout << "Puedes elegir si seguir peleando o retirarte\n" << endl;
                    cout << "1.Seguir peleando  2.Retirarte" << endl;
                    switch (Decision)
                    {
                    case 1: //seguir peleando
                        cout << "Aun con la derrota del imperio en Endor ellos continuan con su idea de seguir dominando la Galaxia" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Los ultimos remanentes imperiales se mantienen en el planeta Jakku" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Tu mision sera bajar al planeta e infiltrarte en las lineas enemigas" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "La batalla es intensa, hay muchas bajas aliadas, pero aun hay esperanza" << endl;
                        cout << "En el cielo las naves de la rebelion estan ganando, no falta mucho para que esto acabe" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Poco a poco los destructores estelares iban cayendo y los cazas imperiales eran destruidos" << endl;
                        cout << "El Imperio finalmente habia sido derrotado" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "La Nueva Republica porfin puede prosperar y todo gracias a ti y a tu valentia" << endl;
                        cout << "Que la fuerza te acompañe" << endl; 
                        break;
                    case 2: //retirarse
                        cout << "Es comprensible, es un buen soldado y se lo merece mas que ningun otro, ha perdido muchas colegas en esta guerra" << endl;
                        cout << "Pero aun puede ayudar de otras formas, puede elegir entre tener su famila tranquilamente o expandir por la Galaxia en mensaje de la" << endl;
                        cout << "Nueva Republica en los mundos distantes\n" << endl;
                        cout << "1.Formar una familia  2.Apoyar la Nueva Republica" << endl;
                        cin >> Decision;
                        switch (Decision)
                        {
                        case 1: //Familia
                            cout << "Le deseamos la mas feliz de las vidas y esperamos que encuentre se camino en esta gran Galaxia llena de misterios\n" << endl;
                            cout << "Que la fuerza te acompañe siempre" << endl;
                            break;
                        case 2: //Apoyo
                            cout << "Has dedicado mucho tiempo viajando de mundo en mundo dando el mensaje de cambio de la Nueva Republica" << endl;
                            cout << "Acompañando en muchas ocasiones a la cansiller de la Nueva Republica Mon Mothma" << endl;
                            cout << "Finalmente estableciendote en el planeta capital de la Republica, Chandrila, formando tarde pero seguro una familia" << endl;
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;
                case 2: //Base pequeña
                    cout << "Tu y un equipo pequeño han sido enviados a explorar una base al norte de la luna"<<endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Los datos muestran poca actividad imperial en el sector, lo que implica que sera un a tarea facil" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "La resistencia mostrada fue poca y la captura de la base fue rapida" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Pasaron unas cuantas horas y un escuadron que habi salido para reconocer el area no se ha reportado" << endl;
                    cout << "Elige si ir a buscarlos o quedarte y enviar a otros a buscarlos\n" << endl;
                    cout << "1.Ir tu mismo  2.Envira a otros" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //Ir tu
                        cout << "Tras bastante tiempo caminando y de buscar no hay ningun rastro del escuadron" << endl;
                        cout << "De Repente un ruido entre los arboles comenzo a sonar" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Disparos de entre los arboles comenzaron a brotar y acertando en varios de los miembros del equipo" << endl;
                        cout << "Unos stormtroopers salieron de entre los arboles, pero estos se miraban diferentes" << endl;
                        cout << "Eran de color negro con detalles rojos, eran muy certeros en sus disparos" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Uno a uno fueron cayendo cada rebelde, fuiste herido en la pierna y no puedes correr" << endl;
                        cout << "Los stormtroopers se acercaron a ti y apuntaron cons sus armas" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Antes de que pudieran hacer algo, en el cielo se pudo admirar como la estrella de la muerte estallaba" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Aunque tu estabas condenado sabias que el destino de la Galaxia estaba asegurado" << endl;
                        cout << "Podias al fin descanzar" << endl;
                        break;
                    case 2: //Enviar a otros
                        cout << "Un equipo fue selecionado para hacer la busqueda del escuadron perdido" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Habian pasado unas cuantas horas y no habia rastro de ningun escuadron" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Hubo una explosicion cerca de donde estaban, varios stormtroopers negros con rojo aparecieron" << endl;
                        cout << "Comenzaron a disparar y una batalla comenzo" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Muchas bajas aliadas se hicieron evidentes, parecia que estaban condenados" << endl;
                        cout << "De repente en el cielo una enorme explosicion aparecio, era la estrella de la muerte" << endl;
                        cout << "..."<<endl;
                        cin.get();
                        cout << "Los stormtroopers se retiraron inmediatamente" << endl;
                        cout << "Habian sido afortunados, la busqueda de esos stormtroopers puede esperar"<<endl;
                        cout << "Es momento de celebrar, el imperio a caido" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                default:
                    break;
                }
                break;
            case 2: //Pesado
                cout << "Como soldado pesado deberas estar siempre como apoyo a la infanteria en casos de emergencia" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Las batallas intensas han causado heridas en tu cuerpo pero eso esta por cambiar" << endl;
                cout << "La batalla de Endor fue todo un exito, eres libre de elegir que hacer\n" << endl;
                cout << "1.Retirarse  2.Continuar" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //Retirarse
                    cout << "Es comprensible, es un buen soldado y se lo merece mas que ningun otro, ha perdido muchas colegas en esta guerra" << endl;
                    cout << "Pero aun puede ayudar de otras formas, puede elegir entre tener su famila tranquilamente o expandir por la Galaxia en mensaje de la" << endl;
                    cout << "Nueva Republica en los mundos distantes\n" << endl;
                    cout << "1.Formar una familia  2.Apoyar la Nueva Republica" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //Familia
                        cout << "Le deseamos la mas feliz de las vidas y esperamos que encuentre se camino en esta gran Galaxia llena de misterios\n" << endl;
                        cout << "Que la fuerza te acompañe siempre" << endl;
                        break;
                    case 2: //Apoyo
                        cout << "Has dedicado mucho tiempo viajando de mundo en mundo dando el mensaje de cambio de la Nueva Republica" << endl;
                        cout << "Acompañando en muchas ocasiones a la cansiller de la Nueva Republica Mon Mothma" << endl;
                        cout << "Finalmente estableciendote en el planeta capital de la Republica, Chandrila, formando tarde pero seguro una familia" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                case 2: //continuar}
                    cout << "Los imperiales se esconden en Jakku, esta es la batlla definitiva" << endl;
                    cout << "Seras de gran importancia en el campo de batalla" << endl;
                    cout << "Deberas proteger a tus aliados del fuego enemigo, para esto fuiste entrenado" << endl;
                    cout << "..."<<endl;
                    cin.get();
                    cout << "Tus defensas han hecho que los aliados avanzen en el frente, mientras varios destructores son derribados" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "La batalla fue una completa victoria, el imperio finalmente fue derrotado" << endl;
                    cout << "Ahora son libres de esta guerra, gracias soldado sin ti no ubierar sido posible" << endl;
                    break;
                default:
                    break;
                }
                break;
            case 3: //Tirador
                cout << "El trabajo de tirador es muy importante, tu defiendes a los aliados desde la distancia" << endl;
                cout << "Debes ser muy preciso y letal" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Tu gran precision y efectividad te han hecho un elemento muy valioso para la rebelion" << endl;
                cout << "La cantidad de batallas que has librado te han dado tanta experiencia" << endl;
                cout << "Que esta batalla es decisiva para ganar la guerra" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Seras enviado a Endor junto con otros buenos soldados, tu mision sera proteger desde las sombras" << endl;
                cout << "..."<<endl;
                cin.get();
                cout << "Tu trabajo a sido perfecto y con la destruccion de la estrella de la muerte debes elegir\n" << endl;
                cout << "1.Retirarse  2.Continuar" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //Retirarse
                    cout << "Es comprensible, es un buen soldado y se lo merece mas que ningun otro, ha perdido muchas colegas en esta guerra" << endl;
                    cout << "Pero aun puede ayudar de otras formas, puede elegir entre tener su famila tranquilamente o expandir por la Galaxia en mensaje de la" << endl;
                    cout << "Nueva Republica en los mundos distantes\n" << endl;
                    cout << "1.Formar una familia  2.Apoyar la Nueva Republica" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //Familia
                        cout << "Le deseamos la mas feliz de las vidas y esperamos que encuentre se camino en esta gran Galaxia llena de misterios\n" << endl;
                        cout << "Que la fuerza te acompañe siempre" << endl;
                        break;
                    case 2: //Apoyo
                        cout << "Has dedicado mucho tiempo viajando de mundo en mundo dando el mensaje de cambio de la Nueva Republica" << endl;
                        cout << "Acompañando en muchas ocasiones a la cansiller de la Nueva Republica Mon Mothma" << endl;
                        cout << "Finalmente estableciendote en el planeta capital de la Republica, Chandrila, formando tarde pero seguro una familia" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                case 2: //Continuar
                    cout << "Tus servicios son necesarios en el planeta Jakku, lo que queda del imperio se refugia en ese planeta" << endl;
                    cout << "Tu mision sera llegar al planeta y ofrecer proteccion desde la distancia" << endl;
                    cout << "...";
                    cin.get();
                    cout << "Tus habilidades extraordinarias han hecho que los rebeldes se sientan seguros y han logrado avanzar" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "La caida de los destructores marcan el final de una era, la era del imperio y la Galaxia y tu finalemte son libres" << endl;
                    cout << "Que la Fuerza este contigo siempre" << endl;
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
        break;
    case 2: //Imperial
        cout << "Bienvenido a la Academia Imperial, nuestra mision es traer paz y justicia a la Galaxia" << endl;
        cout << "..." << endl;
        cin.get();
        cout << "Debes elegir como servir al Imperio\n" << endl;
        cout << "1.Piloto  2.Stormtrooper" << endl;
        cin >> Decision;
        switch (Decision)
        {
        case 1: //Piloto
            cout << "Los pilotos imperiales son el simbolo del poder del Imperio en el cielo" << endl;
            cout << "Con tus servicios podremos traer orden y poder destruir a la escoria rebelde" << endl;
            cout << "..." << endl;
            cin.get();
            cout << "Las batallas son intensas, la rebelion cada vez se hace mas fuerte y su mensaje se expande rapido" << endl;
            cout << "Sera posible que estes en el bando equivocado? debes elegir cuidadosamente\n" << endl;
            cout << "1.Ser rebelde  2.Seguir en el imperio" << endl;
            cin >> Decision;
            switch (Decision)
            {
            case 1: //Ser rebelde
                cout << "Ha tomado una buena decision, ayudara a muchas personas" << endl;
                cout << "Por su experiencia no le sera dificil pilotar un X-Wing" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Es todo un honor pilotar un X-Wing, la nave insignia de la rebelion y la que siempre debera estar en el frente de batalla\n" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Has logrado sobrevivir a arduas batallas acompañado del General Skywalker y combatiendo en la batalla de Endor," << endl;
                cout << "Venciendo al imperio" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Tienes una siguente eleccion, retirarte o seguir persiguiendo al los restos imperiales\n" << endl;
                cout << "1.Retirarse  2.Continuar luchando" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //Retirarse
                    cout << "Es comprensible, es un buen soldado y se lo merece mas que ningun otro, ha perdido muchas colegas en esta guerra" << endl;
                    cout << "Y debe de estar orgulloso porque usted tomo la decision de ayudar a la rebelion" << endl;
                    cout << "Pero aun puede ayudar de otras formas, puede elegir entre tener su famila tranquilamente o expandir por la Galaxia en mensaje de la" << endl;
                    cout << "Nueva Republica en los mundos distantes\n" << endl;
                    cout << "1.Formar una familia  2.Apoyar la Nueva Republica" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //Familia
                        cout << "Le deseamos la mas feliz de las vidas y esperamos que encuentre se camino en esta gran Galaxia llena de misterios\n" << endl;
                        cout << "Que la fuerza te acompañe siempre" << endl;
                        break;
                    case 2: //Apoyo
                        cout << "Has dedicado mucho tiempo viajando de mundo en mundo dando el mensaje de cambio de la Nueva Republica" << endl;
                        cout << "Acompañando en muchas ocasiones a la cansiller de la Nueva Republica Mon Mothma" << endl;
                        cout << "Finalmente estableciendote en el planeta capital de la Republica, Chandrila, formando tarde pero seguro una familia" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                case 2: //Combatir
                    cout << "Muy bien soldado, la lucha continua, solo recuerda que no hay garantias de salir con vida" << endl;
                    cout << "El imperio se ha resistido pero cada vez su poder es menor, se han acorralado en Jakku, es ahora o nunca\n" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Es una batalla complicada, perdimos muchos soldados, pero estamos dominando" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Al final pudimos obtener la victoria, a un alto costo, las perdidas de grandes hombres y mujeres" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Puedes elegir si continuar patrullando y buscando pequeñas celdas imperiales o hacer tu vida que deseabas\n" << endl;
                    cout << "1.Continuar  2.Hacer tu vida" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //continuar
                        cout << "Con el paso del tiempo ha sido muy importante el mantener el orden en las Regiones mas lejanas de la Galaxia" << endl;
                        cout << "Por eso se ta a asignado como un Ranger de la Nueva Republica y tu mision sera el mantener el orden y paz" << endl;
                        cout << "Dando el ejemplo de que siempre se puede elegir un mejor camino" << endl;
                        break;
                    case 2: //hacer tu vida
                        cout << "Despues de tanto tiempo peleando mas que nadie te lo mereces, buen viaje y que la fuerza tu acompañe siempre" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                default:
                    break;
                }
                break;
            case 2: //Seguir en el imperio
                cout << "Es admirable que usted mantenga los ideales del imperio, venceremos a esos rebeldes" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Nuestro gran plan sera utilizar la segunda estrella de la muerte para suprimir a las masas" << endl;
                cout << "Tu mision sera atacar toda nave rebelde que quiera acercarse al nuestra estacion" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Has hecho un buen trabajo, esos rebeldes no tienen oportunidad" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Nos acaban de informar que la base en Endor fue destruida" << endl;
                cout << "Tienes dos opciones, Reagruparte o tratar de eliminar tu solo las naves que puedas\n" << endl;
                cout << "1.Reagruparse  2.Seguir solo" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //Reagruparse
                    cout << "Al llegar con el resto de la flota imperial de repente la Estrella de la Muerte estallo" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "No queda mas que escapar y pelear otro en otro momento" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Tras bastante tiempo en lucha, esta batalla en Jakku decidira nuestros destinos" << endl;
                    cout << "Pelearas en los cielos del planeta, suerte" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Nuestros destructores han sido derribados, hemos perdido" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Para evitar que te capturen deberas estrellarte, Larga vida al Imperio" << endl;
                    break;
                case 2: //Seguir solo
                    cout << "Tus habilidades como piloto te han permitido derribar cuanta nave se ponga en tu camino" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Los altos mandos han ordenado a todas las naves que regresen" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Por desgracia estas muy lejos y los destructores quedantes se marcharon" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Lo unico que queda es pelear hasta que te derriben para no ser capturado" << endl;
                    cout << "Larga vida al imperio" << endl;
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            break;
        case 2: //Stormtrooper
            cout << "Muy bien soldado, es un gran honor pertenecer a las filas del Imperio" << endl;
            cout << "Tu deber sera llevar el orden y la paz a la Galaxia" << endl;
            cout << "Y acabar con esa escoria rebelde" << endl;
            cout << "..." << endl;
            cin.get();
            cout << "Las batallas son intensas y puedes notar que no es de todo bueno el imperio" << endl;
            cout << "Recurren mucho a actos de opresion contra gente inocente" << endl;
            cout << "..." << endl;
            cin.get();
            cout << "Debes elegir que hacer, ser rebelde o seguir en el Imperio" << endl;
            cout << "1.rebelde  2.Imperial" << endl;
            cin >> Decision;
            switch (Decision)
            {
            case 1: //Rebelde
                cout << "Hiciste una buena eleccion al pasar al lado de la alianza" << endl;
                cout << "Nosotros traeremos la paz y liberaremos a la Galaxia de la tirania del Imperio" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Has sobrevivido a varias batallas, pero esta es importante para derrotar al imperio, La batalla de Endor" << endl;
                cout << "Elige si combatir al lado del General Solo o asaltar un pequeña base al norte de la luna\n" << endl;
                cout << "1.General Solo  2.Base pequeña" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //General Solo
                    cout << "La mision del General Solo y Skywalker es llegar a la superficie de la luna y deshabilitar el escudo" << endl;
                    cout << "que protege la Estrella de la Muerte" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "A pesar de que se trataba de un trampa, con ayuda de los nativos la destruccion del escudo fue posible" << endl;
                    cout << "Solo faltaba que en el espacio los demas cumplieran con su mision" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "No paso mucho tiempo cuando la estrella de la muerte estallo, se podia ver desde la superficie" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "El imperio habia sido derrotado, pero muchas de sus fuerzas escaparon" << endl;
                    cout << "Puedes elegir si seguir peleando o retirarte\n" << endl;
                    cout << "1.Seguir peleando  2.Retirarte" << endl;
                    switch (Decision)
                    {
                    case 1: //seguir peleando
                        cout << "Aun con la derrota del imperio en Endor ellos continuan con su idea de seguir dominando la Galaxia" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Los ultimos remanentes imperiales se mantienen en el planeta Jakku" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Tu mision sera bajar al planeta e infiltrarte en las lineas enemigas" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "La batalla es intensa, hay muchas bajas aliadas, pero aun hay esperanza" << endl;
                        cout << "En el cielo las naves de la rebelion estan ganando, no falta mucho para que esto acabe" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Poco a poco los destructores estelares iban cayendo y los cazas imperiales eran destruidos" << endl;
                        cout << "El Imperio finalmente habia sido derrotado" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "La Nueva Republica porfin puede prosperar y todo gracias a ti y a tu valentia" << endl;
                        cout << "Que la fuerza te acompañe" << endl;
                        break;
                    case 2: //retirarse
                        cout << "Es comprensible, es un buen soldado y se lo merece mas que ningun otro, ha perdido muchas colegas en esta guerra" << endl;
                        cout << "Pero aun puede ayudar de otras formas, puede elegir entre tener su famila tranquilamente o expandir por la Galaxia en mensaje de la" << endl;
                        cout << "Nueva Republica en los mundos distantes\n" << endl;
                        cout << "1.Formar una familia  2.Apoyar la Nueva Republica" << endl;
                        cin >> Decision;
                        switch (Decision)
                        {
                        case 1: //Familia
                            cout << "Le deseamos la mas feliz de las vidas y esperamos que encuentre se camino en esta gran Galaxia llena de misterios\n" << endl;
                            cout << "Que la fuerza te acompañe siempre" << endl;
                            break;
                        case 2: //Apoyo
                            cout << "Has dedicado mucho tiempo viajando de mundo en mundo dando el mensaje de cambio de la Nueva Republica" << endl;
                            cout << "Acompañando en muchas ocasiones a la cansiller de la Nueva Republica Mon Mothma" << endl;
                            cout << "Finalmente estableciendote en el planeta capital de la Republica, Chandrila, formando tarde pero seguro una familia" << endl;
                            break;
                        default:
                            break;
                        }
                        break;
                    default:
                        break;
                    }
                    break;
                case 2: //Base pequeña
                    cout << "Tu y un equipo pequeño han sido enviados a explorar una base al norte de la luna" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Los datos muestran poca actividad imperial en el sector, lo que implica que sera un a tarea facil" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "La resistencia mostrada fue poca y la captura de la base fue rapida" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Pasaron unas cuantas horas y un escuadron que habi salido para reconocer el area no se ha reportado" << endl;
                    cout << "Elige si ir a buscarlos o quedarte y enviar a otros a buscarlos\n" << endl;
                    cout << "1.Ir tu mismo  2.Envira a otros" << endl;
                    cin >> Decision;
                    switch (Decision)
                    {
                    case 1: //Ir tu
                        cout << "Tras bastante tiempo caminando y de buscar no hay ningun rastro del escuadron" << endl;
                        cout << "De Repente un ruido entre los arboles comenzo a sonar" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Disparos de entre los arboles comenzaron a brotar y acertando en varios de los miembros del equipo" << endl;
                        cout << "Unos stormtroopers salieron de entre los arboles, pero estos se miraban diferentes" << endl;
                        cout << "Eran de color negro con detalles rojos, eran muy certeros en sus disparos" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Uno a uno fueron cayendo cada rebelde, fuiste herido en la pierna y no puedes correr" << endl;
                        cout << "Los stormtroopers se acercaron a ti y apuntaron cons sus armas" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Antes de que pudieran hacer algo, en el cielo se pudo admirar como la estrella de la muerte estallaba" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Aunque tu estabas condenado sabias que el destino de la Galaxia estaba asegurado" << endl;
                        cout << "Podias al fin descanzar" << endl;
                        break;
                    case 2: //Enviar a otros
                        cout << "Un equipo fue selecionado para hacer la busqueda del escuadron perdido" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Habian pasado unas cuantas horas y no habia rastro de ningun escuadron" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Hubo una explosicion cerca de donde estaban, varios stormtroopers negros con rojo aparecieron" << endl;
                        cout << "Comenzaron a disparar y una batalla comenzo" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Muchas bajas aliadas se hicieron evidentes, parecia que estaban condenados" << endl;
                        cout << "De repente en el cielo una enorme explosicion aparecio, era la estrella de la muerte" << endl;
                        cout << "..." << endl;
                        cin.get();
                        cout << "Los stormtroopers se retiraron inmediatamente" << endl;
                        cout << "Habian sido afortunados, la busqueda de esos stormtroopers puede esperar" << endl;
                        cout << "Es momento de celebrar, el imperio a caido" << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                default:
                    break;
                }
                break;
            case 2: //Seguir Imperial
                cout << "Decidio lo correcto soldado, ese alianza le miente a la Galaxia" << endl;
                cout << "El Imperio es lo unico que evita el desorden y el caos" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Esos rebeldes creen que podran ganarnos pero con nuestra nueva Estrella de la Muerte" << endl;
                cout << "no tienen oportunidad" << endl;
                cout << "..." << endl;
                cin.get();
                cout << "Ya vienen en camino, debemos prepararnos" << endl;
                cout << "Elige, 1. Bajar a la luna  2.Quedarte en la estrella de la muerte" << endl;
                cin >> Decision;
                switch (Decision)
                {
                case 1: //Bajar a la luna
                    cout << "Tu mision es bajar a la superficie de la luna y proteger el campo de fuerzas" << endl;
                    cout << "Debes evitar a toda costa que los rebeldes destruyan ese escudo" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "A pesar de que se lograron infiltrar en la base, logramos capturalos" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Nuestras fuerzas tienen redeados a los rebeldes, no tienen escapatoria" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Un sonido extraño se genero desde el bosque, debemos estar atentos" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Unas extrañas criaturas emergieron del bosque, parecen ser nativos" << endl;
                    cout << "Nos estn atacando, debemos dipersarnos" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Nuestras fuerzas y AT-ST estan cayendo" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Demasiado tarde, la base a explotado la Estrella de la muerte es vulnerable" << endl;
                    cout << "...";
                    cin.get();
                    cout << "Lo sentimos soldado no podemos ir por usted, mate a todos los que puedad y suerte" << endl;
                    break;
                case 2: //Estrella de la muerte
                    cout << "Esta estacion es impenetrable, estamos protegidos por el generador de escudos de la luna" << endl;
                    cout << "Esos rebeldes no tienen oportunidad" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "La flota rebelde acaba de emerger del hiperespacio, todos a sus puestos" << endl;
                    cout << "Tu deber sera controlar uno de los turbo laseres pa destruir las naves que se aproximen" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "La batalla es intensa, pero no venceran si el escudo esta activo" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Nos acaban de informar que la base en Endor fue destruida, debes defender esta estacion" << endl;
                    cout << "sobre toda cosa" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Naves rebeldes se infiltraron en la estacion" << endl;
                    cout << "Preparense para lo que sea" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "La estacion esta temblando, todos traten de llegar a una nave" << endl;
                    cout << "..." << endl;
                    cin.get();
                    cout << "Sentimos que no encontraras una nave para escapar" << endl;
                    cout << "pero su muerte no sera en vano, seguiremos luchando contra estos rebeldes" << endl;
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
        break;
    default:
        return main();
        break;
    }
}
