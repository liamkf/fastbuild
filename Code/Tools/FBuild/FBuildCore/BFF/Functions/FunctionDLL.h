// FunctionDLL
//------------------------------------------------------------------------------
#pragma once

// Includes
//------------------------------------------------------------------------------
#include "FunctionExecutable.h"

// FunctionDLL
//------------------------------------------------------------------------------
class FunctionDLL : public FunctionExecutable
{
public:
    explicit        FunctionDLL();
    inline virtual ~FunctionDLL() = default;

    virtual bool    Commit( NodeGraph & nodeGraph, const BFFIterator & funcStartIter ) const override;
};

//------------------------------------------------------------------------------
