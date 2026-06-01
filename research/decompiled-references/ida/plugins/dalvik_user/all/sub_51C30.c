__int64 __fastcall sub_51C30(unsigned __int64 a1, char a2, unsigned int a3)
{
  _BYTE *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 i; // rdi
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v20; // [rsp+0h] [rbp-C8h]
  __int64 v21; // [rsp+8h] [rbp-C0h]
  char *v22; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+28h] [rbp-A0h]
  __int64 v25; // [rsp+40h] [rbp-88h] BYREF
  __int64 v26; // [rsp+48h] [rbp-80h]
  __m128i v27; // [rsp+50h] [rbp-78h]
  __int64 v28; // [rsp+60h] [rbp-68h] BYREF
  __int128 v29; // [rsp+68h] [rbp-60h]
  char v30; // [rsp+78h] [rbp-50h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  qmutex_lock();
  v29 = 0;
  v28 = 0;
  v30 = byte_7FBE9;
  v27 = _mm_unpacklo_epi64((__m128i)5uLL, (__m128i)5uLL);
  v25 = qalloc();
  v6 = (_BYTE *)v25;
  if ( !v25 )
    sub_43DF0((__int64)"JDWP encoder");
  v7 = v27.m128i_i64[0];
  v26 = 0;
  if ( !v27.m128i_i64[0] )
  {
    do
    {
      v27.m128i_i64[0] = v27.m128i_i64[1] + v7;
      v8 = qrealloc();
      if ( !v8 )
        sub_43DF0((__int64)"JDWP encoder");
      v25 = v8;
      v7 = v27.m128i_i64[0];
    }
    while ( v27.m128i_i64[0] < (unsigned __int64)(v26 + 1) );
    v6 = (_BYTE *)(v26 + v8);
  }
  *v6 = a2;
  ++v26;
  if ( byte_7FBE9 )
  {
    sub_44E10(&v28, a2);
    v9 = v29;
    if ( (_QWORD)v29 )
    {
      v12 = v29 + 5;
      v11 = v29 + 6;
      v10 = v28;
      v9 = v29 - 1;
      if ( *((_QWORD *)&v29 + 1) >= (unsigned __int64)(v29 + 6) )
        goto LABEL_9;
    }
    else
    {
      v10 = v28;
      v11 = 7;
      v12 = 6;
      if ( *((_QWORD *)&v29 + 1) >= 7u )
      {
LABEL_9:
        *(_QWORD *)&v29 = v11;
        *(_BYTE *)(v10 + v12) = 0;
        v13 = v28 + v9;
        *(_DWORD *)v13 = 1232168306;
        *(_WORD *)(v13 + 4) = 15684;
        goto LABEL_10;
      }
    }
    v20 = v11;
    v21 = v12;
    v28 = qvector_reserve();
    v12 = v21;
    v10 = v28;
    v11 = v20;
    goto LABEL_9;
  }
LABEL_10:
  if ( v30 )
    sub_1FAD0(&v28);
  v14 = v26;
  v15 = v27.m128i_i64[0];
  for ( i = v25; v27.m128i_i64[0] < (unsigned __int64)(v26 + 4); v15 = v27.m128i_i64[0] )
  {
    v27.m128i_i64[0] = v27.m128i_i64[1] + v15;
    v17 = qrealloc();
    i = v17;
    if ( !v17 )
      sub_43DF0((__int64)"JDWP encoder");
    v25 = v17;
    v14 = v26;
  }
  *(_DWORD *)(i + v14) = _byteswap_ulong(a3);
  v18 = &v25;
  v26 += 4;
  v23 = 0;
  v24 = 0;
  v22 = sub_48F20(a1, 0xFu, 2u, (__int64)&v25, (__int64)&v23);
  LOBYTE(v18) = v22 != nullptr;
  sub_44B80((_QWORD **)&v22);
  qfree();
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  qmutex_unlock();
  return (unsigned int)v18;
}

