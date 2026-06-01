void __fastcall nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse(
        __int64 a1,
        char a2,
        char *a3)
{
  void (__fastcall *v3)(__m128i *, __int64, __int64); // rax
  char v4; // r15
  __m128 v6; // xmm1
  __m128i v7; // xmm0
  void (__fastcall *v8)(__m128i *, __m128i *, __int64); // rax
  __m128i v9; // xmm1
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // xmm0
  void *v16; // rax
  void *v17; // rax
  char v18; // si
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm0
  __int8 v25; // si
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-208h] BYREF
  __m128i v28; // [rsp+10h] [rbp-1F8h] BYREF
  __int64 v29; // [rsp+20h] [rbp-1E8h]
  void *v30[2]; // [rsp+30h] [rbp-1D8h] BYREF
  __int128 v31; // [rsp+40h] [rbp-1C8h]
  __int64 v32; // [rsp+50h] [rbp-1B8h]
  char v33; // [rsp+58h] [rbp-1B0h]
  char v34; // [rsp+59h] [rbp-1AFh]
  __int64 v35; // [rsp+60h] [rbp-1A8h]
  void *v36; // [rsp+70h] [rbp-198h]
  __int64 v37; // [rsp+80h] [rbp-188h] BYREF
  void *v38; // [rsp+90h] [rbp-178h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-168h] BYREF
  void *v40[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-148h] BYREF
  __m128i v42; // [rsp+D0h] [rbp-138h] BYREF
  __m128 v43[2]; // [rsp+E0h] [rbp-128h] BYREF
  void *v44[2]; // [rsp+100h] [rbp-108h] BYREF
  __int128 v45; // [rsp+110h] [rbp-F8h] BYREF
  void *v46; // [rsp+120h] [rbp-E8h]
  int v47; // [rsp+128h] [rbp-E0h]
  __int64 v48; // [rsp+130h] [rbp-D8h]
  int v49; // [rsp+138h] [rbp-D0h]
  void *v50[2]; // [rsp+140h] [rbp-C8h]
  int v51; // [rsp+150h] [rbp-B8h]
  __int64 v52; // [rsp+158h] [rbp-B0h]
  int v53; // [rsp+160h] [rbp-A8h]
  __int128 v54; // [rsp+168h] [rbp-A0h]
  char v55; // [rsp+178h] [rbp-90h]
  __m128i v56; // [rsp+180h] [rbp-88h] BYREF
  void (__fastcall *v57)(__m128i *, __m128i *, __int64); // [rsp+190h] [rbp-78h]
  __int64 v58; // [rsp+198h] [rbp-70h] BYREF
  char v59; // [rsp+1A0h] [rbp-68h]
  __int64 v60; // [rsp+1A8h] [rbp-60h]
  __int64 v61; // [rsp+1B0h] [rbp-58h]
  __int64 v62; // [rsp+1B8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+1C8h] [rbp-40h]

  v3 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 16);
  v4 = *(_BYTE *)(a1 + 200);
  v63 = __readfsqword(0x28u);
  if ( v3 )
  {
    v27 = (__m128i)(unsigned __int64)a3;
    v42 = 0;
    v43[0] = 0u;
    v3(&v42, a1, 2);
    v6 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 16));
    v7 = _mm_load_si128(&v27);
    v46 = nullptr;
    v47 = 0;
    *(__m128i *)v44 = v7;
    v8 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v6.m128_u64[0];
    v48 = 0;
    v49 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v55 = 0;
    v57 = nullptr;
    v43[0] = v6;
    v45 = 0;
    *(_OWORD *)v50 = 0;
    v54 = 0;
    v56 = 0;
    _mm_storeh_ps((double *)&v58, v6);
    if ( v6.m128_u64[0] )
    {
      v9 = _mm_load_si128(&v42);
      v57 = v8;
      v43[0] = 0;
      v56 = v9;
    }
    v28.m128i_i32[2] = 0;
    v59 = v4;
    v60 = 9;
    v61 = 0;
    v62 = a1 + 40;
    v28.m128i_i64[0] = 0;
    std::vector<bool>::_M_insert_aux();
    if ( v43[0].m128_u64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v43[0].m128_u64[0])(&v42, &v42, 3);
    nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::sax_parse_internal<nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>>();
    if ( a2 )
    {
      v10 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
      *(_DWORD *)(a1 + 32) = v10;
      if ( v10 != 15 )
      {
        std::string::basic_string<std::allocator<char>>(
          (__int64 *)&v38,
          "value",
          v11,
          v12,
          v13,
          v14,
          v27.m128i_i32[0],
          v27.m128i_i32[2],
          v28.m128i_i64[0]);
        nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
        v15 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        *(_QWORD *)&v31 = *(_QWORD *)(a1 + 88);
        *(__m128i *)v30 = v15;
        nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
          (__int64)&v42,
          101,
          (__int64 *)v30,
          (__int64)v40);
        nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
        v55 = 1;
        if ( v59 )
          nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v42);
        if ( v36 != &v37 )
          operator delete(v36, v37 + 1);
        v42.m128i_i64[0] = (__int64)off_4444D0;
        std::runtime_error::~runtime_error((std::runtime_error *)v43);
        std::exception::~exception((std::exception *)&v42);
        if ( v40[0] != &v41 )
          operator delete(v40[0], v41 + 1);
        if ( v38 != &v39 )
          operator delete(v38, v39 + 1);
      }
    }
    if ( v55 )
    {
      v17 = *((void **)a3 + 1);
      v18 = *a3;
      *a3 = 9;
      *((_QWORD *)a3 + 1) = 0;
      v30[1] = v17;
      LOBYTE(v30[0]) = v18;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !v57 )
        goto LABEL_12;
    }
    else
    {
      if ( *a3 == 9 )
      {
        v16 = *((void **)a3 + 1);
        *a3 = 0;
        *((_QWORD *)a3 + 1) = 0;
        LOBYTE(v30[0]) = 9;
        v30[1] = v16;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !v57 )
        goto LABEL_12;
    }
    v57(&v56, &v56, 3);
