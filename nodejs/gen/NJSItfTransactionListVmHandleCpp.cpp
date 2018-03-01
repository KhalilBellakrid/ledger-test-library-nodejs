// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from view_model.djinni

#include "NJSItfTransactionListVmHandleCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSItfTransactionListVmHandle::start) {

    //Check if method called with right number of arguments
    if(info.Length() != 4)
    {
        return Nan::ThrowError("NJSItfTransactionListVmHandle::start needs 4 arguments");
    }

    Isolate *isolate = info.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(context).ToLocalChecked();
    NJSItfTransactionListVmObserver *njs_ptr_arg_0 = static_cast<NJSItfTransactionListVmObserver *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    std::shared_ptr<NJSItfTransactionListVmObserver> arg_0(njs_ptr_arg_0);

    vector<std::string> arg_1;
    Local<Array> arg_1_container = Local<Array>::Cast(info[1]);
    for(uint32_t i = 0; i < arg_1_container->Length(); i++)
    {
        if(arg_1_container->Get(i)->IsString())
        {
            String::Utf8Value string_arg_1_elem(arg_1_container->Get(i)->ToString()->ToString());
            auto arg_1_elem = std::string(*string_arg_1_elem);
            arg_1.emplace_back(arg_1_elem);
        }
    }


    auto field_arg_2_1 = Nan::Get(info[2]->ToObject(), Nan::New<String>("coin_type").ToLocalChecked()).ToLocalChecked();
    auto arg_2_1 = Nan::To<int32_t>(field_arg_2_1).FromJust();
    ApiOptions arg_2(arg_2_1);

    Local<Object> njs_arg_3 = info[3]->ToObject(context).ToLocalChecked();
    NJSItfHandleResponse *njs_ptr_arg_3 = static_cast<NJSItfHandleResponse *>(Nan::GetInternalFieldPointer(njs_arg_3,0));
    std::shared_ptr<NJSItfHandleResponse> arg_3(njs_ptr_arg_3);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSItfTransactionListVmHandle* obj = Nan::ObjectWrap::Unwrap<NJSItfTransactionListVmHandle>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSItfTransactionListVmHandle::start : implementation of TransactionListVmHandle is not valid");
    }
    cpp_impl->start(arg_0,arg_1,arg_2,arg_3);
}
NAN_METHOD(NJSItfTransactionListVmHandle::stop) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSItfTransactionListVmHandle::stop needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSItfTransactionListVmHandle* obj = Nan::ObjectWrap::Unwrap<NJSItfTransactionListVmHandle>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSItfTransactionListVmHandle::stop : implementation of TransactionListVmHandle is not valid");
    }
    cpp_impl->stop();
}

NAN_METHOD(NJSItfTransactionListVmHandle::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSItfTransactionListVmHandle function can only be called as constructor (use New)");
    }
    NJSItfTransactionListVmHandle *node_instance = new NJSItfTransactionListVmHandle(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSItfTransactionListVmHandle::TransactionListVmHandle_prototype;

Handle<Object> NJSItfTransactionListVmHandle::wrap(const std::shared_ptr<ledgerapp_gen::TransactionListVmHandle> &object) {
    Local<ObjectTemplate> local_prototype = Nan::New(TransactionListVmHandle_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSItfTransactionListVmHandle *new_obj = new NJSItfTransactionListVmHandle(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSItfTransactionListVmHandle::wrap: object template not valid");
    }
    return obj;
}

void NJSItfTransactionListVmHandle::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSItfTransactionListVmHandle::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSItfTransactionListVmHandle").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"start", start);
    Nan::SetPrototypeMethod(func_template,"stop", stop);
    //Set object prototype
    TransactionListVmHandle_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSItfTransactionListVmHandle").ToLocalChecked(), func_template->GetFunction());
}
