__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>(
        __int64 *a1,
        __int8 *a2,
        char a3)
{
  __int64 *v3; // r8
  int v4; // ecx
  _QWORD *v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  _QWORD *v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int8 v19; // dl
  __int8 v20; // si
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int8 v33; // dl
  __int8 v34; // si
  __int64 v35; // rdx
  __int64 *v36; // [rsp+0h] [rbp-78h]
  __int64 *v37; // [rsp+0h] [rbp-78h]
  int v38; // [rsp+8h] [rbp-70h]
  __int64 v39; // [rsp+10h] [rbp-68h]
  char v40; // [rsp+1Ch] [rbp-5Ch]
  char v41; // [rsp+1Ch] [rbp-5Ch]
  char v42; // [rsp+1Ch] [rbp-5Ch]
  char v43; // [rsp+1Ch] [rbp-5Ch]
  char v44; // [rsp+2Fh] [rbp-49h] BYREF
  __m128i v45; // [rsp+30h] [rbp-48h] BYREF
  __m128i v46; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-20h]

  v3 = a1;
  v4 = *((_DWORD *)a1 + 14);
  v47 = __readfsqword(0x28u);
  v6 = (_QWORD *)a1[6];
  if ( !v4 )
  {
    if ( (__int64)*(v6 - 1) >= 0 )
      return 0;
    goto LABEL_6;
  }
  if ( (*v6 & (1LL << ((unsigned __int8)v4 - 1))) != 0 )
  {
LABEL_6:
    v45.m128i_i8[0] = *a2;
    switch ( v45.m128i_i8[0] )
    {
      case 1:
        v40 = a3;
        v23 = operator new(0x30u);
        v3 = a1;
        a3 = v40;
        *(_DWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = 0;
        *(_QWORD *)(v23 + 24) = v23 + 8;
        *(_QWORD *)(v23 + 32) = v23 + 8;
        *(_QWORD *)(v23 + 40) = 0;
        v45.m128i_i64[1] = v23;
        break;
      case 2:
        v41 = a3;
        v24 = operator new(0x18u);
        v3 = a1;
        a3 = v41;
        *(_QWORD *)(v24 + 16) = 0;
        *(_OWORD *)v24 = 0;
        v45.m128i_i64[1] = v24;
        break;
      case 3:
        v42 = a3;
        v25 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v25, "", v26, v27, v28, v29, (int)a1, v38, v39);
        v3 = v37;
        a3 = v42;
        v45.m128i_i64[1] = (__int64)v25;
        break;
      case 4:
        v45.m128i_i8[8] = 0;
        break;
      case 7:
        v45.m128i_i64[1] = 0;
        break;
      case 8:
        v43 = a3;
        v30 = operator new(0x28u);
        v3 = a1;
        a3 = v43;
        *(_QWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 24) = 0;
        *(_BYTE *)(v30 + 32) = 0;
        *(_OWORD *)v30 = 0;
        v45.m128i_i64[1] = v30;
        break;
      default:
        v45.m128i_i64[1] = 0;
        break;
    }
    if ( !a3 )
    {
      v9 = v3[2] - v3[1];
      v44 = 5;
      v46.m128i_i32[0] = v9 >> 3;
      if ( !v3[18] )
        std::__throw_bad_function_call();
      v36 = v3;
      v10 = ((__int64 (__fastcall *)(__int64 *, __m128i *, char *, __m128i *))v3[19])(v3 + 16, &v46, &v44, &v45);
      v3 = v36;
      if ( !v10 )
        goto LABEL_11;
    }
    v11 = v3[2];
    if ( v11 == v3[1] )
    {
      v31 = _mm_load_si128(&v45);
      v32 = *v3;
      v45.m128i_i64[1] = 0;
      v33 = v45.m128i_i8[0];
      v45.m128i_i8[0] = 0;
      v7 = 1;
      v46 = v31;
      v34 = *(_BYTE *)v32;
      *(_BYTE *)v32 = v33;
      v35 = *(_QWORD *)(v32 + 8);
      *(_QWORD *)(v32 + 8) = v31.m128i_i64[1];
      v46.m128i_i8[0] = v34;
      v46.m128i_i64[1] = v35;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      goto LABEL_12;
    }
    v12 = *(_QWORD *)(v11 - 8);
    if ( !v12 )
      goto LABEL_11;
    if ( *(_BYTE *)v12 == 2 )
    {
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::emplace_back<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>(
        *(__m128i ***)(v12 + 8),
        &v45);
      v7 = 1;
      goto LABEL_12;
    }
    v13 = *((_DWORD *)v3 + 24);
    v14 = (_QWORD *)v3[11];
    if ( v13 )
    {
      v15 = v13 - 1;
      v16 = *v14 & (1LL << v15);
    }
    else
    {
      v22 = v14 - 1;
      v16 = *v22 & 0x8000000000000000LL;
      v15 = 63;
      v3[11] = (__int64)v22;
    }
    *((_DWORD *)v3 + 24) = v15;
    if ( v16 )
    {
      v17 = _mm_load_si128(&v45);
      v18 = v3[14];
      v45.m128i_i64[1] = 0;
      v19 = v45.m128i_i8[0];
      v45.m128i_i8[0] = 0;
      v7 = 1;
      v46 = v17;
      v20 = *(_BYTE *)v18;
      *(_BYTE *)v18 = v19;
      v21 = *(_QWORD *)(v18 + 8);
      *(_QWORD *)(v18 + 8) = v17.m128i_i64[1];
      v46.m128i_i8[0] = v20;
      v46.m128i_i64[1] = v21;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    else
    {
LABEL_11:
      v7 = 0;
    }
LABEL_12:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    return v7;
  }
  return 0;
}