LABEL_12:
    if ( v50[1] )
      operator delete(v50[1], v54 - (unsigned __int64)v50[1]);
    if ( v46 )
      operator delete(v46, (char *)v50[0] - (char *)v46);
    if ( v44[1] )
      operator delete(v44[1], *((_QWORD *)&v45 + 1) - (unsigned __int64)v44[1]);
    return;
  }
  *(_OWORD *)v30 = (unsigned __int64)a3;
  v32 = 0;
  v33 = 0;
  v34 = v4;
  v35 = a1 + 40;
  v31 = 0;
  nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::sax_parse_internal<nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>>();
  if ( a2 )
  {
    v19 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
    *(_DWORD *)(a1 + 32) = v19;
    if ( v19 != 15 )
    {
      std::string::basic_string<std::allocator<char>>(
        (__int64 *)v40,
        "value",
        v20,
        v21,
        v22,
        v23,
        v27.m128i_i32[0],
        v27.m128i_i32[2],
        v28.m128i_i64[0]);
      nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message();
      v24 = _mm_loadu_si128((const __m128i *)(a1 + 72));
      v29 = *(_QWORD *)(a1 + 88);
      v28 = v24;
      nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
        (__int64)v44,
        101,
        v28.m128i_i64,
        (__int64)&v42);
      nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
      if ( v34 )
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v44);
      std::string::_M_dispose();
      v44[0] = off_4444D0;
      std::runtime_error::~runtime_error((std::runtime_error *)&v45);
      std::exception::~exception((std::exception *)v44);
      std::string::_M_dispose();
      std::string::_M_dispose();
      goto LABEL_36;
    }
  }
  if ( v33 )
  {
LABEL_36:
    v25 = *a3;
    v26 = *((_QWORD *)a3 + 1);
    *a3 = 9;
    *((_QWORD *)a3 + 1) = 0;
    v28.m128i_i8[0] = v25;
    v28.m128i_i64[1] = v26;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v30[1] )
      operator delete(v30[1], *((_QWORD *)&v31 + 1) - (unsigned __int64)v30[1]);
    return;
  }
  if ( v30[1] )
    operator delete(v30[1], *((_QWORD *)&v31 + 1) - (unsigned __int64)v30[1]);
}

