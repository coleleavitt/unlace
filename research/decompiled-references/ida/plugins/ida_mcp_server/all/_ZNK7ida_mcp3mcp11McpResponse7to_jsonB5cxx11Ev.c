__int64 __fastcall ida_mcp::mcp::McpResponse::to_json[abi:cxx11](__int64 a1, __int64 a2)
{
  _BYTE *v4; // r15
  unsigned __int64 v5; // r13
  _QWORD *v6; // rax
  _BYTE *v7; // rdi
  __int64 *v8; // rbp
  size_t v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int8 v12; // si
  __int64 v13; // rdx
  __int64 v15; // rax
  char v16; // bp
  char v17; // bp
  char v18; // bp
  __int64 v19; // rax
  _BYTE *v20; // r14
  unsigned __int64 v21; // r13
  __m128i *v22; // rax
  _BYTE *m128i_i8; // rdi
  __m128i *v24; // rbx
  size_t v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i *v28; // rcx
  char v29; // si
  __m128i *v30; // rdx
  __int64 *v31; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  __m128i *v34; // r13
  __int64 v35; // rdi
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // rax
  __m128i *v39; // rcx
  char v40; // si
  __m128i *v41; // rdx
  __int64 *v42; // r15
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  __m128i *v45; // r13
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // rax
  __m128i *v50; // rcx
  char v51; // si
  __m128i *v52; // rdx
  __int64 v53; // r14
  __int64 v54; // rax
  int *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 v63; // rax
  int *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 *v71; // r15
  __int64 v72; // rax
  unsigned __int64 v73; // rbx
  __m128i *v74; // r13
  __int64 v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // r14
  __int64 v78; // r14
  __int64 v79; // rax
  unsigned __int64 v80; // r13
  __m128i *v81; // rbx
  char *v82; // rcx
  size_t v83; // r13
  __int64 v84; // rax
  __int64 v85; // r15
  __int64 v86; // rax
  unsigned __int64 v87; // r14
  __m128i *v88; // r13
  char *v89; // rcx
  size_t v90; // r14
  __int64 v91; // rax
  __int64 v92; // r14
  __int64 v93; // rax
  int *v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rax
  _BYTE *v102; // r15
  unsigned __int64 v103; // r14
  _QWORD *v104; // rax
  _BYTE *v105; // rdi
  __int64 *v106; // r13
  size_t v107; // rdx
  __int64 v108; // rax
  __int64 v109; // r15
  __int64 v110; // rax
  unsigned __int64 v111; // r14
  __m128i *v112; // r13
  char *v113; // rcx
  size_t v114; // r14
  __int64 v115; // rax
  __int64 v116; // rax
  _BYTE *v117; // r15
  unsigned __int64 v118; // r14
  _QWORD *v119; // rax
  _BYTE *v120; // rdi
  __int64 *v121; // r13
  size_t v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // rax
  __int64 v126; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // rax
  unsigned __int64 v129; // rax
  __int64 v130; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v131; // [rsp+18h] [rbp-B0h]
  __int64 v132; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v133; // [rsp+28h] [rbp-A0h]
  __int64 v134; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v135; // [rsp+38h] [rbp-90h]
  char v136; // [rsp+40h] [rbp-88h]
  __m128i *v137; // [rsp+48h] [rbp-80h]
  char v138; // [rsp+50h] [rbp-78h]
  __m128i *v139; // [rsp+58h] [rbp-70h]
  char v140; // [rsp+60h] [rbp-68h]
  __m128i *v141; // [rsp+68h] [rbp-60h]
  __m128i i; // [rsp+70h] [rbp-58h]
  unsigned __int64 v143; // [rsp+88h] [rbp-40h]

  v143 = __readfsqword(0x28u);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  i = 0u;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v4 = *(_BYTE **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)operator new(0x20u);
  v7 = v6 + 2;
  v8 = v6;
  *v6 = v6 + 2;
  if ( v5 > 0xF )
  {
    v15 = std::string::_M_create();
    *v8 = v15;
    v7 = (_BYTE *)v15;
    v8[2] = v5;
    v9 = v5 + 1;
    v10 = -1;
    if ( v5 != -1 )
      goto LABEL_3;
  }
  else
  {
    v9 = v5 + 1;
    if ( v5 )
    {
LABEL_3:
      memcpy(v7, v4, v9);
      v10 = v5;
      goto LABEL_4;
    }
    *v7 = *v4;
    v10 = v5;
  }
LABEL_4:
  v8[1] = v10;
  v11 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v12 = *(_BYTE *)v11;
  v13 = *(_QWORD *)(v11 + 8);
  *(_BYTE *)v11 = 3;
  *(_QWORD *)(v11 + 8) = v8;
  i.m128i_i8[0] = v12;
  i.m128i_i64[1] = v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( !*(_BYTE *)(a2 + 48) )
    goto LABEL_5;
  v137 = nullptr;
  v136 = *(_BYTE *)(a2 + 32);
  v18 = v136;
  switch ( v136 )
  {
    case 1:
      v53 = *(_QWORD *)(a2 + 40);
      v54 = operator new(0x30u);
      *(_QWORD *)(v54 + 16) = 0;
      v55 = *(int **)(v53 + 16);
      v45 = (__m128i *)v54;
      *(_DWORD *)(v54 + 8) = 0;
      *(_QWORD *)(v54 + 24) = v54 + 8;
      *(_QWORD *)(v54 + 32) = v54 + 8;
      *(_QWORD *)(v54 + 40) = 0;
      if ( v55 )
      {
        v56 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v55,
                v54 + 8);
        v57 = v56;
        do
        {
          v58 = v56;
          v56 = *(_QWORD *)(v56 + 16);
        }
        while ( v56 );
        v45[1].m128i_i64[1] = v58;
        v59 = v57;
        do
        {
          v60 = v59;
          v59 = *(_QWORD *)(v59 + 24);
        }
        while ( v59 );
        v61 = *(_QWORD *)(v53 + 40);
        v45[2].m128i_i64[0] = v60;
        v45[1].m128i_i64[0] = v57;
        v45[2].m128i_i64[1] = v61;
      }
      goto LABEL_33;
    case 2:
      v42 = *(__int64 **)(a2 + 40);
      v43 = operator new(0x18u);
      v44 = v42[1] - *v42;
      v45 = (__m128i *)v43;
      *(_QWORD *)(v43 + 16) = 0;
      *(_OWORD *)v43 = 0;
      if ( v44 )
        v46 = operator new(v44);
      else
        v46 = 0;
      v45[1].m128i_i64[0] = v46 + v44;
      *v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v46, (__m128i)(unsigned __int64)v46);
      v47 = v42[1];
      v48 = *v42;
      v130 = v46;
      for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v46, (__m128i)(unsigned __int64)&v130); v47 != v48; v130 += 16 )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v48 += 16;
        v46 = v130 + 16;
      }
      v45->m128i_i64[1] = v46;
