__int64 __fastcall sub_194030(__int64 a1, __int64 a2, unsigned int **a3, __int64 a4, double a5, __m128 a6)
{
  void *v6; // r14
  unsigned __int64 v7; // rbx
  unsigned int *v9; // rax
  __m128i v10; // xmm0
  unsigned int *v11; // rbx
  int v12; // ebx
  __int64 i; // rax
  unsigned int v14; // ebx
  __int64 v16; // [rsp+0h] [rbp-78h] BYREF
  __int128 v17; // [rsp+8h] [rbp-70h]
  _QWORD *v18; // [rsp+18h] [rbp-60h]
  __m128i v19; // [rsp+20h] [rbp-58h]
  char v20; // [rsp+30h] [rbp-48h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v6 = nullptr;
  v7 = *(_QWORD *)(a2 + 8);
  v21 = __readfsqword(0x28u);
  v16 = 0;
  v18 = nullptr;
  v20 = 0;
  v17 = 0;
  v19 = 0;
  if ( v7 )
  {
    v6 = (void *)qalloc_or_throw(24 * v7, a2, (__int64)a3, a4);
    memcpy(v6, *(const void **)a2, 24 * v7);
  }
  v9 = a3[1];
  v18 = v6;
  v10 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  v11 = *a3;
  v19 = v10;
  if ( 4LL * (_QWORD)v9 )
  {
    while ( (unsigned __int8)sub_193D60(a1, (__int64)&v16, *v11, (__int64)a3, *(double *)v10.m128i_i64, a6) )
    {
      if ( ++v11 == &(*a3)[(_QWORD)a3[1]] )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( (_QWORD)v17 )
    {
      v14 = sub_192910(a1, (__int64)&v16, v10);
      goto LABEL_10;
    }
  }
  v12 = 0;
  for ( i = 0; (unsigned __int64)v12 < v19.m128i_i64[0]; i = v12 )
  {
    sub_191D40((_QWORD *)(a1 + 16), &v18[3 * i]);
    ++v12;
  }
  v14 = 0;
LABEL_10:
  if ( v18 )
  {
    v19.m128i_i64[0] = 0;
    qfree((__int64)v18);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v14;
}

