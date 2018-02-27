// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from async.djinni

#ifndef DJINNI_GENERATED_NJSITFEXECUTIONCONTEXT_HPP
#define DJINNI_GENERATED_NJSITFEXECUTIONCONTEXT_HPP


#include "../../src/interface/runnable.hpp"
#include "NJSItfRunnableCpp.hpp"
#include <cstdint>
#include <memory>

#include <nan.h>
#include <node.h>
#include "../../src/interface/execution_context.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledgerapp_gen;

class NJSItfExecutionContext: public Nan::ObjectWrap, public ledgerapp_gen::ExecutionContext {
public:

    static void Initialize(Local<Object> target);
    ~NJSItfExecutionContext() {njs_impl.Reset();};
    NJSItfExecutionContext(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void execute(const std::shared_ptr<Runnable> & runnable);

    void delay(const std::shared_ptr<Runnable> & runnable, int64_t millis);

private:


    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);

    Nan::Persistent <Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSITFEXECUTIONCONTEXT_HPP