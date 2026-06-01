__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::parse<char const*>(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        char a4,
        char a5)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __m128i v13; // xmm3
  char *decimal_point; // rax
  int v15; // eax
  __m128i v17; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int128 v18; // [rsp+10h] [rbp-138h]
  __m128i v19; // [rsp+20h] [rbp-128h] BYREF
  __int128 v20; // [rsp+30h] [rbp-118h]
  __m128i v21; // [rsp+40h] [rbp-108h] BYREF
  unsigned __int128 v22; // [rsp+50h] [rbp-F8h]
  int v23; // [rsp+60h] [rbp-E8h]
  __m128i v24; // [rsp+68h] [rbp-E0h]
  char v25; // [rsp+78h] [rbp-D0h]
  int v26; // [rsp+7Ch] [rbp-CCh]
  char v27; // [rsp+80h] [rbp-C8h]
  __int128 v28; // [rsp+88h] [rbp-C0h]
  __int64 v29; // [rsp+98h] [rbp-B0h]
  void *v30[2]; // [rsp+A0h] [rbp-A8h]
  void *v31[2]; // [rsp+B0h] [rbp-98h]
  __int64 v32; // [rsp+C0h] [rbp-88h]
  _QWORD v33[6]; // [rsp+C8h] [rbp-80h] BYREF
  int v34; // [rsp+F8h] [rbp-50h]
  __int64 v35; // [rsp+100h] [rbp-48h]
  char v36; // [rsp+108h] [rbp-40h]
  unsigned __int64 v37; // [rsp+118h] [rbp-30h]

  v6 = a3[1].m128i_i64[1];
  v37 = __readfsqword(0x28u);
  *(_BYTE *)a1 = 0;
  *((_QWORD *)&v18 + 1) = v6;
  v8 = a3[1].m128i_i64[0];
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)&v18 = 0;
  v17 = 0;
  if ( v8 )
  {
    *(_QWORD *)&v18 = v8;
    v17 = _mm_loadu_si128(a3);
    a3[1] = 0;
  }
  v9 = nlohmann::json_abi_v3_12_0::detail::input_adapter<char const*,0>();
  *(_QWORD *)&v20 = 0;
  *((_QWORD *)&v20 + 1) = *((_QWORD *)&v18 + 1);
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)v10);
  v12 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v33);
  v19 = 0;
  if ( (_QWORD)v18 )
  {
    v13 = _mm_load_si128(&v17);
    v22 = v18;
    v19 = v13;
    v18 = 0;
    v21 = v13;
    v20 = 0;
  }
  else
  {
    v22 = __PAIR128__(*((unsigned __int64 *)&v18 + 1), 0);
    v21 = 0;
  }
  v24 = v11;
  v23 = 0;
  v25 = a5;
  v26 = -1;
  v27 = 0;
  v29 = 0;
  v32 = 0;
  LOBYTE(v33[0]) = 0;
  v33[2] = "";
  memset(&v33[3], 0, 24);
  v28 = 0;
  *(_OWORD *)v30 = 0;
  *(__m128i *)v31 = v12;
  decimal_point = localeconv()->decimal_point;
  if ( decimal_point )
    v15 = *decimal_point;
  else
    v15 = 46;
  v34 = v15;
  v35 = -1;
  v36 = a4;
  v23 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
  if ( (_QWORD)v20 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v20)(&v19, &v19, 3);
  nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse();
  if ( v31[1] != v33 )
    operator delete(v31[1], v33[0] + 1LL);
  if ( v30[0] )
    operator delete(v30[0], (char *)v31[0] - (char *)v30[0]);
  if ( (_QWORD)v22 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v22)(&v21, &v21, 3);
  if ( (_QWORD)v18 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v18)(&v17, &v17, 3);
  return a1;
}

