__int64 __fastcall sub_395CD0(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        __m128i a8,
        double a9)
{
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 result; // rax
  __int64 *i; // r12
  __int64 v14; // rdi

  v9 = *(_QWORD *)(a1 + 1008);
  v10 = *(__int64 **)(v9 + 40);
  result = *(_QWORD *)(v9 + 48);
  for ( i = &v10[result]; i != v10; result = sub_395A90(v14, a2 ^ 1u, a6, a3, a4, a5, a7, a8, a9) )
  {
    while ( 1 )
    {
      v14 = *v10;
      if ( *v10 )
        break;
LABEL_7:
      if ( i == ++v10 )
        return result;
    }
    if ( a3 != -1 )
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v14 + 24);
        if ( *(_QWORD *)(result + 40) == a3 )
          break;
        if ( i == ++v10 )
          return result;
        v14 = *v10;
        if ( !*v10 )
          goto LABEL_7;
      }
    }
    ++v10;
  }
  return result;
}