LABEL_33:
      v137 = v45;
      goto LABEL_34;
    case 3:
      v101 = *(_QWORD *)(a2 + 40);
      v102 = *(_BYTE **)v101;
      v103 = *(_QWORD *)(v101 + 8);
      v104 = (_QWORD *)operator new(0x20u);
      v105 = v104 + 2;
      v131 = v103;
      v106 = v104;
      *v104 = v104 + 2;
      if ( v103 <= 0xF )
      {
        v107 = v103 + 1;
        if ( v103 )
        {
LABEL_77:
          memcpy(v105, v102, v107);
          v108 = v131;
          goto LABEL_78;
        }
        goto LABEL_93;
      }
      v126 = std::string::_M_create();
      *v106 = v126;
      v105 = (_BYTE *)v126;
      v127 = v131;
      v106[2] = v131;
      v107 = v127 + 1;
      if ( !v127 )
      {
LABEL_93:
        *v105 = *v102;
        v108 = v131;
        goto LABEL_78;
      }
      v108 = -1;
      if ( v107 )
        goto LABEL_77;
LABEL_78:
      v106[1] = v108;
      v137 = (__m128i *)v106;
LABEL_34:
      v49 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v50 = v137;
      v51 = *(_BYTE *)v49;
      *(_BYTE *)v49 = v18;
      v52 = *(__m128i **)(v49 + 8);
      *(_QWORD *)(v49 + 8) = v50;
      v136 = v51;
      v137 = v52;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_5:
      if ( !*(_BYTE *)(a2 + 72) )
        goto LABEL_6;
      v139 = nullptr;
      v138 = *(_BYTE *)(a2 + 56);
      v17 = v138;
      switch ( v138 )
      {
        case 1:
          v92 = *(_QWORD *)(a2 + 64);
          v93 = operator new(0x30u);
          *(_QWORD *)(v93 + 16) = 0;
          v94 = *(int **)(v92 + 16);
          v34 = (__m128i *)v93;
          *(_DWORD *)(v93 + 8) = 0;
          *(_QWORD *)(v93 + 24) = v93 + 8;
          *(_QWORD *)(v93 + 32) = v93 + 8;
          *(_QWORD *)(v93 + 40) = 0;
          if ( v94 )
          {
            v95 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                    v94,
                    v93 + 8);
            v96 = v95;
            do
            {
              v97 = v95;
              v95 = *(_QWORD *)(v95 + 16);
            }
            while ( v95 );
            v34[1].m128i_i64[1] = v97;
            v98 = v96;
            do
            {
              v99 = v98;
              v98 = *(_QWORD *)(v98 + 24);
            }
            while ( v98 );
            v100 = *(_QWORD *)(v92 + 40);
            v34[2].m128i_i64[0] = v99;
            v34[1].m128i_i64[0] = v96;
            v34[2].m128i_i64[1] = v100;
          }
          goto LABEL_26;
        case 2:
          v31 = *(__int64 **)(a2 + 64);
          v32 = operator new(0x18u);
          v33 = v31[1] - *v31;
          v34 = (__m128i *)v32;
          *(_QWORD *)(v32 + 16) = 0;
          *(_OWORD *)v32 = 0;
          if ( v33 )
            v35 = operator new(v33);
          else
            v35 = 0;
          v34[1].m128i_i64[0] = v35 + v33;
          *v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)v35);
          v36 = v31[1];
          v37 = *v31;
          v132 = v35;
          for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)&v132);
                v36 != v37;
                v132 += 16 )
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v37 += 16;
            v35 = v132 + 16;
          }
          v34->m128i_i64[1] = v35;
