unsigned __int64 __fastcall sub_319D10(__int64 a1, __int64 a2, char a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 *v7; // rbp
  int v8; // ebx
  __int64 v9; // r12
  int v10; // eax
  int v11; // edx
  int v12; // edx
  _DWORD *v13; // rax
  _DWORD *v14; // rcx
  __int64 tinfo_size; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // r14
  int v18; // eax
  char v19; // r14
  _QWORD *v20; // r8
  _QWORD *v21; // r14
  unsigned __int64 *v22; // rbx
  _QWORD *v23; // r15
  __int64 v24; // rdx
  const char *v25; // rsi
  const char *v26; // rdi
  _QWORD *v27; // rdx
  _QWORD *i; // rax
  unsigned __int64 *v29; // rdx
  char v30; // dl
  __int64 v31; // rdx
  _DWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r10
  unsigned __int64 *v35; // rbx
  const char *v36; // r14
  const char *v37; // rbp
  unsigned __int64 *v38; // rax
  unsigned __int64 *v39; // r10
  char v40; // dl
  __int64 v41; // rax
  __m128i v42; // xmm1
  _BYTE *v43; // r8
  int v44; // eax
  unsigned __int64 *v45; // r8
  _BYTE *v46; // rax
  char v47; // dl
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // rbx
  _QWORD *v52; // rdi
  _QWORD *v53; // rdi
  __m128i v55; // xmm1
  int v56; // eax
  unsigned __int64 v57; // r13
  unsigned __int64 v58; // r12
  _QWORD *v59; // rbx
  __int64 v60; // rbx
  __int64 *v61; // rdi
  __int64 *v62; // rdi
  _QWORD *v63; // rax
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  _QWORD *v69; // rdi
  _QWORD *v70; // rdi
  __int64 *v71; // rdi
  __int64 *v72; // rdi
  __int64 v73; // [rsp+18h] [rbp-A0h]
  char v74; // [rsp+20h] [rbp-98h]
  unsigned __int64 *v75; // [rsp+20h] [rbp-98h]
  __int64 v76; // [rsp+28h] [rbp-90h]
  int v78; // [rsp+34h] [rbp-84h]
  char v79; // [rsp+34h] [rbp-84h]
  unsigned __int64 *v80; // [rsp+38h] [rbp-80h]
  _BYTE *v81; // [rsp+38h] [rbp-80h]
  __int64 v82; // [rsp+40h] [rbp-78h] BYREF
  __int64 v83; // [rsp+48h] [rbp-70h] BYREF
  __m128i v84; // [rsp+50h] [rbp-68h] BYREF
  __m128i v85; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v86; // [rsp+78h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 440);
  v86 = __readfsqword(0x28u);
  v6 = 0;
  if ( !v5 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
      return v86 - __readfsqword(0x28u);
    v20 = *(_QWORD **)(a1 + 872);
    if ( !v20 )
      return v86 - __readfsqword(0x28u);
    if ( !*(_QWORD *)(a1 + 880) )
      return v86 - __readfsqword(0x28u);
    v21 = (_QWORD *)v20[1];
    if ( v20 == v21 )
      return v86 - __readfsqword(0x28u);
    v76 = 0;
    v7 = nullptr;
    v22 = nullptr;
    v73 = 0;
    goto LABEL_36;
  }
  v5 = 0;
  v7 = nullptr;
  v8 = 0;
  v76 = 0;
  v73 = 0;
  do
  {
    v9 = *(_QWORD *)(a1 + 432) + 104 * v6;
    *(_QWORD *)(a2 + 64) = v9;
    if ( *(_QWORD *)(v9 + 40) > 1u )
    {
      v82 = v9 + 32;
      if ( !v7 )
      {
        v41 = qalloc();
        v7 = (unsigned __int64 *)v41;
        v42 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v41);
        if ( !v41 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v41 + 16) = 0;
        *(_OWORD *)(v41 + 32) = 0;
        *(__m128i *)(v41 + 8) = v42;
        *(_QWORD *)v41 = v41 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_56:
        v84.m128i_i64[0] = (__int64)v7;
        v84.m128i_i64[1] = v5;
        sub_1EF010(&v84, v7, 1, &v82);
        goto LABEL_57;
      }
      if ( !v5 )
        goto LABEL_56;
      v34 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v34 & 2) != 0 )
      {
        v39 = v7;
        v40 = 1;
        goto LABEL_88;
      }
      v78 = v8;
      v35 = (unsigned __int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
      v36 = *(const char **)(v9 + 32);
      v80 = v7;
      v37 = s1;
      v74 = 1;
      if ( *(_QWORD *)(v34 + 32) )
LABEL_78:
        v37 = (const char *)v35[3];
      if ( strcmp(v36, v37) < 0 )
      {
        while ( 1 )
        {
          v38 = (unsigned __int64 *)v35[1];
          v74 = 1;
          if ( (*(_BYTE *)v38 & 2) != 0 )
            break;
LABEL_82:
          v35 = v38;
          v37 = s1;
          if ( v38[4] )
            goto LABEL_78;
          if ( strcmp(v36, s1) >= 0 )
            goto LABEL_80;
        }
LABEL_85:
        v39 = v35;
        v7 = v80;
        v8 = v78;
LABEL_86:
        v40 = v74;
LABEL_88:
        v84.m128i_i64[0] = (__int64)v7;
        v84.m128i_i64[1] = v5;
        sub_1EF010(&v84, v39, v40, &v82);
LABEL_57:
        v5 = v84.m128i_i64[1];
        v7 = (unsigned __int64 *)v84.m128i_i64[0];
        goto LABEL_5;
      }
LABEL_80:
      if ( strcmp(v37, v36) < 0 )
      {
        v38 = (unsigned __int64 *)v35[2];
        v74 = 0;
        if ( (*(_BYTE *)v38 & 2) == 0 )
          goto LABEL_82;
        goto LABEL_85;
      }
      v39 = v35;
      v7 = v80;
      v8 = v78;
      if ( !v39 )
        goto LABEL_86;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
    {
      sub_3141A0(a2, 0xC6CBu);
    }
LABEL_5:
    if ( !(unsigned __int8)*(_QWORD *)(v9 + 80) )
      sub_3141A0(a2, 0xC6CCu);
    if ( (unsigned int)verify_tinfo() )
      sub_3141A0(a2, 0xC6CDu);
    v10 = *(_DWORD *)(v9 + 92);
    if ( v10 < 0 || (v11 = *(_DWORD *)(a1 + 64), v10 >= v11) && v11 > 0 )
      sub_3141A0(a2, 0xC6CFu);
    if ( (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
    {
      v12 = *(_DWORD *)(v9 + 24);
      if ( (v12 & 0x100) != 0 )
      {
        if ( v10 )
          sub_3141A0(a2, 0xC6D0u);
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        {
          v13 = *(_DWORD **)(a1 + 456);
          v14 = &v13[*(_QWORD *)(a1 + 464)];
          if ( v13 == v14 )
LABEL_223:
            sub_3141A0(a2, 0xC6D1u);
          while ( *v13 != v8 )
          {
            if ( v14 == ++v13 )
              goto LABEL_223;
          }
        }
      }
      else if ( (v12 & 0x8000) != 0 )
      {
        sub_3141A0(a2, 0xCAB0u);
      }
      if ( a3 && (BYTE1(v12) & 1) == ((v12 & 0x100000) != 0) )
        sub_3141A0(a2, 0xCB44u);
    }
    if ( *(int *)(v9 + 88) <= 0 )
      sub_3141A0(a2, 0xC861u);
    tinfo_size = get_tinfo_size();
    v16 = *(int *)(v9 + 88);
    if ( v16 != tinfo_size )
    {
      if ( v16 >= get_tinfo_size() )
        sub_3141A0(a2, 0xC6D2u);
      v17 = *(int *)(v9 + 88);
      if ( v17 != get_tinfo_property() )
        sub_3141A0(a2, 0xCAD6u);
    }
    v18 = *(_DWORD *)v9;
    if ( !*(_DWORD *)v9 )
      sub_3141A0(a2, 0xC813u);
    if ( *(_DWORD *)(a1 + 480) == v8 )
    {
      if ( v18 == 2 )
      {
        v31 = *(_QWORD *)(v9 + 8);
        v32 = *(_DWORD **)v31;
        v33 = *(_QWORD *)v31 + 24LL * *(_QWORD *)(v31 + 8);
        if ( v32 != (_DWORD *)v33 )
        {
          while ( *v32 != 1 )
          {
            v32 += 6;
            if ( (_DWORD *)v33 == v32 )
              goto LABEL_61;
          }
          goto LABEL_60;
        }
      }
      else if ( v18 == 1 )
      {
LABEL_60:
        if ( (*(_BYTE *)(a1 + 5) & 0x10) == 0 )
          sub_3141A0(a2, 0xC6D3u);
      }
LABEL_61:
      if ( *(char *)(v9 + 24) >= 0 )
        sub_3141A0(a2, 0xC6D4u);
      goto LABEL_27;
    }
    if ( *(char *)(v9 + 24) < 0 )
      sub_3141A0(a2, 0xC6D5u);
LABEL_27:
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      goto LABEL_29;
    v19 = *(_BYTE *)a1 & 1;
    if ( !v19 || (unsigned __int8)sub_1E76E0((unsigned __int8 *)a1) )
      goto LABEL_29;
    v83 = v9;
    if ( !v73 )
    {
      v73 = qalloc();
      v55 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v73, (__m128i)(unsigned __int64)v73);
      if ( !v73 )
      {
        v4 = __cxa_allocate_exception(8u);
        *v4 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v4,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v73 + 16) = 0;
      *(_OWORD *)(v73 + 32) = 0;
      *(__m128i *)(v73 + 8) = v55;
      *(_QWORD *)v73 = v73 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_68:
      v85.m128i_i64[0] = v73;
      v85.m128i_i64[1] = v76;
      sub_319B90(&v85, (unsigned __int64 *)v73, 1, &v83);
      goto LABEL_69;
    }
    if ( !v76 )
      goto LABEL_68;
    v43 = (_BYTE *)(*(_QWORD *)v73 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*v43 & 2) != 0 )
    {
      v45 = (unsigned __int64 *)v73;
      v47 = 1;
      goto LABEL_119;
    }
    v79 = v19;
    while ( 1 )
    {
      v75 = (unsigned __int64 *)v43;
      v81 = v43 + 24;
      v44 = sub_329190(v9, v43 + 24);
      v45 = v75;
      if ( v44 < 0 )
      {
        v79 = v19;
        v46 = (_BYTE *)v75[1];
        goto LABEL_97;
      }
      v56 = sub_329190(v81, v9);
      v45 = v75;
      if ( v56 >= 0 )
        break;
      v79 = 0;
      v46 = (_BYTE *)v75[2];
LABEL_97:
      if ( (*v46 & 2) != 0 )
        goto LABEL_98;
      v43 = v46;
    }
    if ( v75 )
      goto LABEL_131;
LABEL_98:
    v47 = v79;
LABEL_119:
    v85.m128i_i64[0] = v73;
    v85.m128i_i64[1] = v76;
    sub_319B90(&v85, v45, v47, &v83);
LABEL_69:
    v76 = v85.m128i_i64[1];
    v73 = v85.m128i_i64[0];
    if ( !v30 )
LABEL_131:
      sub_3141A0(a2, 0xC6D6u);
LABEL_29:
    v6 = ++v8;
  }
  while ( (unsigned __int64)v8 < *(_QWORD *)(a1 + 440) );
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
    goto LABEL_99;
  v20 = *(_QWORD **)(a1 + 872);
  if ( !v20 || !*(_QWORD *)(a1 + 880) )
  {
    if ( !v7 )
      goto LABEL_215;
    if ( v5 )
    {
      if ( v7 != (unsigned __int64 *)v7[1] )
        goto LABEL_52;
      if ( v73 )
        goto LABEL_100;
      goto LABEL_134;
    }
    goto LABEL_122;
  }
  v21 = (_QWORD *)v20[1];
  if ( !v7 )
  {
    if ( v20 != v21 )
    {
      v22 = nullptr;
      goto LABEL_36;
    }
LABEL_215:
    if ( !v73 )
      return v86 - __readfsqword(0x28u);
    v7 = nullptr;
    if ( !v76 )
      goto LABEL_116;
LABEL_101:
    v48 = *(_QWORD *)v73;
    v49 = *(_QWORD *)v73 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v49 & 2) != 0 )
      goto LABEL_113;
    v50 = *(_QWORD *)(v49 + 8);
    if ( (*(_BYTE *)v50 & 2) != 0 )
    {
      v51 = *(_QWORD *)(v49 + 16);
      if ( (*(_BYTE *)v51 & 2) == 0 )
        goto LABEL_104;
LABEL_188:
      cleanup_argloc();
      *(_QWORD *)v49 |= 2uLL;
LABEL_111:
      if ( v48 > 3 )
        qfree();
      goto LABEL_113;
    }
    v69 = *(_QWORD **)(v50 + 8);
    if ( (*(_BYTE *)v69 & 2) != 0 )
    {
      v70 = *(_QWORD **)(v50 + 16);
      if ( (*(_BYTE *)v70 & 2) == 0 )
      {
LABEL_171:
        sub_313A60(v70);
        goto LABEL_172;
      }
    }
    else
    {
      sub_313A60(v69);
      v70 = *(_QWORD **)(v50 + 16);
      if ( (*(_BYTE *)v70 & 2) == 0 )
        goto LABEL_171;
LABEL_172:
      if ( (*(_BYTE *)v50 & 2) != 0 )
      {
LABEL_173:
        if ( v50 )
          qfree();
        v51 = *(_QWORD *)(v49 + 16);
        if ( (*(_BYTE *)v51 & 2) == 0 )
        {
LABEL_104:
          v52 = *(_QWORD **)(v51 + 8);
          if ( (*(_BYTE *)v52 & 2) != 0 )
          {
            v53 = *(_QWORD **)(v51 + 16);
            if ( (*(_BYTE *)v53 & 2) == 0 )
            {
LABEL_106:
              sub_313A60(v53);
              goto LABEL_107;
            }
          }
          else
          {
            sub_313A60(v52);
            v53 = *(_QWORD **)(v51 + 16);
            if ( (*(_BYTE *)v53 & 2) == 0 )
              goto LABEL_106;
LABEL_107:
            if ( (*(_BYTE *)v51 & 2) != 0 )
            {
LABEL_108:
              if ( v51 )
                qfree();
              goto LABEL_110;
            }
          }
          cleanup_argloc();
          *(_QWORD *)v51 |= 2uLL;
          goto LABEL_108;
        }
LABEL_110:
        if ( (*(_BYTE *)v49 & 2) == 0 )
          goto LABEL_188;
        goto LABEL_111;
      }
    }
    cleanup_argloc();
    *(_QWORD *)v50 |= 2uLL;
    goto LABEL_173;
  }
  if ( !v5 )
  {
    if ( v20 != v21 )
    {
LABEL_163:
      if ( !under_debugger )
        sub_37B760(51503);
LABEL_224:
      BUG();
    }
LABEL_122:
    if ( !v73 )
      goto LABEL_116;
    if ( !v76 )
      goto LABEL_124;
    goto LABEL_101;
  }
  v22 = (unsigned __int64 *)v7[1];
  if ( v20 == v21 )
  {
    if ( v22 != v7 )
      goto LABEL_52;
    if ( v73 )
      goto LABEL_100;
    goto LABEL_115;
  }
