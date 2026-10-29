__int64 __fastcall sub_F340(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r13
  __int128 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  char *v10; // rbp
  __int64 v11; // r12
  unsigned int v12; // eax
  char *v13; // rbx
  _QWORD *v14; // rsi
  __int64 v15; // rax
  char v16; // cl
  unsigned __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  const char *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rdi
  int v24; // eax
  int v25; // r8d
  char v26; // cl
  char v27; // al
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // rbx
  char *v34; // rax
  int v35; // edx
  __int64 v36; // rsi
  _QWORD *v38; // rsi
  __int64 v39; // rsi
  char *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 *v43; // r15
  unsigned int *v44; // r13
  __int64 v45; // rdi
  __int64 v46; // rdi
  _QWORD *v47; // rcx
  char v48; // al
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // r14
  __int64 v53; // rcx
  __int64 v54; // rbp
  int v55; // r12d
  __int64 v56; // rdx
  __int64 v57; // rcx
  const char *v58; // rsi
  size_t v59; // r15
  __int64 v60; // r13
  int v61; // eax
  unsigned int v62; // esi
  char *v63; // rbx
  size_t v64; // rax
  __int64 v65; // r13
  size_t v66; // r15
  __int64 v67; // rdi
  __int64 v68; // r12
  __int64 v69; // rdi
  __int64 v70; // rdi
  const char *v71; // rbx
  size_t v72; // rax
  signed int v73; // esi
  unsigned __int64 v74; // rbp
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rcx
  signed int v78; // esi
  char v79; // al
  const char **v81; // [rsp+0h] [rbp-118h]
  __int64 i; // [rsp+10h] [rbp-108h]
  unsigned int *v84; // [rsp+10h] [rbp-108h]
  int v86; // [rsp+20h] [rbp-F8h]
  __int64 v87; // [rsp+20h] [rbp-F8h]
  __int64 v88; // [rsp+28h] [rbp-F0h]
  char v90; // [rsp+30h] [rbp-E8h]
  __int64 v91; // [rsp+38h] [rbp-E0h]
  __int64 v92; // [rsp+38h] [rbp-E0h]
  __int64 v93; // [rsp+48h] [rbp-D0h]
  __int64 *v94; // [rsp+50h] [rbp-C8h]
  int v95; // [rsp+5Ch] [rbp-BCh]
  __int64 v96; // [rsp+60h] [rbp-B8h]
  char v97; // [rsp+68h] [rbp-B0h]
  char v98; // [rsp+69h] [rbp-AFh]
  __int16 v99; // [rsp+6Ah] [rbp-AEh]
  int v100; // [rsp+6Ch] [rbp-ACh]
  __int64 v101; // [rsp+70h] [rbp-A8h]
  char v102; // [rsp+89h] [rbp-8Fh] BYREF
  char v103; // [rsp+8Ah] [rbp-8Eh] BYREF
  char v104; // [rsp+8Bh] [rbp-8Dh] BYREF
  char v105; // [rsp+8Ch] [rbp-8Ch] BYREF
  char v106; // [rsp+8Dh] [rbp-8Bh] BYREF
  char v107; // [rsp+8Eh] [rbp-8Ah] BYREF
  char v108; // [rsp+8Fh] [rbp-89h] BYREF
  _QWORD *v109; // [rsp+90h] [rbp-88h] BYREF
  __m128i v110; // [rsp+98h] [rbp-80h]
  unsigned int v111; // [rsp+A8h] [rbp-70h]
  _QWORD *v112; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v113; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v114; // [rsp+C8h] [rbp-50h]
  __int16 v115; // [rsp+D6h] [rbp-42h] BYREF
  unsigned __int64 v116; // [rsp+D8h] [rbp-40h]

  v116 = __readfsqword(0x28u);
  if ( !(_BYTE)byte_207A0 && __cxa_guard_acquire(&byte_207A0) )
  {
    xmmword_207B0 = 0;
    __cxa_guard_release(&byte_207A0);
  }
  v5 = &xmmword_207B0;
  if ( a3 )
    v5 = (__int128 *)a3;
  v81 = (const char **)v5;
  if ( !*(_BYTE *)a4 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL);
    if ( !v6 )
      goto LABEL_141;
    sub_BB30(*a1, (unsigned __int16)v6, a3, a4);
    v9 = *(__int64 **)(a4 + 8);
    if ( !v9[1] )
      return 0;
    v86 = 0;
    for ( i = *v9; ; i += 40 )
    {
      v10 = nullptr;
      v11 = *(_QWORD *)(i + 24);
      if ( v11 )
      {
        v10 = (char *)qalloc_or_throw(2 * v11);
        memcpy(v10, *(const void **)(i + 16), 2 * v11);
      }
      v91 = *a1;
      sub_BB30(*a1, (unsigned __int16)v11, v7, v8);
      v110 = 0;
      v109 = nullptr;
      v111 = 0;
      v109 = (_QWORD *)qvector_reserve(&v109, 0, 8, 1);
      *v109 = 0;
      if ( (int)v11 > 0 )
      {
        v12 = v111;
        v13 = v10;
        do
        {
          v14 = v109;
          LOBYTE(v4) = *v13 == 0;
          if ( (v12 & 7) != 0 )
          {
            *((_BYTE *)v109 + (v12 >> 3)) |= ((unsigned int)v4 & ((1 << (8 - (v12 & 7))) - 1)) << (v12 & 7);
          }
          else
          {
            v15 = v110.m128i_i64[0];
            LOBYTE(v112) = *v13 == 0;
            v16 = (char)v4;
            v17 = v110.m128i_i64[0] + 1;
            if ( &v112 < v109 || &v112 >= (_QWORD *)((char *)v109 + v110.m128i_i64[1]) )
            {
              if ( v110.m128i_i64[1] < v17 )
              {
                v109 = (_QWORD *)qvector_reserve(&v109, v109, v110.m128i_i64[0] + 1, 1);
                v14 = v109;
                v16 = (char)v112;
                v15 = v110.m128i_i64[0];
              }
              *((_BYTE *)v14 + v15) = v16;
            }
            else
            {
              if ( v110.m128i_i64[1] < v17 )
              {
                v109 = (_QWORD *)qvector_reserve(&v109, v109, v110.m128i_i64[0] + 1, 1);
                v14 = v109;
                v15 = v110.m128i_i64[0];
              }
              *((_BYTE *)v14 + v15) = (_BYTE)v4;
            }
            ++v110.m128i_i64[0];
          }
          v13 += 2;
          v12 = ++v111;
        }
        while ( v13 != &v10[2 * (unsigned int)(v11 - 1) + 2] );
      }
      v113 = 0;
      v112 = nullptr;
      v114 = 0;
      v112 = (_QWORD *)qvector_reserve(&v112, 0, 8, 1);
      *v112 = 0;
      v18 = v110.m128i_i64[0];
      v19 = v113.m128i_i64[0];
      if ( v113.m128i_i64[0] < (unsigned __int64)v110.m128i_i64[0] )
      {
        v38 = v112;
        if ( v113.m128i_i64[1] < (unsigned __int64)v110.m128i_i64[0] )
        {
          v112 = (_QWORD *)qvector_reserve(&v112, v112, v110.m128i_i64[0], 1);
          v19 = v113.m128i_i64[0];
          v38 = v112;
        }
        memset((char *)v38 + v19, 0, v18 - v19);
        v113.m128i_i64[0] = v18;
      }
      else if ( v110.m128i_i64[0] != v113.m128i_i64[0] )
      {
        v113.m128i_i64[0] = v110.m128i_i64[0];
      }
      v20 = v111;
      v21 = nullptr;
      v22 = 1;
      v114 = v111;
      if ( v111 )
      {
        while ( (unsigned __int64)((unsigned int)v21 >> 3) < v110.m128i_i64[0] )
        {
          v23 = (char *)v112 + ((unsigned __int64)(unsigned int)(v20 - (_DWORD)v21 - 1) >> 3);
          v24 = 1 << ((v20 - (_BYTE)v21 - 1) & 7);
          v25 = *((unsigned __int8 *)v109 + ((unsigned __int64)v21 >> 3));
          v26 = v24 | *v23;
          v27 = *v23 & ~(_BYTE)v24;
          if ( _bittest(&v25, (unsigned __int8)v21 & 7) )
            v27 = v26;
          ++v21;
          *v23 = v27;
          v20 = v111;
          if ( (unsigned int)v21 >= v111 )
            goto LABEL_32;
        }
LABEL_139:
        if ( !under_debugger )
        {
          interr(709, v21, v22, v20);
LABEL_141:
          sub_E890((__int64)"bad tree!");
        }
LABEL_147:
        BUG();
      }
LABEL_32:
      v28 = v109;
      v29 = (__int64)v112;
      v30 = _mm_loadu_si128(&v113);
      v112 = v109;
      v109 = (_QWORD *)v29;
      v113.m128i_i64[1] = v110.m128i_i64[1];
      v110 = v30;
      if ( v112 )
      {
        v113.m128i_i64[0] = 0;
        qfree(v28);
      }
      sub_C190(a1, (__int64)&v109, v29);
      v4 = &qword_207D0;
      if ( !(_BYTE)byte_207C0 )
      {
        v4 = &qword_207D0;
        if ( __cxa_guard_acquire(&byte_207C0) )
        {
          qword_207D0 = 0;
          xmmword_207D8 = 0;
          __cxa_atexit((void (*)(void *))sub_7DB0, &qword_207D0, &off_1FCB8);
          __cxa_guard_release(&byte_207C0);
        }
      }
      v31 = xmmword_207D8;
      v32 = *(unsigned __int16 *)(a2 + 41);
      if ( (unsigned __int64)xmmword_207D8 < v32 )
        break;
      if ( v32 != (_QWORD)xmmword_207D8 )
        goto LABEL_37;
LABEL_38:
      v33 = 0;
      if ( (int)v11 > 0 )
      {
        v34 = v10;
        v35 = 0;
        do
        {
          if ( *v34 )
          {
            v36 = v35++;
            *(_BYTE *)(qword_207D0 + v36) = v34[1];
          }
          v34 += 2;
        }
        while ( v34 != &v10[2 * (unsigned int)(v11 - 1) + 2] );
        v33 = v35;
      }
      if ( v33 != qfwrite(v91, qword_207D0, v33) )
        sub_BA80((__int64)"File write error");
      if ( v109 )
      {
        v110.m128i_i64[0] = 0;
        qfree(v109);
      }
      if ( v10 )
        qfree(v10);
      sub_F340(a1, a2, v81, i);
      v7 = ++v86;
      if ( (unsigned __int64)v86 >= *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL) )
        return 0;
    }
    v39 = qword_207D0;
    if ( *((_QWORD *)&xmmword_207D8 + 1) < v32 )
    {
      qword_207D0 = qvector_reserve(&qword_207D0, qword_207D0, *(unsigned __int16 *)(a2 + 41), 1);
      v31 = xmmword_207D8;
      v39 = qword_207D0;
    }
    memset((void *)(v39 + v31), 0, v32 - v31);
