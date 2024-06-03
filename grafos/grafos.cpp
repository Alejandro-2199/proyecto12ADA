#include "grafos.h"
#include "qdebug.h"

Edge::Edge(int grafo, const QString& origen, const QString& destino, int mag1, int mag2) :
    nodo(grafo), grafoOrigen(origen), grafoDestino(destino), magnitude1(mag1), magnitude2(mag2) {}


Grafo::Grafo() {

    // Akkala Tower
    multiGrafo["Akkala Tower"][0] << Edge(3, "Akkala Tower", "Eldin Tower", 50, 10)
                                << Edge(10, "Akkala Tower", "Lanayru Tower", 60, 15);

    // Central Tower
    multiGrafo["Central Tower"][1]  << Edge(2, "Central Tower", "Dueling Peaks Tower", 100, 35)
                                << Edge(6, "Central Tower", "Great Plateau Tower", 60, 15)
                                << Edge(11, "Central Tower", "Ridgeland Tower", 70, 15)
                                << Edge(13, "Central Tower", "Woodland Tower", 120, 45);

    // Dueling Peaks Tower
    multiGrafo["Dueling Peaks Tower"][2]  << Edge(4, "Dueling Peaks Tower", "Faron Tower", 70, 15)
                                        << Edge(6, "Dueling Peaks Tower", "Great Plateau Tower", 50, 10)
                                        << Edge(7, "Dueling Peaks Tower", "Hateno Tower", 70, 20)
                                        << Edge(9, "Dueling Peaks Tower", "Lake Tower", 50, 15)
                                        << Edge(11, "Dueling Peaks Tower", "Lanayru Tower", 90, 35);

    // Eldin Tower
    multiGrafo["Eldin Tower"][3]  << Edge(11, "Eldin Tower", "Lanayru Tower", 60, 20)
                                << Edge(13, "Eldin Tower", "Woodland Tower", 50, 10);


    // Faron Tower
    multiGrafo["Faron Tower"][4]  << Edge(7, "Faron Tower", "Hateno Tower", 60, 20)
                                << Edge(9, "Faron Tower", "Lake Tower", 40, 15);

    // Gerudo Tower
    multiGrafo["Gerudo Tower"][5]  << Edge(6, "Gerudo Tower", "Great Plateau Tower", 85, 35)
                                << Edge(12, "Gerudo Tower", "Tabantha Tower", 60, 40)
                                << Edge(14, "Gerudo Tower", "Wasteland Tower", 60, 20);

    // Great Plateau Tower
    multiGrafo["Great Plateau Tower"][6]  << Edge(6, "Great Plateau Tower", "Great Plateau Tower", 10, 5)
                                        << Edge(9, "Great Plateau Tower", "Lake Tower", 50, 20);

    // Hateno Tower
    multiGrafo["Hateno Tower"][7]  << Edge(7, "Hateno Tower", "Hateno Tower", 10, 10)
                                         << Edge(10, "Hateno Tower", "Lanayru Tower", 80, 40);

    // Hebra Tower
    multiGrafo["Hebra Tower"][8]  << Edge(11, "Hebra Tower", "Ridgeland Tower", 60, 30)
                                  << Edge(12, "Hebra Tower", "Tabantha Tower", 50, 35);

    // Lake Tower
    multiGrafo["Lake Tower"][9]  << Edge(14, "Lake Tower", "Wasteland Tower", 60, 30);

    // Lanayru Tower
    multiGrafo["Lanayru Tower"][10]  << Edge(13, "Lanayru Tower", "Woodland Tower", 80, 30);

    // Ridgeland Tower
    multiGrafo["Ridgeland Tower"][11]  << Edge(12, "Ridgeland Tower", "Tabantha Tower", 50, 35);

    // Tabantha Tower
    multiGrafo["Tabantha Tower"][12];

    // Woodland Tower
    multiGrafo["Woodland Tower"][13];

    // Wasteland Tower
    multiGrafo["Wasteland Tower"][14];
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
