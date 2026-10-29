__int64 __fastcall ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_compile_idc(int a1)
{
  void *exception; // r12
  const char *v2; // rbp
  _BYTE *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // r13
  __int64 *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // r13
  unsigned __int64 v21; // r15
  _QWORD *v22; // rax
  _BYTE *v23; // rdi
  __int64 *v24; // r12
  __m128i v25; // xmm0
  size_t v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char *v41; // r15
  __int64 *v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _BYTE *v47; // r13
  unsigned __int64 v48; // r15
  _QWORD *v49; // rax
  _BYTE *v50; // rdi
  __int64 *v51; // r12
  __m128i v52; // xmm0
  size_t v53; // rdx
  __int64 v54; // rax
  __int64 *v55; // r12
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __m128i v60; // xmm0
  __int64 *v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 *v66; // r15
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  char *v74; // r15
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  int v80; // [rsp+0h] [rbp-238h]
  int v81; // [rsp+0h] [rbp-238h]
  int v82; // [rsp+0h] [rbp-238h]
  int v83; // [rsp+0h] [rbp-238h]
  _QWORD *v84; // [rsp+0h] [rbp-238h]
  __int64 v85; // [rsp+0h] [rbp-238h]
  int v86; // [rsp+0h] [rbp-238h]
  int v87; // [rsp+0h] [rbp-238h]
  int v88; // [rsp+0h] [rbp-238h]
  _QWORD *v89; // [rsp+0h] [rbp-238h]
  int v90; // [rsp+8h] [rbp-230h]
  int v91; // [rsp+8h] [rbp-230h]
  int v92; // [rsp+8h] [rbp-230h]
  int v93; // [rsp+8h] [rbp-230h]
  __int64 v94; // [rsp+8h] [rbp-230h]
  int v95; // [rsp+8h] [rbp-230h]
  int v96; // [rsp+8h] [rbp-230h]
  int v97; // [rsp+8h] [rbp-230h]
  __int64 v98; // [rsp+8h] [rbp-230h]
  __m128i v99; // [rsp+10h] [rbp-228h] BYREF
  __m128i *v100; // [rsp+20h] [rbp-218h]
  void **p_src; // [rsp+28h] [rbp-210h]
  __m128i v102; // [rsp+30h] [rbp-208h] BYREF
  char *v103; // [rsp+40h] [rbp-1F8h]
  _BYTE *v104; // [rsp+48h] [rbp-1F0h]
  int v105; // [rsp+50h] [rbp-1E8h]
  unsigned __int64 v106; // [rsp+58h] [rbp-1E0h]
  __m128i v107; // [rsp+60h] [rbp-1D8h] BYREF
  const char *v108; // [rsp+70h] [rbp-1C8h]
  __int128 v109; // [rsp+78h] [rbp-1C0h]
  void *src; // [rsp+90h] [rbp-1A8h] BYREF
  unsigned __int64 v111; // [rsp+98h] [rbp-1A0h]
  _QWORD v112[2]; // [rsp+A0h] [rbp-198h] BYREF
  char v113[8]; // [rsp+B0h] [rbp-188h] BYREF
  __int128 v114; // [rsp+B8h] [rbp-180h]
  __int64 v115; // [rsp+C8h] [rbp-170h]
  __m128i v116; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v117; // [rsp+E0h] [rbp-158h]
  __int64 v118; // [rsp+E8h] [rbp-150h]
  __int64 v119; // [rsp+F0h] [rbp-148h]
  __int64 v120; // [rsp+F8h] [rbp-140h]
  char v121; // [rsp+100h] [rbp-138h] BYREF
  __int128 v122; // [rsp+108h] [rbp-130h] BYREF
  char v123; // [rsp+118h] [rbp-120h]
  __m128i v124; // [rsp+120h] [rbp-118h] BYREF
  char v125; // [rsp+130h] [rbp-108h] BYREF
  __int128 v126; // [rsp+138h] [rbp-100h] BYREF
  _BYTE v127[24]; // [rsp+148h] [rbp-F0h] BYREF
  char v128; // [rsp+160h] [rbp-D8h] BYREF
  __int128 v129; // [rsp+168h] [rbp-D0h]
  char v130; // [rsp+178h] [rbp-C0h]
  __int128 v131; // [rsp+180h] [rbp-B8h]
  _QWORD v132[2]; // [rsp+190h] [rbp-A8h] BYREF
  __int64 v133; // [rsp+1A0h] [rbp-98h] BYREF
  _QWORD v134[2]; // [rsp+1A8h] [rbp-90h] BYREF
  __int64 v135; // [rsp+1B8h] [rbp-80h]
  _QWORD v136[2]; // [rsp+1C0h] [rbp-78h] BYREF
  __int64 v137; // [rsp+1D0h] [rbp-68h]
  _QWORD v138[2]; // [rsp+1D8h] [rbp-60h] BYREF
  __int64 v139; // [rsp+1E8h] [rbp-50h]
  char v140; // [rsp+1F0h] [rbp-48h] BYREF
  unsigned __int64 v141; // [rsp+1F8h] [rbp-40h]

  v141 = __readfsqword(0x28u);
  src = v112;
  v3 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v111 = 0;
  p_src = &src;
  LOBYTE(v112[0]) = 0;
  if ( *v3 != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *v3 )
    {
      case 0:
        v2 = "null";
        break;
      case 1:
        v2 = "object";
        break;
      case 2:
        v2 = "array";
        break;
      case 3:
        v2 = "string";
        break;
      case 4:
        v2 = "boolean";
        break;
      case 8:
        v2 = "binary";
        break;
      case 9:
        v2 = "discarded";
        break;
      default:
        v2 = "number";
        break;
    }
    LOBYTE(v133) = 0;
    v132[0] = &v133;
    v132[1] = 0;
    strlen(v2);
    std::string::reserve();
    std::string::append((__int64)v132, "type must be string, but is ");
    std::string::append((__int64)v132, v2);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v114 = 0;
  v113[0] = 2;
  v115 = 0;
  v108 = nullptr;
  v109 = 0;
  if ( !(unsigned __int8)eval_idc_expr() )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    v117 = 0;
    v118 = 4;
    v119 = 0;
    v120 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v132,
      &v116);
    v133 = 0;
    v121 = 0;
    *(_QWORD *)&v122 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v121 = 3;
    v4 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v4, "error", v5, v6, v7, v8, a1, (int)&v122, v99.m128i_i64[0]);
    v122 = (unsigned __int64)v4;
    if ( (_QWORD)v109 )
      v9 = v108;
    else
      v9 = _qstring<char>::c_str(void)const::nullstr;
    v123 = 0;
    v100 = &v124;
    v124.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v123 = 3;
    v10 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v10, v9, v11, v12, v13, v14, v80, v90, v99.m128i_i64[0]);
    v103 = &v121;
    v124 = (__m128i)(unsigned __int64)v10;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v134,
      (const __m128i *)&v121);
    v135 = 0;
    v125 = 0;
    *(_QWORD *)&v126 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v125 = 3;
    v15 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v15, "code", v16, v17, v18, v19, v81, v91, (__int64)&v126);
    v127[0] = 0;
    v104 = &v127[8];
    *(_QWORD *)&v127[8] = 0;
    v126 = (unsigned __int64)v15;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v127[0] = 3;
    v20 = src;
    v21 = v111;
    v22 = (_QWORD *)operator new(0x20u);
    v23 = v22 + 2;
    v106 = v21;
    v24 = v22;
    *v22 = v22 + 2;
    if ( v21 > 0xF )
    {
      v78 = std::string::_M_create();
      *v24 = v78;
      v23 = (_BYTE *)v78;
      v79 = v106;
      v25 = (__m128i)(unsigned __int64)v24;
      v24[2] = v106;
      v26 = v79 + 1;
      if ( v79 )
      {
        v27 = -1;
        if ( v26 )
          goto LABEL_7;
LABEL_8:
        v24[1] = v27;
        v102.m128i_i64[0] = (__int64)&v125;
        *(__m128i *)&v127[8] = v25;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v136,
          (const __m128i *)&v125);
        v137 = 0;
        v128 = 0;
        *(_QWORD *)&v129 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v128 = 3;
        v28 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v28, "note", v29, v30, v31, v32, v82, v92, v99.m128i_i64[0]);
        v130 = 0;
        v129 = (unsigned __int64)v28;
        *(_QWORD *)&v131 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v130 = 3;
        v33 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v33,
          "Code compilation/execution failed",
          v34,
          v35,
          v36,
          v37,
          v83,
          v93,
          v99.m128i_i64[0]);
        v131 = (unsigned __int64)v33;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v138,
          (const __m128i *)&v128);
        v139 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v84,
          (__int64)v132,
          4,
          v38,
          v39,
          v40,
          (int)v84,
          v94,
          v99.m128i_i32[0],
          v99.m128i_i32[2],
          (int)v100,
          (int)p_src,
          v102.m128i_i64[0],
          v102.m128i_i32[2],
          (int)v103,
          (int)v104,
          v105,
          v106,
          v107.m128i_i64[0],
          v107.m128i_i32[2],
          (__int64)v108);
        v41 = &v140;
        do
        {
          v41 -= 24;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v41 != (char *)v132 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_17;
      }
    }
    else
    {
      v25 = (__m128i)(unsigned __int64)v22;
      v26 = v21 + 1;
      if ( v21 )
      {
LABEL_7:
        v102 = v25;
        memcpy(v23, v20, v26);
        v27 = v106;
        v25 = _mm_load_si128(&v102);
        goto LABEL_8;
      }
    }
    *v23 = *v20;
    v27 = v106;
    goto LABEL_8;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v117 = 0;
  v118 = 4;
  v119 = 1;
  v120 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v132,
    &v116);
  v133 = 0;
  v121 = 0;
  *(_QWORD *)&v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v121 = 3;
  v42 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v42, "code", v43, v44, v45, v46, a1, (int)&v122, v99.m128i_i64[0]);
  v123 = 0;
  v100 = &v124;
  v124.m128i_i64[0] = 0;
  v122 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v47 = src;
  v48 = v111;
  v49 = (_QWORD *)operator new(0x20u);
  v50 = v49 + 2;
  v107.m128i_i64[0] = v48;
  v51 = v49;
  *v49 = v49 + 2;
  if ( v48 <= 0xF )
  {
    v52 = (__m128i)(unsigned __int64)v49;
    v53 = v48 + 1;
    if ( v48 )
    {
LABEL_13:
      v99 = v52;
      memcpy(v50, v47, v53);
      v54 = v107.m128i_i64[0];
      v52 = _mm_load_si128(&v99);
      goto LABEL_14;
    }
    goto LABEL_27;
  }
  v76 = std::string::_M_create();
  *v51 = v76;
  v50 = (_BYTE *)v76;
  v77 = v107.m128i_i64[0];
  v52 = (__m128i)(unsigned __int64)v51;
  v51[2] = v107.m128i_i64[0];
  v53 = v77 + 1;
  if ( !v77 )
  {
LABEL_27:
    *v50 = *v47;
    v54 = v107.m128i_i64[0];
    goto LABEL_14;
  }
  v54 = -1;
  if ( v53 )
    goto LABEL_13;
