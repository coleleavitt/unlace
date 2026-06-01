__int64 __fastcall sub_523F0(unsigned __int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _WORD *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 i; // rdi
  __int64 v15; // rax
  unsigned int v16; // esi
  char v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 j; // rdi
  __int64 v21; // rax
  char *v25; // [rsp+18h] [rbp-B0h] BYREF
  _WORD *v26; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+28h] [rbp-A0h]
  __int64 v28; // [rsp+40h] [rbp-88h] BYREF
  __int64 v29; // [rsp+48h] [rbp-80h]
  __m128i v30; // [rsp+50h] [rbp-78h]
  __int64 v31; // [rsp+60h] [rbp-68h] BYREF
  __int128 v32; // [rsp+68h] [rbp-60h]
  char v33; // [rsp+78h] [rbp-50h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  qmutex_lock();
  v27 = 0;
  v26 = (_WORD *)qvector_reserve();
  *v26 = 35;
  v8 = v26;
  v9 = v27 + 1;
  v10 = v27 + 2;
  *(_QWORD *)&v27 = v27 + 1;
  if ( *((_QWORD *)&v27 + 1) < v10 )
  {
    v26 = (_WORD *)qvector_reserve();
    v8 = v26;
    v9 = v27;
  }
  v8[v9] = 34;
  v32 = 0;
  *(_QWORD *)&v27 = v27 + 1;
  v31 = 0;
  v33 = byte_7FBE9;
  v30 = _mm_unpacklo_epi64((__m128i)0x400uLL, (__m128i)0x400uLL);
  v28 = qalloc();
  if ( !v28 )
    sub_43DF0((__int64)"JDWP encoder");
  v11 = *(_DWORD *)(a1 + 8);
  v29 = 0;
  sub_46BB0((__int64)&v28, v11, a4);
  sub_46BB0((__int64)&v28, *(_DWORD *)(a1 + 16), a5);
  if ( v33 )
    sub_1FAD0(&v31);
  v12 = v29;
  v13 = v30.m128i_i64[0];
  for ( i = v28; v30.m128i_i64[0] < (unsigned __int64)(v29 + 4); v13 = v30.m128i_i64[0] )
  {
    v30.m128i_i64[0] = v30.m128i_i64[1] + v13;
    v15 = qrealloc();
    i = v15;
    if ( !v15 )
      sub_43DF0((__int64)"JDWP encoder");
    v28 = v15;
    v12 = v29;
  }
  *(_DWORD *)(i + v12) = 0x1000000;
  v16 = *(_DWORD *)(a3 + 84);
  v29 += 4;
  sub_46AA0((__int64)&v28, v16);
  v17 = *(_BYTE *)(a3 + 96);
  if ( v33 )
    sub_1FAD0(&v31);
  v18 = v29;
  v19 = v30.m128i_i64[0];
  for ( j = v28; v30.m128i_i64[0] < (unsigned __int64)(v29 + 1); v19 = v30.m128i_i64[0] )
  {
    v30.m128i_i64[0] = v30.m128i_i64[1] + v19;
    v21 = qrealloc();
    j = v21;
    if ( !v21 )
      sub_43DF0((__int64)"JDWP encoder");
    v28 = v21;
    v18 = v29;
  }
  *(_BYTE *)(j + v18) = v17;
  ++v29;
  v25 = sub_48F20(a1, 0x10u, 1u, (__int64)&v28, (__int64)&v26);
  *a2 = *(_WORD *)(a1 + 58);
  sub_44B80((_QWORD **)&v25);
  qfree();
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  qmutex_unlock();
  return 1;
}

