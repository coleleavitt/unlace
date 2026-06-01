unsigned __int64 __fastcall sub_329920(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rax
  char v6; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // r8

  v2 = a1[179];
  v3 = a1[177];
  for ( result = a2; v2 < result && result < v2 + 4 * v3 + 4; result = *(_QWORD *)(a1[176] + 8 * v7 - 8) + v8 )
  {
    v5 = result - v2;
    v6 = v5;
    v7 = v5 >> 2;
    v8 = v6 & 3;
    if ( v3 < v7 )
    {
      while ( 1 )
        ;
    }
  }
  return result;
}