LABEL_14:
  v51[1] = v54;
  v103 = &v121;
  v124 = v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v134,
    (const __m128i *)&v121);
  v135 = 0;
  v125 = 0;
  *(_QWORD *)&v126 = 0;
  v99.m128i_i64[0] = (__int64)&v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v55, "result", v56, v57, v58, v59, v86, v95, v99.m128i_i64[0]);
  v126 = (unsigned __int64)v55;
  ida_mcp::tools::exec_scripts::`anonymous namespace'::idc_value_to_json(&v107, (__int64)v113);
  v60 = _mm_load_si128(&v107);
  v102.m128i_i64[0] = (__int64)&v125;
  *(_QWORD *)&v127[16] = 0;
  *(__m128i *)v127 = v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v136,
    (const __m128i *)&v125);
  v137 = 0;
  v128 = 0;
  *(_QWORD *)&v129 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v128 = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v61, "note", v62, v63, v64, v65, v87, v96, v99.m128i_i64[0]);
  v130 = 0;
  v129 = (unsigned __int64)v61;
  *(_QWORD *)&v131 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v130 = 3;
  v66 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v66,
    "Code executed successfully",
    v67,
    v68,
    v69,
    v70,
    v88,
    v97,
    v99.m128i_i64[0]);
  v131 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v138,
    (const __m128i *)&v128);
  v139 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v89,
    (__int64)v132,
    4,
    v71,
    v72,
    v73,
    (int)v89,
    v98,
    v99.m128i_i32[0],
    v99.m128i_i32[2],
    (int)v100,
    (int)p_src,
    v102.m128i_i64[0],
    v102.m128i_i32[2],
    (int)v103,
    (int)v104,
    v105,
    v106,
    v107.m128i_i64[0],
    v107.m128i_i32[2],
    (__int64)v108);
  v74 = &v140;
  do
  {
    v74 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v74 != (char *)v132 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_17:
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    qfree();
  }
  free_idcv();
  if ( src != v112 )
    operator delete(src, v112[0] + 1LL);
  return v85;
}

