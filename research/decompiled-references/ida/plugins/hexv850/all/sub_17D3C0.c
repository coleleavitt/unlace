__int64 __fastcall sub_17D3C0(
        __int64 *a1,
        __int64 (__fastcall *a2)(__int64 a1),
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // rdi
  _QWORD *exception; // rdi
  __int64 *v8; // rdi
  int *v9; // rdx
  int v10; // eax
  int v11; // esi
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int64 (__fastcall *v14)(__int64); // rdx
  int v15; // eax
  unsigned __int64 v16; // r14
  __int64 (__fastcall *v17)(__int64); // rdx
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 *v22; // rbx
  __int64 v23; // r15
  unsigned __int64 *v24; // r13
  bool v25; // zf
  char v26; // al
  int v27; // edx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 *v30; // rdx
  __int64 v31; // r12
  unsigned int *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 *v40; // r12
  unsigned __int64 *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  int v45; // r8d
  int v46; // eax
  __int8 v47; // cl
  bool v48; // cc
  unsigned __int64 v49; // rdx
  char v50; // dl
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  __int64 *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // r9d
  __m128i *v58; // rax
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  unsigned __int64 *v61; // rdx
  unsigned __int64 *v62; // rax
  unsigned __int64 *v63; // rax
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  __m128i v67; // xmm1
  char v68; // di
  bool v69; // cc
  unsigned __int64 v70; // rcx
  char v71; // dl
  unsigned __int64 *v72; // rsi
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  __m128i v77; // xmm1
  unsigned __int64 v78; // r13
  _QWORD *v79; // r12
  __int64 v80; // r15
  _BYTE *v81; // rdi
  _BYTE *v82; // rdi
  __int64 v83; // r15
  _BYTE *v84; // rdi
  _BYTE *v85; // rdi
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rdx
  _QWORD *v89; // r13
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rdx
  char v94; // [rsp+Fh] [rbp-221h]
  __m128i v95; // [rsp+20h] [rbp-210h] BYREF
  __int64 *v96; // [rsp+30h] [rbp-200h]
  __int64 *v97; // [rsp+38h] [rbp-1F8h]
  int ***v98; // [rsp+40h] [rbp-1F0h]
  __int64 v99; // [rsp+48h] [rbp-1E8h]
  __m128i *v100; // [rsp+50h] [rbp-1E0h]
  unsigned __int64 **v101; // [rsp+58h] [rbp-1D8h]
  int i; // [rsp+60h] [rbp-1D0h]
  int v103; // [rsp+64h] [rbp-1CCh]
  int **v104; // [rsp+68h] [rbp-1C8h]
  unsigned __int64 *v105; // [rsp+70h] [rbp-1C0h]
  _QWORD *v106; // [rsp+78h] [rbp-1B8h]
  _QWORD *v107; // [rsp+80h] [rbp-1B0h]
  unsigned int *v108; // [rsp+88h] [rbp-1A8h]
  __int64 v109; // [rsp+90h] [rbp-1A0h]
  __int64 v110; // [rsp+98h] [rbp-198h]
  int v111; // [rsp+A0h] [rbp-190h]
  int v112; // [rsp+A4h] [rbp-18Ch]
  __int64 *v113; // [rsp+A8h] [rbp-188h]
  char v114; // [rsp+B3h] [rbp-17Dh] BYREF
  int v115; // [rsp+B4h] [rbp-17Ch] BYREF
  int **v116; // [rsp+B8h] [rbp-178h] BYREF
  __m128i v117; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v118[2]; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v119; // [rsp+E0h] [rbp-150h] BYREF
  __int128 v120; // [rsp+E8h] [rbp-148h]
  __int64 v121[2]; // [rsp+100h] [rbp-130h] BYREF
  void *v122; // [rsp+110h] [rbp-120h] BYREF
  __int128 v123; // [rsp+118h] [rbp-118h]
  __int64 v124; // [rsp+130h] [rbp-100h] BYREF
  __m128i *v125; // [rsp+140h] [rbp-F0h] BYREF
  __m128i v126; // [rsp+148h] [rbp-E8h]
  _QWORD v127[2]; // [rsp+160h] [rbp-D0h] BYREF
  __int64 v128; // [rsp+170h] [rbp-C0h] BYREF
  __int128 v129; // [rsp+178h] [rbp-B8h]
  _DWORD *v130[2]; // [rsp+190h] [rbp-A0h] BYREF
  __m128i *v131; // [rsp+1A0h] [rbp-90h] BYREF
  __m128i v132; // [rsp+1A8h] [rbp-88h] BYREF
  __int64 (__fastcall **v133)(); // [rsp+1C0h] [rbp-70h] BYREF
  __int128 v134; // [rsp+1C8h] [rbp-68h]
  __int64 v135; // [rsp+1D8h] [rbp-58h]
  __int128 v136; // [rsp+1E0h] [rbp-50h]
  unsigned __int64 v137; // [rsp+1F8h] [rbp-38h]

  v113 = a1;
  v94 = (char)a2;
  v137 = __readfsqword(0x28u);
  for ( i = 0; ; i = 0 )
  {
    while ( 1 )
    {
      v8 = (__int64 *)v113[5];
      if ( v94 )
      {
        if ( (unsigned int)sub_13F570(v8, nullptr, 0, a4, a5, a6) )
        {
          if ( !under_debugger )
            sub_37CFE0(50551);
          goto LABEL_209;
        }
      }
      else
      {
        sub_134FD0((__int64)v8, (__int64)a2, a3, a4, a5, a6);
      }
      v9 = (int *)v113[5];
      v10 = *v9;
      v111 = *v9 & 0x1000;
      if ( v111 )
      {
        v111 = 0;
        if ( (v10 & 0x2000) == 0 )
        {
          BYTE1(v10) |= 0x20u;
          *v9 = v10;
          v134 = 0u;
          v75 = v113[5];
          v135 = 0;
          *(_QWORD *)&v136 = 0;
          v133 = off_4B1A20;
          v111 = sub_11AE20(v75, (__int64 *)&v133) != 0;
        }
      }
      v109 = sub_10B780((__int64)v113, v111);
      if ( !v109 )
      {
        if ( !under_debugger )
          sub_37CFE0(50446);
        goto LABEL_209;
      }
      v11 = v111;
      v12 = v113;
      ++*(_DWORD *)(v109 + 24);
      v106 = (_QWORD *)sub_10BD20((__int64)v12, v11);
      if ( !v106 )
      {
        if ( !under_debugger )
          sub_37CFE0(50446);
        goto LABEL_209;
      }
      v13 = v113;
      ++*((_DWORD *)v106 + 6);
      nullsub_39();
      a2 = (__int64 (__fastcall *)(__int64))&v133;
      v114 = 0;
      v133 = nullptr;
      v135 = 0;
      v134 = 0;
      v136 = 0;
      sub_69160(v13, (__int64 *)&v133);
      v14 = *(__int64 (__fastcall **)(__int64))(*v13 + 64);
      v15 = v14 == sub_12F620 ? (*(__int64 (__fastcall **)(__int64 *))(*v13 + 56))(v13) : v14((__int64)v113);
      if ( v15 <= 0 )
        break;
      v16 = 0;
      v99 = v15;
      while ( 2 )
      {
        while ( 1 )
        {
          if ( v16 < (unsigned __int64)v134 )
          {
            v112 = *((_DWORD *)v133 + v16);
            if ( v112 != -1 )
            {
              a2 = sub_12F650;
              v17 = *(__int64 (__fastcall **)(__int64))(*v113 + 88);
              v18 = v17 == sub_12F650 ? (*(__int64 (**)(void))(*v113 + 56))() - 1 : v17((__int64)v113);
              if ( v112 != v18 )
              {
                v19 = v112;
                v110 = *(_QWORD *)(*(_QWORD *)(v113[5] + 528) + 8LL * v112);
                v20 = v110;
                v108 = (unsigned int *)(v110 + 120);
                if ( !(unsigned __int8)sub_5FE00((_QWORD *)(v110 + 120)) || *(_QWORD *)(v20 + 144) )
                  break;
              }
            }
          }
LABEL_14:
          if ( v99 == ++v16 )
            goto LABEL_141;
        }
        if ( !*(_QWORD *)(v110 + 48) )
        {
          if ( i <= 0 )
          {
            if ( !under_debugger )
              sub_37CFE0(50552);
            goto LABEL_209;
          }
          goto LABEL_14;
        }
        v21 = *(_QWORD *)v109 + 24 * v19;
        v22 = *(unsigned __int64 **)v21;
        v101 = (unsigned __int64 **)v21;
        if ( v22 )
        {
          v23 = *(_QWORD *)(v21 + 8);
          if ( v23 )
          {
            v24 = (unsigned __int64 *)v22[1];
            v23 = 0;
            v25 = v22 == v24;
            v22 = nullptr;
            if ( !v25 )
            {
              v107 = v127;
              while ( 1 )
              {
                v26 = sub_16FE90(v113[5], (__int64)(v24 + 3), v110);
                if ( v26 )
                  break;
LABEL_32:
                if ( (*v24 & 2) == 0 )
                {
                  v30 = (unsigned __int64 *)v24[2];
                  if ( (*(_BYTE *)v30 & 2) != 0 )
                  {
                    v63 = (unsigned __int64 *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
                    v64 = *v63;
                    if ( (*v63 & 2) == 0 )
                    {
                      while ( (unsigned __int64 *)v63[2] == v24 )
                      {
                        v24 = v63;
                        v65 = v64 & 0xFFFFFFFFFFFFFFFCLL;
                        v64 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v64 & 2) != 0 )
                        {
                          v24 = (unsigned __int64 *)v65;
                          goto LABEL_35;
                        }
                        v63 = (unsigned __int64 *)v65;
                      }
                    }
                    v24 = v63;
                  }
                  else
                  {
                    do
                    {
                      v24 = v30;
                      v30 = (unsigned __int64 *)v30[1];
                    }
                    while ( (*(_BYTE *)v30 & 2) == 0 );
                  }
                }
LABEL_35:
                if ( *v101 == v24 )
                  goto LABEL_36;
              }
              v27 = *(_DWORD *)v24[3];
              v130[0] = v107;
              LODWORD(v127[0]) = v27;
              if ( v22 )
              {
                if ( v23 )
                {
                  v29 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (*(_BYTE *)v29 & 2) != 0 )
                  {
                    v29 = (unsigned __int64)v22;
                    v71 = 1;
                  }
                  else
                  {
                    v68 = v26;
                    v69 = v27 <= *(_DWORD *)(v29 + 24);
                    if ( v27 >= *(_DWORD *)(v29 + 24) )
                      goto LABEL_121;
LABEL_119:
                    v70 = *(_QWORD *)(v29 + 8);
                    v68 = v26;
                    if ( (*(_BYTE *)v70 & 2) == 0 )
                    {
                      while ( 1 )
                      {
                        v29 = v70;
                        v69 = v27 <= *(_DWORD *)(v70 + 24);
                        if ( v27 < *(_DWORD *)(v70 + 24) )
                          goto LABEL_119;
LABEL_121:
                        if ( v69 )
                          break;
                        v70 = *(_QWORD *)(v29 + 16);
                        v68 = 0;
                        if ( (*(_BYTE *)v70 & 2) != 0 )
                          goto LABEL_123;
                      }
                      if ( v29 )
                      {
LABEL_31:
                        sub_FF1A0((__int64)(v24 + 3), v113[5], v29 + 32);
                        goto LABEL_32;
                      }
                    }
LABEL_123:
                    v71 = v68;
                  }
                  v117.m128i_i64[0] = (__int64)v22;
                  v117.m128i_i64[1] = v23;
                  v100 = &v117;
                  v74 = sub_144430(&v117, (unsigned __int64 *)v29, v71, v130);
                  v23 = v117.m128i_i64[1];
                  v22 = (unsigned __int64 *)v117.m128i_i64[0];
                  v29 = v74;
                  goto LABEL_31;
                }
              }
              else
              {
                v76 = qalloc();
                v22 = (unsigned __int64 *)v76;
                v77 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v76, (__m128i)(unsigned __int64)v76);
                if ( !v76 )
                {
                  exception = __cxa_allocate_exception(8u);
                  *exception = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                *(_QWORD *)(v76 + 64) = 0;
                *(_OWORD *)(v76 + 16) = 0;
                *(_OWORD *)(v76 + 32) = 0;
                *(_OWORD *)(v76 + 48) = 0;
                *(__m128i *)(v76 + 8) = v77;
                *(_QWORD *)v76 = v76 & 0xFFFFFFFFFFFFFFFCLL | 2;
              }
              v117.m128i_i64[0] = (__int64)v22;
              v117.m128i_i64[1] = v23;
              v100 = &v117;
              v28 = sub_144430(&v117, v22, 1, v130);
              v23 = v117.m128i_i64[1];
              v22 = (unsigned __int64 *)v117.m128i_i64[0];
              v29 = v28;
              goto LABEL_31;
            }
          }
          else
          {
            v22 = nullptr;
          }
        }
        else
        {
          v23 = 0;
        }
LABEL_36:
        v118[0] = 0;
        v96 = v121;
        v118[1] = 0;
        v119 = 0;
        v120 = 0;
        sub_5F580(v121, (__int64)v108);
        v122 = nullptr;
        v123 = 0;
        v31 = *(_QWORD *)(v110 + 144);
        if ( v31 )
        {
          v122 = (void *)qalloc_or_throw();
          *((_QWORD *)&v123 + 1) = v31;
          memcpy(v122, *(const void **)(v110 + 136), 16 * v31);
          *(_QWORD *)&v123 = v31;
        }
        v103 = 0;
        v97 = &v124;
        v32 = *(unsigned int **)(v110 + 48);
        v98 = &v116;
        v108 = v32;
        if ( !v32 )
          goto LABEL_45;
        while ( (!(unsigned __int8)sub_5FE00(v96) || (_QWORD)v123) && !v114 )
        {
          sub_11FAC0((__int64)v97, v110, (__int64)v108, 0);
          v40 = v97;
          sub_5FC80(v97, v96);
          sub_312800(&v125, &v122);
          if ( (unsigned __int8)sub_5FE00(v40) && !v126.m128i_i64[0] )
          {
            v104 = v130;
            goto LABEL_85;
          }
          v41 = *v101;
          if ( !*v101 )
            goto LABEL_84;
          if ( !v101[1] )
            goto LABEL_84;
          v105 = (unsigned __int64 *)v41[1];
          if ( v41 == v105 )
            goto LABEL_84;
          while ( 2 )
          {
            v42 = v113[5];
            v104 = (int **)(v105 + 3);
            v95.m128i_i8[0] = sub_16FE90(v42, (__int64)(v105 + 3), v110);
            if ( !v95.m128i_i8[0] )
              goto LABEL_100;
            v127[0] = 0;
            v43 = v113[5];
            v107 = v127;
            v127[1] = 0;
            v128 = 0;
            v129 = 0;
            sub_FF1A0((__int64)v104, v43, (__int64)v127);
            if ( !(unsigned __int8)sub_5FD00(v97, v107) && !(unsigned __int8)sub_312BB0(&v125, &v128) )
            {
              if ( v128 )
              {
                *(_QWORD *)&v129 = 0;
                qfree();
              }
              goto LABEL_99;
            }
            v115 = **v104;
            v104 = (int **)&v115;
            while ( 2 )
            {
              v116 = v104;
              if ( !v22 )
              {
                v66 = qalloc();
                v22 = (unsigned __int64 *)v66;
                v67 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v66, (__m128i)(unsigned __int64)v66);
                if ( !v66 )
                {
                  v6 = __cxa_allocate_exception(8u);
                  *v6 = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    v6,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                *(_QWORD *)(v66 + 64) = 0;
                *(_OWORD *)(v66 + 16) = 0;
                *(_OWORD *)(v66 + 32) = 0;
                *(_OWORD *)(v66 + 48) = 0;
                *(__m128i *)(v66 + 8) = v67;
                *(_QWORD *)v66 = v66 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_68:
                v117.m128i_i64[0] = (__int64)v22;
                v117.m128i_i64[1] = v23;
                v100 = &v117;
                v44 = sub_144430(&v117, v22, 1, (_DWORD **)v98);
LABEL_69:
                v23 = v117.m128i_i64[1];
                v22 = (unsigned __int64 *)v117.m128i_i64[0];
                v45 = v115;
                goto LABEL_70;
              }
              if ( !v23 )
                goto LABEL_68;
              v44 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (*(_BYTE *)v44 & 2) != 0 )
              {
                v44 = (unsigned __int64)v22;
                v50 = 1;
LABEL_105:
                v117.m128i_i64[0] = (__int64)v22;
                v117.m128i_i64[1] = v23;
                v100 = &v117;
                v44 = sub_144430(&v117, (unsigned __int64 *)v44, v50, (_DWORD **)&v116);
                goto LABEL_69;
              }
              v45 = v115;
              v47 = v95.m128i_i8[0];
              v48 = v115 <= *(_DWORD *)(v44 + 24);
              if ( v115 < *(_DWORD *)(v44 + 24) )
                goto LABEL_76;
              while ( !v48 )
              {
                v49 = *(_QWORD *)(v44 + 16);
                v47 = 0;
                if ( (*(_BYTE *)v49 & 2) != 0 )
                  goto LABEL_80;
                while ( 1 )
                {
                  v44 = v49;
                  v48 = v115 <= *(_DWORD *)(v49 + 24);
                  if ( v115 >= *(_DWORD *)(v49 + 24) )
                    break;
LABEL_76:
                  v49 = *(_QWORD *)(v44 + 8);
                  v47 = v95.m128i_i8[0];
                  if ( (*(_BYTE *)v49 & 2) != 0 )
                    goto LABEL_80;
                }
              }
              if ( !v44 )
              {
LABEL_80:
                v50 = v47;
                goto LABEL_105;
              }
LABEL_70:
              v46 = sub_17BCF0(v113, (size_t)v107, v112, v108, v45, v106, v109, v44 + 32, v118, v111, &v114);
              if ( v46 == -2 )
              {
                ++v103;
                continue;
              }
              break;
            }
            v103 += v46;
            if ( v46 <= 0 )
              goto LABEL_97;
            v104 = v130;
            sub_11FAC0((__int64)v130, v110, (__int64)v108, 0);
            sub_5FE50(v97, (__int64 *)v104);
            v58 = v131;
            v131 = nullptr;
            v59 = _mm_loadu_si128(&v132);
            v132 = 0;
            if ( v125 )
            {
              v100 = v58;
              v95 = v59;
              v126.m128i_i64[0] = 0;
              qfree();
              v60 = _mm_load_si128(&v95);
              v125 = v100;
              v126 = v60;
              if ( v131 )
              {
                v132.m128i_i64[0] = 0;
                qfree();
              }
            }
            else
            {
              v125 = v58;
              v126 = v59;
            }
            qfree();
            sub_5FC80(v97, v96);
            sub_312800(&v125, &v122);
            if ( !(unsigned __int8)sub_5FE00(v97) || v126.m128i_i64[0] )
            {
LABEL_97:
              if ( v128 )
              {
                *(_QWORD *)&v129 = 0;
                qfree();
              }
LABEL_99:
              qfree();
LABEL_100:
              if ( (*v105 & 2) == 0 )
              {
                v61 = (unsigned __int64 *)v105[2];
                if ( (*(_BYTE *)v61 & 2) != 0 )
                {
                  v51 = (unsigned __int64 *)(*v105 & 0xFFFFFFFFFFFFFFFCLL);
                  v52 = *v51;
                  if ( (*v51 & 2) == 0 )
                  {
                    v72 = v105;
                    while ( (unsigned __int64 *)v51[2] == v72 )
                    {
                      v72 = v51;
                      v73 = v52 & 0xFFFFFFFFFFFFFFFCLL;
                      v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v52 & 2) != 0 )
                      {
                        v105 = (unsigned __int64 *)v73;
                        goto LABEL_83;
                      }
                      v51 = (unsigned __int64 *)v73;
                    }
                  }
                  v105 = v51;
                }
                else
                {
                  do
                  {
                    v62 = v61;
                    v61 = (unsigned __int64 *)v61[1];
                  }
                  while ( (*(_BYTE *)v61 & 2) == 0 );
                  v105 = v62;
                }
              }
LABEL_83:
              if ( *v101 == v105 )
              {
LABEL_84:
                v104 = v130;
                goto LABEL_85;
              }
              continue;
            }
            break;
          }
          if ( v128 )
          {
            *(_QWORD *)&v129 = 0;
            qfree();
          }
          qfree();
