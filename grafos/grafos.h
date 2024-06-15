#ifndef GRAFO_H
#define GRAFO_H

#include <QHash>
#include <QList>
#include <QString>


struct Edge {
    int nodo;
    QString grafoOrigen;
    QString grafoDestino;
    int magnitude1;
    int magnitude2;

    Edge(int grafo, const QString& origen, const QString& destino, int mag1, int mag2);
};

typedef QHash<QString, QHash<int, QList<Edge>>> MultiGrafo;


class Grafo {
public:
    Grafo();

    MultiGrafo multiGrafo;

    void printMultiGrafo() const;
    QList<QList<QString>> Rutas_posibles(MultiGrafo multigrafo, QString inicio, QString final, QList<QString> Ruta, QList<QList<QString>> Lista_rutas);

    void print_top5(QHash<int, QList<QList<QString>>> Top5);

    //Rutas por tiempo
    QHash<int, QList<QList<QString>>> Top5_tiempo(MultiGrafo multigrafo, QString inicio, QString final);
    int buscar_tiempo(MultiGrafo multigrafo, QString partida, QString fin);
    void insertar_ruta(QHash<int, QList<QList<QString>>>&Tiempos, QList<QString> Ruta, int tiempo_total);

    //Rutas por mana
    QHash<int, QList<QList<QString>>> Top5_mana(MultiGrafo multigrafo, QString inicio, QString final);
    int buscar_mana(MultiGrafo multigrafo, QString partida, QString fin);
    void insertar_ruta_mana(QHash<int, QList<QList<QString>>>&Manas, QList<QString> Ruta, int mana_total);

    //Rutas por conexiones
    QHash<int, QList<QList<QString>>> Top5_conexiones(MultiGrafo multigrafo, QString inicio, QString final);
    void insertar_ruta_conexiones(QHash<int, QList<QList<QString>>>&Conexiones, QList<QString> Ruta, int conexiones_total);
private:

};

#endif // GRAPH_H
