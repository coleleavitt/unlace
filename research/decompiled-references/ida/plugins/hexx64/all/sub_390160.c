unsigned __int64 __fastcall sub_390160(__m128i *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 *v7; // rbx
  unsigned __int64 result; // rax
  __int64 *i; // r12
  __int64 v10; // rdi

  sub_258030(a1);
  v6 = *(_QWORD *)(a1[13].m128i_i64[1] + 1008);
  v7 = *(__int64 **)(v6 + 40);
  result = *(_QWORD *)(v6 + 48);
  for ( i = &v7[result]; i != v7; result = sub_384070(v10, a1->m128i_i64, v2, v3, v4, v5) )
  {
    while ( 1 )
    {
      v10 = *v7;
      if ( *v7 )
      {
        if ( a1 == *(__m128i **)(v10 + 32) )
          break;
      }
      if ( i == ++v7 )
        return result;
    }
    ++v7;
  }
  return result;
}

