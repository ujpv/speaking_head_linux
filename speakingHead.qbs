import qbs
import qbs.Process
import qbs.File
import qbs.FileInfo
import qbs.TextFile
import "/home/chainic-vina/of_v0.9.2_linux64_release/libs/openFrameworksCompiled/project/qtcreator/ofApp.qbs" as ofApp

Project{
    property string of_root: '/home/chainic-vina/of_v0.9.2_linux64_release'

    ofApp {
        name: { return FileInfo.baseName(path) }

        files: [
            "src/abstactmorpher.h",
            "src/abstractspeaker.cpp",
            "src/abstractspeaker.h",
            "src/cpu_morpher.cpp",
            "src/cpu_morpher.h",
            "src/main.cpp",
            "src/ofApp.cpp",
            "src/ofApp.h",
            "src/simplespeaker.cpp",
            "src/simplespeaker.h",
            "src/simplespeaker_sapi.cpp",
            "src/simplespeaker_sapi.h",
            "src/stopwath.cpp",
            "src/stopwath.h",
        ]

        of.addons: [
            'ofxAssimpModelLoader',
             'ofxGui',
             'ofxObjLoader',
             'ofxXmlSettings'
        ]

        // additional flags for the project. the of module sets some
        // flags by default to add the core libraries, search paths...
        // this flags can be augmented through the following properties:
        of.pkgConfigs: []       // list of additional system pkgs to include
        of.includePaths: []     // include search paths
        of.cFlags: []           // flags passed to the c compiler
        of.cxxFlags: []         // flags passed to the c++ compiler
        of.linkerFlags: []      // flags passed to the linker
        of.defines: []          // defines are passed as -D to the compiler
        // and can be checked with #ifdef or #if in the code
        of.frameworks: []       // osx only, additional frameworks to link with the project

        // other flags can be set through the cpp module: http://doc.qt.io/qbs/cpp-module.html
        // eg: this will enable ccache when compiling
        //
        // cpp.compilerWrapper: 'ccache'

        Depends{
            name: "cpp"
        }

        // common rules that parse the include search paths, core libraries...
        Depends{
            name: "of"
        }

        // dependency with the OF library
        Depends{
            name: "openFrameworks"
        }
    }

    references: [FileInfo.joinPaths(of_root, "/libs/openFrameworksCompiled/project/qtcreator/openFrameworks.qbs")]
}
