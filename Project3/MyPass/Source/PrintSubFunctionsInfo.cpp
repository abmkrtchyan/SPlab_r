#include "llvm/MyPasses/Header/PrintSubFunctionsInfo.h"

using namespace llvm;

  bool PrintSubFunctionsInfo::runOnFunction(Function &F) {
  errs() << PrintSubFunctionsInfo::count++ << ". ";
  errs().write_escaped(F.getName()) << '\n';
  return false;
}

char PrintSubFunctionsInfo::ID = 0;
int PrintSubFunctionsInfo::count = 1;

static RegisterPass<PrintSubFunctionsInfo> X("PrintSubFunctionsInfo",
                                             "Printer  Functions Pass",
                                             false /* Only looks at CFG */,
                                             false /* Analysis Pass */);

static RegisterStandardPasses Y(PassManagerBuilder::EP_EarlyAsPossible,
                                [](const PassManagerBuilder &Builder,
                                   legacy::PassManagerBase &PM) {
                                  PM.add(new PrintSubFunctionsInfo());
                                });


