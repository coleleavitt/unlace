__int64 __fastcall sub_18D970(__int64 a1, __int64 a2, unsigned int **a3)
{
  void *v3; // r14
  unsigned __int64 v4; // rbx
  unsigned int *v6; // rax
  __m128i v7; // xmm0
  unsigned int *v8; // rbx
  int v9; // ebx
  __int64 i; // rax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+8h] [rbp-70h]
  _QWORD *v15; // [rsp+18h] [rbp-60h]
  __m128i v16; // [rsp+20h] [rbp-58h]
  char v17; // [rsp+30h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v3 = nullptr;
  v4 = *(_QWORD *)(a2 + 8);
  v18 = __readfsqword(0x28u);
  v13 = 0;
  v15 = nullptr;
  v17 = 0;
  v14 = 0;
  v16 = 0;
  if ( v4 )
  {
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)a2, 24 * v4);
  }
  v6 = a3[1];
  v15 = v3;
  v7 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  v8 = *a3;
  v16 = v7;
  if ( 4LL * (_QWORD)v6 )
  {
    while ( (unsigned __int8)sub_18D6A0(a1, (__int64)&v13, *v8, (__int64)a3) )
    {
      if ( ++v8 == &(*a3)[(_QWORD)a3[1]] )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( (_QWORD)v14 )
    {
      v11 = sub_18C250(a1, (__int64)&v13);
      goto LABEL_10;
    }
  }
  v9 = 0;
  for ( i = 0; (unsigned __int64)v9 < v16.m128i_i64[0]; i = v9 )
  {
    sub_18B680((_QWORD *)(a1 + 16), &v15[3 * i]);
    ++v9;
  }
  v11 = 0;
LABEL_10:
  if ( v15 )
  {
    v16.m128i_i64[0] = 0;
    qfree();
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v11;
}

