__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_escaped(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rdi
  unsigned int v10; // r12d
  unsigned __int64 v11; // rbp
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  const char *v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64, unsigned __int64); // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, __int64, unsigned __int64); // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v25)(__int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v26)(__int64, __int64, unsigned __int64); // rax
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(__int64, __int64, unsigned __int64); // rcx
  __int64 (__fastcall *v29)(__int64, __int64, unsigned __int64); // rcx
  nlohmann::json_abi_v3_12_0::detail::type_error *v30; // r14
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  char *v32; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v37[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE *v38; // [rsp+60h] [rbp-68h]
  __int64 v39; // [rsp+68h] [rbp-60h]
  _BYTE v40[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v5 = 0;
  v6 = 0;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = a2[1];
  v41 = __readfsqword(0x28u);
  v32 = (char *)a1 + 90;
  if ( !a3 )
  {
LABEL_2:
    while ( 2 )
    {
      if ( v11 >= v13 )
        goto LABEL_8;
      while ( 1 )
      {
        a5 = *(unsigned __int8 *)(*a2 + v11);
        a4 = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::decode(unsigned char &,unsigned int &,unsigned char)::utf8d[a5];
        v10 = (_BYTE)v12 ? a5 & 0x3F | (v10 << 6) : (unsigned __int8)a5 & (0xFFu >> a4);
        LOBYTE(v12) = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::decode(unsigned char &,unsigned int &,unsigned char)::utf8d[16 * v12 + 256 + a4];
        if ( !(_BYTE)v12 )
          break;
        if ( (_BYTE)v12 == 1 )
        {
          v21 = *((_DWORD *)a1 + 160);
          if ( !v21 )
            goto LABEL_109;
          if ( (unsigned int)(v21 - 1) > 1 )
          {
            ++v11;
          }
          else
          {
            v11 += v5 == 0;
            if ( v21 == 1 )
            {
              *((_BYTE *)a1 + v8 + 92) = -67;
              v6 = v8 + 3;
              *(_WORD *)((char *)a1 + v8 + 90) = -16401;
              if ( v8 - 497 > 0xC )
              {
                v13 = a2[1];
                v8 += 3LL;
                v12 = 0;
                v5 = 0;
              }
              else
              {
                v25 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)*a1 + 8LL);
                if ( v25 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
                  nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
                else
                  v25(*a1, (__int64)a1 + 90, v6);
                v13 = a2[1];
                v12 = 0;
                v5 = 0;
                v8 = 0;
                v6 = 0;
              }
            }
            else
            {
              v6 = v8;
              v12 = 0;
              v5 = 0;
            }
          }
          goto LABEL_2;
        }
        *((_BYTE *)a1 + v6 + 90) = a5;
        v13 = a2[1];
        ++v11;
        ++v5;
        ++v6;
        if ( v11 >= v13 )
          goto LABEL_8;
      }
      if ( v10 > 0x22 )
      {
        if ( v10 != 92 )
        {
LABEL_66:
          *((_BYTE *)a1 + v6++ + 90) = a5;
          if ( v6 - 500 <= 0xC )
          {
LABEL_53:
            v23 = *a1;
            v24 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)*a1 + 8LL);
            if ( v24 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
            {
              if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(*(_QWORD *)(v23 + 8) + 8LL) < v6 )
                goto LABEL_112;
              std::string::_M_append();
            }
            else
            {
              ((void (__fastcall *)(__int64, char *, unsigned __int64, __int64, __int64, __int64))v24)(
                v23,
                v32,
                v6,
                a4,
                a5,
                v5);
            }
            v13 = a2[1];
            ++v11;
            v5 = 0;
            v8 = 0;
            v6 = 0;
            continue;
          }
LABEL_67:
          v13 = a2[1];
          ++v11;
          v8 = v6;
          v5 = 0;
          continue;
        }
        a5 = 23644;
        *(_WORD *)((char *)a1 + v6 + 90) = 23644;
        v6 += 2LL;
      }
      else
      {
        if ( v10 > 7 )
        {
          switch ( v10 )
          {
            case 8u:
              *(_WORD *)((char *)a1 + v6 + 90) = 25180;
              v6 += 2LL;
              goto LABEL_52;
            case 9u:
              *(_WORD *)((char *)a1 + v6 + 90) = 29788;
              v6 += 2LL;
              goto LABEL_52;
            case 0xAu:
              *(_WORD *)((char *)a1 + v6 + 90) = 28252;
              v6 += 2LL;
              goto LABEL_52;
            case 0xCu:
              a4 = 26204;
              *(_WORD *)((char *)a1 + v6 + 90) = 26204;
              v6 += 2LL;
              goto LABEL_52;
            case 0xDu:
              *(_WORD *)((char *)a1 + v6 + 90) = 29276;
              v6 += 2LL;
              goto LABEL_52;
            case 0x22u:
              *(_WORD *)((char *)a1 + v6 + 90) = 8796;
              v6 += 2LL;
              goto LABEL_52;
            default:
              if ( v10 > 0x1F )
                goto LABEL_66;
              break;
          }
        }
        v34 = v6;
        __snprintf_chk();
        v6 = v34 + 6;
      }
      break;
    }
