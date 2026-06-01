__int64 __fastcall ida_mcp::tools::debugger::`anonymous namespace'::start_debug_process(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        char a14,
        int a15,
        int a16,
        int a17,
        char a18,
        int a19,
        int a20,
        int a21,
        char a22,
        int a23,
        int a24,
        int a25,
        char a26,
        int a27,
        int a28,
        int a29,
        char a30,
        int a31,
        int a32,
        int a33,
        int a34,
        __int64 a35)
{
  void *v36; // rdx
  void *v37; // rcx
  __int8 *v38; // rsi
  int v39; // eax
  int v40; // ebp
  __int64 v41; // rax
  unsigned __int8 *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbp
  __int64 v48; // rax
  __int64 v50; // rax
  __int64 v52; // r12
  __int64 v53; // r15
  size_t v54; // rdx
  int v55; // eax
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // r8
  size_t v58; // rdx
  int v59; // eax
  __int64 v60; // r15
  size_t v61; // rdx
  int v62; // eax
  unsigned __int64 v63; // r13
  unsigned __int64 v64; // r8
  size_t v65; // rdx
  int v66; // eax
  __int64 v67; // r13
  size_t v68; // rdx
  int v69; // eax
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // rcx
  size_t v72; // rdx
  int v73; // eax
  _BYTE *v74; // rax
  __int64 v75; // rax
  _BYTE *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  double *v81; // rcx
  _BYTE *v82; // rdi
  unsigned __int64 v83; // rdx
  double v84; // rdi
  __int64 v85; // rax
  _BYTE *v86; // rax
  double *v87; // rcx
  _BYTE *v88; // rdi
  unsigned __int64 v89; // rdx
  double v90; // rdi
  double *v91; // rcx
  __int64 v92; // rdx
  unsigned int v93; // ecx
  unsigned int v94; // edx
  __int64 v95; // rdi
  unsigned __int64 v96; // rsi
  unsigned int v97; // ecx
  unsigned int v98; // edx
  __int64 v99; // rdi
  unsigned __int64 v100; // rsi
  unsigned int v101; // ecx
  unsigned int v102; // edx
  __int64 v103; // rdi
  __int64 v104; // [rsp+0h] [rbp-128h]
  __int64 v105; // [rsp+8h] [rbp-120h]
  __int64 v106; // [rsp+8h] [rbp-120h]
  __int64 v107; // [rsp+8h] [rbp-120h]
  __int64 v108; // [rsp+10h] [rbp-118h]
  __int64 v109; // [rsp+10h] [rbp-118h]
  __int64 v110; // [rsp+10h] [rbp-118h]
  void *v111; // [rsp+18h] [rbp-110h]
  char *v112; // [rsp+28h] [rbp-100h]
  char *v113; // [rsp+28h] [rbp-100h]
  _BOOL8 v114; // [rsp+38h] [rbp-F0h]
  __int64 v115; // [rsp+38h] [rbp-F0h]
  __int8 *v116; // [rsp+40h] [rbp-E8h]
  __m128 v117; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v118[8]; // [rsp+58h] [rbp-D0h] BYREF
  void *v119; // [rsp+60h] [rbp-C8h]
  __m128 v120; // [rsp+68h] [rbp-C0h] BYREF
  void *v121; // [rsp+80h] [rbp-A8h]
  __m128 v122; // [rsp+88h] [rbp-A0h] BYREF
  void *v123; // [rsp+A0h] [rbp-88h]
  __int64 v124; // [rsp+A8h] [rbp-80h]
  double v125[15]; // [rsp+B0h] [rbp-78h] BYREF

  *(_QWORD *)&v125[7] = __readfsqword(0x28u);
  v117.m128_u64[0] = 0;
  v116 = &v117.m128_i8[8];
  v117.m128_i8[8] = 0;
  v119 = &v120.m128_u16[4];
  v120.m128_u64[0] = 0;
  v120.m128_i8[8] = 0;
  v121 = &v122.m128_u16[4];
  v122.m128_u64[0] = 0;
  v122.m128_i8[8] = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    v36 = nullptr;
    v37 = nullptr;
    v38 = nullptr;
    goto LABEL_3;
  }
  v50 = *(_QWORD *)(a2 + 8);
  v52 = *(_QWORD *)(v50 + 16);
  if ( v52 )
  {
    v53 = *(_QWORD *)(v50 + 16);
    v109 = v50 + 8;
    v106 = v50 + 8;
    do
    {
      while ( 1 )
      {
        v56 = *(_QWORD *)(v53 + 40);
        if ( !v56 )
          break;
        v54 = 4;
        if ( v56 <= 4 )
          v54 = *(_QWORD *)(v53 + 40);
        v55 = memcmp(*(const void **)(v53 + 32), "path", v54);
        if ( v55 || (v55 = v56 - 4, (__int64)(v56 - 4) <= 0x7FFFFFFF) )
        {
          if ( v55 < 0 )
            break;
        }
        v106 = v53;
        v53 = *(_QWORD *)(v53 + 16);
        if ( !v53 )
          goto LABEL_22;
      }
      v53 = *(_QWORD *)(v53 + 24);
    }
    while ( v53 );
LABEL_22:
    if ( v109 == v106 )
      goto LABEL_29;
    v57 = *(_QWORD *)(v106 + 40);
    if ( v57 )
    {
      v58 = 4;
      v112 = *(char **)(v106 + 40);
      if ( v57 <= 4 )
        v58 = *(_QWORD *)(v106 + 40);
      v59 = memcmp(*(const void **)(v106 + 32), "path", v58);
      if ( !v59 )
      {
        a5 = v112;
        v59 = (_DWORD)v112 - 4;
        if ( (__int64)(v112 - 4) > 0x7FFFFFFF )
          goto LABEL_29;
      }
      if ( v59 > 0 )
        goto LABEL_29;
    }
    v74 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    LOBYTE(v125[0]) = 0;
    v123 = v125;
    v124 = 0;
    if ( *v74 != 3 )
      JUMPOUT(0xC8B6D);
    std::string::_M_assign();
    if ( v123 != v125 )
    {
      v116 = (__int8 *)v123;
      v117 = _mm_loadh_ps(v125);
      v123 = v125;
      v91 = v125;
LABEL_69:
      *(_BYTE *)v91 = 0;
      if ( v123 != v125 )
        operator delete(v123, *(_QWORD *)&v125[0] + 1LL);
      if ( *(_BYTE *)a2 != 1 )
        goto LABEL_61;
      v75 = *(_QWORD *)(a2 + 8);
      v52 = *(_QWORD *)(v75 + 16);
      if ( !v52 )
        goto LABEL_61;
      v109 = v75 + 8;
LABEL_29:
      v60 = v52;
      v107 = v109;
      do
      {
        while ( 1 )
        {
          v63 = *(_QWORD *)(v60 + 40);
          if ( !v63 )
            break;
          v61 = 4;
          if ( v63 <= 4 )
            v61 = *(_QWORD *)(v60 + 40);
          v62 = memcmp(*(const void **)(v60 + 32), "args", v61);
          if ( v62 || (v62 = v63 - 4, (__int64)(v63 - 4) <= 0x7FFFFFFF) )
          {
            if ( v62 < 0 )
              break;
          }
          v107 = v60;
          v60 = *(_QWORD *)(v60 + 16);
          if ( !v60 )
            goto LABEL_38;
        }
        v60 = *(_QWORD *)(v60 + 24);
      }
      while ( v60 );
LABEL_38:
      if ( v109 == v107 )
        goto LABEL_45;
      v64 = *(_QWORD *)(v107 + 40);
      if ( v64 )
      {
        v65 = 4;
        v113 = *(char **)(v107 + 40);
        if ( v64 <= 4 )
          v65 = *(_QWORD *)(v107 + 40);
        v66 = memcmp(*(const void **)(v107 + 32), "args", v65);
        if ( !v66 )
        {
          a5 = v113;
          v66 = (_DWORD)v113 - 4;
          if ( (__int64)(v113 - 4) > 0x7FFFFFFF )
            goto LABEL_45;
        }
        if ( v66 > 0 )
          goto LABEL_45;
      }
      v76 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      LOBYTE(v125[0]) = 0;
      v123 = v125;
      v124 = 0;
      if ( *v76 != 3 )
        ida_mcp::tools::debugger::`anonymous namespace'::start_debug_process(
          a2,
          (__int64)"args",
          v77,
          v78,
          v79,
          v80,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a15,
          a16,
          a17,
          a18,
          a19,
          a20,
          a21,
          a22,
          a23,
          a24,
          a25,
          a26,
          a27,
          a28,
          a29,
          a30,
          a31,
          a32,
          a33,
          a34,
          a35);
      std::string::_M_assign();
      v81 = (double *)v119;
      v82 = v119;
      if ( v119 == &v120.m128_u16[4] )
      {
        if ( v123 != v125 )
        {
          v119 = v123;
          v120 = _mm_loadh_ps(v125);
LABEL_98:
          v123 = v125;
          v81 = v125;
          goto LABEL_79;
        }
        v83 = v124;
      }
      else
      {
        v83 = v124;
        if ( v123 != v125 )
        {
          v84 = *(double *)&v120.m128_u64[1];
          v119 = v123;
          v120 = _mm_loadh_ps(v125);
          if ( v81 )
          {
            v123 = v81;
            v125[0] = v84;
            goto LABEL_79;
          }
          goto LABEL_98;
        }
      }
      if ( v83 )
      {
        if ( v83 == 1 )
        {
          *(_BYTE *)v119 = LOBYTE(v125[0]);
          v83 = v124;
          v82 = v119;
          goto LABEL_115;
        }
        if ( (unsigned int)v83 >= 8 )
        {
          *(double *)v119 = v125[0];
          *(_QWORD *)&v82[(unsigned int)v83 - 8] = *(__int64 *)((char *)&v125[-1] + (unsigned int)v83);
          v96 = (unsigned __int64)(v82 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          a5 = (char *)((char *)v125 - &v82[-v96]);
          if ( (((_DWORD)v83 + (_DWORD)v82 - (_DWORD)v96) & 0xFFFFFFF8) >= 8 )
          {
            v97 = (v83 + (_DWORD)v82 - v96) & 0xFFFFFFF8;
            v98 = 0;
            do
            {
              v99 = v98;
              v98 += 8;
              a6 = *(_QWORD *)&a5[v99];
              *(_QWORD *)(v96 + v99) = a6;
            }
            while ( v98 < v97 );
          }
LABEL_114:
          v83 = v124;
          v82 = v119;
          goto LABEL_115;
        }
        if ( (v83 & 4) != 0 )
        {
          *(_DWORD *)v119 = LODWORD(v125[0]);
          *(_DWORD *)&v82[(unsigned int)v83 - 4] = *(_DWORD *)((char *)&v124 + (unsigned int)v83 + 4);
          v83 = v124;
          v82 = v119;
          goto LABEL_115;
        }
        if ( (_DWORD)v83 )
        {
          *(_BYTE *)v119 = LOBYTE(v125[0]);
          if ( (v83 & 2) != 0 )
          {
            *(_WORD *)&v82[(unsigned int)v83 - 2] = *(_WORD *)((char *)&v124 + (unsigned int)v83 + 6);
            v83 = v124;
            v82 = v119;
            goto LABEL_115;
          }
          goto LABEL_114;
        }
      }
LABEL_115:
      v120.m128_u64[0] = v83;
      v82[v83] = 0;
      v81 = (double *)v123;
LABEL_79:
      *(_BYTE *)v81 = 0;
      if ( v123 != v125 )
        operator delete(v123, *(_QWORD *)&v125[0] + 1LL);
      if ( *(_BYTE *)a2 != 1 )
        goto LABEL_61;
      v85 = *(_QWORD *)(a2 + 8);
      v52 = *(_QWORD *)(v85 + 16);
      v109 = v85 + 8;
      if ( !v52 )
        goto LABEL_61;
LABEL_45:
      v67 = v109;
      do
      {
        while ( 1 )
        {
          v70 = *(_QWORD *)(v52 + 40);
          if ( !v70 )
            break;
          v68 = 9;
          if ( v70 <= 9 )
            v68 = *(_QWORD *)(v52 + 40);
          v69 = memcmp(*(const void **)(v52 + 32), "start_dir", v68);
          if ( v69 || (v69 = v70 - 9, (__int64)(v70 - 9) <= 0x7FFFFFFF) )
          {
            if ( v69 < 0 )
              break;
          }
          v67 = v52;
          v52 = *(_QWORD *)(v52 + 16);
          if ( !v52 )
            goto LABEL_54;
        }
        v52 = *(_QWORD *)(v52 + 24);
      }
      while ( v52 );
LABEL_54:
      if ( v109 == v67 )
        goto LABEL_61;
      v71 = *(_QWORD *)(v67 + 40);
      if ( v71 )
      {
        v72 = 9;
        v110 = *(_QWORD *)(v67 + 40);
        if ( v71 <= 9 )
          v72 = *(_QWORD *)(v67 + 40);
        v73 = memcmp(*(const void **)(v67 + 32), "start_dir", v72);
        if ( !v73 )
        {
          v73 = v110 - 9;
          if ( v110 - 9 > 0x7FFFFFFF )
            goto LABEL_61;
        }
        if ( v73 > 0 )
          goto LABEL_61;
      }
      v86 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      LOBYTE(v125[0]) = 0;
      v123 = v125;
      v124 = 0;
      if ( *v86 != 3 )
        JUMPOUT(0xC8B9D);
      std::string::_M_assign();
      v87 = (double *)v121;
      v88 = v121;
      if ( v121 == &v122.m128_u16[4] )
      {
        if ( v123 != v125 )
        {
          v121 = v123;
          v122 = _mm_loadh_ps(v125);
LABEL_93:
          v123 = v125;
          v87 = v125;
          goto LABEL_89;
        }
        v89 = v124;
      }
      else
      {
        v89 = v124;
        if ( v123 != v125 )
        {
          v90 = *(double *)&v122.m128_u64[1];
          v121 = v123;
          v122 = _mm_loadh_ps(v125);
          if ( v87 )
          {
            v123 = v87;
            v125[0] = v90;
            goto LABEL_89;
          }
          goto LABEL_93;
        }
      }
      if ( v89 )
      {
        if ( v89 == 1 )
        {
          *(_BYTE *)v121 = LOBYTE(v125[0]);
          v89 = v124;
          v88 = v121;
          goto LABEL_124;
        }
        if ( (unsigned int)v89 >= 8 )
        {
          *(double *)v121 = v125[0];
          *(_QWORD *)&v88[(unsigned int)v89 - 8] = *(__int64 *)((char *)&v125[-1] + (unsigned int)v89);
          v100 = (unsigned __int64)(v88 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          a5 = (char *)((char *)v125 - &v88[-v100]);
          if ( (((_DWORD)v89 + (_DWORD)v88 - (_DWORD)v100) & 0xFFFFFFF8) >= 8 )
          {
            v101 = (v89 + (_DWORD)v88 - v100) & 0xFFFFFFF8;
            v102 = 0;
            do
            {
              v103 = v102;
              v102 += 8;
              a6 = *(_QWORD *)&a5[v103];
              *(_QWORD *)(v100 + v103) = a6;
            }
            while ( v102 < v101 );
          }
LABEL_123:
          v89 = v124;
          v88 = v121;
          goto LABEL_124;
        }
        if ( (v89 & 4) != 0 )
        {
          *(_DWORD *)v121 = LODWORD(v125[0]);
          *(_DWORD *)&v88[(unsigned int)v89 - 4] = *(_DWORD *)((char *)&v124 + (unsigned int)v89 + 4);
          v89 = v124;
          v88 = v121;
          goto LABEL_124;
        }
        if ( (_DWORD)v89 )
        {
          *(_BYTE *)v121 = LOBYTE(v125[0]);
          if ( (v89 & 2) != 0 )
          {
            *(_WORD *)&v88[(unsigned int)v89 - 2] = *(_WORD *)((char *)&v124 + (unsigned int)v89 + 6);
            v89 = v124;
            v88 = v121;
            goto LABEL_124;
          }
          goto LABEL_123;
        }
      }
LABEL_124:
      v122.m128_u64[0] = v89;
      v88[v89] = 0;
      v87 = (double *)v123;
LABEL_89:
      *(_BYTE *)v87 = 0;
      if ( v123 != v125 )
        operator delete(v123, *(_QWORD *)&v125[0] + 1LL);
      goto LABEL_61;
    }
    v92 = v124;
    if ( v124 )
    {
      if ( v124 == 1 )
      {
        v117.m128_i8[8] = LOBYTE(v125[0]);
        v92 = 1;
        goto LABEL_106;
      }
      if ( (unsigned int)v124 >= 8 )
      {
        *(double *)&v117.m128_u64[1] = v125[0];
        *(unsigned __int64 *)((char *)v117.m128_u64 + (unsigned int)v124) = *(__int64 *)((char *)&v125[-1]
                                                                                       + (unsigned int)v124);
        a5 = (char *)v125 - ((char *)&v117.m128_u16[4] - v118);
        if ( (((_DWORD)v92 + (unsigned int)&v117.m128_u32[2] - (unsigned int)v118) & 0xFFFFFFF8) >= 8 )
        {
          v93 = (v92 + (unsigned int)&v117.m128_u32[2] - (unsigned int)v118) & 0xFFFFFFF8;
          v94 = 0;
          do
          {
            v95 = v94;
            v94 += 8;
            a6 = *(_QWORD *)&a5[v95];
            *(_QWORD *)&v118[v95] = a6;
          }
          while ( v94 < v93 );
        }
LABEL_105:
        v92 = v124;
        goto LABEL_106;
      }
      if ( (v124 & 4) != 0 )
      {
        v117.m128_i32[2] = LODWORD(v125[0]);
        *(__int32 *)((char *)&v117.m128_i32[1] + (unsigned int)v124) = *(_DWORD *)((char *)&v124 + (unsigned int)v124
                                                                                                 + 4);
        v92 = v124;
        goto LABEL_106;
      }
      if ( (_DWORD)v124 )
      {
        v117.m128_i8[8] = LOBYTE(v125[0]);
        if ( (v124 & 2) != 0 )
        {
          *(__int16 *)((char *)&v117.m128_i16[3] + (unsigned int)v124) = *(_WORD *)((char *)&v124
                                                                                  + (unsigned int)v124
                                                                                  + 6);
          v92 = v124;
          goto LABEL_106;
        }
        goto LABEL_105;
      }
    }
LABEL_106:
    v117.m128_u64[0] = v92;
    v117.m128_i8[v92 + 8] = 0;
    v91 = (double *)v123;
    goto LABEL_69;
  }
