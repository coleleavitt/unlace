__int64 __fastcall sub_41D10(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // r13
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int8 v9; // cl
  __int64 v10; // rsi
  unsigned __int8 v11; // dl
  bool v12; // dl
  __int64 v13; // r8
  __int64 v14; // rdi
  unsigned int v15; // r14d
  __m128i *v17; // rax
  __m128i v18; // xmm0
  unsigned __int8 v19; // r15
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  bool v23; // cf
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 *v27; // rsi
  __int64 v28; // rax
  __m128i *v29; // [rsp+0h] [rbp-68h]
  __m128i v30; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v3 = a1 + 4;
  v6 = a1[5];
  v7 = a1[1];
  v31 = __readfsqword(0x28u);
  v30.m128i_i64[0] = a2;
  v30.m128i_i64[1] = a3;
  if ( v6 )
  {
    v9 = a3;
    v10 = (__int64)(a1 + 4);
    do
    {
      while ( 1 )
      {
        v11 = *(_BYTE *)(v6 + 40);
        v12 = v9 == v11 ? *(_QWORD *)(v6 + 32) < a2 : v11 < v9;
        v13 = *(_QWORD *)(v6 + 16);
        v14 = *(_QWORD *)(v6 + 24);
        if ( v12 )
          break;
        v10 = v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v13 )
          goto LABEL_8;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v14 );
LABEL_8:
    if ( v3 != (_QWORD *)v10 )
    {
      if ( (_BYTE)a3 == *(_BYTE *)(v10 + 40) )
      {
        if ( a2 >= *(_QWORD *)(v10 + 32) )
          return *(unsigned int *)(v10 + 48);
      }
      else if ( (unsigned __int8)a3 >= *(_BYTE *)(v10 + 40) )
      {
        return *(unsigned int *)(v10 + 48);
      }
    }
  }
  else
  {
    v10 = (__int64)(a1 + 4);
  }
  v15 = v7;
  v17 = (__m128i *)operator new(0x38u);
  v30.m128i_i64[0] = a2;
  v30.m128i_i8[8] = a3;
  v18 = _mm_load_si128(&v30);
  v17[3].m128i_i32[0] = v7;
  v17[2] = v18;
  v19 = v17[2].m128i_u8[8];
  v29 = v17;
  v21 = sub_414E0(a1 + 3, v10, a2, v19, v20);
  if ( v22 )
  {
    if ( v21 || v3 == (_QWORD *)v22 )
    {
      v24 = 1;
    }
    else
    {
      v23 = v19 < *(_BYTE *)(v22 + 40);
      if ( v19 == *(_BYTE *)(v22 + 40) )
        v23 = a2 < *(_QWORD *)(v22 + 32);
      v24 = v23;
    }
    std::_Rb_tree_insert_and_rebalance(v24, v29, v22, v3);
    ++a1[8];
  }
  else if ( v29 )
  {
    operator delete(v29, 0x38u);
  }
  v25 = a1[1];
  v26 = *a1;
  if ( a1[2] < (unsigned __int64)(v25 + 1) )
  {
    v28 = qvector_reserve(a1, v26, v25 + 1, 16);
    *a1 = v28;
    v26 = v28;
    v25 = a1[1];
  }
  v27 = (unsigned __int64 *)(16 * v25 + v26);
  *v27 = a2;
  v27[1] = a3;
  ++a1[1];
  return v15;
}
