void __fastcall nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse(
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
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  char v19; // si
  void *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128i v26; // xmm0
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // si
  __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-208h] BYREF
  __int64 v32; // [rsp+10h] [rbp-1F8h] BYREF
  __int64 v33; // [rsp+18h] [rbp-1F0h]
  __int64 v34; // [rsp+20h] [rbp-1E8h]
  int v35; // [rsp+28h] [rbp-1E0h]
  void *v36[2]; // [rsp+30h] [rbp-1D8h] BYREF
  __int128 v37; // [rsp+40h] [rbp-1C8h]
  __int64 v38; // [rsp+50h] [rbp-1B8h]
  int v39; // [rsp+58h] [rbp-1B0h]
  __int64 v40; // [rsp+60h] [rbp-1A8h]
  int v41; // [rsp+68h] [rbp-1A0h]
  int v42; // [rsp+70h] [rbp-198h]
  int v43; // [rsp+78h] [rbp-190h]
  int v44; // [rsp+80h] [rbp-188h]
  int v45; // [rsp+88h] [rbp-180h]
  __int64 v46; // [rsp+90h] [rbp-178h] BYREF
  char v47; // [rsp+98h] [rbp-170h]
  int v48; // [rsp+A0h] [rbp-168h]
  int v49; // [rsp+A8h] [rbp-160h]
  __int64 v50; // [rsp+B0h] [rbp-158h] BYREF
  int v51; // [rsp+B8h] [rbp-150h]
  int v52; // [rsp+C0h] [rbp-148h]
  int v53; // [rsp+C8h] [rbp-140h]
  __m128i v54; // [rsp+D0h] [rbp-138h] BYREF
  __m128 v55[2]; // [rsp+E0h] [rbp-128h] BYREF
  void *v56[2]; // [rsp+100h] [rbp-108h] BYREF
  __int128 v57; // [rsp+110h] [rbp-F8h] BYREF
  void *v58; // [rsp+120h] [rbp-E8h]
  int v59; // [rsp+128h] [rbp-E0h]
  __int64 v60; // [rsp+130h] [rbp-D8h]
  int v61; // [rsp+138h] [rbp-D0h]
  void *v62[2]; // [rsp+140h] [rbp-C8h]
  int v63; // [rsp+150h] [rbp-B8h]
  __int64 v64; // [rsp+158h] [rbp-B0h]
  int v65; // [rsp+160h] [rbp-A8h]
  __int128 v66; // [rsp+168h] [rbp-A0h]
  char v67; // [rsp+178h] [rbp-90h]
  __m128i v68; // [rsp+180h] [rbp-88h] BYREF
  void (__fastcall *v69)(__m128i *, __m128i *, __int64); // [rsp+190h] [rbp-78h]
  __int64 v70; // [rsp+198h] [rbp-70h] BYREF
  char v71; // [rsp+1A0h] [rbp-68h]
  __int64 v72; // [rsp+1A8h] [rbp-60h]
  __int64 v73; // [rsp+1B0h] [rbp-58h]
  __int64 v74; // [rsp+1B8h] [rbp-50h]
  unsigned __int64 v75; // [rsp+1C8h] [rbp-40h]

  v3 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 16);
  v4 = *(_BYTE *)(a1 + 200);
  v75 = __readfsqword(0x28u);
  if ( v3 )
  {
    v31 = (__m128i)(unsigned __int64)a3;
    v54 = 0;
    v55[0] = 0u;
    v3(&v54, a1, 2);
    v6 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 16));
    v7 = _mm_load_si128(&v31);
    v58 = nullptr;
    v59 = 0;
    *(__m128i *)v56 = v7;
    v8 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v6.m128_u64[0];
    v60 = 0;
    v61 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v67 = 0;
    v69 = nullptr;
    v55[0] = v6;
    v57 = 0;
    *(_OWORD *)v62 = 0;
    v66 = 0;
    v68 = 0;
    _mm_storeh_ps((double *)&v70, v6);
    if ( v6.m128_u64[0] )
    {
      v9 = _mm_load_si128(&v54);
      v69 = v8;
      v55[0] = 0;
      v68 = v9;
    }
    v71 = v4;
    v72 = 9;
    v73 = 0;
    v74 = a1 + 40;
    std::vector<bool>::push_back();
    if ( v55[0].m128_u64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v55[0].m128_u64[0])(&v54, &v54, 3);
    nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::sax_parse_internal<nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>>();
    if ( !a2
      || (v10 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan(),
          *(_DWORD *)(a1 + 32) = v10,
          v10 == 15) )
    {
      if ( v67 )
        goto LABEL_22;
    }
    else
    {
      std::string::basic_string<std::allocator<char>>(
        &v46,
        "value",
        v11,
        v12,
        v13,
        v14,
        v31.m128i_i32[0],
        v31.m128i_i32[2],
        v32);
      nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
      v15 = _mm_loadu_si128((const __m128i *)(a1 + 72));
      nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
        (__int64)&v54,
        101,
        (__int64 *)v36,
        &v50,
        v16,
        v17,
        v31.m128i_i32[0],
        v31.m128i_i64[1],
        v32,
        v33,
        v34,
        v35,
        v15.m128i_i64[0],
        v15.m128i_i32[2],
        *(_QWORD *)(a1 + 88),
        SDWORD2(v37),
        v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54.m128i_i32[0],
        v54.m128i_i32[2],
        v55[0].m128_i64[0]);
      nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
      v67 = 1;
      if ( v71 )
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)&v54);
      std::string::_M_dispose();
      v54.m128i_i64[0] = (__int64)off_4444D0;
      std::runtime_error::~runtime_error((std::runtime_error *)v55);
      std::exception::~exception((std::exception *)&v54);
      std::string::_M_dispose();
      std::string::_M_dispose();
      if ( v67 )
      {
LABEL_22:
        v18 = *((void **)a3 + 1);
        v19 = *a3;
        *a3 = 9;
        *((_QWORD *)a3 + 1) = 0;
        v36[1] = v18;
        LOBYTE(v36[0]) = v19;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( !v69 )
          goto LABEL_12;
        goto LABEL_11;
      }
    }
    if ( *a3 == 9 )
    {
      v20 = *((void **)a3 + 1);
      *a3 = 0;
      *((_QWORD *)a3 + 1) = 0;
      LOBYTE(v36[0]) = 9;
      v36[1] = v20;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !v69 )
      goto LABEL_12;
