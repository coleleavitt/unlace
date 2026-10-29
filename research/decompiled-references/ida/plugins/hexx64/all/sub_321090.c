unsigned __int64 __fastcall sub_321090(__int64 a1, __int64 a2, char a3, double a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 *v8; // rbp
  int v9; // ebx
  __int64 v10; // r12
  int v11; // eax
  int v12; // edx
  int v13; // edx
  _DWORD *v14; // rax
  _DWORD *v15; // rcx
  __int64 tinfo_size; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // r14
  int v19; // eax
  char v20; // r14
  _QWORD *v21; // r8
  _QWORD *v22; // r14
  unsigned __int64 *v23; // rbx
  _QWORD *v24; // r15
  __int64 v25; // rdx
  const char *v26; // rsi
  const char *v27; // rdi
  _QWORD *v28; // rdx
  _QWORD *i; // rax
  unsigned __int64 *v30; // rdx
  char v31; // dl
  __int64 v32; // rdx
  _DWORD *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // r10
  _QWORD *v36; // rbx
  const char *v37; // r14
  const char *v38; // rbp
  _QWORD *v39; // rax
  __int64 v40; // r10
  char v41; // dl
  __int64 v42; // rax
  __m128i v43; // xmm1
  unsigned __int64 v44; // r8
  int v45; // eax
  unsigned __int64 *v46; // r8
  _BYTE *v47; // rax
  char v48; // dl
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // r12
  __int64 v51; // rbx
  __int64 v52; // rbx
  _QWORD *v53; // rdi
  _QWORD *v54; // rdi
  __m128i v56; // xmm1
  int v57; // eax
  unsigned __int64 v58; // r13
  unsigned __int64 v59; // r12
  _QWORD *v60; // rbx
  __int64 v61; // rbx
  __int64 *v62; // rdi
  __int64 *v63; // rdi
  _QWORD *v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // rcx
  _QWORD *v70; // rdi
  _QWORD *v71; // rdi
  __int64 *v72; // rdi
  __int64 *v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // [rsp+18h] [rbp-A0h]
  char v78; // [rsp+20h] [rbp-98h]
  unsigned __int64 *v79; // [rsp+20h] [rbp-98h]
  __int64 v80; // [rsp+28h] [rbp-90h]
  int v82; // [rsp+34h] [rbp-84h]
  char v83; // [rsp+34h] [rbp-84h]
  unsigned __int64 *v84; // [rsp+38h] [rbp-80h]
  int *v85; // [rsp+38h] [rbp-80h]
  __int64 v86; // [rsp+40h] [rbp-78h] BYREF
  __int64 v87; // [rsp+48h] [rbp-70h] BYREF
  __m128i v88; // [rsp+50h] [rbp-68h] BYREF
  __m128i v89; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v90; // [rsp+78h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 440);
  v90 = __readfsqword(0x28u);
  v7 = 0;
  if ( !v6 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
      return v90 - __readfsqword(0x28u);
    v21 = *(_QWORD **)(a1 + 872);
    if ( !v21 )
      return v90 - __readfsqword(0x28u);
    if ( !*(_QWORD *)(a1 + 880) )
      return v90 - __readfsqword(0x28u);
    v22 = (_QWORD *)v21[1];
    if ( v21 == v22 )
      return v90 - __readfsqword(0x28u);
    v80 = 0;
    v8 = nullptr;
    v23 = nullptr;
    v77 = 0;
    goto LABEL_36;
  }
  v6 = 0;
  v8 = nullptr;
  v9 = 0;
  v80 = 0;
  v77 = 0;
  do
  {
    v10 = *(_QWORD *)(a1 + 432) + 104 * v7;
    *(_QWORD *)(a2 + 64) = v10;
    if ( *(_QWORD *)(v10 + 40) > 1u )
    {
      v86 = v10 + 32;
      if ( !v8 )
      {
        v42 = qalloc();
        v8 = (unsigned __int64 *)v42;
        v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v42);
        if ( !v42 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        a4 = 0.0;
        *(_OWORD *)(v42 + 16) = 0;
        *(_OWORD *)(v42 + 32) = 0;
        *(__m128i *)(v42 + 8) = v43;
        *(_QWORD *)v42 = v42 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_56:
        v88.m128i_i64[0] = (__int64)v8;
        v88.m128i_i64[1] = v6;
        sub_1F6390(&v88, (__int64)v8, 1, &v86);
        goto LABEL_57;
      }
      if ( !v6 )
        goto LABEL_56;
      v35 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v35 & 2) != 0 )
      {
        v40 = (__int64)v8;
        v41 = 1;
        goto LABEL_88;
      }
      v82 = v9;
      v36 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
      v37 = *(const char **)(v10 + 32);
      v84 = v8;
      v38 = s1;
      v78 = 1;
      if ( *(_QWORD *)(v35 + 32) )
LABEL_78:
        v38 = (const char *)v36[3];
      if ( strcmp(v37, v38) < 0 )
      {
        while ( 1 )
        {
          v39 = (_QWORD *)v36[1];
          v78 = 1;
          if ( (*(_BYTE *)v39 & 2) != 0 )
            break;
LABEL_82:
          v36 = v39;
          v38 = s1;
          if ( v39[4] )
            goto LABEL_78;
          if ( strcmp(v37, s1) >= 0 )
            goto LABEL_80;
        }
LABEL_85:
        v40 = (__int64)v36;
        v8 = v84;
        v9 = v82;
LABEL_86:
        v41 = v78;
LABEL_88:
        v88.m128i_i64[0] = (__int64)v8;
        v88.m128i_i64[1] = v6;
        sub_1F6390(&v88, v40, v41, &v86);
LABEL_57:
        v6 = v88.m128i_i64[1];
        v8 = (unsigned __int64 *)v88.m128i_i64[0];
        goto LABEL_5;
      }
LABEL_80:
      if ( strcmp(v38, v37) < 0 )
      {
        v39 = (_QWORD *)v36[2];
        v78 = 0;
        if ( (*(_BYTE *)v39 & 2) == 0 )
          goto LABEL_82;
        goto LABEL_85;
      }
      v40 = (__int64)v36;
      v8 = v84;
      v9 = v82;
      if ( !v40 )
        goto LABEL_86;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
    {
      sub_31B520(a2, 0xC6CBu, a4);
    }
LABEL_5:
    if ( !(unsigned __int8)*(_QWORD *)(v10 + 80) )
      sub_31B520(a2, 0xC6CCu, a4);
    if ( (unsigned int)verify_tinfo() )
      sub_31B520(a2, 0xC6CDu, a4);
    v11 = *(_DWORD *)(v10 + 92);
    if ( v11 < 0 || (v12 = *(_DWORD *)(a1 + 64), v11 >= v12) && v12 > 0 )
      sub_31B520(a2, 0xC6CFu, a4);
    if ( (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
    {
      v13 = *(_DWORD *)(v10 + 24);
      if ( (v13 & 0x100) != 0 )
      {
        if ( v11 )
          sub_31B520(a2, 0xC6D0u, a4);
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        {
          v14 = *(_DWORD **)(a1 + 456);
          v15 = &v14[*(_QWORD *)(a1 + 464)];
          if ( v14 == v15 )
LABEL_223:
            sub_31B520(a2, 0xC6D1u, a4);
          while ( *v14 != v9 )
          {
            if ( v15 == ++v14 )
              goto LABEL_223;
          }
        }
      }
      else if ( (v13 & 0x8000) != 0 )
      {
        sub_31B520(a2, 0xCAB0u, a4);
      }
      if ( a3 && (BYTE1(v13) & 1) == ((v13 & 0x100000) != 0) )
        sub_31B520(a2, 0xCB44u, a4);
    }
    if ( *(int *)(v10 + 88) <= 0 )
      sub_31B520(a2, 0xC861u, a4);
    tinfo_size = get_tinfo_size();
    v17 = *(int *)(v10 + 88);
    if ( v17 != tinfo_size )
    {
      if ( v17 >= get_tinfo_size() )
        sub_31B520(a2, 0xC6D2u, a4);
      v18 = *(int *)(v10 + 88);
      if ( v18 != get_tinfo_property() )
        sub_31B520(a2, 0xCAD6u, a4);
    }
    v19 = *(_DWORD *)v10;
    if ( !*(_DWORD *)v10 )
      sub_31B520(a2, 0xC813u, a4);
    if ( *(_DWORD *)(a1 + 480) == v9 )
    {
      if ( v19 == 2 )
      {
        v32 = *(_QWORD *)(v10 + 8);
        v33 = *(_DWORD **)v32;
        v34 = *(_QWORD *)v32 + 24LL * *(_QWORD *)(v32 + 8);
        if ( v33 != (_DWORD *)v34 )
        {
          while ( *v33 != 1 )
          {
            v33 += 6;
            if ( (_DWORD *)v34 == v33 )
              goto LABEL_61;
          }
          goto LABEL_60;
        }
      }
      else if ( v19 == 1 )
      {
LABEL_60:
        if ( (*(_BYTE *)(a1 + 5) & 0x10) == 0 )
          sub_31B520(a2, 0xC6D3u, a4);
      }
LABEL_61:
      if ( *(char *)(v10 + 24) >= 0 )
        sub_31B520(a2, 0xC6D4u, a4);
      goto LABEL_27;
    }
    if ( *(char *)(v10 + 24) < 0 )
      sub_31B520(a2, 0xC6D5u, a4);
LABEL_27:
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      goto LABEL_29;
    v20 = *(_BYTE *)a1 & 1;
    if ( !v20 || (unsigned __int8)sub_1EEA60((unsigned __int8 *)a1) )
      goto LABEL_29;
    v87 = v10;
    if ( !v77 )
    {
      v77 = qalloc();
      v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v77, (__m128i)(unsigned __int64)v77);
      if ( !v77 )
      {
        v5 = __cxa_allocate_exception(8u);
        *v5 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      a4 = 0.0;
      *(_OWORD *)(v77 + 16) = 0;
      *(_OWORD *)(v77 + 32) = 0;
      *(__m128i *)(v77 + 8) = v56;
      *(_QWORD *)v77 = v77 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_68:
      v89.m128i_i64[0] = v77;
      v89.m128i_i64[1] = v80;
      sub_320F10(&v89, (unsigned __int64 *)v77, 1, &v87);
      goto LABEL_69;
    }
    if ( !v80 )
      goto LABEL_68;
    v44 = *(_QWORD *)v77 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v44 & 2) != 0 )
    {
      v46 = (unsigned __int64 *)v77;
      v48 = 1;
      goto LABEL_119;
    }
    v83 = v20;
    while ( 1 )
    {
      v79 = (unsigned __int64 *)v44;
      v85 = (int *)(v44 + 24);
      v45 = sub_3307E0((int *)v10, (int *)(v44 + 24));
      v46 = v79;
      if ( v45 < 0 )
      {
        v83 = v20;
        v47 = (_BYTE *)v79[1];
        goto LABEL_97;
      }
      v57 = sub_3307E0(v85, (int *)v10);
      v46 = v79;
      if ( v57 >= 0 )
        break;
      v83 = 0;
      v47 = (_BYTE *)v79[2];
LABEL_97:
      if ( (*v47 & 2) != 0 )
        goto LABEL_98;
      v44 = (unsigned __int64)v47;
    }
    if ( v79 )
      goto LABEL_131;
LABEL_98:
    v48 = v83;
LABEL_119:
    v89.m128i_i64[0] = v77;
    v89.m128i_i64[1] = v80;
    sub_320F10(&v89, v46, v48, &v87);
LABEL_69:
    v80 = v89.m128i_i64[1];
    v77 = v89.m128i_i64[0];
    if ( !v31 )
LABEL_131:
      sub_31B520(a2, 0xC6D6u, a4);
LABEL_29:
    v7 = ++v9;
  }
  while ( (unsigned __int64)v9 < *(_QWORD *)(a1 + 440) );
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
    goto LABEL_99;
  v21 = *(_QWORD **)(a1 + 872);
  if ( !v21 || !*(_QWORD *)(a1 + 880) )
  {
    if ( !v8 )
      goto LABEL_215;
    if ( v6 )
    {
      if ( v8 != (unsigned __int64 *)v8[1] )
        goto LABEL_52;
      if ( v77 )
        goto LABEL_100;
      goto LABEL_134;
    }
    goto LABEL_122;
  }
  v22 = (_QWORD *)v21[1];
  if ( !v8 )
  {
    if ( v21 != v22 )
    {
      v23 = nullptr;
      goto LABEL_36;
    }
LABEL_215:
    if ( !v77 )
      return v90 - __readfsqword(0x28u);
    v8 = nullptr;
    if ( !v80 )
    {
      qfree(v77);
      return v90 - __readfsqword(0x28u);
    }
LABEL_101:
    v49 = *(_QWORD *)v77;
    v50 = *(_QWORD *)v77 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v50 & 2) != 0 )
      goto LABEL_113;
    v51 = *(_QWORD *)(v50 + 8);
    if ( (*(_BYTE *)v51 & 2) != 0 )
    {
      v52 = *(_QWORD *)(v50 + 16);
      if ( (*(_BYTE *)v52 & 2) == 0 )
        goto LABEL_104;
LABEL_188:
      cleanup_argloc();
      *(_QWORD *)v50 |= 2uLL;
LABEL_111:
      if ( v49 > 3 )
        qfree(v50);
      goto LABEL_113;
    }
    v70 = *(_QWORD **)(v51 + 8);
    if ( (*(_BYTE *)v70 & 2) != 0 )
    {
      v71 = *(_QWORD **)(v51 + 16);
      if ( (*(_BYTE *)v71 & 2) == 0 )
      {
LABEL_171:
        sub_31ADE0(v71);
        goto LABEL_172;
      }
    }
    else
    {
      sub_31ADE0(v70);
      v71 = *(_QWORD **)(v51 + 16);
      if ( (*(_BYTE *)v71 & 2) == 0 )
        goto LABEL_171;
LABEL_172:
      if ( (*(_BYTE *)v51 & 2) != 0 )
      {
LABEL_173:
        if ( v51 )
          qfree(v51);
        v52 = *(_QWORD *)(v50 + 16);
        if ( (*(_BYTE *)v52 & 2) == 0 )
        {
LABEL_104:
          v53 = *(_QWORD **)(v52 + 8);
          if ( (*(_BYTE *)v53 & 2) != 0 )
          {
            v54 = *(_QWORD **)(v52 + 16);
            if ( (*(_BYTE *)v54 & 2) == 0 )
            {
LABEL_106:
              sub_31ADE0(v54);
              goto LABEL_107;
            }
          }
          else
          {
            sub_31ADE0(v53);
            v54 = *(_QWORD **)(v52 + 16);
            if ( (*(_BYTE *)v54 & 2) == 0 )
              goto LABEL_106;
LABEL_107:
            if ( (*(_BYTE *)v52 & 2) != 0 )
            {
LABEL_108:
              if ( v52 )
                qfree(v52);
              goto LABEL_110;
            }
          }
          cleanup_argloc();
          *(_QWORD *)v52 |= 2uLL;
          goto LABEL_108;
        }
LABEL_110:
        if ( (*(_BYTE *)v50 & 2) == 0 )
          goto LABEL_188;
        goto LABEL_111;
      }
    }
    cleanup_argloc();
    *(_QWORD *)v51 |= 2uLL;
    goto LABEL_173;
  }
  if ( !v6 )
  {
    if ( v21 != v22 )
    {
LABEL_163:
      if ( !under_debugger )
        sub_383060(0xC92Fu, a4);
LABEL_224:
      BUG();
    }
LABEL_122:
    if ( !v77 )
      goto LABEL_116;
    if ( !v80 )
    {
      qfree(v77);
      goto LABEL_116;
    }
    goto LABEL_101;
  }
  v23 = (unsigned __int64 *)v8[1];
  if ( v21 == v22 )
  {
    if ( v23 != v8 )
      goto LABEL_52;
    if ( v77 )
      goto LABEL_100;
    goto LABEL_115;
  }
