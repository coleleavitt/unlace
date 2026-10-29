__int64 __fastcall ida_mcp::tools::imports::`anonymous namespace'::import_enum_cb(
        ida_mcp::tools::imports::_anonymous_namespace_ *this,
        const char *a2,
        const char *a3,
        char **a4,
        void *a5)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v6; // rax
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  const char *v11; // r14
  const char *v12; // r13
  __int64 *v13; // rax
  __int64 *v14; // r12
  size_t v15; // rax
  _BYTE *v16; // rcx
  size_t v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r12
  size_t v21; // rax
  void *v22; // rcx
  size_t v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  size_t v26; // rax
  unsigned int v27; // ecx
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // r12
  size_t v32; // rcx
  __int64 v33; // rax
  __int8 v34; // si
  __int64 v35; // rdx
  __int64 v36; // rax
  __int8 v37; // si
  __int64 v38; // rdx
  char *v39; // rbp
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  unsigned int v45; // eax
  unsigned __int64 v46; // rdx
  char *v47; // rax
  char *v48; // r12
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  __int64 v52; // rsi
  unsigned __int64 v53; // rsi
  char *v54; // rdx
  char *v55; // r8
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // edx
  __int64 v59; // rdi
  __int64 v60; // r12
  char v61; // r14
  __int64 v62; // rbp
  __int64 v63; // rax
  const void **v64; // r8
  __m128i *v65; // r13
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  char *v68; // rcx
  void *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // r13
  int *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  _BYTE *v82; // r15
  _QWORD *v83; // rax
  _BYTE *v84; // rdi
  __int64 *v85; // r13
  size_t v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 *v89; // rdx
  unsigned __int64 v90; // r13
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rcx
  __int64 v95; // r13
  __int64 v96; // rax
  __int64 v97; // rax
  void *v99; // [rsp+0h] [rbp-C8h]
  char *v100; // [rsp+0h] [rbp-C8h]
  void *v101; // [rsp+0h] [rbp-C8h]
  void *v102; // [rsp+0h] [rbp-C8h]
  __m128i *v103; // [rsp+0h] [rbp-C8h]
  _BYTE *desta; // [rsp+8h] [rbp-C0h]
  void *destb; // [rsp+8h] [rbp-C0h]
  void *destc; // [rsp+8h] [rbp-C0h]
  unsigned int destd; // [rsp+8h] [rbp-C0h]
  const void **deste; // [rsp+8h] [rbp-C0h]
  const void **destf; // [rsp+8h] [rbp-C0h]
  __int64 *dest; // [rsp+8h] [rbp-C0h]
  int v111[2]; // [rsp+18h] [rbp-B0h] BYREF
  int v112[2]; // [rsp+20h] [rbp-A8h]
  void *v113; // [rsp+28h] [rbp-A0h]
  __m128i v114; // [rsp+30h] [rbp-98h]
  void *v115; // [rsp+40h] [rbp-88h]
  size_t v116; // [rsp+48h] [rbp-80h]
  _QWORD v117[2]; // [rsp+50h] [rbp-78h] BYREF
  char s[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v119; // [rsp+88h] [rbp-40h]

  v8 = (unsigned __int64 *)a4[2];
  v9 = (unsigned __int64)a4[3];
  v119 = __readfsqword(0x28u);
  result = 0;
  if ( *v8 < v9 )
  {
    v11 = a2;
    *(_QWORD *)v112 = 0;
    v113 = nullptr;
    v114 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v12 = a4[1];
    v13 = (__int64 *)operator new(0x20u);
    v14 = v13;
    *v13 = (__int64)(v13 + 2);
    if ( !v12 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    desta = v13 + 2;
    v15 = strlen(v12);
    v16 = desta;
    *(_QWORD *)v111 = v15;
    v17 = v15;
    if ( v15 > 0xF )
    {
      destc = (void *)v15;
      v43 = std::string::_M_create();
      *v14 = v43;
      v16 = (_BYTE *)v43;
      v17 = (size_t)destc;
      v14[2] = *(_QWORD *)v111;
    }
    else
    {
      if ( v15 == 1 )
      {
        *((_BYTE *)v14 + 16) = *v12;
        goto LABEL_6;
      }
      if ( !v15 )
      {
LABEL_6:
        v14[1] = v15;
        v16[v15] = 0;
        v18 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v19 = *(_QWORD *)(v18 + 8);
        *(_BYTE *)v18 = 3;
        *(_QWORD *)(v18 + 8) = v14;
        v114.m128i_i64[1] = v19;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v114.m128i_i64[0] = 0;
        if ( !a2 )
          v11 = "";
        v114.m128i_i64[1] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v20 = (_QWORD *)operator new(0x20u);
        *v20 = v20 + 2;
        v21 = strlen(v11);
        v22 = v20 + 2;
        *(_QWORD *)v111 = v21;
        v23 = v21;
        if ( v21 > 0xF )
        {
          destb = (void *)v21;
          v42 = std::string::_M_create();
          *v20 = v42;
          v22 = (void *)v42;
          v23 = (size_t)destb;
          v20[2] = *(_QWORD *)v111;
        }
        else
        {
          if ( v21 == 1 )
          {
            *((_BYTE *)v20 + 16) = *v11;
            goto LABEL_11;
          }
          if ( !v21 )
            goto LABEL_11;
        }
        memcpy(v22, v11, v23);
        v21 = *(_QWORD *)v111;
        v22 = (void *)*v20;
LABEL_11:
        v20[1] = v21;
        *((_BYTE *)v22 + v21) = 0;
        v24 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v25 = *(_QWORD *)(v24 + 8);
        *(_BYTE *)v24 = 3;
        *(_QWORD *)(v24 + 8) = v20;
        v114.m128i_i64[1] = v25;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        qsnprintf();
        v115 = v117;
        v26 = strlen(s);
        v114.m128i_i64[0] = v26;
        v27 = v26;
        if ( v26 > 0xF )
        {
          destd = v26;
          v44 = (_QWORD *)std::string::_M_create();
          v27 = destd;
          v115 = v44;
          v117[0] = v114.m128i_i64[0];
        }
        else
        {
          if ( v26 == 1 )
          {
            LOBYTE(v117[0]) = s[0];
            goto LABEL_14;
          }
          if ( !v26 )
          {
LABEL_14:
            v28 = v117;
LABEL_15:
            v116 = v26;
            *((_BYTE *)v28 + v26) = 0;
            v114 = 0u;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v29 = (_QWORD *)operator new(0x20u);
            v30 = v29 + 2;
            v31 = v29;
            v32 = v116;
            *v29 = v29 + 2;
            if ( v115 == v117 )
            {
              v45 = v32 + 1;
              if ( (unsigned int)(v32 + 1) >= 8 )
              {
                v31[2] = v117[0];
                *(_QWORD *)((char *)v30 + v45 - 8) = *(_QWORD *)((char *)&v117[-1] + v45);
                v53 = (unsigned __int64)(v31 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                v54 = (char *)v30 - v53;
                v55 = (char *)((char *)v117 - v54);
                v56 = ((_DWORD)v54 + v45) & 0xFFFFFFF8;
                if ( v56 >= 8 )
                {
                  v57 = v56 & 0xFFFFFFF8;
                  v58 = 0;
                  do
                  {
                    v59 = v58;
                    v58 += 8;
                    *(_QWORD *)(v53 + v59) = *(_QWORD *)&v55[v59];
                  }
                  while ( v58 < v57 );
                }
              }
              else if ( (v45 & 4) != 0 )
              {
                *((_DWORD *)v31 + 4) = v117[0];
                *(_DWORD *)((char *)v30 + v45 - 4) = *(_DWORD *)((char *)&v116 + v45 + 4);
              }
              else if ( (_DWORD)v32 != -1 )
              {
                *((_BYTE *)v31 + 16) = v117[0];
                if ( (v45 & 2) != 0 )
                  *(_WORD *)((char *)v30 + v45 - 2) = *(_WORD *)((char *)&v116 + v45 + 6);
              }
            }
            else
            {
              *v29 = v115;
              v29[2] = v117[0];
            }
            v31[1] = v32;
            v115 = v117;
            v116 = 0;
            LOBYTE(v117[0]) = 0;
            v33 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v34 = *(_BYTE *)v33;
            v35 = *(_QWORD *)(v33 + 8);
            *(_BYTE *)v33 = 3;
            *(_QWORD *)(v33 + 8) = v31;
            v114.m128i_i8[0] = v34;
            v114.m128i_i64[1] = v35;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( v115 != v117 )
              operator delete(v115, v117[0] + 1LL);
            v36 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v37 = *(_BYTE *)v36;
            *(_BYTE *)v36 = 6;
            v38 = *(_QWORD *)(v36 + 8);
            v114.m128i_i8[0] = v37;
            *(_QWORD *)(v36 + 8) = a3;
            v114.m128i_i64[1] = v38;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v39 = *a4;
            v40 = **a4;
            if ( !v40 )
            {
              *v39 = 2;
              v41 = operator new(0x18u);
              *(_QWORD *)(v41 + 16) = 0;
              *(_OWORD *)v41 = 0;
              *((_QWORD *)v39 + 1) = v41;
LABEL_21:
              std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
              goto LABEL_22;
            }
            if ( v40 != 2 )
            {
              exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
              switch ( *v39 )
              {
                case 0:
                  v6 = "null";
                  break;
                case 1:
                  v6 = "object";
                  break;
                case 2:
                  v6 = (char *)"array";
                  break;
                case 3:
                  v6 = "string";
                  break;
                case 4:
                  v6 = "boolean";
                  break;
                case 8:
                  v6 = "binary";
                  break;
                case 9:
                  v6 = "discarded";
                  break;
                default:
                  v6 = "number";
                  break;
              }
              v114.m128i_i64[0] = (__int64)v6;
              nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
              nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
                exception,
                308);
              std::string::_M_dispose();
              __cxa_throw(
                exception,
                (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
            }
            v60 = *((_QWORD *)v39 + 1);
            v61 = v112[0];
            v62 = *(_QWORD *)(v60 + 8);
            if ( v62 == *(_QWORD *)(v60 + 16) )
              goto LABEL_21;
            *(_QWORD *)(v62 + 8) = 0;
            *(_BYTE *)v62 = v61;
            switch ( v61 )
            {
              case 1:
                v101 = v113;
                v72 = operator new(0x30u);
                *(_QWORD *)(v72 + 16) = 0;
                v73 = (_QWORD *)v72;
                *(_DWORD *)(v72 + 8) = 0;
                v74 = *((int **)v101 + 2);
                *(_QWORD *)(v72 + 24) = v72 + 8;
                *(_QWORD *)(v72 + 32) = v72 + 8;
                *(_QWORD *)(v72 + 40) = 0;
                if ( v74 )
                {
                  v75 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                          v74,
                          v72 + 8);
                  v76 = v75;
                  do
                  {
                    v77 = v75;
                    v75 = *(_QWORD *)(v75 + 16);
                  }
                  while ( v75 );
                  v73[3] = v77;
                  v78 = v76;
                  do
                  {
                    v79 = v78;
                    v78 = *(_QWORD *)(v78 + 24);
                  }
                  while ( v78 );
                  v80 = *((_QWORD *)v101 + 5);
                  v73[4] = v79;
                  v73[2] = v76;
                  v73[5] = v80;
                  v81 = *(_QWORD *)(v60 + 8);
                }
                else
                {
                  v81 = v62;
                }
                *(_QWORD *)(v62 + 8) = v73;
                v62 = v81;
                goto LABEL_56;
              case 2:
                dest = (__int64 *)v113;
                v88 = operator new(0x18u);
                v89 = (__int64 *)v113;
                v103 = (__m128i *)v88;
                v90 = v89[1] - *v89;
                *(_QWORD *)(v88 + 16) = 0;
                *(_OWORD *)v88 = 0;
                if ( v90 )
                {
                  v91 = operator new(v90);
                  v89 = dest;
                  v92 = v91;
                }
                else
                {
                  v92 = 0;
                }
                *v103 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v92, (__m128i)(unsigned __int64)v92);
                v103[1].m128i_i64[0] = v92 + v90;
                v93 = v89[1];
                v94 = *v89;
                *(_QWORD *)v111 = v92;
                v114 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v92, (__m128i)(unsigned __int64)v111);
                if ( v93 != v94 )
                {
                  v95 = v94;
                  do
                  {
                    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
                    v95 += 16;
                    v92 = *(_QWORD *)v111 + 16LL;
                    *(_QWORD *)v111 += 16LL;
                  }
                  while ( v93 != v95 );
                }
                v103->m128i_i64[1] = v92;
                *(_QWORD *)(v62 + 8) = v103;
                v62 = *(_QWORD *)(v60 + 8);
                goto LABEL_56;
              case 3:
                v82 = *(_BYTE **)v113;
                v102 = *((void **)v113 + 1);
                v83 = (_QWORD *)operator new(0x20u);
                v84 = v83 + 2;
                v85 = v83;
                *v83 = v83 + 2;
                v114.m128i_i64[0] = (__int64)v102;
                if ( (unsigned __int64)v102 > 0xF )
                {
                  v96 = std::string::_M_create();
                  *v85 = v96;
                  v84 = (_BYTE *)v96;
                  v97 = v114.m128i_i64[0];
                  v85[2] = v114.m128i_i64[0];
                  v86 = v97 + 1;
                  if ( v97 )
                  {
                    v87 = -1;
                    if ( v86 )
                      goto LABEL_72;
LABEL_73:
                    v85[1] = v87;
                    *(_QWORD *)(v62 + 8) = v85;
                    v62 = *(_QWORD *)(v60 + 8);
LABEL_56:
                    *(_QWORD *)(v60 + 8) = v62 + 16;
LABEL_22:
                    ++*(_QWORD *)a4[2];
                    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                    return 1;
                  }
                }
                else
                {
                  v86 = (size_t)v102 + 1;
                  if ( v102 )
                  {
LABEL_72:
                    memcpy(v84, v82, v86);
                    v87 = v114.m128i_i64[0];
                    goto LABEL_73;
                  }
                }
                *v84 = *v82;
                v87 = v114.m128i_i64[0];
                goto LABEL_73;
              case 4:
                *(_BYTE *)(v62 + 8) = (_BYTE)v113;
                goto LABEL_56;
              case 5:
              case 6:
                *(_QWORD *)(v62 + 8) = v113;
                goto LABEL_56;
              case 7:
                *(_QWORD *)(v62 + 8) = v113;
                goto LABEL_56;
              case 8:
                v63 = operator new(0x28u);
                v64 = (const void **)v113;
                v65 = (__m128i *)v63;
                v66 = (_BYTE *)v64[1] - (_BYTE *)*v64;
                *(_QWORD *)(v63 + 16) = 0;
                *(_OWORD *)v63 = 0;
                if ( v66 )
                {
                  deste = v64;
                  v99 = (void *)v66;
                  v67 = operator new(v66);
                  v66 = (unsigned __int64)v99;
                  v64 = deste;
                  v68 = (char *)v67;
                }
                else
                {
                  v68 = nullptr;
                }
                v65[1].m128i_i64[0] = (__int64)&v68[v66];
                *v65 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v68, (__m128i)(unsigned __int64)v68);
                if ( (_BYTE *)v64[1] - (_BYTE *)*v64 <= 0 )
                {
                  v70 = v62;
                }
                else
                {
                  destf = v64;
                  v100 = (char *)((_BYTE *)v64[1] - (_BYTE *)*v64);
                  v69 = memcpy(v68, *v64, (size_t)v100);
                  v64 = destf;
                  v68 = &v100[(_QWORD)v69];
                  v70 = *(_QWORD *)(v60 + 8);
                }
                v71 = (__int64)v64[3];
                v65->m128i_i64[1] = (__int64)v68;
                v65[1].m128i_i64[1] = v71;
                v65[2].m128i_i8[0] = *((_BYTE *)v64 + 32);
                *(_QWORD *)(v62 + 8) = v65;
                v62 = v70;
                goto LABEL_56;
              default:
                goto LABEL_56;
            }
          }
          v44 = v117;
        }
        if ( v27 >= 8 )
        {
          *v44 = *(_QWORD *)s;
          *(_QWORD *)((char *)v44 + v27 - 8) = *(_QWORD *)((char *)&v117[1] + v27);
          v46 = (unsigned __int64)(v44 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v47 = (char *)v44 - v46;
          v48 = (char *)(s - v47);
          v49 = ((_DWORD)v47 + v27) & 0xFFFFFFF8;
          if ( v49 >= 8 )
          {
            v50 = v49 & 0xFFFFFFF8;
            v51 = 0;
            do
            {
              v52 = v51;
              v51 += 8;
              *(_QWORD *)(v46 + v52) = *(_QWORD *)&v48[v52];
            }
            while ( v51 < v50 );
          }
        }
        else if ( (v27 & 4) != 0 )
        {
          *(_DWORD *)v44 = *(_DWORD *)s;
          *(_DWORD *)((char *)v44 + v27 - 4) = *(_DWORD *)((char *)&v117[1] + v27 + 4);
        }
        else if ( v27 )
        {
          *(_BYTE *)v44 = s[0];
          if ( (v27 & 2) != 0 )
            *(_WORD *)((char *)v44 + v27 - 2) = *(_WORD *)((char *)&v117[1] + v27 + 6);
        }
        v26 = v114.m128i_i64[0];
        v28 = v115;
        goto LABEL_15;
      }
    }
    memcpy(v16, v12, v17);
    v15 = *(_QWORD *)v111;
    v16 = (_BYTE *)*v14;
    goto LABEL_6;
  }
  return result;
}

