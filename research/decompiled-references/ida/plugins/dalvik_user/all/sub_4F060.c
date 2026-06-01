__int64 __fastcall sub_4F060(int *a1, __int64 a2, __int64 a3)
{
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 i; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // esi
  char *v13; // rax
  char *v14; // rbx
  __int64 v16; // [rsp+0h] [rbp-98h] BYREF
  __int128 v17; // [rsp+8h] [rbp-90h]
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+28h] [rbp-70h]
  __m128i v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  __int128 v22; // [rsp+48h] [rbp-50h]
  char v23; // [rsp+58h] [rbp-40h]
  unsigned __int64 v24; // [rsp+68h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  qmutex_lock();
  v22 = 0;
  v21 = 0;
  v23 = byte_7FBE9;
  v20 = _mm_unpacklo_epi64((__m128i)0x400uLL, (__m128i)0x400uLL);
  v18 = qalloc();
  if ( !v18 )
    sub_43DF0((__int64)"JDWP encoder");
  v6 = a1[2];
  v19 = 0;
  sub_46BB0((__int64)&v18, v6, a2);
  if ( v23 )
    sub_1FAD0(&v21);
  v7 = v19;
  v8 = v20.m128i_i64[0];
  for ( i = v18; v20.m128i_i64[0] < (unsigned __int64)(v19 + 4); v8 = v20.m128i_i64[0] )
  {
    v20.m128i_i64[0] = v20.m128i_i64[1] + v8;
    v10 = qrealloc();
    i = v10;
    if ( !v10 )
      sub_43DF0((__int64)"JDWP encoder");
    v18 = v10;
    v7 = v19;
  }
  *(_DWORD *)(i + v7) = 0x1000000;
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *a1;
  v19 += 4;
  sub_46BB0((__int64)&v18, v12, v11);
  sub_476E0((__int64)&v18, a1[2], (unsigned __int8 *)(a3 + 96));
  v17 = 0;
  v16 = 0;
  v13 = sub_48F20((unsigned __int64)a1, 9u, 3u, (__int64)&v18, (__int64)&v16);
  v14 = v13;
  LOBYTE(a3) = v13 != nullptr;
  if ( v13 )
  {
    if ( *(_QWORD *)v13 )
      qfree();
    operator delete(v14, 0x20u);
  }
  qfree();
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  qmutex_unlock();
  return (unsigned int)a3;
}

