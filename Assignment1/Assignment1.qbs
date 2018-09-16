import qbs

Project {
    minimumQbsVersion: "1.7.1"

    CppApplication {
        consoleApplication: true
        files: [
            "dllist.cpp",
            "dllist.h",
            "main.cpp",
            "nodedl.cpp",
            "nodedl.h",
            "nodesl.cpp",
            "nodesl.h",
            "sllist.cpp",
            "sllist.h",
        ]

        Group {     // Properties for the produced executable
            fileTagsFilter: "application"
            qbs.install: true
        }
    }
}
