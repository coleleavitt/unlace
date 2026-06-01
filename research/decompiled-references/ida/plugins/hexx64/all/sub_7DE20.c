unsigned __int64 __fastcall sub_7DE20(unsigned __int64 a1, unsigned __int8 **a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // r13
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r12
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __int64 v13; // rdi
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __m128i v17; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  sub_7DDD0(a1, (__int64)a2, a3);
  if ( *a2 >= a2[1] )
    goto LABEL_12;
  *(_DWORD *)(a1 + 24) = unpack_dd();
  sub_7D150((__int64)&v16, a2, a3);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = v16;
  v16 = 0;
  v6 = _mm_loadu_si128(&v17);
  v17 = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    v15 = v6;
    qfree(v4);
    v7 = _mm_load_si128(&v15);
    v8 = v16;
    *(_QWORD *)(a1 + 32) = v5;
    *(__m128i *)(a1 + 40) = v7;
    if ( v8 )
    {
      v17.m128i_i64[0] = 0;
      qfree(v8);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v5;
    *(__m128i *)(a1 + 40) = v6;
  }
  sub_7D150((__int64)&v16, a2, 0.0);
  v9 = *(_QWORD *)(a1 + 56);
  a3 = 0.0;
  v10 = v16;
  v16 = 0;
  v11 = _mm_loadu_si128(&v17);
  v17 = 0;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    v15 = v11;
    qfree(v9);
    v12 = _mm_load_si128(&v15);
    v13 = v16;
    *(_QWORD *)(a1 + 56) = v10;
    *(__m128i *)(a1 + 64) = v12;
    if ( v13 )
    {
      v17.m128i_i64[0] = 0;
      qfree(v13);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 56) = v10;
    *(__m128i *)(a1 + 64) = v11;
  }
  sub_7D2C0(a2, (_BYTE *)(a1 + 80), 0.0);
  if ( *a2 >= a2[1] )
LABEL_12:
    sub_7A510(a3);
  *(_DWORD *)(a1 + 88) = unpack_dd();
  *(_DWORD *)(a1 + 92) = sub_7CD20(a2, 0.0);
  *(_QWORD *)(a1 + 96) = sub_7CD40((__int64)a2, 0.0);
  return v18 - __readfsqword(0x28u);
}

