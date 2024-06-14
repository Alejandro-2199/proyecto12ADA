#include "grafos.h"
#include "QDebug"
#include <algorithm>

using namespace std;
Edge::Edge(int grafo, const QString& origen, const QString& destino, int mag1, int mag2) :
    nodo(grafo), grafoOrigen(origen), grafoDestino(destino), magnitude1(mag1), magnitude2(mag2) {}


Grafo::Grafo() {
    QList<Edge> Lista_Vacia = QList<Edge>();

    // Akkala Tower
    multiGrafo["Akkala Tower"][0].append(Edge(3, "Akkala Tower", "Eldin Tower", 50, 10));
    multiGrafo["Akkala Tower"][0].append(Edge(10, "Akkala Tower", "Lanayru Tower", 60, 15));

    // Central Tower
    multiGrafo["Central Tower"][1].append(Edge(2, "Central Tower", "Dueling Peaks Tower", 100, 35));
    multiGrafo["Central Tower"][1].append(Edge(6, "Central Tower", "Great Plateau Tower", 60, 15));
    multiGrafo["Central Tower"][1].append(Edge(11, "Central Tower", "Ridgeland Tower", 70, 15));
    multiGrafo["Central Tower"][1].append(Edge(13, "Central Tower", "Woodland Tower", 120, 45));

    // Dueling Peaks Tower
    multiGrafo["Dueling Peaks Tower"][2].append(Edge(4, "Dueling Peaks Tower", "Faron Tower", 70, 15));
    multiGrafo["Dueling Peaks Tower"][2].append(Edge(6, "Dueling Peaks Tower", "Great Plateau Tower", 50, 10));
    multiGrafo["Dueling Peaks Tower"][2].append(Edge(7, "Dueling Peaks Tower", "Hateno Tower", 70, 20));
    multiGrafo["Dueling Peaks Tower"][2].append(Edge(9, "Dueling Peaks Tower", "Lake Tower", 50, 15));
    multiGrafo["Dueling Peaks Tower"][2].append(Edge(10, "Dueling Peaks Tower", "Lanayru Tower", 90, 35));

    // Eldin Tower
    multiGrafo["Eldin Tower"][3].append(Edge(10, "Eldin Tower", "Lanayru Tower", 60, 20));
    multiGrafo["Eldin Tower"][3].append(Edge(13, "Eldin Tower", "Woodland Tower", 50, 10));


    // Faron Tower
    multiGrafo["Faron Tower"][4].append(Edge(7, "Faron Tower", "Hateno Tower", 60, 20));
    multiGrafo["Faron Tower"][4].append(Edge(9, "Faron Tower", "Lake Tower", 40, 15));

    // Gerudo Tower
    multiGrafo["Gerudo Tower"][5].append(Edge(6, "Gerudo Tower", "Great Plateau Tower", 85, 35));
    multiGrafo["Gerudo Tower"][5].append(Edge(12, "Gerudo Tower", "Tabantha Tower", 60, 40));
    multiGrafo["Gerudo Tower"][5].append(Edge(14, "Gerudo Tower", "Wasteland Tower", 60, 20));

    // Great Plateau Tower
    multiGrafo["Great Plateau Tower"][6].append(Edge(6, "Great Plateau Tower", "Great Plateau Tower", 10, 5));
    multiGrafo["Great Plateau Tower"][6].append(Edge(9, "Great Plateau Tower", "Lake Tower", 50, 20));

    // Hateno Tower
    multiGrafo["Hateno Tower"][7].append(Edge(7, "Hateno Tower", "Hateno Tower", 10, 10));
    multiGrafo["Hateno Tower"][7].append(Edge(10, "Hateno Tower", "Lanayru Tower", 80, 40));

    // Hebra Tower
    multiGrafo["Hebra Tower"][8].append(Edge(11, "Hebra Tower", "Ridgeland Tower", 60, 30));
    multiGrafo["Hebra Tower"][8].append(Edge(12, "Hebra Tower", "Tabantha Tower", 50, 35));

    // Lake Tower
    multiGrafo["Lake Tower"][9].append(Edge(14, "Lake Tower", "Wasteland Tower", 60, 20));

    // Lanayru Tower
    multiGrafo["Lanayru Tower"][10].append(Edge(13, "Lanayru Tower", "Woodland Tower", 80, 30));

    // Ridgeland Tower
    multiGrafo["Ridgeland Tower"][11].append(Edge(12, "Ridgeland Tower", "Tabantha Tower", 50, 35));

    // Tabantha Tower
    multiGrafo["Tabantha Tower"][12] = Lista_Vacia;

    // Woodland Tower
    multiGrafo["Woodland Tower"][13] = Lista_Vacia;

    // Wasteland Tower
    multiGrafo["Wasteland Tower"][14] = Lista_Vacia;
}