LABEL_52:
    if ( v6 - 500 <= 0xC )
      goto LABEL_53;
    goto LABEL_67;
  }
  while ( v11 < v13 )
  {
    a5 = *(unsigned __int8 *)(*a2 + v11);
    a4 = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::decode(unsigned char &,unsigned int &,unsigned char)::utf8d[a5];
    if ( (_BYTE)v12 )
      v10 = a5 & 0x3F | (v10 << 6);
    else
      v10 = (unsigned __int8)a5 & (0xFFu >> a4);
    LOBYTE(v12) = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::decode(unsigned char &,unsigned int &,unsigned char)::utf8d[16 * v12 + 256 + a4];
    if ( !(_BYTE)v12 )
    {
      if ( v10 > 0x22 )
      {
        if ( v10 == 92 )
        {
          a5 = 23644;
          *(_WORD *)((char *)a1 + v6 + 90) = 23644;
          v6 += 2LL;
          goto LABEL_48;
        }
        if ( v10 <= 0x7E )
        {
LABEL_69:
          *((_BYTE *)a1 + v6++ + 90) = a5;
          goto LABEL_48;
        }
        if ( v10 > 0xFFFF )
        {
          v36 = v6;
          __snprintf_chk();
          v6 = v36 + 12;
          goto LABEL_48;
        }
      }
      else if ( v10 > 7 )
      {
        switch ( v10 )
        {
          case 8u:
            *(_WORD *)((char *)a1 + v6 + 90) = 25180;
            v6 += 2LL;
            break;
          case 9u:
            *(_WORD *)((char *)a1 + v6 + 90) = 29788;
            v6 += 2LL;
            break;
          case 0xAu:
            *(_WORD *)((char *)a1 + v6 + 90) = 28252;
            v6 += 2LL;
            break;
          case 0xCu:
            *(_WORD *)((char *)a1 + v6 + 90) = 26204;
            v6 += 2LL;
            break;
          case 0xDu:
            *(_WORD *)((char *)a1 + v6 + 90) = 29276;
            v6 += 2LL;
            break;
          case 0x22u:
            v5 = 8796;
            *(_WORD *)((char *)a1 + v6 + 90) = 8796;
            v6 += 2LL;
            break;
          default:
            if ( v10 <= 0x1F )
              goto LABEL_88;
            goto LABEL_69;
        }
LABEL_48:
        if ( v6 - 500 > 0xC )
        {
          v13 = a2[1];
          ++v11;
          v8 = v6;
          v5 = 0;
          continue;
        }
        v18 = *a1;
        v19 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)*a1 + 8LL);
        if ( v19 != nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        {
          ((void (__fastcall *)(__int64, char *, unsigned __int64, __int64, __int64, __int64))v19)(
            v18,
            v32,
            v6,
            a4,
            a5,
            v5);
          goto LABEL_15;
        }
        if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL) >= v6 )
        {
          std::string::_M_append();
LABEL_15:
          v13 = a2[1];
          ++v11;
          v5 = 0;
          v8 = 0;
          v6 = 0;
          continue;
        }
LABEL_112:
        std::__throw_length_error("basic_string::append");
      }
