unsigned __int64 __fastcall sub_479D0(__int64 a1, unsigned int a2, double a3, double a4, double a5, double a6)
{
  __m128i v8; // xmm0
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  double v14; // xmm4_8
  __m128 v15; // xmm5
  __int64 v17; // [rsp+0h] [rbp-78h] BYREF
  __int64 v18; // [rsp+8h] [rbp-70h]
  __m128i v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+28h] [rbp-50h]
  char v22; // [rsp+38h] [rbp-40h]
  unsigned __int64 v23; // [rsp+48h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  qmutex_lock();
  v21 = 0;
  v20 = 0;
  v22 = byte_7FBE9;
  v8 = _mm_unpacklo_epi64((__m128i)4uLL, (__m128i)4uLL);
  v19 = v8;
  v17 = qalloc();
  v9 = v17;
  if ( !v17 )
    sub_43DF0((__int64)"JDWP encoder");
  v18 = 0;
  if ( v22 )
  {
    sub_1FAD0(&v20);
    v11 = v18;
    v9 = v17;
    v10 = v18 + 4;
  }
  else
  {
    v10 = 4;
    v11 = 0;
  }
  v12 = v19.m128i_i64[0];
  if ( v19.m128i_i64[0] < v10 )
  {
    do
    {
      v19.m128i_i64[0] = v19.m128i_i64[1] + v12;
      v13 = qrealloc();
      v9 = v13;
      if ( !v13 )
        sub_43DF0((__int64)"JDWP encoder");
      v17 = v13;
      v11 = v18;
      v12 = v19.m128i_i64[0];
    }
    while ( v19.m128i_i64[0] < (unsigned __int64)(v18 + 4) );
  }
  *(_DWORD *)(v9 + v11) = _byteswap_ulong(a2);
  v18 += 4;
  sub_461A0(a1, 1u, 0xAu, (__int64)&v17);
  sub_5D660(a1 + 40, 0xFFFFFFFFLL);
  sub_44380(a1, *(double *)v8.m128i_i64, a4, a5, a6, v14, v15);
  qfree();
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  qmutex_unlock();
  return v23 - __readfsqword(0x28u);
}

