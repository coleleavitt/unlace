__int64 __fastcall sub_4A690(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  char *v4; // rax
  double *v5; // rbp
  __int64 v6; // rax
  int v7; // esi
  __m128 v8; // xmm0
  unsigned int v9; // ebx
  _QWORD v12[2]; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v13; // [rsp+30h] [rbp-B8h]
  __int64 v14; // [rsp+40h] [rbp-A8h]
  __int128 v15; // [rsp+48h] [rbp-A0h]
  char v16; // [rsp+58h] [rbp-90h]
  _BYTE v17[24]; // [rsp+60h] [rbp-88h] BYREF
  int v18; // [rsp+78h] [rbp-70h]
  __int64 v19; // [rsp+80h] [rbp-68h]
  __int128 v20; // [rsp+88h] [rbp-60h]
  char v21; // [rsp+98h] [rbp-50h]
  unsigned __int64 v22; // [rsp+A8h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  qmutex_lock();
  v15 = 0;
  v14 = 0;
  v16 = byte_7FBE9;
  v13 = _mm_unpacklo_epi64((__m128i)0x400uLL, (__m128i)0x400uLL);
  v12[0] = qalloc();
  if ( !v12[0] )
    sub_43DF0((__int64)"JDWP encoder");
  v12[1] = 0;
  sub_43FD0((__int64)v12, a3);
  memset(v17, 0, sizeof(v17));
  v4 = sub_48F20(a1, 1u, 0xBu, (__int64)v12, (__int64)v17);
  v5 = (double *)v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)v4 + 1);
    v7 = *(_DWORD *)(a1 + 8);
    v8 = _mm_loadh_ps(v5);
    v18 = 0;
    *(_QWORD *)&v17[16] = v6;
    *(__m128 *)v17 = v8;
    v19 = 0;
    v21 = byte_7FBE9;
    v20 = 0;
    v9 = sub_46950((__int64)v17, v7, a2);
    sub_43EB0((__int64)v17);
    if ( *(_QWORD *)v5 )
      qfree();
    operator delete(v5, 0x20u);
  }
  else
  {
    v9 = 0;
  }
  qfree();
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  qmutex_unlock();
  return v9;
}