LABEL_88:
      v35 = v6;
      __snprintf_chk();
      v6 = v35 + 6;
      goto LABEL_48;
    }
    if ( (_BYTE)v12 == 1 )
    {
      v20 = *((_DWORD *)a1 + 160);
      if ( !v20 )
      {
LABEL_109:
        exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::hex_bytes();
        std::to_string((unsigned __int64)v37);
        v39 = 0;
        v38 = v40;
        v40[0] = 0;
        std::string::reserve();
        std::string::append();
        if ( 0x7FFFFFFFFFFFFFFELL - v39 >= v37[1] )
        {
          std::string::_M_append();
          std::string::append();
          if ( 0x7FFFFFFFFFFFFFFELL - v39 >= v37[5] )
          {
            std::string::_M_append();
            nlohmann::json_abi_v3_12_0::detail::type_error::create<decltype(nullptr),0>(exception, 316);
            std::string::_M_dispose();
            std::string::_M_dispose();
            std::string::_M_dispose();
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
              (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
          }
          std::__throw_length_error("basic_string::append");
        }
        std::__throw_length_error("basic_string::append");
      }
      if ( (unsigned int)(v20 - 1) <= 1 )
      {
        v11 += v5 == 0;
        if ( v20 == 1 )
        {
          v6 = v8 + 6;
          *(_DWORD *)((char *)a1 + v8 + 90) = 1717990748;
          *(_WORD *)((char *)a1 + v8 + 94) = 25702;
          if ( v8 - 494 > 0xC )
          {
            v13 = a2[1];
            v8 += 6LL;
            v12 = 0;
            v5 = 0;
          }
          else
          {
            v26 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)*a1 + 8LL);
            if ( v26 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
              nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
            else
              v26(*a1, (__int64)a1 + 90, v6);
            v13 = a2[1];
            v12 = 0;
            v5 = 0;
            v8 = 0;
            v6 = 0;
          }
        }
        else
        {
          v6 = v8;
          v12 = 0;
          v5 = 0;
        }
        continue;
      }
    }
    else
    {
      ++v5;
    }
    ++v11;
  }
LABEL_8:
  if ( (_BYTE)v12 )
  {
    v22 = *((_DWORD *)a1 + 160);
    if ( v22 == 2 )
    {
      v29 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)*a1 + 8LL);
      if ( v29 != nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        return ((__int64 (__fastcall *)(_QWORD, char *, unsigned __int64, __int64 (__fastcall *)(__int64, __int64, unsigned __int64), __int64, __int64))v29)(
                 *a1,
                 (char *)a1 + 90,
                 v8,
                 v29,
                 a5,
                 v5);
    }
    else
    {
      if ( v22 > 2 )
        return v41 - __readfsqword(0x28u);
      if ( !v22 )
      {
        v30 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::hex_bytes();
        v40[0] = 0;
        v38 = v40;
        v39 = 0;
        std::string::reserve();
        std::string::append();
        std::string::append();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<decltype(nullptr),0>(v30, 316);
        std::string::_M_dispose();
        std::string::_M_dispose();
        __cxa_throw(
          v30,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      if ( v22 != 1 )
        return v41 - __readfsqword(0x28u);
      v28 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)*a1 + 8LL);
      if ( v28 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
      else
        ((void (__fastcall *)(_QWORD, char *, unsigned __int64, __int64 (__fastcall *)(__int64, __int64, unsigned __int64), __int64, __int64))v28)(
          *a1,
          (char *)a1 + 90,
          v8,
          v28,
          a5,
          v5);
      v14 = *a1;
      v16 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)*a1 + 8LL);
      if ( a3 )
      {
        if ( v16 != nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
        {
          v27 = 6;
          v15 = "\\ufffd";
          return ((__int64 (__fastcall *)(__int64, const char *, __int64, __int64, __int64, __int64))v16)(
                   v14,
                   v15,
                   v27,
                   a4,
                   a5,
                   v5);
        }
      }
      else if ( v16 != nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
      {
        v27 = 3;
        v15 = (const char *)&unk_3D4381;
        return ((__int64 (__fastcall *)(__int64, const char *, __int64, __int64, __int64, __int64))v16)(
                 v14,
                 v15,
                 v27,
                 a4,
                 a5,
                 v5);
      }
    }
    return nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters();
  }
  if ( !v6 )
    return v41 - __readfsqword(0x28u);
  v14 = *a1;
  v15 = (char *)a1 + 90;
  v16 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)*a1 + 8LL);
  if ( v16 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
    return std::string::append();
  v27 = v6;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v16)(v14, v15, v27, a4, a5, v5);
}

