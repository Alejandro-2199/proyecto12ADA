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

private:

};

#endif // GRAPH_H
