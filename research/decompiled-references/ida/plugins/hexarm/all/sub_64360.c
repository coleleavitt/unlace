unsigned __int64 __fastcall sub_64360(_QWORD *a1, int a2)
{
  unsigned __int64 result; // rax
  char v3; // cl
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  int v6; // esi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax

  result = a1[1];
  v3 = a2;
  v4 = a2 >> 6;
  v5 = result >> 6;
  if ( v4 < result >> 6 && (v6 = a2 & 0x3F, (v7 = *(_QWORD *)(*a1 + 8 * v4) >> v3) != 0) )
  {
    v9 = v6;
    v8 = v4;
  }
  else
  {
    v8 = v4 + 1;
    if ( v4 + 1 >= v5 )
      return result;
    while ( !*(_QWORD *)(*a1 + 8 * v8) )
    {
      if ( v5 == ++v8 )
        return result;
    }
    v7 = *(_QWORD *)(*a1 + 8 * v8);
    v9 = 0;
  }
  for ( result = (v8 << 6) + v9; (v7 & 1) == 0; ++result )
    v7 >>= 1;
  return result;
}

