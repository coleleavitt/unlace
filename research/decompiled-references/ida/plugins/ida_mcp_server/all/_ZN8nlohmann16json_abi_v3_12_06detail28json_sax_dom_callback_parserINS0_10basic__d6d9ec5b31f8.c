unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::key(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v4; // r14
  unsigned __int64 v5; // r13
  _QWORD *v6; // rax
  _BYTE *v7; // rdi
  __int64 *v8; // r12
  size_t v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 *v13; // rsi
  int v14; // ecx
  char v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  _QWORD *v20; // r13
  size_t v21; // rbp
  const void *v22; // rdi
  size_t v23; // r12
  size_t v24; // rdx
  signed __int64 v25; // rax
  size_t v26; // r14
  size_t v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  char v30; // si
  __int64 v31; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  _BYTE *s2; // [rsp+8h] [rbp-B0h]
  char v36; // [rsp+1Fh] [rbp-99h]
  _QWORD *v37; // [rsp+20h] [rbp-98h]
  _QWORD *v38; // [rsp+28h] [rbp-90h]
  _BYTE **v39; // [rsp+38h] [rbp-80h] BYREF
  __int64 v40; // [rsp+40h] [rbp-78h] BYREF
  __int64 *v41; // [rsp+48h] [rbp-70h]
  char v42[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v43; // [rsp+58h] [rbp-60h]
  _QWORD *v44; // [rsp+60h] [rbp-58h] BYREF
  __int64 v45; // [rsp+68h] [rbp-50h]
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v40 = 0;
  v41 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v4 = *(_BYTE **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  LOBYTE(v40) = 3;
  v6 = (_QWORD *)operator new(0x20u);
  v7 = v6 + 2;
  v44 = (_QWORD *)v5;
  v8 = v6;
  *v6 = v6 + 2;
  if ( v5 <= 0xF )
  {
    v9 = v5 + 1;
    if ( v5 )
    {
LABEL_3:
      memcpy(v7, v4, v9);
      v10 = (__int64)v44;
      goto LABEL_4;
    }
    goto LABEL_34;
  }
  v33 = std::string::_M_create();
  *v8 = v33;
  v7 = (_BYTE *)v33;
  v34 = v44;
  v8[2] = (__int64)v44;
  v9 = (size_t)v34 + 1;
  if ( !v34 )
  {
LABEL_34:
    *v7 = *v4;
    v10 = (__int64)v44;
    goto LABEL_4;
  }
  v10 = -1;
  if ( v9 )
    goto LABEL_3;
LABEL_4:
  v8[1] = v10;
  v11 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8);
  v41 = v8;
  v42[0] = 4;
  LODWORD(v44) = v11 >> 3;
  if ( !*(_QWORD *)(a1 + 144) )
    std::__throw_bad_function_call();
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD **, char *, __int64 *))(a1 + 152))(a1 + 128, &v44, v42, &v40);
  v13 = *(__int64 **)(a1 + 88);
  v14 = *(_DWORD *)(a1 + 96);
  v15 = v12;
  if ( v13 == *(__int64 **)(a1 + 104) )
  {
    LODWORD(v45) = *(_DWORD *)(a1 + 96);
    v44 = v13;
    std::vector<bool>::_M_insert_aux();
    if ( !v15 )
      goto LABEL_33;
  }
  else
  {
    if ( v14 == 63 )
    {
      *(_DWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 88) = v13 + 1;
    }
    else
    {
      *(_DWORD *)(a1 + 96) = v14 + 1;
    }
    v16 = *v13;
    v17 = 1LL << v14;
    if ( !v15 )
    {
      *v13 = v16 & ~v17;
      goto LABEL_33;
    }
    *v13 = v16 | v17;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) - 8LL) )
  {
    v42[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v36 = v42[0];
    v18 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) - 8LL) + 8LL);
    v19 = (_QWORD *)v18[2];
    v20 = v18 + 1;
    v38 = v18;
    v37 = v18 + 1;
    if ( !v19 )
      goto LABEL_40;
    v21 = *(_QWORD *)(a2 + 8);
    v22 = (const void *)v19[4];
    v23 = v19[5];
    s2 = *(_BYTE **)a2;
    while ( 1 )
    {
      v24 = v21;
      if ( v23 <= v21 )
        v24 = v23;
      if ( v24 )
      {
        LODWORD(v25) = memcmp(v22, s2, v24);
        if ( (_DWORD)v25 )
          goto LABEL_21;
      }
      v25 = v23 - v21;
      if ( (__int64)(v23 - v21) > 0x7FFFFFFF )
        goto LABEL_13;
      if ( v25 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_21:
        if ( (int)v25 >= 0 )
        {
LABEL_13:
          v20 = v19;
          v19 = (_QWORD *)v19[2];
          if ( !v19 )
            goto LABEL_23;
          goto LABEL_14;
        }
      }
      v19 = (_QWORD *)v19[3];
      if ( !v19 )
      {
LABEL_23:
        if ( v37 == v20 )
          goto LABEL_40;
        v26 = v20[5];
        v27 = v26;
        if ( v21 <= v26 )
          v27 = v21;
        if ( v27 && (v28 = memcmp(s2, (const void *)v20[4], v27)) != 0 )
        {
LABEL_31:
          if ( v28 < 0 )
            goto LABEL_40;
        }
        else if ( (__int64)(v21 - v26) <= 0x7FFFFFFF )
        {
          if ( (__int64)(v21 - v26) >= (__int64)0xFFFFFFFF80000000LL )
          {
            v28 = v21 - v26;
            goto LABEL_31;
          }
LABEL_40:
          v39 = (_BYTE **)a2;
          v20 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                  v38,
                  v20,
                  &v39);
        }
        v29 = v43;
        v30 = *((_BYTE *)v20 + 64);
        *((_BYTE *)v20 + 64) = v36;
        v31 = v20[9];
        v20[9] = v29;
        *(_QWORD *)(a1 + 112) = v20 + 8;
        v43 = v31;
        v42[0] = v30;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        break;
      }
LABEL_14:
      v22 = (const void *)v19[4];
      v23 = v19[5];
    }
  }
LABEL_33:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v46 - __readfsqword(0x28u);
}

