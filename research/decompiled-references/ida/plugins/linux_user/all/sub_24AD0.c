__int64 __fastcall sub_24AD0(_QWORD *a1, double a2, __m128i a3, __m128 a4, __m128 a5)
{
  unsigned int v5; // r13d
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  size_t v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v19 = 0;
  v20 = 0;
  v7 = (a1[24] == 0) + ((__int64)(a1[24] - a1[20]) >> 3) - 1;
  v8 = 0x8E38E38E38E38E39LL * (((__int64)(a1[21] - a1[22]) >> 3) + ((__int64)(a1[19] - a1[17]) >> 3)) + 8 * v7 - v7;
  if ( (unsigned int)sub_238A0((__int64)a1, &v19, 0, 0.0, a3, a4, a5) == 1 )
    sub_22F60((__int64)a1, (unsigned __int64)&v19, v9, 0.0, a3, a4, a5, v10, v11, v12);
  v13 = v19;
  v14 = (a1[24] == 0) + ((__int64)(a1[24] - a1[20]) >> 3) - 1;
  LOBYTE(v5) = 0x8E38E38E38E38E39LL * (((__int64)(a1[21] - a1[22]) >> 3) + ((__int64)(a1[19] - a1[17]) >> 3))
             + 8 * v14
             - v14 != (int)v8;
  if ( v19 )
  {
    v15 = v20;
    if ( (_QWORD)v20 )
    {
      v16 = 0;
      do
      {
        v17 = (_QWORD *)(v13 + 80 * v16);
        if ( v17[5] )
        {
          v17[6] = 0;
          qfree();
        }
        if ( v17[2] )
        {
          v17[3] = 0;
          qfree();
        }
        ++v16;
        v13 = v19;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v5;
}