LABEL_61:
  v36 = nullptr;
  v37 = nullptr;
  if ( v122.m128_u64[0] )
    v37 = v121;
  if ( v120.m128_u64[0] )
    v36 = v119;
  if ( v117.m128_u64[0] )
    v38 = v116;
  else
    v38 = nullptr;
LABEL_3:
  v39 = ((__int64 (__fastcall *)(__int64, __int8 *, void *, void *, char *, __int64))callui)(
          1005,
          v38,
          v36,
          v37,
          a5,
          a6);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v40 = v39;
  v114 = v39 != 0;
  v41 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v41 = 4;
  *(_QWORD *)(v41 + 8) = v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v40 )
  {
    v115 = (unsigned __int8)is_debugger_on();
    v42 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v43 = *v42;
    *v42 = 4;
    *((_QWORD *)v42 + 1) = v115;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v47 = (int)callui(1004, v43, v44, &callui, v45, v46, v104, v105, v108, v111);
    v48 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v48 = 5;
    *(_QWORD *)(v48 + 8) = v47;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  if ( v121 != v111 )
    operator delete(v121, v122.m128_u64[1] + 1);
  if ( v119 != &v120.m128_u16[4] )
    operator delete(v119, v120.m128_u64[1] + 1);
  if ( v116 != (__int8 *)&v117.m128_u16[4] )
    operator delete(v116, v117.m128_u64[1] + 1);
  return a1;
}

