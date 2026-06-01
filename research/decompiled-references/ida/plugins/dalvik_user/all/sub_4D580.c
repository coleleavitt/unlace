__int64 __fastcall sub_4D580(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  int v4; // esi
  char *v5; // rax
  double *v6; // rbp
  __int64 v7; // rax
  int v8; // esi
  __m128 v9; // xmm0
  unsigned int v10; // ebx
  _QWORD v13[2]; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v14; // [rsp+30h] [rbp-B8h]
  __int64 v15; // [rsp+40h] [rbp-A8h]
  __int128 v16; // [rsp+48h] [rbp-A0h]
  char v17; // [rsp+58h] [rbp-90h]
  _BYTE v18[24]; // [rsp+60h] [rbp-88h] BYREF
  int v19; // [rsp+78h] [rbp-70h]
  __int64 v20; // [rsp+80h] [rbp-68h]
  __int128 v21; // [rsp+88h] [rbp-60h]
  char v22; // [rsp+98h] [rbp-50h]
  unsigned __int64 v23; // [rsp+A8h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  qmutex_lock();
  v16 = 0;
  v15 = 0;
  v17 = byte_7FBE9;
  v14 = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  v13[0] = qalloc();
  if ( !v13[0] )
    sub_43DF0((__int64)"JDWP encoder");
  v4 = *(_DWORD *)(a1 + 8);
  v13[1] = 0;
  sub_46BB0((__int64)v13, v4, a3);
  memset(v18, 0, sizeof(v18));
  v5 = sub_48F20(a1, 3u, 1u, (__int64)v13, (__int64)v18);
  v6 = (double *)v5;
  if ( v5 )
  {
    v7 = *((_QWORD *)v5 + 1);
    v8 = *(_DWORD *)(a1 + 8);
    v9 = _mm_loadh_ps(v6);
    v19 = 0;
    *(_QWORD *)&v18[16] = v7;
    *(__m128 *)v18 = v9;
    v20 = 0;
    v22 = byte_7FBE9;
    v21 = 0;
    v10 = sub_46950((__int64)v18, v8, a2);
    sub_43EB0((__int64)v18);
    if ( *(_QWORD *)v6 )
      qfree();
    operator delete(v6, 0x20u);
  }
  else
  {
    v10 = 0;
  }
  qfree();
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  qmutex_unlock();
  return v10;
}

