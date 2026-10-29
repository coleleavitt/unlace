__int64 __fastcall sub_201940(
        __int64 *a1,
        unsigned __int8 *a2,
        __int64 a3,
        char a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v12; // rdi
  __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  char v18; // r14
  char v19; // al
  __int64 *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  __int128 v27; // [rsp+18h] [rbp-40h]
  unsigned __int64 v28; // [rsp+28h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( a4 )
  {
    v8 = *a2;
    if ( (unsigned __int8)v8 <= 0xFu )
    {
      v10 = 32802;
      if ( _bittest64(&v10, v8) )
      {
        v12 = a1[2];
        v25[0] = 0;
        v25[1] = 0;
        v26 = 0;
        v27 = 0;
        sub_127FE0(v12, v25, (__int64)a2, 0, a5, a6, 0.0, a8);
        v13 = (__int64 *)a1[6];
        v18 = sub_64640(v13, v25, v14, v15, v16, v17);
        v19 = sub_317C60(v13 + 2, (__int64)&v26);
        if ( v18 || v19 )
        {
          v21 = (__int64 *)a1[7];
          v22 = v21[1];
          v23 = *v21;
          if ( v21[2] < (unsigned __int64)(v22 + 1) )
          {
            v24 = qvector_reserve((__int64)v21, v23, v22 + 1, 8);
            *v21 = v24;
            v23 = v24;
            v22 = v21[1];
          }
          *(_QWORD *)(v23 + 8 * v22) = a2;
          ++v21[1];
        }
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v26);
        }
        qfree(v25[0]);
      }
    }
  }
  return 0;
}

