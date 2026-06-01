unsigned __int64 __fastcall sub_1F1DA0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 v11; // rdi
  __int64 v12; // r13
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __m128i v20; // [rsp+0h] [rbp-68h] BYREF
  const void *v21[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+20h] [rbp-48h]
  __m128i v23; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a3 != a2[1] )
    sub_1ECB60(a7);
  if ( !*(_BYTE *)(a1 + 88) )
  {
    if ( *(_QWORD *)(a1 + 64) != a3 )
      return v24 - __readfsqword(0x28u);
    if ( *(_BYTE *)(a1 + 84) )
      goto LABEL_10;
  }
  sub_127A20((__int64)v21, *a2, a3, 129, a5, a6, a7, a8);
  sub_648D0(a2 + 2, v21, a7);
  v11 = a2[4];
  v12 = v22;
  v22 = 0;
  v13 = _mm_loadu_si128(&v23);
  v23 = 0;
  if ( v11 )
  {
    a2[5] = 0;
    v20 = v13;
    qfree(v11);
    v14 = _mm_load_si128(&v20);
    v15 = v22;
    a2[4] = v12;
    *(__m128i *)(a2 + 5) = v14;
    if ( v15 )
    {
      v23.m128i_i64[0] = 0;
      qfree(v15);
    }
  }
  else
  {
    a2[4] = v12;
    *(__m128i *)(a2 + 5) = v13;
  }
  qfree((__int64)v21[0]);
  sub_64640((__int64 *)a1, a2 + 2, v16, v17, v18, v19);
  sub_317C60((__int64 *)(a1 + 16), (__int64)(a2 + 4));
  if ( *(_QWORD *)(a1 + 64) == a3 )
LABEL_10:
    *(_BYTE *)(a1 + 88) = 1;
  return v24 - __readfsqword(0x28u);
}

