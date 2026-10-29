__int64 sub_33F690()
{
  __int64 module_data; // r12
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // eax
  const char *v4; // r8
  size_t v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  char v10; // cl
  char v11; // al
  char v12; // cl
  char v13; // cl
  char v14; // al
  char v15; // cl
  const char *src; // [rsp+8h] [rbp-90h]
  __int16 v18; // [rsp+1Eh] [rbp-7Ah] BYREF
  __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  __int128 v20; // [rsp+28h] [rbp-70h]
  void *v21; // [rsp+40h] [rbp-58h] BYREF
  __int128 v22; // [rsp+48h] [rbp-50h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  module_data = get_module_data();
  v20 = 0;
  v19 = 0;
  v1 = qvector_reserve((__int64)&v19, 0, 45, 1);
  v19 = v1;
  v2 = 0;
  *(_QWORD *)&v20 = 45;
  *(__m128i *)v1 = _mm_load_si128((const __m128i *)&xmmword_424970);
  v18 = 0;
  *(__m128i *)(v1 + 16) = _mm_load_si128((const __m128i *)&xmmword_424980);
  *(__m128i *)(v1 + 28) = _mm_load_si128((const __m128i *)&xmmword_424990);
  *(_BYTE *)(v19 + 44) = 0;
  do
  {
    v3 = *(unsigned __int8 *)(module_data + 728);
    if ( _bittest(&v3, v2) )
      v18 |= 1 << v2;
    v4 = off_4E59C0[v2];
    v21 = nullptr;
    v22 = 0;
    if ( v4 )
    {
      src = v4;
      v5 = strlen(v4);
      v21 = (void *)qvector_reserve((__int64)&v21, 0, v5 + 1, 1);
      *(_QWORD *)&v22 = v5 + 1;
      memmove(v21, src, v5);
      *((_BYTE *)v21 + v5) = 0;
    }
    strrpl();
    sub_FAAD0(&v19);
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree((__int64)v21);
    }
    v6 = v2 + 1;
    v2 = 1;
  }
  while ( v6 != 2 );
  v7 = v20;
  v8 = 3;
  if ( (_QWORD)v20 )
  {
    v6 = v20 + 1;
    v8 = v20 + 2;
    v7 = v20 - 1;
  }
  v9 = v19;
  if ( *((_QWORD *)&v20 + 1) < v8 )
  {
    v19 = qvector_reserve((__int64)&v19, v19, v8, 1);
    v9 = v19;
  }
  *(_QWORD *)&v20 = v8;
  *(_BYTE *)(v9 + v6) = 0;
  *(_WORD *)(v19 + v7) = 2570;
  if ( (unsigned int)sub_33CF00(v19, &v18) )
  {
    v10 = *(_BYTE *)(module_data + 728);
    v11 = v10 | 1;
    v12 = v10 & 0xFE;
    if ( (v18 & 1) == 0 )
      v11 = v12;
    v13 = v11;
    v14 = v11 & 0xFD;
    v15 = v13 | 2;
    if ( (v18 & 2) != 0 )
      v14 = v15;
    *(_BYTE *)(module_data + 728) = v14;
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  return 0;
}

