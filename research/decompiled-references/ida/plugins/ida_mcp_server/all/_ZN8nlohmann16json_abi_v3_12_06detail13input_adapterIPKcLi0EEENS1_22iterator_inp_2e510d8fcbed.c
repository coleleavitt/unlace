const char *__fastcall nlohmann::json_abi_v3_12_0::detail::input_adapter<char const*,0>(const char *a1)
{
  _DWORD *exception; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rsi
  int v20; // [rsp+0h] [rbp-118h]
  int v21; // [rsp+0h] [rbp-118h]
  int v22; // [rsp+0h] [rbp-118h]
  int v23; // [rsp+8h] [rbp-110h]
  int v24; // [rsp+8h] [rbp-110h]
  int v25; // [rsp+8h] [rbp-110h]
  int v26; // [rsp+8h] [rbp-110h]
  __int64 v27[4]; // [rsp+10h] [rbp-108h] BYREF
  char *v28; // [rsp+30h] [rbp-E8h]
  __int64 v29; // [rsp+38h] [rbp-E0h]
  char v30; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v31[4]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v32[8]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v33[13]; // [rsp+B0h] [rbp-68h] BYREF

  v33[5] = __readfsqword(0x28u);
  if ( !a1 )
  {
    exception = __cxa_allocate_exception(0x28u);
    std::string::basic_string<std::allocator<char>>(
      v27,
      "attempting to parse an empty input; check that your input string or stream contains the expected JSON",
      v3,
      v4,
      v5,
      v6,
      v20,
      v23,
      v27[0]);
    std::string::basic_string<std::allocator<char>>(v31, "", v7, v8, v9, v10, (int)v31, v24, v27[0]);
    std::string::basic_string<std::allocator<char>>(v32, "", v11, v12, v13, v14, v21, v25, v27[0]);
    std::string::basic_string<std::allocator<char>>(v33, "parse_error", v15, v16, v17, v18, v22, v26, v27[0]);
    nlohmann::json_abi_v3_12_0::detail::exception::name();
    v30 = 0;
    v29 = 0;
    v28 = &v30;
    std::string::reserve();
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - v29) >= v32[5] )
    {
      std::string::_M_append();
      if ( (unsigned __int64)(v29 - 0x7FFFFFFFFFFFFFF4LL) > 0xA )
      {
        std::string::_M_append();
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - v29) >= v32[1] )
        {
          std::string::_M_append();
          if ( (unsigned __int64)(v29 - 0x7FFFFFFFFFFFFFFDLL) > 1 )
          {
            std::string::_M_append();
            if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - v29) >= v31[1] )
            {
              std::string::_M_append();
              if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - v29) >= v27[1] )
              {
                std::string::_M_append();
                std::string::_M_dispose();
                std::string::_M_dispose();
                std::string::_M_dispose();
                std::string::_M_dispose();
                v19 = v28;
                exception[2] = 101;
                *(_QWORD *)exception = off_4444D0;
                std::runtime_error::runtime_error((std::runtime_error *)(exception + 4), v19);
                *(_QWORD *)exception = off_4444F8;
                *((_QWORD *)exception + 4) = 0;
                std::string::_M_dispose();
                std::string::_M_dispose();
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::parse_error,
                  (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::parse_error::~parse_error);
              }
              std::__throw_length_error("basic_string::append");
            }
            std::__throw_length_error("basic_string::append");
          }
          std::__throw_length_error("basic_string::append");
        }
        std::__throw_length_error("basic_string::append");
      }
      std::__throw_length_error("basic_string::append");
    }
    std::__throw_length_error("basic_string::append");
  }
  strlen(a1);
  return a1;
}