LABEL_26:
          v139 = v34;
          goto LABEL_27;
        case 3:
          v116 = *(_QWORD *)(a2 + 64);
          v117 = *(_BYTE **)v116;
          v118 = *(_QWORD *)(v116 + 8);
          v119 = (_QWORD *)operator new(0x20u);
          v120 = v119 + 2;
          v133 = v118;
          v121 = v119;
          *v119 = v119 + 2;
          if ( v118 <= 0xF )
          {
            v122 = v118 + 1;
            if ( v118 )
            {
LABEL_88:
              memcpy(v120, v117, v122);
              v123 = v133;
              goto LABEL_89;
            }
            goto LABEL_95;
          }
          v124 = std::string::_M_create();
          *v121 = v124;
          v120 = (_BYTE *)v124;
          v125 = v133;
          v121[2] = v133;
          v122 = v125 + 1;
          if ( !v125 )
          {
LABEL_95:
            *v120 = *v117;
            v123 = v133;
            goto LABEL_89;
          }
          v123 = -1;
          if ( v122 )
            goto LABEL_88;
LABEL_89:
          v121[1] = v123;
          v139 = (__m128i *)v121;
LABEL_27:
          v38 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v39 = v139;
          v40 = *(_BYTE *)v38;
          *(_BYTE *)v38 = v17;
          v41 = *(__m128i **)(v38 + 8);
          *(_QWORD *)(v38 + 8) = v39;
          v138 = v40;
          v139 = v41;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_6:
          if ( !*(_BYTE *)(a2 + 96) )
            return a1;
          v141 = nullptr;
          v140 = *(_BYTE *)(a2 + 80);
          v16 = v140;
          switch ( v140 )
          {
            case 1:
              v62 = *(_QWORD *)(a2 + 88);
              v63 = operator new(0x30u);
              *(_QWORD *)(v63 + 16) = 0;
              v64 = *(int **)(v62 + 16);
              v24 = (__m128i *)v63;
              *(_DWORD *)(v63 + 8) = 0;
              *(_QWORD *)(v63 + 24) = v63 + 8;
              *(_QWORD *)(v63 + 32) = v63 + 8;
              *(_QWORD *)(v63 + 40) = 0;
              if ( v64 )
              {
                v65 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                        v64,
                        v63 + 8);
                v66 = v65;
                do
                {
                  v67 = v65;
                  v65 = *(_QWORD *)(v65 + 16);
                }
                while ( v65 );
                v24[1].m128i_i64[1] = v67;
                v68 = v66;
                do
                {
                  v69 = v68;
                  v68 = *(_QWORD *)(v68 + 24);
                }
                while ( v68 );
                v70 = *(_QWORD *)(v62 + 40);
                v24[2].m128i_i64[0] = v69;
                v24[1].m128i_i64[0] = v66;
                v24[2].m128i_i64[1] = v70;
              }
              goto LABEL_19;
            case 2:
              v71 = *(__int64 **)(a2 + 88);
              v72 = operator new(0x18u);
              v73 = v71[1] - *v71;
              v74 = (__m128i *)v72;
              *(_QWORD *)(v72 + 16) = 0;
              *(_OWORD *)v72 = 0;
              if ( v73 )
                v75 = operator new(v73);
              else
                v75 = 0;
              v74[1].m128i_i64[0] = v75 + v73;
              *v74 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v75, (__m128i)(unsigned __int64)v75);
              v76 = *v71;
              v77 = v71[1];
              v134 = v75;
              for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v75, (__m128i)(unsigned __int64)&v134);
                    v77 != v76;
                    v134 += 16 )
              {
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
                v76 += 16;
                v75 = v134 + 16;
              }
              v74->m128i_i64[1] = v75;
              v141 = v74;
              goto LABEL_20;
            case 3:
              v19 = *(_QWORD *)(a2 + 88);
              v20 = *(_BYTE **)v19;
              v21 = *(_QWORD *)(v19 + 8);
              v22 = (__m128i *)operator new(0x20u);
              m128i_i8 = v22[1].m128i_i8;
              v135 = v21;
              v24 = v22;
              v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
              if ( v21 <= 0xF )
              {
                v25 = v21 + 1;
                if ( v21 )
                {
LABEL_17:
                  memcpy(m128i_i8, v20, v25);
                  v26 = v135;
                  goto LABEL_18;
                }
                goto LABEL_94;
              }
              v128 = std::string::_M_create();
              v24->m128i_i64[0] = v128;
              m128i_i8 = (_BYTE *)v128;
              v129 = v135;
              v24[1].m128i_i64[0] = v135;
              v25 = v129 + 1;
              if ( !v129 )
              {
LABEL_94:
                *m128i_i8 = *v20;
                v26 = v135;
                goto LABEL_18;
              }
              v26 = -1;
              if ( v25 )
                goto LABEL_17;
