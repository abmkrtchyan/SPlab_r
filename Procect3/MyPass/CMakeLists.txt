add_llvm_library( PRINTAllFunctionsNames MODULE
        Source/PrintSubFunctionsInfo.cpp

        PLUGIN_TOOL
        opt
        )