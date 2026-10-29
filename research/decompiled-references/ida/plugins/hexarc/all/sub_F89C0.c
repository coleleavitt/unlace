unsigned __int64 __fastcall sub_F89C0(_QWORD *a1)
{
  int tinfo_property; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // eax
  int *v8; // rdx
  _DWORD *v9; // rcx
  bool v10; // zf
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbp
  int v22; // eax
  int v23; // edx
  __int64 v24; // r15
  __int64 v25; // rbx
  __m128i v26; // xmm4
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // r12
  __m128i v31; // xmm7
  __int64 v32; // r13
  unsigned __int64 v33; // r12
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 k; // r12
  __int64 v37; // rax
  __m128i v38; // xmm7
  unsigned __int64 v39; // r12
  void *v40; // r13
  __m128i v41; // xmm0
  unsigned __int64 v42; // r12
  void *v43; // r13
  __m128i v44; // xmm0
  unsigned __int64 v45; // r12
  void *v46; // r13
  __m128i v47; // xmm0
  void *v48; // r13
  unsigned __int64 v49; // r12
  __m128i v50; // xmm0
  unsigned __int64 v51; // r12
  void *v52; // r13
  __m128i v53; // xmm0
  __int64 v54; // r14
  __m128i v55; // xmm6
  __int64 v56; // rdi
  __int64 v57; // r15
  __int64 m; // r13
  _QWORD *v59; // r12
  __m128i v60; // xmm7
  __int64 v61; // r12
  __int64 v62; // r13
  __int64 v63; // r15
  void *v64; // rax
  size_t v65; // rdx
  void *v66; // rax
  size_t v67; // rdx
  __int64 j; // r14
  __int64 v69; // r12
  __int64 v70; // r13
  __int64 v71; // r14
  __int64 v72; // rax
  void *v73; // rax
  size_t v74; // rdx
  int v75; // eax
  int v76; // r8d
  __int64 v77; // rdx
  int i; // ecx
  __int64 v79; // r8
  int v80; // r9d
  __int64 v81; // r8
  int v82; // r9d
  __m128i v83; // [rsp+0h] [rbp-138h] BYREF
  __int64 v84; // [rsp+10h] [rbp-128h]
  int v85; // [rsp+1Ch] [rbp-11Ch]
  size_t n; // [rsp+20h] [rbp-118h]
  __int64 v87; // [rsp+28h] [rbp-110h]
  _QWORD *v88; // [rsp+30h] [rbp-108h]
  __int64 v89; // [rsp+38h] [rbp-100h]
  size_t v90; // [rsp+40h] [rbp-F8h]
  __int64 *v91; // [rsp+48h] [rbp-F0h]
  __int64 v92; // [rsp+50h] [rbp-E8h]
  bool v93; // [rsp+5Ah] [rbp-DEh]
  char v94; // [rsp+5Bh] [rbp-DDh]
  int v95; // [rsp+5Ch] [rbp-DCh]
  __m128i *v96; // [rsp+60h] [rbp-D8h]
  __int64 *v97; // [rsp+68h] [rbp-D0h]
  __int64 v98; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v99[8]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v100; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v101; // [rsp+90h] [rbp-A8h]
  __int64 v102; // [rsp+98h] [rbp-A0h]
  _QWORD v103[2]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v104; // [rsp+B0h] [rbp-88h]
  __int128 v105; // [rsp+B8h] [rbp-80h]
  __m128i v106; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v107; // [rsp+E0h] [rbp-58h] BYREF
  int v108; // [rsp+E8h] [rbp-50h]
  __int16 v109; // [rsp+ECh] [rbp-4Ch]
  unsigned __int64 v110; // [rsp+F8h] [rbp-40h]

  v88 = a1;
  v110 = __readfsqword(0x28u);
  if ( a1[153] )
  {
    v98 = 0;
    v91 = &v98;
    if ( !(unsigned __int8)sub_ECF10((__int64)a1, (__int64)&v98) )
      goto LABEL_5;
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64 )
      goto LABEL_5;
    v106.m128i_i64[0] = 0;
    v106.m128i_i64[0] = get_tinfo_property();
    v94 = get_tinfo_property() & 0x3F;
    v96 = &v106;
    clear_tinfo_t();
    if ( !v88[153] )
      goto LABEL_5;
    v95 = 0;
    v3 = 0;
    v97 = v103;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v88[152] + 8 * v3);
      v105 = 0;
      v103[1] = 0;
      v92 = v4;
      v5 = v88[65];
      v104 = 0;
      v103[0] = 0;
      v6 = *(_QWORD *)(v5 + 8);
      if ( !v6 )
      {
LABEL_131:
        qfree();
        if ( v104 )
          goto LABEL_89;
        goto LABEL_90;
      }
      v93 = 0;
      do
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v6 + 56);
          if ( !v16 )
            goto LABEL_27;
          if ( *(_DWORD *)v16 == 55 )
          {
            v16 = *(_QWORD *)(v16 + 16);
            if ( !v16 )
              break;
          }
          if ( (*(_BYTE *)(v16 + 4) & 0x40) != 0 )
          {
            v7 = *(_DWORD *)v16;
            if ( *(_DWORD *)v16 != 4 )
            {
              if ( v7 == 67 )
              {
                if ( *(_DWORD *)(v16 + 68) != *(_DWORD *)(v16 + 36) )
                {
LABEL_95:
                  if ( !under_debugger )
                    sub_37B760(50105);
                  goto LABEL_139;
                }
              }
              else
              {
                v8 = (int *)v16;
                if ( (unsigned int)(v7 - 8) > 2 )
                {
LABEL_14:
                  v9 = v8 + 8;
                  if ( v7 != 56 )
                  {
                    if ( v7 != 57 )
                      goto LABEL_95;
                    v9 = v8 + 12;
                  }
                  if ( *(_BYTE *)v9 == 6 && *((_QWORD *)v9 + 1) == v92 && (v94 != 1 || v8[17] <= 0) )
                  {
                    v10 = v7 == 57;
                    v11 = v104;
                    v12 = v105;
                    v106.m128i_i64[0] = v6;
                    v106.m128i_i64[1] = v16;
                    v93 = v10;
                    v13 = v105 + 1;
                    if ( (unsigned __int64)v96 < v104 || (unsigned __int64)v96 >= v104 + 16LL * *((_QWORD *)&v105 + 1) )
                    {
                      if ( *((_QWORD *)&v105 + 1) < v13 )
                      {
                        v104 = qvector_reserve();
                        v11 = v104;
                        v12 = v105;
                      }
                      *(__m128i *)(v11 + 16 * v12) = _mm_load_si128(&v106);
                    }
                    else
                    {
                      if ( *((_QWORD *)&v105 + 1) < v13 )
                      {
                        v104 = qvector_reserve();
                        v11 = v104;
                        v12 = v105;
                      }
                      v14 = (__int64 *)(v11 + 16 * v12);
                      *v14 = v6;
                      v14[1] = v16;
                    }
                    v15 = v97;
                    *(_QWORD *)&v105 = v105 + 1;
                    sub_69770(v88[98], *(_DWORD *)(v6 + 72), v97);
                    sub_5DC10(v15, *(_DWORD *)(v6 + 72));
                  }
                  goto LABEL_27;
                }
              }
            }
            if ( *(_BYTE *)(v16 + 32) != 4 )
            {
              if ( !under_debugger )
                sub_37B760(50104);
LABEL_139:
              BUG();
            }
            v8 = *(int **)(v16 + 40);
            v7 = *v8;
            goto LABEL_14;
          }
