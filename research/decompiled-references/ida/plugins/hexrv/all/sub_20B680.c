__int64 __fastcall sub_20B680(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r12
  bool v6; // zf
  __int64 v7; // r15
  int v8; // edx
  int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v16; // r12
  const char *v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r14
  char *v20; // rax
  unsigned __int64 v21; // rbp
  int v22; // r15d
  char *v23; // r13
  __int64 v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rax
  const char *v27; // r11
  const char *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  char *v31; // rdi
  char *v32; // r12
  __int64 v33; // rax
  char *v34; // rdx
  __m128i v35; // xmm0
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  int j; // r12d
  char *v40; // rsi
  const char *v41; // rdi
  unsigned __int8 v42; // [rsp+8h] [rbp-130h]
  int i; // [rsp+10h] [rbp-128h]
  char v44; // [rsp+10h] [rbp-128h]
  __int64 v45; // [rsp+18h] [rbp-120h]
  int tinfo_size; // [rsp+20h] [rbp-118h]
  __int64 v47; // [rsp+28h] [rbp-110h]
  unsigned __int8 tinfo_details; // [rsp+32h] [rbp-106h]
  char v49; // [rsp+33h] [rbp-105h]
  int v50; // [rsp+34h] [rbp-104h]
  char *v51; // [rsp+38h] [rbp-100h]
  __int64 v52; // [rsp+48h] [rbp-F0h] BYREF
  __int64 tinfo_property; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v54; // [rsp+58h] [rbp-E0h]
  __int64 v55; // [rsp+70h] [rbp-C8h]
  __int128 v56; // [rsp+78h] [rbp-C0h]
  __int64 v57; // [rsp+88h] [rbp-B0h]
  __int64 v58; // [rsp+90h] [rbp-A8h]
  __int64 v59; // [rsp+98h] [rbp-A0h]
  __int128 v60; // [rsp+A0h] [rbp-98h]
  __int64 v61; // [rsp+B0h] [rbp-88h]
  __int128 v62; // [rsp+B8h] [rbp-80h]
  char v63; // [rsp+C8h] [rbp-70h]
  char *s2; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v65; // [rsp+D8h] [rbp-60h]
  __int64 v66; // [rsp+E8h] [rbp-50h]
  _QWORD v67[9]; // [rsp+F0h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a1;
  tinfo_details = a3;
  v67[1] = __readfsqword(0x28u);
  v57 = 0;
  v5 = sub_252170(a1 + 16);
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 16;
  s2 = nullptr;
  v66 = -1;
  v67[0] = 0xFFFFFFFF00000000LL;
  v56 = 0;
  v60 = 0;
  v62 = 0;
  v65 = 0;
  v6 = *(_DWORD *)(v5 + 8) == 57;
  v55 = 0;
  if ( !v6 )
    goto LABEL_7;
  v7 = *(_QWORD *)(v5 + 24);
  if ( a2 == v7 )
    goto LABEL_7;
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 == 51 )
  {
    v9 = 1;
    do
    {
      LODWORD(v67[0]) = v9;
      v7 = *(_QWORD *)(v7 + 24);
      ++v9;
      v8 = *(_DWORD *)(v7 + 8);
    }
    while ( v8 == 51 );
  }
  if ( v8 != 64 )
  {
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  v52 = 0;
  v45 = *(_QWORD *)(a1 + 216);
  if ( (get_aflags() & 0x2000000) != 0 || !(unsigned __int8)sub_37BE20(v45, *(_QWORD *)(v7 + 24), &v52, 2) )
    goto LABEL_50;
  for ( i = 0; i < SLODWORD(v67[0]); ++i )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    ++LODWORD(v67[0]);
  }
  if ( (get_tinfo_property() & 0xF) != 0xC )
  {
    if ( !under_debugger )
      sub_37DDE0(52514);
    BUG();
  }
  tinfo_property = 0;
  tinfo_property = get_tinfo_property();
  v44 = compare_tinfo();
  clear_tinfo_t();
  if ( !v44 )
    goto LABEL_50;
  if ( !(unsigned __int8)get_tinfo_details() )
    goto LABEL_50;
  if ( !sub_27F760(v5, a2, (char *)v67 + 4) )
    goto LABEL_50;
  if ( SHIDWORD(v67[0]) >= (unsigned __int64)v56 )
    goto LABEL_50;
  v16 = v55 + 80LL * SHIDWORD(v67[0]);
  tinfo_size = get_tinfo_size();
  if ( *(_QWORD *)(v16 + 24) > 1u && !(unsigned __int8)sub_208D80(*(_DWORD **)(v45 + 112), v16 + 16, tinfo_size) )
    goto LABEL_50;
  v49 = sub_20A630((__int64)&s2, *(const char **)(a1 + 8), 0xFFFFFFFF, a2, 0xFFFFFFFF);
  if ( !v49 )
    goto LABEL_50;
  if ( !*(_QWORD *)(v16 + 24) )
  {
    v17 = s1;
    if ( !v65.m128i_i64[0] )
      goto LABEL_50;
    goto LABEL_57;
  }
  v17 = *(const char **)(v16 + 16);
  if ( v65.m128i_i64[0] )
  {
LABEL_57:
    v32 = s2;
    if ( !strcmp(s2, v17) || !strcmp(v32, "result") || !strcmp(v32, "this") && HIDWORD(v67[0]) )
      goto LABEL_50;
    goto LABEL_35;
  }
  if ( !*v17 )
  {
LABEL_50:
    clear_tinfo_t();
    v31 = s2;
    goto LABEL_51;
  }
