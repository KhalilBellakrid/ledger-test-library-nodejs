// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ledgerapp.djinni

#include "NJSItfApiCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSItfApi::observer_transaction_list) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSItfApi::observer_transaction_list needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSItfApi* obj = Nan::ObjectWrap::Unwrap<NJSItfApi>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSItfApi::observer_transaction_list : implementation of Api is not valid");
    }

    auto result = cpp_impl->observer_transaction_list();

    //Wrap result in node object
    auto arg_0 = NJSItfTransactionListVmHandle::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSItfApi::get_transactions) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSItfApi::get_transactions needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_0(info[0]->ToString());
    auto arg_0 = std::string(*string_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSItfApi* obj = Nan::ObjectWrap::Unwrap<NJSItfApi>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSItfApi::get_transactions : implementation of Api is not valid");
    }

    auto result = cpp_impl->get_transactions(arg_0);

    //Wrap result in node object
    Local<Array> arg_1 = Nan::New<Array>();
    for(size_t i = 0; i < result.size(); i++)
    {
        auto arg_2 = Nan::New<String>(result[i]).ToLocalChecked();
        arg_1->Set((int)i,arg_2);
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSItfApi::New) {

    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSItfApi function can only be called as constructor (use New)");
    }

    Isolate *isolate = info.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();

    //Check if NJSItfApi::New called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSItfApi::New needs same number of arguments as ledgerapp_gen::Api::create_api method");
    }

    //Unwrap objects to get C++ classes
    Local<Object> njs_arg_0 = info[0]->ToObject(context).ToLocalChecked();

    NJSItfHttp *njs_obj_0 = static_cast<NJSItfHttp *>(Nan::GetInternalFieldPointer(njs_arg_0,0));

    std::shared_ptr<NJSItfHttp> arg_0(njs_obj_0);

    Local<Object> njs_arg_1 = info[1]->ToObject(context).ToLocalChecked();

    NJSItfThreadDispatcher *njs_obj_1 = static_cast<NJSItfThreadDispatcher *>(Nan::GetInternalFieldPointer(njs_arg_1,0));

    std::shared_ptr<NJSItfThreadDispatcher> arg_1(njs_obj_1);


    //Call factory
    auto cpp_instance = ledgerapp_gen::Api::create_api(arg_0, arg_1);
    NJSItfApi *node_instance = new NJSItfApi(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSItfApi::Api_prototype;

Handle<Object> NJSItfApi::wrap(const std::shared_ptr<ledgerapp_gen::Api> &object) {

    Local<ObjectTemplate> local_prototype = Nan::New(Api_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSItfApi *new_obj = new NJSItfApi(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSItfApi::wrap: object template not valid");
    }
    return obj;
}

void NJSItfApi::Initialize(Local<Object> target) {

    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSItfApi::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSItfApi").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"observer_transaction_list", observer_transaction_list);
    Nan::SetPrototypeMethod(func_template,"get_transactions", get_transactions);
    //Set object prototype
    Api_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSItfApi").ToLocalChecked(), func_template->GetFunction());
}