#ifndef LLVM_PROJECT_PRINTSUBFUNCTIONSINFO_H
#define LLVM_PROJECT_PRINTSUBFUNCTIONSINFO_H

#include "llvm/IR/Function.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"

#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"

namespace llvm {
class PrintSubFunctionsInfo : public FunctionPass {
public:
  static char ID;
  static int count;

  PrintSubFunctionsInfo() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override;
};
}


#endif // LLVM_PROJECT_PRINTSUBFUNCTIONSINFO_H