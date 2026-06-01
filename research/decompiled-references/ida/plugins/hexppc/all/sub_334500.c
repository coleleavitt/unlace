__int64 __fastcall sub_334500(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // r13
  unsigned int v3; // ebx
  __int64 v5; // rbx
  char **v6; // r14
  __int64 v7; // r15
  const char **v8; // rbp
  const __m128i *v9; // r15
  const char *v10; // rbp
  const char *v11; // rsi
  __m128i *v12; // rbx
  int v13; // [rsp+4h] [rbp-5Ch]
  char *s1; // [rsp+8h] [rbp-58h] BYREF
  __int128 v15; // [rsp+10h] [rbp-50h]
  unsigned __int64 v16; // [rsp+20h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v15 = 0;
  s1 = nullptr;
  if ( !(unsigned __int8)sub_1CF070((__int64 *)&s1, a1, 0) )
    goto LABEL_20;
  v1 = v15;
  v2 = s1;
  if ( (_QWORD)v15
    && (!strcmp(s1, "runtime_newobject") || (unsigned __int64)(v1 - 1) > 0x10
                                         && !strncmp(v2, "runtime_morestack", 0x11u)) )
  {
    v3 = 2 * (unsigned __int8)parse_decl();
    goto LABEL_7;
  }
  if ( !(_BYTE)byte_4DC898 && __cxa_guard_acquire(&byte_4DC898) )
  {
    v9 = &xmmword_4DB5F0 - 1;
    sub_3342B0((__int64)(&xmmword_4DB5F0 - 17), &xmmword_4DB5F0, 8);
    sub_324B50((const char **)&xmmword_4DB5F0 - 34, (const char **)&xmmword_4DB5F0 - 2);
    v10 = off_4DB5E0;
    v13 = dword_4DB5E8;
    while ( 1 )
    {
      v11 = (const char *)v9[-1].m128i_i64[0];
      v12 = (__m128i *)v9--;
      if ( strcmp(v10, v11) >= 0 )
        break;
      v9[1] = _mm_load_si128(v9);
    }
    v12->m128i_i64[0] = (__int64)v10;
    v12->m128i_i32[2] = v13;
    __cxa_guard_release(&byte_4DC898);
  }
  if ( !strncmp(v2, "objc_msgSend", 0xCu) )
    goto LABEL_19;
  v5 = 17;
  v6 = &off_4DB4E0;
  while ( v5 > 0 )
  {
    while ( 1 )
    {
      v7 = v5 >> 1;
      v8 = (const char **)&v6[2 * (v5 >> 1)];
      if ( strcmp(*v8, v2) < 0 )
        break;
      v5 >>= 1;
      if ( v7 <= 0 )
        goto LABEL_16;
    }
    v6 = (char **)(v8 + 2);
    v5 = v5 - 1 - v7;
  }
LABEL_16:
  if ( v6 != (char **)&xmmword_4DB5F0 && !strcmp(v2, *v6) && *((_DWORD *)v6 + 2) != 31 )
  {
LABEL_19:
    get_stock_tinfo();
    v3 = 2;
  }
  else
  {
LABEL_20:
    v3 = 0;
  }
LABEL_7:
  if ( s1 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v3;
}

