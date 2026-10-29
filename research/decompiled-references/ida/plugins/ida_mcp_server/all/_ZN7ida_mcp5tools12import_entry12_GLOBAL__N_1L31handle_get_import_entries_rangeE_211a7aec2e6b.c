__int64 __fastcall ida_mcp::tools::import_entry::`anonymous namespace'::handle_get_import_entries_range(__int64 a1)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v2; // rax
  char *v3; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // bp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rax
  int *v17; // rdi
  __m128i *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i si128; // xmm0
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rdx
  int *v33; // rbx
  char v35; // bl
  __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  __int8 v39; // si
  __int64 v40; // rax
  _QWORD *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  bool v46; // cc
  const char *v47; // r13
  _QWORD *v48; // rax
  _BYTE *v49; // r14
  __int64 *v50; // r12
  size_t v51; // rax
  size_t v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rax
  bool v57; // zf
  __int64 v58; // rax
  __int8 v59; // si
  __int64 v60; // rax
  _BYTE *v61; // r12
  unsigned __int64 v62; // r13
  __m128i *v63; // rax
  _BYTE *m128i_i8; // rdi
  size_t v65; // rdx
  __int64 v66; // rax
  __int64 *v67; // r13
  __int64 v68; // rax
  unsigned __int64 v69; // r12
  __m128i *v70; // rbx
  char *v71; // rcx
  size_t v72; // r12
  __int64 v73; // rax
  __int64 *v74; // r13
  __int64 v75; // rax
  unsigned __int64 v76; // rbx
  __m128i *v77; // r12
  char *v78; // rdi
  __int64 v79; // rbx
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // rax
  char *v83; // r14
  __int64 *v84; // rax
  __int64 *v85; // r13
  size_t v86; // rax
  void *v87; // r8
  size_t v88; // rcx
  __int64 v89; // rax
  __int8 v90; // si
  __int64 v91; // rax
  int *v92; // r13
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // r14
  __int64 v96; // rax
  unsigned __int64 v97; // r13
  __m128i *v98; // r12
  char *v99; // rcx
  size_t v100; // r13
  __int64 v101; // rax
  _BYTE *v102; // r13
  unsigned __int64 v103; // r14
  _QWORD *v104; // rax
  _BYTE *v105; // rdi
  _QWORD *v106; // r12
  size_t v107; // rdx
  __int64 v108; // rax
  __int64 *v109; // r14
  __int64 v110; // rax
  unsigned __int64 v111; // r12
  __m128i *v112; // r13
  __int64 v113; // rdi
  __int64 v114; // r12
  __int64 v115; // r14
  _QWORD *v116; // r13
  __int64 v117; // rax
  int *v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  char v132; // [rsp+8h] [rbp-3A0h]
  int v133[2]; // [rsp+10h] [rbp-398h]
  nlohmann::json_abi_v3_12_0::detail::type_error *v134; // [rsp+18h] [rbp-390h]
  int v136[2]; // [rsp+30h] [rbp-378h]
  int v137[2]; // [rsp+48h] [rbp-360h]
  __int64 v138; // [rsp+50h] [rbp-358h]
  void *dest; // [rsp+58h] [rbp-350h]
  void *desta; // [rsp+58h] [rbp-350h]
  __int64 v141; // [rsp+90h] [rbp-318h] BYREF
  __int64 v142; // [rsp+98h] [rbp-310h]
  char v143; // [rsp+A0h] [rbp-308h]
  __m128i *v144; // [rsp+A8h] [rbp-300h]
  char v145; // [rsp+B0h] [rbp-2F8h]
  _QWORD *v146; // [rsp+B8h] [rbp-2F0h]
  __m128i i; // [rsp+C0h] [rbp-2E8h] BYREF
  char *v148; // [rsp+D0h] [rbp-2D8h] BYREF
  __int128 v149; // [rsp+D8h] [rbp-2D0h]
  _BYTE s[24]; // [rsp+F0h] [rbp-2B8h] BYREF
  __int64 *v151; // [rsp+108h] [rbp-2A0h]
  __int128 v152; // [rsp+110h] [rbp-298h]
  int v153; // [rsp+120h] [rbp-288h]
  char *v154; // [rsp+150h] [rbp-258h]
  __int64 v155[4]; // [rsp+170h] [rbp-238h] BYREF
  __int64 v156; // [rsp+1B0h] [rbp-1F8h] BYREF
  __int128 v157; // [rsp+1B8h] [rbp-1F0h]
  __int64 v158; // [rsp+1C8h] [rbp-1E0h]
  __int64 v159; // [rsp+1D0h] [rbp-1D8h]
  __int64 v160; // [rsp+1D8h] [rbp-1D0h]
  char v161; // [rsp+1E0h] [rbp-1C8h] BYREF
  int v162[4]; // [rsp+1E8h] [rbp-1C0h]
  char v163; // [rsp+1F8h] [rbp-1B0h]
  __int64 v164; // [rsp+200h] [rbp-1A8h]
  __int64 v165; // [rsp+208h] [rbp-1A0h]
  char v166; // [rsp+210h] [rbp-198h] BYREF
  char v167[16]; // [rsp+218h] [rbp-190h]
  char v168; // [rsp+228h] [rbp-180h]
  __int128 v169; // [rsp+230h] [rbp-178h]
  char *v170; // [rsp+240h] [rbp-168h] BYREF
  int v171[4]; // [rsp+248h] [rbp-160h]
  char v172; // [rsp+258h] [rbp-150h]
  _QWORD *m128i_i64; // [rsp+260h] [rbp-148h]
  __int64 v174; // [rsp+268h] [rbp-140h]
  __int64 v175; // [rsp+270h] [rbp-138h] BYREF
  int v176[4]; // [rsp+278h] [rbp-130h]
  char v177; // [rsp+288h] [rbp-120h]
  __m128i *v178; // [rsp+290h] [rbp-118h]
  __int64 v179; // [rsp+298h] [rbp-110h]
  char v180; // [rsp+2A0h] [rbp-108h] BYREF
  int v181[4]; // [rsp+2A8h] [rbp-100h]
  char v182; // [rsp+2B8h] [rbp-F0h] BYREF
  __int128 v183; // [rsp+2C0h] [rbp-E8h]
  int v184[4]; // [rsp+2D0h] [rbp-D8h] BYREF
  __int64 v185; // [rsp+2E0h] [rbp-C8h]
  int v186[4]; // [rsp+2E8h] [rbp-C0h] BYREF
  __int64 v187; // [rsp+2F8h] [rbp-B0h]
  int v188[4]; // [rsp+300h] [rbp-A8h] BYREF
  __int64 v189; // [rsp+310h] [rbp-98h]
  int v190[4]; // [rsp+318h] [rbp-90h] BYREF
  __int64 v191; // [rsp+328h] [rbp-80h]
  int v192[4]; // [rsp+330h] [rbp-78h] BYREF
  __int64 v193; // [rsp+340h] [rbp-68h]
  int v194[4]; // [rsp+348h] [rbp-60h] BYREF
  __int64 v195; // [rsp+358h] [rbp-50h]
  unsigned __int64 v196; // [rsp+368h] [rbp-40h]

  v196 = __readfsqword(0x28u);
  v138 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<unsigned long,char const(&)[6],unsigned long,0>();
  v4 = v138;
  *(_QWORD *)s = 100;
  v5 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<unsigned long,char const(&)[6],unsigned long,0>();
  v6 = 10000;
  if ( v5 <= 0x2710 )
    v6 = v5;
  *(_QWORD *)v133 = v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *(_QWORD *)v137 = 0;
  if ( v5 )
  {
    v7 = 0;
    while ( 2 )
    {
      while ( 1 )
      {
        memset(s, 0, sizeof(s));
        v151 = nullptr;
        v152 = 0;
        if ( (unsigned __int8)get_import_entry() )
          break;
        if ( ++v7 == 101 )
        {
          if ( v151 )
          {
            *(_QWORD *)&v152 = 0;
            qfree();
          }
          if ( *(_QWORD *)s )
          {
            *(_QWORD *)&s[8] = 0;
            qfree();
          }
          goto LABEL_12;
        }
        if ( v151 )
        {
          *(_QWORD *)&v152 = 0;
          qfree();
        }
        if ( *(_QWORD *)s )
        {
          *(_QWORD *)&s[8] = 0;
          qfree();
        }
        ++v4;
        if ( *(_QWORD *)v137 >= *(_QWORD *)v133 )
          goto LABEL_12;
      }
      v148 = nullptr;
      v149 = 0;
      get_import_module_name();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v35 = v145;
      if ( (_QWORD)v152 )
      {
        v36 = *v151;
        if ( !v145 )
        {
          v145 = 2;
          v37 = operator new(0x18u);
          *(_QWORD *)(v37 + 16) = 0;
          v38 = 0;
          v146 = (_QWORD *)v37;
          *(_OWORD *)v37 = 0;
LABEL_34:
          i.m128i_i8[0] = 6;
          i.m128i_i64[1] = v36;
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
          v39 = i.m128i_i8[0];
          v40 = i.m128i_i64[1];
          goto LABEL_39;
        }
        v38 = 0;
        if ( v145 != 2 )
        {
          exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( v35 )
          {
            case 1:
              v2 = "object";
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
          i.m128i_i64[0] = (__int64)v2;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          std::string::basic_string<std::allocator<char>>(&v175, "");
          std::string::basic_string<std::allocator<char>>((__int64 *)v184, "type_error");
          nlohmann::json_abi_v3_12_0::detail::exception::name();
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,std::string,std::string,std::string const&>();
          std::string::_M_dispose();
          std::string::_M_dispose();
          std::string::_M_dispose();
          nlohmann::json_abi_v3_12_0::detail::type_error::type_error(exception, 308, v170);
          std::string::_M_dispose();
          std::string::_M_dispose();
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        while ( 1 )
        {
          v41 = v146;
          v42 = v146[1];
          if ( v146[2] == v42 )
            goto LABEL_34;
          i.m128i_i8[0] = 6;
          v43 = v42 + 16;
          v39 = 0;
          i.m128i_i64[1] = v36;
          *(__m128i *)(v43 - 16) = _mm_load_si128(&i);
          v41[1] = v43;
          v40 = 0;
LABEL_39:
          i.m128i_i8[0] = v39;
          ++v38;
          i.m128i_i64[1] = v40;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v38 >= (unsigned __int64)v152 )
            goto LABEL_40;
          if ( v35 )
            break;
          v35 = 2;
          v36 = v151[v38];
        }
        do
        {
          v54 = v146;
          v55 = v151[v38];
          v56 = v146[1];
          v57 = v56 == v146[2];
          i.m128i_i8[0] = 6;
          i.m128i_i64[1] = v55;
          if ( v57 )
          {
            std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
            v59 = i.m128i_i8[0];
            v60 = i.m128i_i64[1];
          }
          else
          {
            v58 = v56 + 16;
            v59 = 0;
            *(__m128i *)(v58 - 16) = _mm_load_si128(&i);
            v54[1] = v58;
            v60 = 0;
          }
          i.m128i_i8[0] = v59;
          ++v38;
          i.m128i_i64[1] = v60;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v38 < (unsigned __int64)v152 );
LABEL_40:
        v35 = 2;
      }
      v161 = 0;
      *(_QWORD *)v162 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v161 = 3;
      v44 = operator new(0x20u);
      *(_DWORD *)(v44 + 16) = 1701080681;
      *(_QWORD *)v44 = v44 + 16;
      *(_BYTE *)(v44 + 20) = 120;
      *(_QWORD *)(v44 + 8) = 5;
      *(_BYTE *)(v44 + 21) = 0;
      v163 = 6;
      v164 = v4;
      v165 = 0;
      *(_OWORD *)v162 = (unsigned __int64)v44;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v184,
        (const __m128i *)&v161);
      v185 = 0;
      v166 = 0;
      *(_QWORD *)v167 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v166 = 3;
      v45 = operator new(0x20u);
      *(_DWORD *)(v45 + 16) = 1701667182;
      v46 = *(_QWORD *)&s[8] <= 1u;
      *(_QWORD *)v45 = v45 + 16;
      v47 = "";
      if ( !v46 )
        v47 = *(const char **)s;
      *(_QWORD *)(v45 + 8) = 4;
      *(_BYTE *)(v45 + 20) = 0;
      v168 = 0;
      *(_QWORD *)&v169 = 0;
      *(_OWORD *)v167 = (unsigned __int64)v45;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v168 = 3;
      v48 = (_QWORD *)operator new(0x20u);
      v49 = v48 + 2;
      v50 = v48;
      *v48 = v48 + 2;
      if ( !v47 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v51 = strlen(v47);
      i.m128i_i64[0] = v51;
      v52 = v51;
      if ( v51 > 0xF )
      {
        *(_QWORD *)v136 = v51;
        v93 = std::string::_M_create();
        *v50 = v93;
        v49 = (_BYTE *)v93;
        v52 = *(_QWORD *)v136;
        v50[2] = i.m128i_i64[0];
      }
      else
      {
        if ( v51 == 1 )
        {
          *((_BYTE *)v50 + 16) = *v47;
          goto LABEL_47;
        }
        if ( !v51 )
        {
LABEL_47:
          v50[1] = v51;
          v49[v51] = 0;
          v169 = (unsigned __int64)v50;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
            v186,
            (const __m128i *)&v166);
          v187 = 0;
          LOBYTE(v170) = 0;
          *(_QWORD *)v171 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          LOBYTE(v170) = 3;
          v53 = operator new(0x20u);
          *(_QWORD *)(v53 + 8) = 8;
          *(_QWORD *)v53 = v53 + 16;
          strcpy((char *)(v53 + 16), "ordinals");
          m128i_i64 = nullptr;
          v172 = v35;
          *(_OWORD *)v171 = (unsigned __int64)v53;
          switch ( v35 )
          {
            case 1:
              v116 = v146;
              v117 = operator new(0x30u);
              *(_QWORD *)(v117 + 16) = 0;
              v118 = (int *)v116[2];
              v106 = (_QWORD *)v117;
              *(_DWORD *)(v117 + 8) = 0;
              *(_QWORD *)(v117 + 24) = v117 + 8;
              *(_QWORD *)(v117 + 32) = v117 + 8;
              *(_QWORD *)(v117 + 40) = 0;
              if ( v118 )
              {
                v119 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                         v118,
                         v117 + 8);
                v120 = v119;
                do
                {
                  v121 = v119;
                  v119 = *(_QWORD *)(v119 + 16);
                }
                while ( v119 );
                v106[3] = v121;
                v122 = v120;
                do
                {
                  v123 = v122;
                  v122 = *(_QWORD *)(v122 + 24);
                }
                while ( v122 );
                v124 = v116[5];
                v106[4] = v123;
                v106[2] = v120;
                v106[5] = v124;
              }
              goto LABEL_108;
            case 2:
              v109 = v146;
              v110 = operator new(0x18u);
              v111 = v109[1] - *v109;
              v112 = (__m128i *)v110;
              *(_QWORD *)(v110 + 16) = 0;
              *(_OWORD *)v110 = 0;
              if ( v111 )
                v113 = operator new(v111);
              else
                v113 = 0;
              v112[1].m128i_i64[0] = v113 + v111;
              *v112 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v113, (__m128i)(unsigned __int64)v113);
              v114 = v109[1];
              v115 = *v109;
              v141 = v113;
              for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v113, (__m128i)(unsigned __int64)&v141);
                    v114 != v115;
                    v141 += 16 )
              {
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
                v115 += 16;
                v113 = v141 + 16;
              }
              v112->m128i_i64[1] = v113;
              m128i_i64 = v112->m128i_i64;
              goto LABEL_71;
            case 3:
              v102 = (_BYTE *)*v146;
              v103 = v146[1];
              v104 = (_QWORD *)operator new(0x20u);
              v105 = v104 + 2;
              v142 = v103;
              v106 = v104;
              *v104 = v104 + 2;
              if ( v103 <= 0xF )
              {
                v107 = v103 + 1;
                if ( v103 )
                  goto LABEL_106;
LABEL_132:
                *v105 = *v102;
                v108 = v142;
                goto LABEL_107;
              }
              v130 = std::string::_M_create();
              *v106 = v130;
              v105 = (_BYTE *)v130;
              v131 = v142;
              v106[2] = v142;
              v107 = v131 + 1;
              if ( !v131 )
                goto LABEL_132;
              v108 = -1;
              if ( v107 )
              {
LABEL_106:
                memcpy(v105, v102, v107);
                v108 = v142;
              }
LABEL_107:
              v106[1] = v108;
LABEL_108:
              m128i_i64 = v106;
LABEL_71:
              v174 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                v188,
                (const __m128i *)&v170);
              v189 = 0;
              LOBYTE(v175) = 0;
              *(_QWORD *)v176 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              LOBYTE(v175) = 3;
              v81 = operator new(0x20u);
              *(_QWORD *)v81 = v81 + 16;
              strcpy((char *)(v81 + 16), "mod_index");
              *(_QWORD *)(v81 + 8) = 9;
              v177 = 5;
              v178 = (__m128i *)v153;
              v179 = 0;
              *(_OWORD *)v176 = (unsigned __int64)v81;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                v190,
                (const __m128i *)&v175);
              v191 = 0;
              v180 = 0;
              *(_QWORD *)v181 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v180 = 3;
              v82 = operator new(0x20u);
              v46 = (unsigned __int64)v149 <= 1;
              *(_QWORD *)v82 = v82 + 16;
              v83 = "";
              if ( !v46 )
                v83 = v148;
              strcpy((char *)(v82 + 16), "module_name");
              *(_QWORD *)(v82 + 8) = 11;
              v182 = 0;
              *(_QWORD *)&v183 = 0;
              *(_OWORD *)v181 = (unsigned __int64)v82;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              v182 = 3;
              v84 = (__int64 *)operator new(0x20u);
              v85 = v84;
              *v84 = (__int64)(v84 + 2);
              if ( !v83 )
                std::__throw_logic_error("basic_string: construction from null is not valid");
              dest = v84 + 2;
              v86 = strlen(v83);
              v87 = dest;
              i.m128i_i64[0] = v86;
              v88 = v86;
              if ( v86 > 0xF )
              {
                desta = (void *)v86;
                v94 = std::string::_M_create();
                *v85 = v94;
                v87 = (void *)v94;
                v88 = (size_t)desta;
                v85[2] = i.m128i_i64[0];
              }
              else
              {
                if ( v86 == 1 )
                {
                  *((_BYTE *)v85 + 16) = *v83;
                  goto LABEL_77;
                }
                if ( !v86 )
                  goto LABEL_77;
              }
              memcpy(v87, v83, v88);
              v86 = i.m128i_i64[0];
              v87 = (void *)*v85;
LABEL_77:
              v85[1] = v86;
              *((_BYTE *)v87 + v86) = 0;
              v183 = (unsigned __int64)v85;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
                v192,
                (const __m128i *)&v180);
              v193 = 0;
              i.m128i_i8[0] = 0;
              i.m128i_i64[1] = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              if ( !v143 )
              {
                v143 = 2;
                v89 = operator new(0x18u);
                *(_QWORD *)(v89 + 16) = 0;
                v144 = (__m128i *)v89;
                *(_OWORD *)v89 = 0;
LABEL_79:
                std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
                v90 = i.m128i_i8[0];
                v91 = i.m128i_i64[1];
                goto LABEL_80;
              }
              if ( v143 != 2 )
              {
                v132 = v143;
                v134 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
                switch ( v132 )
                {
                  case 1:
                    v3 = "object";
                    break;
                  case 3:
                    v3 = "string";
                    break;
                  case 4:
                    v3 = "boolean";
                    break;
                  case 8:
                    v3 = "binary";
                    break;
                  case 9:
                    v3 = "discarded";
                    break;
                  default:
                    v3 = "number";
                    break;
                }
                v142 = (__int64)v3;
                nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
                std::string::basic_string<std::allocator<char>>(v155, "");
                std::string::basic_string<std::allocator<char>>(&v156, "type_error");
                nlohmann::json_abi_v3_12_0::detail::exception::name();
                nlohmann::json_abi_v3_12_0::detail::concat<std::string,std::string,std::string,std::string const&>();
                std::string::_M_dispose();
                std::string::_M_dispose();
                std::string::_M_dispose();
                nlohmann::json_abi_v3_12_0::detail::type_error::type_error(v134, 308, v154);
                std::string::_M_dispose();
                std::string::_M_dispose();
                __cxa_throw(
                  v134,
                  (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
                  (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
              }
              v127 = (__int64 *)v144;
              v128 = v144->m128i_i64[1];
              if ( v144[1].m128i_i64[0] == v128 )
                goto LABEL_79;
              v129 = v128 + 16;
              v90 = 0;
              *(__m128i *)(v129 - 16) = _mm_load_si128(&i);
              v127[1] = v129;
              v91 = 0;
LABEL_80:
              i.m128i_i8[0] = v90;
              v92 = v194;
              i.m128i_i64[1] = v91;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              do
              {
                v92 -= 6;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              }
              while ( v92 != v184 );
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              ++*(_QWORD *)v137;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              if ( v148 )
              {
                *(_QWORD *)&v149 = 0;
                qfree();
              }
              if ( v151 )
              {
                *(_QWORD *)&v152 = 0;
                qfree();
              }
              if ( *(_QWORD *)s )
              {
                *(_QWORD *)&s[8] = 0;
                qfree();
              }
              v7 = 0;
              ++v4;
              if ( *(_QWORD *)v137 >= *(_QWORD *)v133 )
                goto LABEL_12;
              continue;
            case 4:
              LOBYTE(m128i_i64) = (_BYTE)v146;
              goto LABEL_71;
            case 5:
            case 6:
              m128i_i64 = v146;
              goto LABEL_71;
            case 7:
              m128i_i64 = v146;
              goto LABEL_71;
            case 8:
              v95 = v146;
              v96 = operator new(0x28u);
              v97 = v95[1] - *v95;
              v98 = (__m128i *)v96;
              *(_QWORD *)(v96 + 16) = 0;
              *(_OWORD *)v96 = 0;
              if ( v97 )
                v99 = (char *)operator new(v97);
              else
                v99 = nullptr;
              v98[1].m128i_i64[0] = (__int64)&v99[v97];
              *v98 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v99, (__m128i)(unsigned __int64)v99);
              if ( (__int64)(v95[1] - *v95) > 0 )
              {
                v100 = v95[1] - *v95;
                v99 = (char *)memcpy(v99, (const void *)*v95, v100) + v100;
              }
              v101 = v95[3];
              v98->m128i_i64[1] = (__int64)v99;
              v98[1].m128i_i64[1] = v101;
              v98[2].m128i_i8[0] = *((_BYTE *)v95 + 32);
              m128i_i64 = v98->m128i_i64;
              goto LABEL_71;
            default:
              goto LABEL_71;
          }
        }
      }
      break;
    }
    memcpy(v49, v47, v52);
    v51 = i.m128i_i64[0];
    v49 = (_BYTE *)*v50;
    goto LABEL_47;
  }
LABEL_12:
  LOBYTE(v156) = 0;
  *(_QWORD *)&v157 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v156) = 3;
  v8 = operator new(0x20u);
  strcpy((char *)(v8 + 16), "success");
  *(_QWORD *)v8 = v8 + 16;
  *(_QWORD *)(v8 + 8) = 7;
  v158 = 4;
  v159 = 1;
  v160 = 0;
  v157 = (unsigned __int64)v8;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v184,
    (const __m128i *)&v156);
  v185 = 0;
  v161 = 0;
  *(_QWORD *)v162 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v161 = 3;
  v9 = operator new(0x20u);
  *(_DWORD *)(v9 + 16) = 1918989427;
  *(_QWORD *)v9 = v9 + 16;
  *(_BYTE *)(v9 + 20) = 116;
  *(_QWORD *)(v9 + 8) = 5;
  *(_BYTE *)(v9 + 21) = 0;
  v163 = 6;
  v164 = v138;
  v165 = 0;
  *(_OWORD *)v162 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v186,
    (const __m128i *)&v161);
  v187 = 0;
  v166 = 0;
  *(_QWORD *)v167 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v166 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "requested");
  *(_QWORD *)(v10 + 8) = 9;
  v168 = 6;
  v169 = *(unsigned __int64 *)v133;
  *(_OWORD *)v167 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v188,
    (const __m128i *)&v166);
  v189 = 0;
  LOBYTE(v170) = 0;
  *(_QWORD *)v171 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v170) = 3;
  v11 = operator new(0x20u);
  v12 = v143;
  *(_QWORD *)v11 = v11 + 16;
  strcpy((char *)(v11 + 16), "returned");
  *(_QWORD *)(v11 + 8) = 8;
  *(_OWORD *)v171 = (unsigned __int64)v11;
  if ( v12 == 1 )
  {
    v13 = v144[2].m128i_i64[1];
  }
  else if ( v12 == 2 )
  {
    v13 = (v144->m128i_i64[1] - v144->m128i_i64[0]) >> 4;
  }
  else
  {
    v13 = v12 != 0;
  }
  v172 = 6;
  m128i_i64 = (_QWORD *)v13;
  v174 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v190,
    (const __m128i *)&v170);
  v191 = 0;
  LOBYTE(v175) = 0;
  *(_QWORD *)v176 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v175) = 3;
  v14 = operator new(0x20u);
  strcpy((char *)(v14 + 16), "entries");
  *(_QWORD *)v14 = v14 + 16;
  *(_QWORD *)(v14 + 8) = 7;
  v178 = nullptr;
  v177 = v12;
  *(_OWORD *)v176 = (unsigned __int64)v14;
  switch ( v12 )
  {
    case 1:
      v15 = (__int64 *)v144;
      v16 = operator new(0x30u);
      *(_QWORD *)(v16 + 16) = 0;
      v17 = (int *)v15[2];
      v18 = (__m128i *)v16;
      *(_DWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 24) = v16 + 8;
      *(_QWORD *)(v16 + 32) = v16 + 8;
      *(_QWORD *)(v16 + 40) = 0;
      if ( v17 )
      {
        v19 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v17,
                v16 + 8);
        v20 = v19;
        do
        {
          v21 = v19;
          v19 = *(_QWORD *)(v19 + 16);
        }
        while ( v19 );
        v18[1].m128i_i64[1] = v21;
        v22 = v20;
        do
        {
          v23 = v22;
          v22 = *(_QWORD *)(v22 + 24);
        }
        while ( v22 );
        v24 = v15[5];
        v18[2].m128i_i64[0] = v23;
        v18[1].m128i_i64[0] = v20;
        v18[2].m128i_i64[1] = v24;
      }
      goto LABEL_22;
    case 2:
      v74 = (__int64 *)v144;
      v75 = operator new(0x18u);
      v76 = v74[1] - *v74;
      v77 = (__m128i *)v75;
      *(_QWORD *)(v75 + 16) = 0;
      *(_OWORD *)v75 = 0;
      if ( v76 )
        v78 = (char *)operator new(v76);
      else
        v78 = nullptr;
      v77[1].m128i_i64[0] = (__int64)&v78[v76];
      *v77 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v78, (__m128i)(unsigned __int64)v78);
      v79 = v74[1];
      v80 = *v74;
      v148 = v78;
      for ( *(__m128i *)s = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v78, (__m128i)(unsigned __int64)&v148);
            v79 != v80;
            v148 += 16 )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v80 += 16;
        v78 = v148 + 16;
      }
      v77->m128i_i64[1] = (__int64)v78;
      v178 = v77;
      goto LABEL_23;
    case 3:
      v61 = (_BYTE *)v144->m128i_i64[0];
      v62 = v144->m128i_u64[1];
      v63 = (__m128i *)operator new(0x20u);
      m128i_i8 = v63[1].m128i_i8;
      *(_QWORD *)s = v62;
      v18 = v63;
      v63->m128i_i64[0] = (__int64)v63[1].m128i_i64;
      if ( v62 <= 0xF )
      {
        v65 = v62 + 1;
        if ( v62 )
        {
LABEL_56:
          memcpy(m128i_i8, v61, v65);
          v66 = *(_QWORD *)s;
          goto LABEL_57;
        }
        goto LABEL_120;
      }
      v125 = std::string::_M_create();
      v18->m128i_i64[0] = v125;
      m128i_i8 = (_BYTE *)v125;
      v126 = *(_QWORD *)s;
      v18[1].m128i_i64[0] = *(_QWORD *)s;
      v65 = v126 + 1;
      if ( !v126 )
      {
LABEL_120:
        *m128i_i8 = *v61;
        v66 = *(_QWORD *)s;
        goto LABEL_57;
      }
      v66 = -1;
      if ( v65 )
        goto LABEL_56;
LABEL_57:
      v18->m128i_i64[1] = v66;
LABEL_22:
      v178 = v18;
LABEL_23:
      v179 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v192,
        (const __m128i *)&v175);
      v193 = 0;
      v180 = 0;
      *(_QWORD *)v181 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v180 = 3;
      v25 = operator new(0x20u);
      *(_QWORD *)v25 = v25 + 16;
      strcpy((char *)(v25 + 16), "note");
      *(_QWORD *)(v25 + 8) = 4;
      v182 = 0;
      *(_QWORD *)&v183 = 0;
      *(_OWORD *)v181 = (unsigned __int64)v25;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v182 = 3;
      v26 = (__int64 *)operator new(0x20u);
      *v26 = (__int64)(v26 + 2);
      *(_QWORD *)s = 22;
      v27 = std::string::_M_create();
      v28 = *(_QWORD *)s;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3E2630);
      *v26 = v27;
      v26[2] = v28;
      *(__m128i *)v27 = si128;
      v30 = (unsigned __int64)v26;
      *(_QWORD *)(v27 + 14) = 0x292B332E39204144LL;
      v31 = *(_QWORD *)s;
      v32 = *v26;
      v26[1] = *(_QWORD *)s;
      v33 = v194;
      *(_BYTE *)(v32 + v31) = 0;
      v183 = v30;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v194,
        (const __m128i *)&v180);
      v195 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      do
      {
        v33 -= 6;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v33 != (int *)&v182 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      return a1;
    case 4:
      LOBYTE(v178) = (_BYTE)v144;
      goto LABEL_23;
    case 5:
    case 6:
      v178 = v144;
      goto LABEL_23;
    case 7:
      v178 = v144;
      goto LABEL_23;
    case 8:
      v67 = (__int64 *)v144;
      v68 = operator new(0x28u);
      v69 = v67[1] - *v67;
      v70 = (__m128i *)v68;
      *(_QWORD *)(v68 + 16) = 0;
      *(_OWORD *)v68 = 0;
      if ( v69 )
        v71 = (char *)operator new(v69);
      else
        v71 = nullptr;
      v70[1].m128i_i64[0] = (__int64)&v71[v69];
      *v70 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v71, (__m128i)(unsigned __int64)v71);
      if ( v67[1] - *v67 > 0 )
      {
        v72 = v67[1] - *v67;
        v71 = (char *)memcpy(v71, (const void *)*v67, v72) + v72;
      }
      v73 = v67[3];
      v70->m128i_i64[1] = (__int64)v71;
      v70[1].m128i_i64[1] = v73;
      v70[2].m128i_i8[0] = *((_BYTE *)v67 + 32);
      v178 = v70;
      goto LABEL_23;
    default:
      goto LABEL_23;
  }
}

