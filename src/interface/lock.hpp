// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from async.djinni

#pragma once

namespace ledgerapp_gen {

class Lock {
public:
    virtual ~Lock() {}

    virtual void lock() = 0;

    virtual bool tryLock() = 0;

    virtual void unlock() = 0;
};

}  // namespace ledgerapp_gen