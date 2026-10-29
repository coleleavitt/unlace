void __fastcall __noreturn ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        qflow_chart_t *a8,
        void *a9,
        struct _Unwind_Exception *a10,
        __int64 a11,
        int a12,
        int a13,
        char a14,
        char a15,
        void *a16,
        int a17,
        __int64 a18,
        int a19,
        __int64 a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        void (__fastcall *a28)(__int64, __int64, __int64),
        int a29,
        char a30,
        int a31,
        int a32,
        char a33,
        char a34,
        int a35,
        char a36,
        int a37,
        int a38,
        char a39,
        char a40,
        int a41,
        char a42,
        int a43,
        int a44,
        char a45,
        char a46,
        int a47,
        char a48,
        int a49,
        int a50,
        char a51,
        char a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64,
        int a65,
        char a66,
        int a67,
        __int64 a68,
        __int64 a69,
        int a70,
        int a71,
        int a72,
        int a73,
        int a74,
        char a75,
        int a76,
        int a77,
        int a78,
        __int64 a79)
{
  struct _Unwind_Exception *v79; // rax
  __int64 v80; // rbx
  __int64 v81; // r12
  qflow_chart_t *v82; // rdx
  struct _Unwind_Exception *v83; // r15
  __int64 v84; // rdx
  void *v85; // rax
  __int64 i; // r14
  __int64 v87; // [rsp+8h] [rbp+8h]
  __int64 v88; // [rsp+8h] [rbp+8h]
  __int64 v89; // [rsp+8h] [rbp+8h]
  struct _Unwind_Exception *v90; // [rsp+20h] [rbp+20h]
  struct _Unwind_Exception *v91; // [rsp+20h] [rbp+20h]

  v82 = a8;
  do
  {
    v90 = v79;
    v87 = (__int64)v82 - 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v82 = (qflow_chart_t *)v87;
    v79 = v90;
  }
  while ( v87 != v80 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v83 = v90;
  v84 = 3;
  v85 = a9;
  while ( v85 != a9 )
  {
    v91 = (struct _Unwind_Exception *)v84;
    v89 = (__int64)v85 - 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v85 = (void *)v89;
    v84 = (__int64)v91;
  }
  v88 = v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  for ( i = v80 + 24 * (3 - v88); i != v80; i -= 24 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( a28 )
    a28(v81, v81, 3);
  std::_Bvector_base<std::allocator<bool>>::_M_deallocate();
  if ( a16 )
    operator delete(a16, a18 - (_QWORD)a16);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  qflow_chart_t::~qflow_chart_t(a8);
  _Unwind_Resume(v83);
}

