__int64 __fastcall sub_9E70(_QWORD *a1, __m128 a2, double a3)
{
  int v4; // r13d
  __int64 result; // rax
  __int64 v6; // r14
  unsigned __int64 name_ea; // rax
  unsigned __int64 v8; // rdx
  double v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax

  if ( a1[31] )
  {
    a1[32] = 0;
    qfree();
    a1[31] = 0;
    a1[33] = 0;
  }
  v4 = 0;
  for ( result = 0; (unsigned __int64)v4 < a1[20]; result = v4 )
  {
    v6 = 11 * result;
    name_ea = get_name_ea();
    if ( name_ea != -1 )
    {
      v8 = a1[30];
      if ( v8 < name_ea )
      {
        *(_QWORD *)&v9 = name_ea - v8;
        v10 = *(_QWORD *)(a1[19] + 8 * v6);
        if ( name_ea - v8 != v10 )
        {
          if ( (debug & 8) != 0 )
            sub_9710((__int64)"add_mapping %a -> %a\n", *(double *)a2.m128_u64, a3);
          v11 = a1[32];
          v12 = a1[31];
          v13 = v11 + 1;
          if ( a1[33] < (unsigned __int64)(v11 + 1) )
          {
            v14 = qvector_reserve();
            v11 = a1[32];
            a1[31] = v14;
            v12 = v14;
            v13 = v11 + 1;
          }
          a3 = v9;
          a1[32] = v13;
          a2 = (__m128)_mm_unpacklo_epi64((__m128i)v10, (__m128i)*(unsigned __int64 *)&v9);
          *(__m128 *)(v12 + 16 * v11) = a2;
        }
      }
    }
    ++v4;
  }
  return result;
}

