unsigned __int64 __fastcall sub_29AB0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  char *v8; // rdi
  __int64 v9; // rdx
  char *v10; // rsi
  size_t v11; // rbx
  void *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  void *v16; // rdi
  char *v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rbx
  char *v20; // rax
  void *v21; // rdi
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+18h] [rbp-B0h]
  __int64 v26; // [rsp+20h] [rbp-A8h]
  void *v27; // [rsp+28h] [rbp-A0h]
  void *v28; // [rsp+30h] [rbp-98h] BYREF
  __int128 v29; // [rsp+38h] [rbp-90h]
  void *v30; // [rsp+50h] [rbp-78h] BYREF
  __int128 v31; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+78h] [rbp-50h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v25 = a3;
  v26 = a4;
  v34 = __readfsqword(0x28u);
  v29 = 0;
  v28 = nullptr;
  v30 = nullptr;
  v27 = &v28;
  v31 = 0;
  v6 = 0;
  v30 = (void *)sub_1987B0(&v30, 0, 16, 1);
  memset((char *)v30 + v31, 0, 16 - v31);
  v7 = a2[1];
  *(_QWORD *)&v31 = 16;
  v27 = &v28;
  if ( v7 )
  {
    do
    {
      v9 = v29;
      v10 = (char *)v28;
      v24 = _mm_loadu_si128((const __m128i *)(*a2 + 16 * v6));
      if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
      {
        v28 = (void *)sub_1987B0(v27, v28, v29 + 1, 24);
        v9 = v29;
        v10 = (char *)v28;
      }
      v8 = &v10[24 * v9];
      *(_QWORD *)v8 = 0;
      *(_OWORD *)(v8 + 8) = 0;
      *(_QWORD *)&v29 = v29 + 1;
      sub_299F0((char **)v8);
      *(__m128i *)v30 = _mm_load_si128(&v24);
      sub_29020(a1, (__int64)&v30);
      ++v6;
    }
    while ( v7 != v6 );
  }
  ptr = nullptr;
  *(_OWORD *)n = 0;
  sub_289B0((__int64 *)&ptr, v27);
  v11 = n[0];
  v12 = nullptr;
  if ( n[0] )
  {
    v12 = (void *)sub_198760(n[0]);
    memcpy(v12, ptr, v11);
  }
  v13 = a1[16];
  v14 = a1[15];
  if ( a1[17] < (unsigned __int64)(v13 + 1) )
  {
    v23 = sub_1987B0(a1 + 15, v14, v13 + 1, 24);
    a1[15] = v23;
    v13 = a1[16];
    v14 = v23;
  }
  v15 = v14 + 24 * v13;
  *(_QWORD *)v15 = v12;
  v16 = ptr;
  *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  ++a1[16];
  if ( v16 )
  {
    n[0] = 0;
    j__free(v16);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    j__free(v30);
  }
  v17 = (char *)v28;
  if ( v28 )
  {
    v18 = v29;
    if ( (_QWORD)v29 )
    {
      v19 = 0;
      do
      {
        v20 = &v17[24 * v19];
        v21 = *(void **)v20;
        if ( *(_QWORD *)v20 )
        {
          *((_QWORD *)v20 + 1) = 0;
          j__free(v21);
          v17 = (char *)v28;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v29 = 0;
    j__free(v17);
  }
  return v34 - __readfsqword(0x28u);
}
