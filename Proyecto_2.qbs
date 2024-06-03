import qbs.FileInfo

QtApplication {
    Depends { name: "Qt.widgets" }

    cpp.defines: [
        // You can make your code fail to compile if it uses deprecated APIs.
        // In order to do so, uncomment the following line.
        //"QT_DISABLE_DEPRECATED_BEFORE=0x060000" // disables all the APIs deprecated before Qt 6.0.0
    ]

    files: [
        "assets/source.qrc",
        "extra/extra.cpp",
        "extra/extra.h",
        "extra/extra.ui",
        "grafos/grafos.cpp",
        "grafos/grafos.h",
        "main.cpp",
        "mainwindow.cpp",
        "mainwindow.h",
        "mainwindow.ui",
        "map/map.cpp",
        "map/map.h",
        "map/map.ui",
        "simulacion/simulacion.cpp",
        "simulacion/simulacion.h",
        "simulacion/simulacion.ui",
        "transporte/transporte.cpp",
        "transporte/transporte.h",
        "transporte/transporte.ui",
    ]

    install: true
    installDir: qbs.targetOS.contains("qnx") ? FileInfo.joinPaths("/tmp", name, "bin") : base
}
