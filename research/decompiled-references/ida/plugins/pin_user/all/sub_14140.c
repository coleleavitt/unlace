__int64 __fastcall sub_14140(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rax
  const char *v8; // r13
  int v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+8h] [rbp-70h]
  __int128 v11; // [rsp+10h] [rbp-68h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( (dword_3A5A0 & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 1008) )
    {
      v8 = *(const char **)(a1 + 1000);
      if ( !strcmp(v8, "localhost") || !strcmp(v8, "127.0.0.1") )
        return sub_13980(a1, a2);
    }
  }
  v2 = *a2;
  if ( *a2 )
  {
    v3 = a2[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + (i << 6));
        if ( v5[5] )
        {
          v5[6] = 0;
          qfree();
        }
        if ( v5[1] )
        {
          v5[2] = 0;
          qfree();
        }
        v2 = *a2;
      }
    }
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  v11 = 0;
  v12 = 0;
  v9 = 0;
  v13 = 0;
  v6 = qvector_reserve();
  v10 = v6;
  *(_QWORD *)&v11 = 42;
  *(__m128i *)v6 = _mm_load_si128((const __m128i *)&xmmword_301D0);
  *(__m128i *)(v6 + 16) = _mm_load_si128((const __m128i *)&xmmword_301E0);
  *(__m128i *)(v6 + 25) = _mm_load_si128((const __m128i *)&xmmword_301F0);
  *(_BYTE *)(v10 + 41) = 0;
  sub_136C0((__int64)a2, (__int64)&v9);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return 1;
}