void Grafo::printMultiGrafo() const {
    QHash<QString, QHash<int, QList<Edge>>>::const_iterator iter;
    for (iter = multiGrafo.constBegin(); iter != multiGrafo.constEnd(); ++iter) {
        qDebug() << "Grafo:" << iter.key();
        const QHash<int, QList<Edge>>& subGraph = iter.value();
        QHash<int, QList<Edge>>::const_iterator subIter;
        for (subIter = subGraph.constBegin(); subIter != subGraph.constEnd(); ++subIter) {
            int nodo = subIter.key();
            qDebug() << "  Nodo:" << nodo;
            const QList<Edge>& aristas = subIter.value();
            for (const Edge& arista : aristas) {
                qDebug() << "    Arista hacia:" << arista.grafoDestino
                         << " Magnitud1:" << arista.magnitude1
                         << " Magnitud2:" << arista.magnitude2;
            }
        }
    }
}



QList<QList<QString> > Grafo::Rutas_posibles(MultiGrafo multigrafo, QString inicio, QString final, QList<QString> Ruta, QList<QList<QString>> Lista_rutas)
{
    QHash<int, QList<Edge>> hash = multigrafo.value(inicio);
    Ruta.append(inicio);
    if(inicio == final){
        Lista_rutas.append(Ruta);
    }else{
        QHash<int, QList<Edge>>::const_iterator Iter;
        for(Iter = hash.constBegin(); Iter != hash.constEnd(); ++Iter){
            const QList<Edge>& adyacencia = Iter.value();
            for(const Edge& arista : adyacencia){
                if(!Ruta.contains(arista.grafoDestino)){
                    Lista_rutas = Rutas_posibles(multigrafo, arista.grafoDestino, final, Ruta, Lista_rutas);
                }
            }
        }
    }
    Ruta.removeLast();
    return Lista_rutas;
}

QHash<int, QList<QList<QString>>> Grafo::Top5_tiempo(MultiGrafo multigrafo, QString inicio, QString final)
{
    QList<QString> Ruta;
    QList<QList<QString>> Lista_rutas;
    QHash<int, QList<QList<QString>>> Tiempos;
    Lista_rutas = Rutas_posibles(multigrafo, inicio, final, Ruta, Lista_rutas);
    for(QList<QString>& ruta : Lista_rutas){
        int Tiempo_total = 0;
        int pos_ciclo = 0;
        //Sacar los costos de cada ruta
        for(int i = 1; i < ruta.size(); ++i){
            Tiempo_total += buscar_tiempo(multigrafo, ruta[i - 1], ruta[i]);
            if(ruta[i] == "Great Plateau Tower" || ruta[i] == "Hateno Tower"){
                pos_ciclo = i; //conocer la posicion de las torres conectadas asi mismas
            }
        }
        insertar_ruta(Tiempos, ruta, Tiempo_total);
        if(ruta.contains("Great Plateau Tower")){
            for(int x = 1; x < 5; x++){
                int Tiempo_repeticion = Tiempo_total + buscar_tiempo(multigrafo, "Great Plateau Tower", "Great Plateau Tower")*x;
                ruta.insert(pos_ciclo, "Great Plateau Tower");
                insertar_ruta(Tiempos, ruta, Tiempo_repeticion);
            }
        }
        if(ruta.contains("Hateno Tower")){
            for(int x = 1; x < 5; x++){
                int Tiempo_repeticion = Tiempo_total + buscar_tiempo(multigrafo, "Hateno Tower", "Hateno Tower")*x;
                ruta.insert(pos_ciclo, "Hateno Tower");
                insertar_ruta(Tiempos, ruta, Tiempo_repeticion);
            }
        }
    }
    return Tiempos;
}