LABEL_36:
  v24 = v21;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v8 == v23 )
        goto LABEL_163;
      v25 = v22[4];
      if ( v23[4] )
      {
        v26 = (const char *)v23[3];
        v27 = s1;
        if ( v25 )
          goto LABEL_40;
LABEL_41:
        if ( strcmp(v27, v26) )
        {
          if ( !under_debugger )
            sub_383060(0xC930u, a4);
          goto LABEL_224;
        }
      }
      else
      {
        v26 = s1;
        if ( v25 )
        {
LABEL_40:
          v27 = (const char *)v22[3];
          goto LABEL_41;
        }
      }
      if ( (*v22 & 2) == 0 )
      {
        v28 = (_QWORD *)v22[2];
        if ( (*(_BYTE *)v28 & 2) != 0 )
        {
          v64 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
          v65 = *v64;
          if ( (*v64 & 2) != 0 || (_QWORD *)v64[2] != v22 )
          {
LABEL_149:
            v22 = v64;
          }
          else
          {
            while ( 1 )
            {
              v22 = (_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
              v65 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v65 & 2) != 0 )
                break;
              v66 = v64;
              v64 = v22;
              if ( (_QWORD *)v22[2] != v66 )
                goto LABEL_149;
            }
          }
        }
        else
        {
          for ( i = (_QWORD *)v28[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
            v28 = i;
          v22 = v28;
        }
      }
      if ( (*v23 & 2) != 0 )
      {
LABEL_50:
        if ( v24 == v22 )
          goto LABEL_51;
        continue;
      }
      break;
    }
    v30 = (unsigned __int64 *)v23[2];
    if ( (*(_BYTE *)v30 & 2) == 0 )
    {
      do
      {
        v23 = v30;
        v30 = (unsigned __int64 *)v30[1];
      }
      while ( (*(_BYTE *)v30 & 2) == 0 );
      goto LABEL_50;
    }
    v67 = (_QWORD *)(*v23 & 0xFFFFFFFFFFFFFFFCLL);
    v68 = *v67;
    if ( (*v67 & 2) == 0 && (unsigned __int64 *)v67[2] == v23 )
    {
      do
      {
        v23 = (unsigned __int64 *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
        v68 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v68 & 2) != 0 )
          goto LABEL_50;
        v69 = v67;
        v67 = v23;
      }
      while ( (_QWORD *)v23[2] == v69 );
    }
    v23 = v67;
    if ( v24 != v22 )
      continue;
    break;
  }
