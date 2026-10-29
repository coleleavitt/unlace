unsigned __int64 __fastcall sub_262CE0(
        void **a1,
        __int64 a2,
        const char *a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        double a7)
{
  const char *v8; // r15
  int v9; // r14d
  const char *v10; // rcx
  int v11; // r13d
  int utf8_char; // eax
  int v13; // edx
  size_t v14; // rsi
  size_t v15; // r13
  const char *v16; // rax
  __int64 v17; // rdx
  char *v18; // rdi
  __int64 (__fastcall *v19)(_QWORD *, _QWORD, void *, const char *); // r8
  const char *v20; // rcx
  int v21; // edx
  const char *v22; // rdx
  int i; // [rsp+18h] [rbp-68h]
  const char *v30; // [rsp+28h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-58h]
  const char *v32; // [rsp+30h] [rbp-50h] BYREF
  __int128 v33; // [rsp+38h] [rbp-48h]
  unsigned __int64 v34; // [rsp+48h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  for ( i = 1; ; ++i )
  {
    v32 = a3;
    v8 = a3;
    v9 = *(_DWORD *)(a2 + 600) - a5;
    v10 = &a3[strlen(a3)];
    if ( v9 <= 8 )
      v9 = 0x7FFFFFFF;
    v30 = v10;
    v11 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v30 < v8 )
        {
          if ( !under_debugger )
            sub_383060(0xCDA6u, a7);
LABEL_50:
          BUG();
        }
        utf8_char = get_utf8_char();
        if ( utf8_char == -1 )
        {
          if ( !under_debugger )
            sub_383060(0xC81Au, a7);
          goto LABEL_50;
        }
        v8 = v32;
        if ( !utf8_char )
          goto LABEL_12;
        if ( utf8_char == 92 )
          break;
        if ( ++v11 >= v9 )
          goto LABEL_12;
      }
      if ( (unsigned __int8)back_char() == 10 )
        break;
      v13 = (_DWORD)v32 - (_DWORD)v8;
      v8 = v32;
      v11 += v13 + 1;
      if ( v11 >= v9 )
        goto LABEL_12;
    }
    LODWORD(v8) = (_DWORD)v32;
LABEL_12:
    v14 = (int)v8 - (int)a3;
    v15 = v14;
    v16 = &a3[v14];
    if ( (int)v8 - (int)a3 > 1 && *(v16 - 1) == 110 && *(v16 - 2) == 92 )
    {
      v32 = nullptr;
      a7 = 0.0;
      v17 = v14 + 1;
      v33 = 0;
      goto LABEL_16;
    }
    v22 = v16 + 16;
    while ( *v16 )
    {
      if ( ++v16 == v22 )
        goto LABEL_28;
    }
    v15 = (int)v16 - (int)a3;
LABEL_28:
    a7 = 0.0;
    v32 = nullptr;
    v33 = 0;
    if ( !v15 )
      break;
    v17 = v15 + 1;
    if ( v15 == -1 )
    {
      v18 = nullptr;
      v15 = -1;
    }
    else
    {
LABEL_16:
      v31 = v17;
      v32 = (const char *)qvector_reserve((__int64)&v32, 0, v17, 1);
      v17 = v31;
      v18 = (char *)v32;
    }
    *(_QWORD *)&v33 = v17;
    memmove(v18, a3, v15);
    v32[v15] = 0;
    if ( i == 1 )
      goto LABEL_34;
    v19 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a6;
    if ( (_QWORD)v33 )
      v20 = v32;
    else
      v20 = s1;
LABEL_20:
    v21 = a5 + v19(a6, a5, &unk_4192B1, v20);
LABEL_21:
    a3 += v15;
    if ( !*a3 )
      goto LABEL_37;
LABEL_22:
    sub_262740(a1, a2, v21, 0, (char *)&unk_418793, a6, 0);
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree((__int64)v32);
    }
  }
  if ( i != 1 )
  {
    v20 = s1;
    v19 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a6;
    goto LABEL_20;
  }
LABEL_34:
  v21 = sub_25F4D0(a5, (void (__fastcall ***)(_QWORD, _QWORD, void *, const char *))a6, a4, (__int64)&v32, 0, 0.0);
  if ( a4 == 3 )
  {
    a5 += 6;
    goto LABEL_21;
  }
  if ( a4 == 4 )
  {
    ++a5;
    goto LABEL_21;
  }
  a3 += v15;
  a5 += a4 == 2;
  if ( *a3 )
    goto LABEL_22;
LABEL_37:
  if ( a4 == 3 )
    (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a6)(a6, 0, &unk_41902D);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree((__int64)v32);
  }
  return v34 - __readfsqword(0x28u);
}