int Grafo::buscar_tiempo(MultiGrafo multigrafo, QString partida, QString fin)
{
    QHash<int, QList<Edge>> hash = multigrafo.value(partida);
    QHash<int, QList<Edge>>::const_iterator Iter;
    for(Iter = hash.constBegin(); Iter != hash.constEnd(); ++Iter){
        QList<Edge> Adyacencia = Iter.value();
        for(const Edge& arista : Adyacencia){
            if(arista.grafoDestino == fin){
                return arista.magnitude2;
            }
        }
    }
    return -1;
}

void Grafo::insertar_ruta(QHash<int, QList<QList<QString> > > &Tiempos, QList<QString> Ruta, int tiempo_total)
{
    if(Tiempos.contains(tiempo_total)){
        Tiempos[tiempo_total].append(Ruta);
    }
    else{
        QList<QList<QString>> nuevas_rutas;
        if(Tiempos.size() < 5){
            nuevas_rutas.append(Ruta);
            Tiempos.insert(tiempo_total, nuevas_rutas);
        }
        else{
            QList<int> Lista_Tiempos = Tiempos.keys();
            auto max = max_element(Lista_Tiempos.begin(), Lista_Tiempos.end());
            if(tiempo_total < *max){
                Tiempos.remove(*max);
                nuevas_rutas.append(Ruta);
                Tiempos.insert(tiempo_total, nuevas_rutas);
            }
        }
    }
}

QHash<int, QList<QList<QString> > > Grafo::Top5_mana(MultiGrafo multigrafo, QString inicio, QString final)
{
    QList<QString> Ruta;
    QList<QList<QString>> Lista_rutas;
    QHash<int, QList<QList<QString>>> Manas;
    Lista_rutas = Rutas_posibles(multigrafo, inicio, final, Ruta, Lista_rutas);
    for(QList<QString>& ruta : Lista_rutas){
        int Mana_total = 0;
        int pos_ciclo = 0;
        //Sacar los costos de cada ruta
        for(int i = 1; i < ruta.size(); ++i){
            Mana_total += buscar_mana(multigrafo, ruta[i - 1], ruta[i]);
            if(ruta[i] == "Great Plateau Tower" || ruta[i] == "Hateno Tower"){
                pos_ciclo = i; //conocer la posicion de las torres conectadas asi mismas
            }
        }
        insertar_ruta(Manas, ruta, Mana_total);
        if(ruta.contains("Great Plateau Tower")){
            for(int x = 1; x < 5; x++){
                int Tiempo_repeticion = Mana_total + buscar_mana(multigrafo, "Great Plateau Tower", "Great Plateau Tower")*x;
                ruta.insert(pos_ciclo, "Great Plateau Tower");
                insertar_ruta(Manas, ruta, Tiempo_repeticion);
            }
        }
        if(ruta.contains("Hateno Tower")){
            for(int x = 1; x < 5; x++){
                int Tiempo_repeticion = Mana_total + buscar_mana(multigrafo, "Hateno Tower", "Hateno Tower")*x;
                ruta.insert(pos_ciclo, "Hateno Tower");
                insertar_ruta(Manas, ruta, Tiempo_repeticion);
            }
        }
    }
    return Manas;
}

int Grafo::buscar_mana(MultiGrafo multigrafo, QString partida, QString fin)
{
    QHash<int, QList<Edge>> hash = multigrafo.value(partida);
    QHash<int, QList<Edge>>::const_iterator Iter;
    for(Iter = hash.constBegin(); Iter != hash.constEnd(); ++Iter){
        QList<Edge> Adyacencia = Iter.value();
        for(const Edge& arista : Adyacencia){
            if(arista.grafoDestino == fin){
                return arista.magnitude1;
            }
        }
    }
    return -1;
}