LABEL_11:
    v69(&v68, &v68, 3);
LABEL_12:
    if ( v62[1] )
      operator delete(v62[1], v66 - (unsigned __int64)v62[1]);
    if ( v58 )
      operator delete(v58, (char *)v62[0] - (char *)v58);
    if ( v56[1] )
      operator delete(v56[1], *((_QWORD *)&v57 + 1) - (unsigned __int64)v56[1]);
    return;
  }
  *(_OWORD *)v36 = (unsigned __int64)a3;
  v38 = 0;
  LOBYTE(v39) = 0;
  BYTE1(v39) = v4;
  v40 = a1 + 40;
  v37 = 0;
  nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::sax_parse_internal<nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>>();
  if ( a2 )
  {
    v21 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan();
    *(_DWORD *)(a1 + 32) = v21;
    if ( v21 != 15 )
    {
      std::string::basic_string<std::allocator<char>>(
        &v50,
        "value",
        v22,
        v23,
        v24,
        v25,
        v31.m128i_i32[0],
        v31.m128i_i32[2],
        v32);
      nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message();
      v26 = _mm_loadu_si128((const __m128i *)(a1 + 72));
      nlohmann::json_abi_v3_12_0::detail::parse_error::create<decltype(nullptr),0>(
        (__int64)v56,
        101,
        &v32,
        v54.m128i_i64,
        v27,
        v28,
        v31.m128i_i32[0],
        v31.m128i_i64[1],
        v26.m128i_i32[0],
        v26.m128i_i32[2],
        *(_QWORD *)(a1 + 88),
        v35,
        (__int64)v36[0],
        (int)v36[1],
        v37,
        SDWORD2(v37),
        v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54.m128i_i32[0],
        v54.m128i_i32[2],
        v55[0].m128_i64[0]);
      nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
      if ( BYTE1(v39) )
        nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::parse_error<nlohmann::json_abi_v3_12_0::detail::parse_error>((__int64)v56);
      std::string::_M_dispose();
      v56[0] = off_4444D0;
      std::runtime_error::~runtime_error((std::runtime_error *)&v57);
      std::exception::~exception((std::exception *)v56);
      std::string::_M_dispose();
      std::string::_M_dispose();
      goto LABEL_31;
    }
  }
  if ( (_BYTE)v39 )
  {
LABEL_31:
    v29 = *a3;
    v30 = *((_QWORD *)a3 + 1);
    *a3 = 9;
    *((_QWORD *)a3 + 1) = 0;
    LOBYTE(v32) = v29;
    v33 = v30;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v36[1] )
      operator delete(v36[1], *((_QWORD *)&v37 + 1) - (unsigned __int64)v36[1]);
    return;
  }
  if ( v36[1] )
    operator delete(v36[1], *((_QWORD *)&v37 + 1) - (unsigned __int64)v36[1]);
}