LABEL_51:
  if ( v8 != v23 )
  {
LABEL_52:
    if ( !under_debugger )
      sub_383060(0xC92Eu, a4);
    goto LABEL_224;
  }
LABEL_99:
  if ( v77 )
  {
LABEL_100:
    if ( v80 )
      goto LABEL_101;
LABEL_113:
    qfree(v77);
  }
  if ( !v8 )
    return v90 - __readfsqword(0x28u);
LABEL_115:
  if ( !v6 )
    goto LABEL_116;
LABEL_134:
  v58 = *v8;
  v59 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v59 & 2) != 0 )
    goto LABEL_116;
  v60 = *(_QWORD **)(v59 + 8);
  if ( (*(_BYTE *)v60 & 2) == 0 )
  {
    v72 = (__int64 *)v60[1];
    if ( (*(_BYTE *)v72 & 2) != 0 )
    {
      v73 = (__int64 *)v60[2];
      if ( (*(_BYTE *)v73 & 2) != 0 )
      {
LABEL_206:
        v75 = v60[3];
        if ( v75 )
        {
          v60[4] = 0;
          qfree(v75);
        }
        *v60 |= 2uLL;
LABEL_181:
        if ( v60 )
          qfree((__int64)v60);
        v61 = *(_QWORD *)(v59 + 16);
        if ( (*(_BYTE *)v61 & 2) != 0 )
        {
LABEL_143:
          if ( (*(_BYTE *)v59 & 2) == 0 )
            goto LABEL_185;
          goto LABEL_144;
        }
LABEL_137:
        v62 = *(__int64 **)(v61 + 8);
        if ( (*(_BYTE *)v62 & 2) != 0 )
        {
          v63 = *(__int64 **)(v61 + 16);
          if ( (*(_BYTE *)v63 & 2) != 0 )
            goto LABEL_212;
        }
        else
        {
          sub_31AEE0(v62);
          v63 = *(__int64 **)(v61 + 16);
          if ( (*(_BYTE *)v63 & 2) != 0 )
            goto LABEL_140;
        }
        sub_31AEE0(v63);
LABEL_140:
        if ( (*(_BYTE *)v61 & 2) != 0 )
        {
LABEL_141:
          if ( v61 )
            qfree(v61);
          goto LABEL_143;
        }
LABEL_212:
        v76 = *(_QWORD *)(v61 + 24);
        if ( v76 )
        {
          *(_QWORD *)(v61 + 32) = 0;
          qfree(v76);
        }
        *(_QWORD *)v61 |= 2uLL;
        goto LABEL_141;
      }
    }
    else
    {
      sub_31AEE0(v72);
      v73 = (__int64 *)v60[2];
      if ( (*(_BYTE *)v73 & 2) != 0 )
        goto LABEL_180;
    }
    sub_31AEE0(v73);
LABEL_180:
    if ( (*(_BYTE *)v60 & 2) != 0 )
      goto LABEL_181;
    goto LABEL_206;
  }
  v61 = *(_QWORD *)(v59 + 16);
  if ( (*(_BYTE *)v61 & 2) == 0 )
    goto LABEL_137;
LABEL_185:
  v74 = *(_QWORD *)(v59 + 24);
  if ( v74 )
  {
    *(_QWORD *)(v59 + 32) = 0;
    qfree(v74);
  }
  *(_QWORD *)v59 |= 2uLL;
LABEL_144:
  if ( v58 > 3 )
    qfree(v59);
LABEL_116:
  qfree((__int64)v8);
  return v90 - __readfsqword(0x28u);
}