LABEL_37:
    *(_QWORD *)&xmmword_207D8 = v32;
    goto LABEL_38;
  }
  v40 = &v102;
  v102 = 0;
  if ( qfwrite(*a1, &v102, 1) != 1 )
    goto LABEL_101;
  v42 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL);
  if ( !v42 )
  {
    if ( under_debugger )
      goto LABEL_147;
    interr(716, &v102, 0, v41);
    goto LABEL_144;
  }
  if ( (int)v42 <= 0 )
    return 0;
  v98 = -1;
  v101 = (unsigned int)(v42 - 1);
  v92 = 0;
  v99 = 0;
  v100 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL);
  v96 = *(_QWORD *)(a4 + 8);
  v43 = a1;
  while ( 2 )
  {
    v44 = (unsigned int *)(**(_QWORD **)(v96 + 24) + 208LL * *(unsigned int *)(*(_QWORD *)v96 + 4 * v92));
    if ( !v92 || v98 != *((_BYTE *)v44 + 188) || *((_WORD *)v44 + 48) != v99 )
    {
      v45 = *v43;
      v103 = *((_BYTE *)v44 + 188);
      if ( qfwrite(v45, &v103, 1) != 1 )
        goto LABEL_101;
      v46 = *v43;
      v115 = __ROL2__(*((_WORD *)v44 + 48), 8);
      if ( qfwrite(v46, &v115, 2) != 2 )
        goto LABEL_101;
      v98 = *((_BYTE *)v44 + 188);
      v99 = *((_WORD *)v44 + 48);
    }
    v40 = (char *)*v44;
    sub_BC10(*v43, (unsigned int)v40);
    v48 = 0;
    if ( v100 != (_DWORD)v92 + 1 )
    {
      v47 = *(_QWORD **)(v96 + 24);
      v48 = 16;
      v49 = *v47 + 208LL * *(unsigned int *)(*(_QWORD *)v96 + 4 * v92 + 4);
      if ( *(_BYTE *)(v49 + 188) == v98 )
      {
        v48 = 8;
        if ( *(_WORD *)(v49 + 96) != v99 )
          v48 = 16;
      }
    }
    v50 = *((_QWORD *)v44 + 14);
    v95 = 0;
    if ( (int)v50 > 0 )
      v48 |= 2u;
    if ( *((_QWORD *)v44 + 5) > 1u )
    {
      v95 = 1;
      v48 |= 4u;
    }
    v51 = *((_QWORD *)v44 + 2);
    v52 = *v43;
    if ( !(_DWORD)v51 )
    {
LABEL_144:
      if ( !under_debugger )
        interr(715, v40, v51, v47);
      goto LABEL_147;
    }
    v90 = v48 | 1;
    if ( (int)v51 <= 0 )
      goto LABEL_104;
    v53 = (unsigned int)(v51 - 1);
    v97 = v48;
    v54 = 0;
    v55 = 0;
    v84 = v44;
    v87 = v53 << 6;
    v88 = (v53 + 1) << 6;
    v93 = *((_QWORD *)v44 + 14);
    v94 = v43;
    do
    {
      v60 = v54 + *((_QWORD *)v84 + 1);
      v61 = *(_DWORD *)(v60 + 24);
      v62 = v61 - v55;
      if ( v61 - v55 < 0 )
      {
        *(_BYTE *)(v60 + 57) |= 0x10u;
        v62 = v55 - v61;
      }
      sub_BC10(v52, v62);
      v55 = *(_DWORD *)(v60 + 24);
      if ( *(_BYTE *)(v60 + 57) )
      {
        LOBYTE(v112) = *(_BYTE *)(v60 + 57);
        if ( qfwrite(v52, &v112, 1) != 1 )
          goto LABEL_101;
      }
      v63 = (char *)s1;
      if ( *(_QWORD *)(v60 + 8) )
        v63 = *(char **)v60;
      if ( strcmp(v63, (const char *)(a2 + 22)) )
      {
        v21 = *v81;
        if ( !*v81 || strcmp(v63, v21) )
        {
          if ( !*v63 )
          {
            if ( !under_debugger )
            {
              interr(714, v21, v56, v57);
              goto LABEL_139;
            }
            goto LABEL_147;
          }
          v58 = v81[1];
          if ( v58 )
          {
            if ( !v63 )
            {
              v59 = strlen(nullptr);
              goto LABEL_83;
            }
LABEL_94:
            v64 = strlen(v58);
            v65 = (int)v64;
            v66 = v64;
            if ( !strncmp(v63, v58, (int)v64) && v63[v65] )
              v63 += v66;
          }
          v59 = strlen(v63);
          goto LABEL_83;
        }
      }
      v63 = ".";
      v58 = v81[1];
      if ( v58 )
        goto LABEL_94;
      v59 = 1;
      v63 = ".";
LABEL_83:
      if ( qfwrite(v52, v63, v59) != v59 )
        goto LABEL_101;
      if ( v54 == v87 )
      {
        v44 = v84;
        LODWORD(v50) = v93;
        v43 = v94;
        LOBYTE(v109) = v97;
        if ( qfwrite(v52, &v109, 1) == 1 )
          goto LABEL_104;
        goto LABEL_101;
      }
      LOBYTE(v109) = v90;
      if ( qfwrite(v52, &v109, 1) != 1 )
        goto LABEL_101;
      v54 += 64;
    }
    while ( v54 != v88 );
    v44 = v84;
    LODWORD(v50) = v93;
    v43 = v94;
LABEL_104:
    if ( (int)v50 > 0 )
    {
      v67 = *v43;
      v104 = v50;
      if ( qfwrite(v67, &v104, 1) != 1 )
        goto LABEL_101;
      v68 = 0;
      do
      {
        sub_BC10(*v43, *(_DWORD *)(*((_QWORD *)v44 + 13) + v68));
        v69 = *v43;
        v105 = *(_BYTE *)(*((_QWORD *)v44 + 13) + v68 + 4);
        if ( qfwrite(v69, &v105, 1) != 1 )
          goto LABEL_101;
        v68 += 8;
      }
      while ( v68 != 8LL * (unsigned int)(v50 - 1) + 8 );
      if ( v95 == 1 )
        goto LABEL_117;
    }
    else
    {
      if ( v95 != 1 )
        goto LABEL_106;
LABEL_117:
      v70 = *v43;
      v106 = 1;
      if ( qfwrite(v70, &v106, 1) != 1 )
        goto LABEL_101;
      v71 = s1;
      if ( *((_QWORD *)v44 + 5) )
        v71 = *((const char **)v44 + 4);
      if ( !strcmp(v71, (const char *)(a2 + 22)) || *v81 && !strcmp(v71, *v81) )
      {
        v78 = v44[14];
        if ( v78 < 0 )
        {
          v74 = 2;
          v71 = ".";
          sub_BC10(*v43, -v78);
          v75 = *v43;
          goto LABEL_136;
        }
        v74 = 1;
        v71 = ".";
        sub_BC10(*v43, v78);
        v75 = *v43;
        v79 = 1;
      }
      else
      {
        v72 = strlen(v71);
        v73 = v44[14];
        v74 = v72;
        if ( v73 < 0 )
        {
          v74 = v72 + 1;
          v73 = -v73;
        }
        sub_BC10(*v43, v73);
        v75 = *v43;
        if ( v74 > 0xFF )
        {
          v108 = 0;
          if ( qfwrite(v75, &v108, 1) == 1 )
          {
            sub_BB30(*v43, (unsigned __int16)v74, v76, v77);
            goto LABEL_133;
          }
          goto LABEL_101;
        }
LABEL_136:
        v79 = v74;
      }
      v107 = v79;
      if ( qfwrite(v75, &v107, 1) != 1 )
        goto LABEL_101;
LABEL_133:
      if ( qfwrite(*v43, v71, v74) != v74 )
LABEL_101:
        sub_BA80((__int64)"File write error");
    }
LABEL_106:
    if ( v101 != v92 )
    {
      ++v92;
      continue;
    }
    return 0;
  }
}
