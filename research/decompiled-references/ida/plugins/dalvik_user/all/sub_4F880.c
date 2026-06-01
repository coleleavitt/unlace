__int64 __fastcall sub_4F880(unsigned __int64 a1, __int64 a2)
{
  int v3; // esi
  char *v4; // rax
  char *v5; // rbx
  __int64 v7; // [rsp+0h] [rbp-98h] BYREF
  __int128 v8; // [rsp+8h] [rbp-90h]
  _QWORD v9[2]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v10; // [rsp+30h] [rbp-68h]
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int128 v12; // [rsp+48h] [rbp-50h]
  char v13; // [rsp+58h] [rbp-40h]
  unsigned __int64 v14; // [rsp+68h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  qmutex_lock();
  v12 = 0;
  v11 = 0;
  v13 = byte_7FBE9;
  v10 = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  v9[0] = qalloc();
  if ( !v9[0] )
    sub_43DF0((__int64)"JDWP encoder");
  v3 = *(_DWORD *)(a1 + 8);
  v9[1] = 0;
  sub_46BB0((__int64)v9, v3, a2);
  v8 = 0;
  v7 = 0;
  v4 = sub_48F20(a1, 0xBu, 3u, (__int64)v9, (__int64)&v7);
  v5 = v4;
  LOBYTE(a2) = v4 != nullptr;
  if ( v4 )
  {
    if ( *(_QWORD *)v4 )
      qfree();
    operator delete(v5, 0x20u);
  }
  qfree();
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qmutex_unlock();
  return (unsigned int)a2;
}