LABEL_27:
          v6 = *(_QWORD *)(v6 + 8);
          if ( !v6 )
            goto LABEL_32;
        }
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v6 );
LABEL_32:
      if ( !(_QWORD)v105 )
        goto LABEL_131;
      if ( (*((_BYTE *)v88 + 757) & 1) != 0 )
        goto LABEL_34;
      v100 = 0;
      copy_tinfo_t();
      if ( v93 )
      {
        v101 = 0;
        v102 = 0;
        v106 = 0;
        copy_tinfo_t();
        v107 = 0;
        v83.m128i_i64[0] = (__int64)&v107;
        copy_tinfo_t();
        v108 = 0;
        v109 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      sub_ECE00((__int64)v88, v92, (int)&v100, 134217730, v81, v82);
      clear_tinfo_t();
      if ( (_QWORD)v105 )
      {
LABEL_34:
        v85 = 0;
        v17 = 0;
        do
        {
          v18 = (__int64 *)(v104 + 16 * v17);
          v87 = *v18;
          v19 = v18[1];
          LODWORD(v18) = *(_DWORD *)v19;
          v89 = v19;
          v84 = v19;
          if ( (unsigned int)((_DWORD)v18 - 56) > 1 )
            v84 = *(_QWORD *)(v19 + 40);
          v20 = sub_F78C0(v88, v87, v89, v84);
          v21 = v20;
          if ( !v85 )
          {
            v22 = *(_DWORD *)(v20 + 20);
            v23 = v22;
            LOBYTE(v23) = v22 & 0x7F;
            if ( v23 != 96 && v22 != 80 )
            {
              v75 = sub_D0680((__int64)v88, *(_DWORD *)(v87 + 72));
              if ( v75 > 0 )
              {
                v76 = *(_QWORD *)(v21 + 32);
                if ( v76 > 0 )
                {
                  v77 = *(_QWORD *)(v21 + 24) + 56LL;
                  for ( i = 0; v76 != i; ++i )
                  {
                    if ( (unsigned int)(*(_DWORD *)v77 - 3) > 1 )
                    {
                      if ( *(_DWORD *)v77 != 1 )
                      {
                        if ( !under_debugger )
                          sub_37B760(51014);
                        goto LABEL_139;
                      }
                      if ( v75 <= *(_QWORD *)(v77 + 8) )
                      {
                        if ( *(_DWORD *)(v21 + 8) > i )
                          *(_DWORD *)(v21 + 8) = i;
                        sub_32EA70(v99, v21);
                        if ( (*((_BYTE *)v88 + 757) & 1) == 0 )
                        {
                          v100 = 0;
                          copy_tinfo_t();
                          if ( v93 )
                          {
                            v101 = 0;
                            v102 = 0;
                            v106 = 0;
                            copy_tinfo_t();
                            v107 = 0;
                            v83.m128i_i64[0] = (__int64)&v107;
                            copy_tinfo_t();
                            v108 = 0;
                            v109 = 0;
                            clear_tinfo_t();
                            clear_tinfo_t();
                            copy_tinfo_t();
                            create_tinfo();
                            clear_tinfo_t();
                            clear_tinfo_t();
                            clear_tinfo_t();
                          }
                          sub_ECE00((__int64)v88, v92, (int)&v100, 134217730, v79, v80);
                          clear_tinfo_t();
                        }
                        sub_B4A60((_QWORD *)v21);
                        j__qfree();
                        v21 = sub_F78C0(v88, v87, v89, v84);
                        clear_tinfo_t();
                        break;
                      }
                    }
                    v77 += 80;
                  }
                }
              }
            }
          }
          if ( *(_BYTE *)(v84 + 64) != 8 )
          {
            if ( !under_debugger )
              sub_37B760(50106);
            goto LABEL_139;
          }
          v24 = 0;
          v25 = *(_QWORD *)(v84 + 72);
          *(_QWORD *)v25 = *(_QWORD *)v21;
          *(_DWORD *)(v25 + 8) = *(_DWORD *)(v21 + 8);
          *(_DWORD *)(v25 + 12) = *(_DWORD *)(v21 + 12);
          *(_DWORD *)(v25 + 16) = *(_DWORD *)(v21 + 16);
          *(_DWORD *)(v25 + 20) = *(_DWORD *)(v21 + 20);
          v83.m128i_i64[0] = *(_QWORD *)(v21 + 32);
          if ( v83.m128i_i64[0] )
          {
            v24 = qalloc_or_throw();
            v69 = v24;
            v70 = 0;
            do
            {
              v71 = *(_QWORD *)(v21 + 24) + v69 - v24;
              sub_11D380(v69, v71);
              v72 = *(_QWORD *)(v71 + 16);
              *(_QWORD *)(v69 + 24) = 0;
              *(_QWORD *)(v69 + 16) = v72;
              n = v69 + 24;
              copy_tinfo_t();
              *(_QWORD *)(v69 + 32) = 0;
              *(_OWORD *)(v69 + 40) = 0;
              if ( *(_QWORD *)(v71 + 40) )
              {
                v90 = *(_QWORD *)(v71 + 40);
                v73 = (void *)qalloc_or_throw();
                v74 = v90;
                *(_QWORD *)(v69 + 32) = v73;
                *(_QWORD *)(v69 + 48) = v74;
                memcpy(v73, *(const void **)(v71 + 32), v74);
                *(_QWORD *)(v69 + 40) = v90;
              }
              *(_DWORD *)(v69 + 56) = 0;
              copy_argloc();
              ++v70;
              v69 += 80;
              *(_DWORD *)(v69 - 8) = *(_DWORD *)(v71 + 72);
            }
            while ( v83.m128i_i64[0] != v70 );
          }
          v26 = _mm_loadl_epi64(&v83);
          v27 = *(_QWORD *)(v25 + 24);
          v83 = _mm_unpacklo_epi64(v26, v26);
          if ( v27 )
          {
            v28 = *(_QWORD *)(v25 + 32);
            if ( v28 )
            {
              v29 = 0;
              do
              {
                v30 = v27 + 80 * v29;
                cleanup_argloc();
                if ( *(_QWORD *)(v30 + 32) )
                {
                  *(_QWORD *)(v30 + 40) = 0;
                  qfree();
                }
                ++v29;
                clear_tinfo_t();
                sub_1166E0(v30);
                v27 = *(_QWORD *)(v25 + 24);
              }
              while ( v28 != v29 );
            }
            *(_QWORD *)(v25 + 32) = 0;
            qfree();
          }
          v31 = _mm_load_si128(&v83);
          *(_QWORD *)(v25 + 24) = v24;
          v32 = 0;
          *(__m128i *)(v25 + 32) = v31;
          v33 = *(_QWORD *)(v21 + 56);
          if ( v33 )
          {
            v32 = qalloc_or_throw();
            for ( j = 0; j != v33; ++j )
              sub_11D380(v32 + 16 * j, 16 * j + *(_QWORD *)(v21 + 48));
          }
          v34 = *(_QWORD *)(v25 + 48);
          v83 = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
          if ( v34 )
          {
            v35 = *(_QWORD *)(v25 + 56);
            if ( v35 )
            {
              for ( k = 0; k != v35; ++k )
              {
                v37 = k;
                sub_1166E0(16 * v37 + v34);
                v34 = *(_QWORD *)(v25 + 48);
              }
            }
            *(_QWORD *)(v25 + 56) = 0;
            qfree();
          }
          v38 = _mm_load_si128(&v83);
          *(_QWORD *)(v25 + 48) = v32;
          *(__m128i *)(v25 + 56) = v38;
          copy_tinfo_t();
          copy_argloc();
          sub_5E350((__int64 *)(v25 + 96), (__int64 *)(v21 + 96));
          v39 = *(_QWORD *)(v21 + 120);
          v40 = nullptr;
          if ( v39 )
          {
            v40 = (void *)qalloc_or_throw();
            memcpy(v40, *(const void **)(v21 + 112), 16 * v39);
          }
          v41 = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
          if ( *(_QWORD *)(v25 + 112) )
          {
            *(_QWORD *)(v25 + 120) = 0;
            v83 = v41;
            qfree();
            v41 = _mm_load_si128(&v83);
          }
          *(_QWORD *)(v25 + 112) = v40;
          *(__m128i *)(v25 + 120) = v41;
          sub_5E350((__int64 *)(v25 + 136), (__int64 *)(v21 + 136));
          v42 = *(_QWORD *)(v21 + 160);
          v43 = nullptr;
          if ( v42 )
          {
            v43 = (void *)qalloc_or_throw();
            memcpy(v43, *(const void **)(v21 + 152), 16 * v42);
          }
          v44 = _mm_unpacklo_epi64((__m128i)v42, (__m128i)v42);
          if ( *(_QWORD *)(v25 + 152) )
          {
            *(_QWORD *)(v25 + 160) = 0;
            v83 = v44;
            qfree();
            v44 = _mm_load_si128(&v83);
          }
          *(_QWORD *)(v25 + 152) = v43;
          *(__m128i *)(v25 + 160) = v44;
          sub_5E350((__int64 *)(v25 + 176), (__int64 *)(v21 + 176));
          v45 = *(_QWORD *)(v21 + 200);
          v46 = nullptr;
          if ( v45 )
          {
            v46 = (void *)qalloc_or_throw();
            memcpy(v46, *(const void **)(v21 + 192), 16 * v45);
          }
          v47 = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
          if ( *(_QWORD *)(v25 + 192) )
          {
            *(_QWORD *)(v25 + 200) = 0;
            v83 = v47;
            qfree();
            v47 = _mm_load_si128(&v83);
          }
          *(_QWORD *)(v25 + 192) = v46;
          v48 = nullptr;
          *(__m128i *)(v25 + 200) = v47;
          v49 = *(_QWORD *)(v21 + 224);
          if ( v49 )
          {
            v48 = (void *)qalloc_or_throw();
            memcpy(v48, *(const void **)(v21 + 216), 16 * v49);
          }
          v50 = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v49);
          if ( *(_QWORD *)(v25 + 216) )
          {
            *(_QWORD *)(v25 + 224) = 0;
            v83 = v50;
            qfree();
            v50 = _mm_load_si128(&v83);
          }
          *(_QWORD *)(v25 + 216) = v48;
          *(__m128i *)(v25 + 224) = v50;
          sub_5E350((__int64 *)(v25 + 240), (__int64 *)(v21 + 240));
          v51 = *(_QWORD *)(v21 + 264);
          v52 = nullptr;
          if ( v51 )
          {
            v52 = (void *)qalloc_or_throw();
            memcpy(v52, *(const void **)(v21 + 256), 16 * v51);
          }
          v53 = _mm_unpacklo_epi64((__m128i)v51, (__m128i)v51);
          if ( *(_QWORD *)(v25 + 256) )
          {
            *(_QWORD *)(v25 + 264) = 0;
            v83 = v53;
            qfree();
            v53 = _mm_load_si128(&v83);
          }
          *(_QWORD *)(v25 + 256) = v52;
          v54 = 0;
          *(__m128i *)(v25 + 264) = v53;
          *(_DWORD *)(v25 + 280) = *(_DWORD *)(v21 + 280);
          *(_DWORD *)(v25 + 284) = *(_DWORD *)(v21 + 284);
          v83.m128i_i64[0] = *(_QWORD *)(v21 + 296);
          if ( v83.m128i_i64[0] )
          {
            v54 = qalloc_or_throw();
            v61 = v54;
            v62 = 0;
            do
            {
              v63 = *(_QWORD *)(v21 + 288) + v61 - v54;
              *(_OWORD *)(v61 + 8) = 0;
              *(_QWORD *)v61 = 0;
              if ( *(_QWORD *)(v63 + 8) )
              {
                n = *(_QWORD *)(v63 + 8);
                v64 = (void *)qalloc_or_throw();
                v65 = n;
                *(_QWORD *)v61 = v64;
                *(_QWORD *)(v61 + 16) = v65;
                memcpy(v64, *(const void **)v63, v65);
                *(_QWORD *)(v61 + 8) = n;
              }
              *(_QWORD *)(v61 + 24) = 0;
              *(_OWORD *)(v61 + 32) = 0;
              if ( *(_QWORD *)(v63 + 32) )
              {
                n = *(_QWORD *)(v63 + 32);
                v66 = (void *)qalloc_or_throw();
                v67 = n;
                *(_QWORD *)(v61 + 24) = v66;
                *(_QWORD *)(v61 + 40) = v67;
                memcpy(v66, *(const void **)(v63 + 24), v67);
                *(_QWORD *)(v61 + 32) = n;
              }
              ++v62;
              v61 += 48;
            }
            while ( v83.m128i_i64[0] != v62 );
          }
          v55 = _mm_loadl_epi64(&v83);
          v56 = *(_QWORD *)(v25 + 288);
          v83 = _mm_unpacklo_epi64(v55, v55);
          if ( v56 )
          {
            v57 = *(_QWORD *)(v25 + 296);
            if ( v57 )
            {
              for ( m = 0; m != v57; ++m )
              {
                v59 = (_QWORD *)(v56 + 48 * m);
                if ( v59[3] )
                {
                  v59[4] = 0;
                  qfree();
                }
                if ( *v59 )
                {
                  v59[1] = 0;
                  qfree();
                }
                v56 = *(_QWORD *)(v25 + 288);
              }
            }
            *(_QWORD *)(v25 + 296) = 0;
            qfree();
          }
          v60 = _mm_load_si128(&v83);
          *(_QWORD *)(v25 + 288) = v54;
          *(__m128i *)(v25 + 296) = v60;
          sub_B4A60((_QWORD *)v21);
          j__qfree();
          if ( (unsigned __int8)sub_116090(v84, v88[188], 0) )
            sub_F8620(v87, v89, v84);
          v17 = ++v85;
        }
        while ( v85 < (unsigned __int64)v105 );
      }
      qfree();
      if ( v104 )
      {
LABEL_89:
        *(_QWORD *)&v105 = 0;
        qfree();
      }
LABEL_90:
      v3 = ++v95;
      if ( (unsigned __int64)v95 >= v88[153] )
      {
LABEL_5:
        clear_tinfo_t();
        return v110 - __readfsqword(0x28u);
      }
    }
  }
  return v110 - __readfsqword(0x28u);
}

