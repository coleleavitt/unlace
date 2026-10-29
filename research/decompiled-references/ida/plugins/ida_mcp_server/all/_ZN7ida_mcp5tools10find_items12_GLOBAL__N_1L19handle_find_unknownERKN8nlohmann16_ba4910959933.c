ida_mcp::tools::find_items::_anonymous_namespace_ *__fastcall ida_mcp::tools::find_items::`anonymous namespace'::handle_find_unknown(
        ida_mcp::tools::find_items::_anonymous_namespace_ *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r12
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  int *v12; // rax
  int *v13; // rbx
  __int64 v14; // r15
  std::runtime_error *exception; // rax
  __int64 unknown; // rax
  _QWORD *v18; // [rsp+18h] [rbp-90h]
  _QWORD s2[15]; // [rsp+30h] [rbp-78h] BYREF

  s2[7] = __readfsqword(0x28u);
  strcpy((char *)s2, "address");
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x120930);
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = v2 + 8;
  if ( v3 )
  {
    v5 = v2 + 8;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v3 + 40);
        if ( !v8 )
          break;
        v6 = 7;
        if ( v8 <= 7 )
          v6 = *(_QWORD *)(v3 + 40);
        v7 = memcmp(*(const void **)(v3 + 32), s2, v6);
        if ( v7 || (v7 = v8 - 7, (__int64)(v8 - 7) <= 0x7FFFFFFF) )
        {
          if ( v7 < 0 )
            break;
        }
        v5 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v3 )
          goto LABEL_12;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v3 );
LABEL_12:
    if ( v4 != v5 )
    {
      v9 = *(_QWORD *)(v5 + 40);
      if ( v9 )
      {
        v10 = 7;
        if ( v9 <= 7 )
          v10 = *(_QWORD *)(v5 + 40);
        v11 = memcmp(s2, *(const void **)(v5 + 32), v10);
        if ( v11 || (v11 = 7 - v9, (__int64)(7 - v9) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v11 >= 0 )
            v4 = v5;
        }
      }
      else
      {
        v4 = v5;
      }
    }
  }
  LOBYTE(s2[0]) = 0;
  if ( *(_BYTE *)(v4 + 64) != 3 )
    JUMPOUT(0x120958);
  std::string::_M_assign();
  v12 = __errno_location();
  *v12 = 0;
  v13 = v12;
  v14 = __isoc23_strtoull();
  if ( s2 == v18 || *(_BYTE *)v18 || *v13 == 34 && v14 == -1 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address");
    ida_mcp::tools::find_items::`anonymous namespace'::handle_find_unknown();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[10],int,0>();
  unknown = find_unknown();
  ida_mcp::tools::find_items::`anonymous namespace'::make_result(a1, unknown, "unknown");
  return a1;
}

