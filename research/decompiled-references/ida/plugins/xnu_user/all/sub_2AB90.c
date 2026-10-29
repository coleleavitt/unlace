__int64 __fastcall sub_2AB90(__int64 a1, unsigned int a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 result; // rax

  if ( a4 <= 0 )
    return 1;
  v6 = a5 + 32LL * a4;
  v7 = a5;
  while ( 1 )
  {
    result = sub_51B60(a1, a2, v7, a3);
    if ( !(_BYTE)result )
      break;
    v7 += 32;
    ++a3;
    if ( v7 == v6 )
      return 1;
  }
  return result;
}

