__int64 __fastcall sub_49A90(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __m128i v16; // [rsp+8h] [rbp-50h] BYREF
  char v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  a2[2].m128i_i8[0] = a4;
  a2[2].m128i_i64[1] = a5;
  a2[4].m128i_i32[2] = a6;
  sub_456F0((__int64)&v15, a2->m128i_i64, a3, a4, a5, a6);
  if ( !v17 )
  {
    v11 = a3 + 8;
    if ( a3 + 8 == *(_QWORD *)(a3 + 24) )
    {
LABEL_8:
      sub_45D00((__int64)&v15, (__int64)a2, v7, v8, v9, v10);
      if ( !v17 )
      {
        if ( a2[2].m128i_i8[0] )
          sub_46580((__int64)a2);
        sub_49970((__int64)&v15, (__int64)a2);
        if ( !v17 )
        {
          sub_46820((__int64)&v15, a2);
          if ( !v17 )
          {
            *(_BYTE *)(a1 + 24) = 0;
            return a1;
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v12 = std::_Rb_tree_decrement(v11);
        sub_48EB0((__int64)&v15, a2, (__int64 *)(v12 + 40));
        if ( v17 )
          break;
        v11 = std::_Rb_tree_decrement(v11);
        if ( v11 == *(_QWORD *)(a3 + 24) )
          goto LABEL_8;
      }
    }
  }
  *(_QWORD *)a1 = v15;
  v13 = _mm_loadu_si128(&v16);
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v13;
  return a1;
}