LABEL_36:
  v23 = v20;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v7 == v22 )
        goto LABEL_163;
      v24 = v21[4];
      if ( v22[4] )
      {
        v25 = (const char *)v22[3];
        v26 = s1;
        if ( v24 )
          goto LABEL_40;
LABEL_41:
        if ( strcmp(v26, v25) )
        {
          if ( !under_debugger )
            sub_37B760(51504);
          goto LABEL_224;
        }
      }
      else
      {
        v25 = s1;
        if ( v24 )
        {
LABEL_40:
          v26 = (const char *)v21[3];
          goto LABEL_41;
        }
      }
      if ( (*v21 & 2) == 0 )
      {
        v27 = (_QWORD *)v21[2];
        if ( (*(_BYTE *)v27 & 2) != 0 )
        {
          v63 = (_QWORD *)(*v21 & 0xFFFFFFFFFFFFFFFCLL);
          v64 = *v63;
          if ( (*v63 & 2) != 0 || (_QWORD *)v63[2] != v21 )
          {
LABEL_149:
            v21 = v63;
          }
          else
          {
            while ( 1 )
            {
              v21 = (_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCLL);
              v64 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v64 & 2) != 0 )
                break;
              v65 = v63;
              v63 = v21;
              if ( (_QWORD *)v21[2] != v65 )
                goto LABEL_149;
            }
          }
        }
        else
        {
          for ( i = (_QWORD *)v27[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
            v27 = i;
          v21 = v27;
        }
      }
      if ( (*v22 & 2) != 0 )
      {
LABEL_50:
        if ( v23 == v21 )
          goto LABEL_51;
        continue;
      }
      break;
    }
    v29 = (unsigned __int64 *)v22[2];
    if ( (*(_BYTE *)v29 & 2) == 0 )
    {
      do
      {
        v22 = v29;
        v29 = (unsigned __int64 *)v29[1];
      }
      while ( (*(_BYTE *)v29 & 2) == 0 );
      goto LABEL_50;
    }
    v66 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
    v67 = *v66;
    if ( (*v66 & 2) == 0 && (unsigned __int64 *)v66[2] == v22 )
    {
      do
      {
        v22 = (unsigned __int64 *)(v67 & 0xFFFFFFFFFFFFFFFCLL);
        v67 = *(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v67 & 2) != 0 )
          goto LABEL_50;
        v68 = v66;
        v66 = v22;
      }
      while ( (_QWORD *)v22[2] == v68 );
    }
    v22 = v66;
    if ( v23 != v21 )
      continue;
    break;
  }
