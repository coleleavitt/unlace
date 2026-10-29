__int64 __fastcall sub_129010(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7, __m128 a8)
{
  __int64 v8; // rbx
  bool v12; // al
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h]
  __m128i v23; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v8 = a3;
  if ( a3 != a4 && a3 )
  {
    while ( 1 )
    {
      sub_127A20((__int64)&v20, a1, v8, 257, a5, a6, a7, a8);
      v12 = sub_64930(&v20, a2);
      v13 = v22;
      if ( v12 )
        break;
      if ( v22 )
      {
        v23.m128i_i64[0] = 0;
        qfree(v22);
      }
      qfree(v20);
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v8 || a4 == v8 )
        return v8;
    }
    if ( a5 )
    {
      v14 = *(_QWORD *)a5;
      v15 = _mm_loadu_si128(&v23);
      *(_QWORD *)a5 = v20;
      v20 = v14;
      v16 = *(_QWORD *)(a5 + 8);
      *(_QWORD *)(a5 + 8) = v21;
      v17 = *(_QWORD *)(a5 + 32);
      v21 = v16;
      v18 = *(_QWORD *)(a5 + 16);
      v23.m128i_i64[1] = v17;
      v22 = v18;
      *(_QWORD *)(a5 + 16) = v13;
      v13 = v18;
      *(__m128i *)(a5 + 24) = v15;
    }
    if ( v13 )
    {
      v23.m128i_i64[0] = 0;
      qfree(v13);
    }
    qfree(v20);
  }
  return v8;
}

