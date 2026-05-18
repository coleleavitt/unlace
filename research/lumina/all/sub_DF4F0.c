__int64 *__fastcall sub_DF4F0(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 *v3; // rdx

  result = sub_DF490(a1);
  if ( result )
  {
    *result = a2;
    result[1] = 0;
    v3 = *(__int64 **)(a1 + 24);
    if ( v3 )
    {
      if ( *v3 >= a2 )
        *(_WORD *)(a1 + 50) &= ~1u;
      v3[1] = (__int64)result;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = result;
    }
    *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}
