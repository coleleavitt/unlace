unsigned __int64 __fastcall sub_1ECF20(__int64 a1, _QWORD *a2, __m128i *a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __m128i *v8; // rdx
  __int64 v9; // rcx
  void *v11; // rax
  const void *v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v4 = a2[27];
  v17 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  if ( v4 )
  {
    v11 = (void *)qalloc_or_throw(16 * v4, (__int64)a2, (__int64)a3, a4);
    v12 = (const void *)a2[26];
    *((_QWORD *)&v14 + 1) = v4;
    v13 = (__int64)v11;
    memcpy(v11, v12, 16 * v4);
    *(_QWORD *)&v14 = v4;
  }
  v6 = a2[71];
  v7 = a2[72];
  v15 = 0;
  v16 = 0;
  if ( v6 + v7 - 1 >= v6 )
  {
    v15 = qvector_reserve((__int64)&v15, 0, 1, 16);
    a3 = (__m128i *)(16 * v16);
    *(__m128i *)(v15 + 16 * v16) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v7);
    *(_QWORD *)&v16 = v16 + 1;
  }
  sub_3180C0(&v13, (__int64)&v15, a3, a4);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  sub_3180C0((__int64 *)(a1 + 16), (__int64)&v13, v8, v9);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v17 - __readfsqword(0x28u);
}