LABEL_35:
  if ( (unsigned __int8)sub_208D80(*(_DWORD **)(v45 + 112), (__int64)&s2, tinfo_size) )
    goto LABEL_50;
  tinfo_property = 0;
  v54 = 0;
  if ( !(unsigned __int8)sub_2082D0((__int64)&tinfo_property, v7) )
  {
    v18 = tinfo_property;
    goto LABEL_38;
  }
  if ( v65.m128i_i64[0] )
  {
    v40 = s2;
    if ( !(_QWORD)v54 )
    {
      v18 = tinfo_property;
      v41 = s1;
      goto LABEL_78;
    }
  }
  else
  {
    if ( !(_QWORD)v54 )
    {
      v18 = tinfo_property;
      goto LABEL_72;
    }
    v40 = (char *)s1;
  }
  v18 = tinfo_property;
  v41 = (const char *)tinfo_property;
LABEL_78:
  if ( strcmp(v41, v40) )
  {
LABEL_38:
    if ( (_QWORD)v56 )
    {
      v42 = v3;
      v19 = v4;
      v50 = HIDWORD(v67[0]);
      v20 = (char *)s1;
      v21 = v56;
      if ( v65.m128i_i64[0] )
        v20 = s2;
      v22 = 0;
      v23 = s2;
      v47 = v18;
      v24 = v55;
      v25 = v65.m128i_i64[0];
      v51 = v20;
      v26 = 0;
      while ( 1 )
      {
        if ( v50 == v22 )
          goto LABEL_44;
        v29 = v24 + 80 * v26;
        v30 = *(_QWORD *)(v29 + 24);
        if ( v25 )
        {
          v27 = v23;
          v28 = s1;
          if ( !v30 )
            goto LABEL_43;
        }
        else if ( !v30 )
        {
LABEL_71:
          v4 = v19;
          v3 = v42;
          v18 = v47;
          goto LABEL_72;
        }
        v28 = *(const char **)(v29 + 16);
        v27 = v51;
LABEL_43:
        if ( !strcmp(v28, v27) )
          goto LABEL_71;
LABEL_44:
        v26 = ++v22;
        if ( v22 >= v21 )
        {
          v4 = v19;
          v3 = v42;
          v18 = v47;
          break;
        }
      }
    }
    if ( !v18 )
    {
      clear_tinfo_t();
      v31 = s2;
      goto LABEL_65;
    }
    goto LABEL_73;
  }
LABEL_72:
  v49 = 0;
  if ( !v18 )
    goto LABEL_50;
LABEL_73:
  *(_QWORD *)&v54 = 0;
  qfree();
  clear_tinfo_t();
  v31 = s2;
  if ( v49 )
  {
LABEL_65:
    if ( !v3 )
    {
      v33 = v55 + 80LL * SHIDWORD(v67[0]);
      v34 = *(char **)(v33 + 16);
      v35 = _mm_loadu_si128((const __m128i *)(v33 + 24));
      *(_QWORD *)(v33 + 16) = v31;
      *(__m128i *)(v33 + 24) = v65;
      s2 = v34;
      v52 = 0;
      v65 = v35;
      create_tinfo();
      tinfo_details = get_tinfo_details();
      if ( tinfo_details )
      {
        v38 = v67[0];
        for ( j = 0; SLODWORD(v67[0]) > j; ++j )
        {
          sub_327290(&tinfo_property, *(_QWORD *)(*(_QWORD *)(v4 + 216) + 112LL), &v52);
          copy_tinfo_t();
          clear_tinfo_t();
        }
        sub_37CA90(*(_QWORD *)(v4 + 216), v66, (unsigned int)&v52, v36, v37, v38);
      }
      clear_tinfo_t();
      v31 = s2;
    }
    goto LABEL_52;
  }
LABEL_51:
  tinfo_details = 0;
LABEL_52:
  if ( v31 )
  {
    v65.m128i_i64[0] = 0;
    qfree();
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  v10 = tinfo_details;
LABEL_8:
  cleanup_argloc();
  clear_tinfo_t();
  v11 = v55;
  if ( v55 )
  {
    v12 = v56;
    if ( (_QWORD)v56 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v11 + 80 * v13);
        clear_tinfo_t();
        if ( v14[5] )
        {
          v14[6] = 0;
          qfree();
        }
        if ( v14[2] )
        {
          v14[3] = 0;
          qfree();
        }
        ++v13;
        cleanup_argloc();
        v11 = v55;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  return v10;
}

