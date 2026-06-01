__int64 __fastcall sub_50A60(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned __int8 *a4)
{
  unsigned __int64 v6; // rbx
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 i; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // esi
  char *v19; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+18h] [rbp-A0h]
  __int64 v22; // [rsp+30h] [rbp-88h] BYREF
  __int64 v23; // [rsp+38h] [rbp-80h]
  __m128i v24; // [rsp+40h] [rbp-78h]
  __int64 v25; // [rsp+50h] [rbp-68h] BYREF
  __int128 v26; // [rsp+58h] [rbp-60h]
  char v27; // [rsp+68h] [rbp-50h]
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v6 = a1;
  v28 = __readfsqword(0x28u);
  qmutex_lock();
  v26 = 0;
  v25 = 0;
  v27 = byte_7FBE9;
  v24 = _mm_unpacklo_epi64((__m128i)0x400uLL, (__m128i)0x400uLL);
  v22 = qalloc();
  if ( !v22 )
    sub_43DF0((__int64)"JDWP encoder");
  v8 = *(_DWORD *)(a1 + 8);
  v23 = 0;
  sub_46BB0((__int64)&v22, v8, a2);
  if ( v27 )
    sub_1FAD0(&v25);
  v9 = v23;
  v10 = v24.m128i_i64[0];
  for ( i = v22; v24.m128i_i64[0] < (unsigned __int64)(v23 + 4); v10 = v24.m128i_i64[0] )
  {
    v24.m128i_i64[0] = v24.m128i_i64[1] + v10;
    v12 = qrealloc();
    i = v12;
    if ( !v12 )
      sub_43DF0((__int64)"JDWP encoder");
    v22 = v12;
    v9 = v23;
  }
  *(_DWORD *)(i + v9) = _byteswap_ulong(a3);
  v13 = v23 + 4;
  v23 += 4;
  if ( v27 )
  {
    sub_1FAD0(&v25);
    v13 = v23;
  }
  v14 = v24.m128i_i64[0];
  v15 = v22;
  if ( v24.m128i_i64[0] < (unsigned __int64)(v13 + 4) )
  {
    do
    {
      v24.m128i_i64[0] = v24.m128i_i64[1] + v14;
      v16 = qrealloc();
      v15 = v16;
      if ( !v16 )
        sub_43DF0((__int64)"JDWP encoder");
      v22 = v16;
      v13 = v23;
      v14 = v24.m128i_i64[0];
    }
    while ( v24.m128i_i64[0] < (unsigned __int64)(v23 + 4) );
  }
  *(_DWORD *)(v15 + v13) = 0x1000000;
  v17 = *(_DWORD *)(v6 + 8);
  v23 += 4;
  sub_476E0((__int64)&v22, v17, a4);
  v21 = 0;
  v20 = 0;
  v19 = sub_48F20(v6, 0xDu, 3u, (__int64)&v22, (__int64)&v20);
  LOBYTE(v6) = v19 != nullptr;
  sub_44B80((_QWORD **)&v19);
  qfree();
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  qmutex_unlock();
  return (unsigned int)v6;
}

