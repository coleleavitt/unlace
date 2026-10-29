__int64 __fastcall sub_4FFF0(unsigned __int64 a1, unsigned __int32 *a2, __int64 a3)
{
  int v4; // esi
  char *v5; // rax
  double *v6; // rbp
  __int64 v7; // rax
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
  v13 = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  v12[0] = qalloc();
  if ( !v12[0] )
    sub_43DF0((__int64)"JDWP encoder");
  v4 = *(_DWORD *)(a1 + 8);
  v12[1] = 0;
  sub_46BB0((__int64)v12, v4, a3);
  memset(v17, 0, sizeof(v17));
  v5 = sub_48F20(a1, 0xDu, 1u, (__int64)v12, (__int64)v17);
  v6 = (double *)v5;
  if ( v5 )
  {
    v7 = *((_QWORD *)v5 + 1);
    v8 = _mm_loadh_ps(v6);
    v18 = 0;
    *(_QWORD *)&v17[16] = v7;
    *(__m128 *)v17 = v8;
    v19 = 0;
    v21 = byte_7FBE9;
    v20 = 0;
    v9 = sub_46430((__int64)v17, a2, 1);
    sub_43EB0((__int64)v17);
    if ( *(_QWORD *)v6 )
      qfree();
    operator delete(v6, 0x20u);
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

