__int64 __fastcall sub_38F620(__int64 a1, char a2)
{
  __m128i *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rdi

  v3 = *(__m128i **)(a1 + 32);
  sub_258030(v3);
  v8 = *(_QWORD *)(v3[13].m128i_i64[1] + 1008);
  v9 = *(__int64 **)(v8 + 40);
  v10 = &v9[*(_QWORD *)(v8 + 48)];
  while ( v10 != v9 )
  {
    while ( 1 )
    {
      v11 = *v9;
      if ( *v9 )
      {
        if ( v3 == *(__m128i **)(v11 + 32) )
          break;
      }
      if ( v10 == ++v9 )
        goto LABEL_7;
    }
    ++v9;
    sub_384070(v11, v3->m128i_i64, v4, v5, v6, v7);
  }
LABEL_7:
  sub_38F500(a1, a2);
  return sub_38B490(a1, 0);
}

