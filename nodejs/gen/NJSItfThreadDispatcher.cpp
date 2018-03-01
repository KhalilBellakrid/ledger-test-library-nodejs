// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread.djinni

#include "NJSItfThreadDispatcher.hpp"

using namespace v8;
using namespace node;
using namespace std;


std::shared_ptr<ExecutionContext> NJSItfThreadDispatcher::getSerialExecutionContext(const std::string & name)
{

    Nan::HandleScope scope;
    Local<Context> context = Nan::GetCurrentContext();
    //Wrap parameters
    auto arg_0 = Nan::New<String>(name).ToLocalChecked();

    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSItfThreadDispatcher::getSerialExecutionContext fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getSerialExecutionContext").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getSerialExecutionContext = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_getSerialExecutionContext.IsEmpty())
    {
        Nan::ThrowError("NJSItfThreadDispatcher::getSerialExecutionContext call failed");
    }
    auto checkedResult_getSerialExecutionContext = result_getSerialExecutionContext.ToLocalChecked();
    Local<Object> njs_fResult_getSerialExecutionContext = checkedResult_getSerialExecutionContext->ToObject(context).ToLocalChecked();
    NJSItfExecutionContext *njs_ptr_fResult_getSerialExecutionContext = static_cast<NJSItfExecutionContext *>(Nan::GetInternalFieldPointer(njs_fResult_getSerialExecutionContext,0));
    std::shared_ptr<NJSItfExecutionContext> fResult_getSerialExecutionContext(njs_ptr_fResult_getSerialExecutionContext);

    return fResult_getSerialExecutionContext;
}

std::shared_ptr<ExecutionContext> NJSItfThreadDispatcher::getThreadPoolExecutionContext(const std::string & name)
{

    Nan::HandleScope scope;
    Local<Context> context = Nan::GetCurrentContext();
    //Wrap parameters
    auto arg_0 = Nan::New<String>(name).ToLocalChecked();

    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSItfThreadDispatcher::getThreadPoolExecutionContext fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getThreadPoolExecutionContext").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getThreadPoolExecutionContext = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_getThreadPoolExecutionContext.IsEmpty())
    {
        Nan::ThrowError("NJSItfThreadDispatcher::getThreadPoolExecutionContext call failed");
    }
    auto checkedResult_getThreadPoolExecutionContext = result_getThreadPoolExecutionContext.ToLocalChecked();
    Local<Object> njs_fResult_getThreadPoolExecutionContext = checkedResult_getThreadPoolExecutionContext->ToObject(context).ToLocalChecked();
    NJSItfExecutionContext *njs_ptr_fResult_getThreadPoolExecutionContext = static_cast<NJSItfExecutionContext *>(Nan::GetInternalFieldPointer(njs_fResult_getThreadPoolExecutionContext,0));
    std::shared_ptr<NJSItfExecutionContext> fResult_getThreadPoolExecutionContext(njs_ptr_fResult_getThreadPoolExecutionContext);

    return fResult_getThreadPoolExecutionContext;
}

std::shared_ptr<ExecutionContext> NJSItfThreadDispatcher::getMainExecutionContext()
{

    Nan::HandleScope scope;
    Local<Context> context = Nan::GetCurrentContext();
    //Wrap parameters

    Handle<Value> args[0] = {};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSItfThreadDispatcher::getMainExecutionContext fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getMainExecutionContext").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getMainExecutionContext = Nan::CallAsFunction(calling_funtion->ToObject(),handle,0,args);
    if(result_getMainExecutionContext.IsEmpty())
    {
        Nan::ThrowError("NJSItfThreadDispatcher::getMainExecutionContext call failed");
    }
    auto checkedResult_getMainExecutionContext = result_getMainExecutionContext.ToLocalChecked();
    Local<Object> njs_fResult_getMainExecutionContext = checkedResult_getMainExecutionContext->ToObject(context).ToLocalChecked();
    NJSItfExecutionContext *njs_ptr_fResult_getMainExecutionContext = static_cast<NJSItfExecutionContext *>(Nan::GetInternalFieldPointer(njs_fResult_getMainExecutionContext,0));
    std::shared_ptr<NJSItfExecutionContext> fResult_getMainExecutionContext(njs_ptr_fResult_getMainExecutionContext);

    return fResult_getMainExecutionContext;
}

std::shared_ptr<Lock> NJSItfThreadDispatcher::newLock()
{

    Nan::HandleScope scope;
    Local<Context> context = Nan::GetCurrentContext();
    //Wrap parameters

    Handle<Value> args[0] = {};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSItfThreadDispatcher::newLock fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("newLock").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_newLock = Nan::CallAsFunction(calling_funtion->ToObject(),handle,0,args);
    if(result_newLock.IsEmpty())
    {
        Nan::ThrowError("NJSItfThreadDispatcher::newLock call failed");
    }
    auto checkedResult_newLock = result_newLock.ToLocalChecked();
    Local<Object> njs_fResult_newLock = checkedResult_newLock->ToObject(context).ToLocalChecked();
    NJSItfLock *njs_ptr_fResult_newLock = static_cast<NJSItfLock *>(Nan::GetInternalFieldPointer(njs_fResult_newLock,0));
    std::shared_ptr<NJSItfLock> fResult_newLock(njs_ptr_fResult_newLock);

    return fResult_newLock;
}
NAN_METHOD(NJSItfThreadDispatcher::addRef) {

    NJSItfThreadDispatcher *obj = Nan::ObjectWrap::Unwrap<NJSItfThreadDispatcher>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSItfThreadDispatcher::removeRef) {

    NJSItfThreadDispatcher *obj = Nan::ObjectWrap::Unwrap<NJSItfThreadDispatcher>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSItfThreadDispatcher::New) {

    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSItfThreadDispatcher function can only be called as constructor (use New)");
    }

    NJSItfThreadDispatcher *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSItfThreadDispatcher(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSItfThreadDispatcher::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSItfThreadDispatcher::Initialize(Local<Object> target) {

    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSItfThreadDispatcher::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSItfThreadDispatcher").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSItfThreadDispatcher").ToLocalChecked(), func_template->GetFunction());
}