void Grafo::insertar_ruta_mana(QHash<int, QList<QList<QString> > > &Manas, QList<QString> Ruta, int mana_total)
{
    if(Manas.contains(mana_total)){
        Manas[mana_total].append(Ruta);
    }
    else{
        QList<QList<QString>> nuevas_rutas;
        if(Manas.size() < 5){
            nuevas_rutas.append(Ruta);
            Manas.insert(mana_total, nuevas_rutas);
        }
        else{
            QList<int> Lista_Tiempos = Manas.keys();
            auto max = max_element(Lista_Tiempos.begin(), Lista_Tiempos.end());
            if(mana_total < *max){
                Manas.remove(*max);
                nuevas_rutas.append(Ruta);
                Manas.insert(mana_total, nuevas_rutas);
            }
        }
    }
}

QHash<int, QList<QList<QString> > > Grafo::Top5_conexiones(MultiGrafo multigrafo, QString inicio, QString final)
{
    QList<QString> Ruta;
    QList<QList<QString>> Lista_rutas;
    QHash<int, QList<QList<QString>>> Conexiones;
    Lista_rutas = Rutas_posibles(multigrafo, inicio, final, Ruta, Lista_rutas);

    for(QList<QString>& ruta : Lista_rutas){
        int Conexiones_total = ruta.size();
        int pos_ciclo = 0;
        //Sacar las conexiones de cada ruta
        for(int i = 1; i < ruta.size(); ++i){
            if(ruta[i] == "Great Plateau Tower" || ruta[i] == "Hateno Tower"){
                pos_ciclo = i; //conocer la posicion de las torres conectadas asi mismas
            }
        }
        insertar_ruta(Conexiones, ruta, Conexiones_total);
        if(ruta.contains("Great Plateau Tower")){
            for(int x = 1; x < 5; x++){
                ruta.insert(pos_ciclo, "Great Plateau Tower");
                int Conexiones_repeticion = ruta.size();
                insertar_ruta(Conexiones, ruta, Conexiones_repeticion);
            }
        }
        if(ruta.contains("Hateno Tower")){
            for(int x = 1; x < 5; x++){
                ruta.insert(pos_ciclo, "Hateno Tower");
                int Conexiones_repeticion = ruta.size();
                insertar_ruta(Conexiones, ruta, Conexiones_repeticion);
            }
        }
    }
    return Conexiones;
}

void Grafo::insertar_ruta_conexiones(QHash<int, QList<QList<QString> > > &Conexiones, QList<QString> Ruta, int conexiones_total)
{
    if(Conexiones.contains(conexiones_total)){
        Conexiones[conexiones_total].append(Ruta);
    }
    else{
        QList<QList<QString>> nuevas_rutas;
        if(Conexiones.size() < 5){
            nuevas_rutas.append(Ruta);
            Conexiones.insert(conexiones_total, nuevas_rutas);
        }
        else{
            QList<int> Lista_Tiempos = Conexiones.keys();
            auto max = max_element(Lista_Tiempos.begin(), Lista_Tiempos.end());
            if(conexiones_total < *max){
                Conexiones.remove(*max);
                nuevas_rutas.append(Ruta);
                Conexiones.insert(conexiones_total, nuevas_rutas);
            }
        }
    }
}


void Grafo::print_top5(QHash<int, QList<QList<QString>>> Top5)
{
    QHash<int, QList<QList<QString>>> hashOrdenado;

    if(Top5.isEmpty()){
        qDebug()<<"No hay conexion"<<"\n";
    }
    else{
        QList<int> Lista_costos = Top5.keys();
        sort(Lista_costos.begin(), Lista_costos.end());

        for(int i = 0; i < Lista_costos.size(); ++i){
            qDebug() << "Top: "<<i+1<<"\n";
            qDebug() << "Coste:"<<QString::number(Lista_costos[i])<<"\n";
            for(const QList<QString>& _Ruta : Top5.value(Lista_costos[i])){
                qDebug()<<"[ ";
                for(int x = 0; x < _Ruta.size(); ++x){
                    qDebug()<<_Ruta[x]<<" ";
                }
                qDebug()<<"]"<<"\n";

            }
        }
    }
}