LABEL_51:
  if ( v7 != v22 )
  {
LABEL_52:
    if ( !under_debugger )
      sub_37B760(51502);
    goto LABEL_224;
  }
LABEL_99:
  if ( v73 )
  {
LABEL_100:
    if ( v76 )
      goto LABEL_101;
LABEL_113:
    qfree();
  }
  if ( !v7 )
    return v86 - __readfsqword(0x28u);
LABEL_115:
  if ( !v5 )
    goto LABEL_116;
LABEL_134:
  v57 = *v7;
  v58 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v58 & 2) != 0 )
    goto LABEL_116;
  v59 = *(_QWORD **)(v58 + 8);
  if ( (*(_BYTE *)v59 & 2) == 0 )
  {
    v71 = (__int64 *)v59[1];
    if ( (*(_BYTE *)v71 & 2) != 0 )
    {
      v72 = (__int64 *)v59[2];
      if ( (*(_BYTE *)v72 & 2) != 0 )
      {
LABEL_206:
        if ( v59[3] )
        {
          v59[4] = 0;
          qfree();
        }
        *v59 |= 2uLL;
LABEL_181:
        if ( v59 )
          qfree();
        v60 = *(_QWORD *)(v58 + 16);
        if ( (*(_BYTE *)v60 & 2) != 0 )
        {
LABEL_143:
          if ( (*(_BYTE *)v58 & 2) == 0 )
            goto LABEL_185;
          goto LABEL_144;
        }
LABEL_137:
        v61 = *(__int64 **)(v60 + 8);
        if ( (*(_BYTE *)v61 & 2) != 0 )
        {
          v62 = *(__int64 **)(v60 + 16);
          if ( (*(_BYTE *)v62 & 2) != 0 )
            goto LABEL_212;
        }
        else
        {
          sub_313B60(v61);
          v62 = *(__int64 **)(v60 + 16);
          if ( (*(_BYTE *)v62 & 2) != 0 )
            goto LABEL_140;
        }
        sub_313B60(v62);
LABEL_140:
        if ( (*(_BYTE *)v60 & 2) != 0 )
        {
LABEL_141:
          if ( v60 )
            qfree();
          goto LABEL_143;
        }
LABEL_212:
        if ( *(_QWORD *)(v60 + 24) )
        {
          *(_QWORD *)(v60 + 32) = 0;
          qfree();
        }
        *(_QWORD *)v60 |= 2uLL;
        goto LABEL_141;
      }
    }
    else
    {
      sub_313B60(v71);
      v72 = (__int64 *)v59[2];
      if ( (*(_BYTE *)v72 & 2) != 0 )
        goto LABEL_180;
    }
    sub_313B60(v72);
LABEL_180:
    if ( (*(_BYTE *)v59 & 2) != 0 )
      goto LABEL_181;
    goto LABEL_206;
  }
  v60 = *(_QWORD *)(v58 + 16);
  if ( (*(_BYTE *)v60 & 2) == 0 )
    goto LABEL_137;
LABEL_185:
  if ( *(_QWORD *)(v58 + 24) )
  {
    *(_QWORD *)(v58 + 32) = 0;
    qfree();
  }
  *(_QWORD *)v58 |= 2uLL;
LABEL_144:
  if ( v57 > 3 )
LABEL_124:
    qfree();
LABEL_116:
  qfree();
  return v86 - __readfsqword(0x28u);
}