LABEL_18:
              v24->m128i_i64[1] = v26;
LABEL_19:
              v141 = v24;
LABEL_20:
              v27 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              v28 = v141;
              v29 = *(_BYTE *)v27;
              *(_BYTE *)v27 = v16;
              v30 = *(__m128i **)(v27 + 8);
              *(_QWORD *)(v27 + 8) = v28;
              v140 = v29;
              v141 = v30;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              return a1;
            case 4:
              LOBYTE(v141) = *(_BYTE *)(a2 + 88);
              goto LABEL_20;
            case 5:
            case 6:
              v141 = *(__m128i **)(a2 + 88);
              goto LABEL_20;
            case 7:
              v141 = *(__m128i **)(a2 + 88);
              goto LABEL_20;
            case 8:
              v78 = *(_QWORD *)(a2 + 88);
              v79 = operator new(0x28u);
              v80 = *(_QWORD *)(v78 + 8) - *(_QWORD *)v78;
              v81 = (__m128i *)v79;
              *(_QWORD *)(v79 + 16) = 0;
              *(_OWORD *)v79 = 0;
              if ( v80 )
                v82 = (char *)operator new(v80);
              else
                v82 = nullptr;
              v81[1].m128i_i64[0] = (__int64)&v82[v80];
              *v81 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v82, (__m128i)(unsigned __int64)v82);
              if ( (__int64)(*(_QWORD *)(v78 + 8) - *(_QWORD *)v78) > 0 )
              {
                v83 = *(_QWORD *)(v78 + 8) - *(_QWORD *)v78;
                v82 = (char *)memcpy(v82, *(const void **)v78, v83) + v83;
              }
              v84 = *(_QWORD *)(v78 + 24);
              v81->m128i_i64[1] = (__int64)v82;
              v81[1].m128i_i64[1] = v84;
              v81[2].m128i_i8[0] = *(_BYTE *)(v78 + 32);
              v141 = v81;
              goto LABEL_20;
            default:
              goto LABEL_20;
          }
        case 4:
          LOBYTE(v139) = *(_BYTE *)(a2 + 64);
          goto LABEL_27;
        case 5:
        case 6:
          v139 = *(__m128i **)(a2 + 64);
          goto LABEL_27;
        case 7:
          v139 = *(__m128i **)(a2 + 64);
          goto LABEL_27;
        case 8:
          v85 = *(_QWORD *)(a2 + 64);
          v86 = operator new(0x28u);
          v87 = *(_QWORD *)(v85 + 8) - *(_QWORD *)v85;
          v88 = (__m128i *)v86;
          *(_QWORD *)(v86 + 16) = 0;
          *(_OWORD *)v86 = 0;
          if ( v87 )
            v89 = (char *)operator new(v87);
          else
            v89 = nullptr;
          v88[1].m128i_i64[0] = (__int64)&v89[v87];
          *v88 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v89, (__m128i)(unsigned __int64)v89);
          if ( (__int64)(*(_QWORD *)(v85 + 8) - *(_QWORD *)v85) > 0 )
          {
            v90 = *(_QWORD *)(v85 + 8) - *(_QWORD *)v85;
            v89 = (char *)memcpy(v89, *(const void **)v85, v90) + v90;
          }
          v91 = *(_QWORD *)(v85 + 24);
          v88->m128i_i64[1] = (__int64)v89;
          v88[1].m128i_i64[1] = v91;
          v88[2].m128i_i8[0] = *(_BYTE *)(v85 + 32);
          v139 = v88;
          goto LABEL_27;
        default:
          goto LABEL_27;
      }
    case 4:
      LOBYTE(v137) = *(_BYTE *)(a2 + 40);
      goto LABEL_34;
    case 5:
    case 6:
      v137 = *(__m128i **)(a2 + 40);
      goto LABEL_34;
    case 7:
      v137 = *(__m128i **)(a2 + 40);
      goto LABEL_34;
    case 8:
      v109 = *(_QWORD *)(a2 + 40);
      v110 = operator new(0x28u);
      v111 = *(_QWORD *)(v109 + 8) - *(_QWORD *)v109;
      v112 = (__m128i *)v110;
      *(_QWORD *)(v110 + 16) = 0;
      *(_OWORD *)v110 = 0;
      if ( v111 )
        v113 = (char *)operator new(v111);
      else
        v113 = nullptr;
      v112[1].m128i_i64[0] = (__int64)&v113[v111];
      *v112 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v113, (__m128i)(unsigned __int64)v113);
      if ( (__int64)(*(_QWORD *)(v109 + 8) - *(_QWORD *)v109) > 0 )
      {
        v114 = *(_QWORD *)(v109 + 8) - *(_QWORD *)v109;
        v113 = (char *)memcpy(v113, *(const void **)v109, v114) + v114;
      }
      v115 = *(_QWORD *)(v109 + 24);
      v112->m128i_i64[1] = (__int64)v113;
      v112[1].m128i_i64[1] = v115;
      v112[2].m128i_i8[0] = *(_BYTE *)(v109 + 32);
      v137 = v112;
      goto LABEL_34;
    default:
      goto LABEL_34;
  }
}