LABEL_85:
          v53 = (__int64 *)v104;
          sub_122E60((__int64)v104, v110, (__int64)v108, 1);
          v104 = (int **)v53;
          sub_5FBC0(v96, v53, v54, v55, v56, v57);
          sub_3123A0(&v122, &v131);
          sub_5F800(v118, (__int64 *)v104);
          sub_3113F0(&v119, &v131);
          if ( v131 )
          {
            v132.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          if ( v125 )
          {
            v126.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          v108 = *((unsigned int **)v108 + 1);
          if ( v108 )
            continue;
          break;
        }
        if ( v103 )
        {
          v36 = v110;
          v37 = *(_DWORD *)(v110 + 24);
          v112 = v37;
          BYTE1(v37) &= ~2u;
          LOBYTE(v37) = v37 | 0x80;
          *(_DWORD *)(v110 + 24) = v37;
          v38 = v113[5];
          if ( (*(_BYTE *)(v38 + 1) & 8) != 0 && *(char *)(*(_QWORD *)(v36 + 48) + 4LL) >= 0 && *(int *)(v36 + 352) > 0 )
          {
            v86 = 0;
            while ( 1 )
            {
              v87 = *(unsigned int *)(*(_QWORD *)(v110 + 344) + 4 * v86);
              if ( (unsigned int)v87 >= *(_DWORD *)(v38 + 64) )
                break;
              v88 = *(_QWORD *)(v38 + 528);
              v89 = *(_QWORD **)(v88 + 8 * v87);
              v90 = v89[7];
              v91 = sub_1366A0(v89, v90, v88, v33, v34, v35);
              if ( v110 == v91 )
                sub_136B20(v89, v90, v92, v33, v34, v35);
              if ( *(_DWORD *)(v110 + 352) <= (int)++v86 )
                goto LABEL_44;
              v38 = v113[5];
            }
            if ( !under_debugger )
              sub_37CFE0(52719);
LABEL_209:
            BUG();
          }
LABEL_44:
          sub_9D960(v110, (__int64)"global propagate result");
        }
LABEL_45:
        a2 = (__int64 (__fastcall *)(__int64))v109;
        v39 = sub_18FEC0(v110, v109, v106);
        i += v103 + v39;
        if ( v122 )
        {
          *(_QWORD *)&v123 = 0;
          qfree();
        }
        qfree();
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree();
        }
        qfree();
        if ( v22 )
        {
          if ( v23 )
          {
            v78 = *v22;
            v79 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (*(_BYTE *)v79 & 2) == 0 )
            {
              v80 = v79[1];
              if ( (*(_BYTE *)v80 & 2) != 0 )
              {
                v83 = v79[2];
                if ( (*(_BYTE *)v83 & 2) == 0 )
                  goto LABEL_165;
LABEL_183:
                if ( v79[6] )
                {
                  v79[7] = 0;
                  qfree();
                }
                qfree();
                *v79 |= 2uLL;
                goto LABEL_172;
              }
              v81 = *(_BYTE **)(v80 + 8);
              if ( (*v81 & 2) != 0 )
              {
                v82 = *(_BYTE **)(v80 + 16);
                if ( (*v82 & 2) == 0 )
                {
LABEL_160:
                  sub_16F440((__int64)v82);
                  goto LABEL_161;
                }
LABEL_192:
                if ( *(_QWORD *)(v80 + 48) )
                {
                  *(_QWORD *)(v80 + 56) = 0;
                  qfree();
                }
                qfree();
                *(_QWORD *)v80 |= 2uLL;
                goto LABEL_162;
              }
              sub_16F440((__int64)v81);
              v82 = *(_BYTE **)(v80 + 16);
              if ( (*v82 & 2) == 0 )
                goto LABEL_160;
LABEL_161:
              if ( (*(_BYTE *)v80 & 2) == 0 )
                goto LABEL_192;
LABEL_162:
              if ( v80 )
                qfree();
              v83 = v79[2];
              if ( (*(_BYTE *)v83 & 2) == 0 )
              {
LABEL_165:
                v84 = *(_BYTE **)(v83 + 8);
                if ( (*v84 & 2) != 0 )
                {
                  v85 = *(_BYTE **)(v83 + 16);
                  if ( (*v85 & 2) == 0 )
                  {
LABEL_167:
                    sub_16F440((__int64)v85);
                    goto LABEL_168;
                  }
LABEL_196:
                  if ( *(_QWORD *)(v83 + 48) )
                  {
                    *(_QWORD *)(v83 + 56) = 0;
                    qfree();
                  }
                  qfree();
                  *(_QWORD *)v83 |= 2uLL;
                  goto LABEL_169;
                }
                sub_16F440((__int64)v84);
                v85 = *(_BYTE **)(v83 + 16);
                if ( (*v85 & 2) == 0 )
                  goto LABEL_167;
LABEL_168:
                if ( (*(_BYTE *)v83 & 2) == 0 )
                  goto LABEL_196;
LABEL_169:
                if ( v83 )
                  qfree();
              }
              if ( (*(_BYTE *)v79 & 2) == 0 )
                goto LABEL_183;
LABEL_172:
              if ( v78 > 3 )
                qfree();
            }
          }
          qfree();
        }
        if ( v99 != ++v16 )
        {
          if ( v114 )
            goto LABEL_54;
          continue;
        }
        break;
      }
      if ( !v114 )
        break;
LABEL_54:
      if ( v135 )
      {
        *(_QWORD *)&v136 = 0;
        qfree();
      }
      if ( v133 )
      {
        *(_QWORD *)&v134 = 0;
        qfree();
      }
      sub_100250((__int64)v106);
      sub_100250(v109);
    }
LABEL_141:
    if ( i || !(_BYTE)v111 )
      break;
    if ( v135 )
    {
      *(_QWORD *)&v136 = 0;
      qfree();
    }
    if ( v133 )
    {
      *(_QWORD *)&v134 = 0;
      qfree();
    }
    sub_100250((__int64)v106);
    sub_100250(v109);
  }
  if ( v135 )
  {
    *(_QWORD *)&v136 = 0;
    qfree();
  }
  if ( v133 )
  {
    *(_QWORD *)&v134 = 0;
    qfree();
  }
  sub_100250((__int64)v106);
  sub_100250(v109);
  return (unsigned int)i;
}

