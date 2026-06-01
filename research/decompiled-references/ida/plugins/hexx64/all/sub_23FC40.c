__int64 __fastcall sub_23FC40(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 result; // rax
  _QWORD *v3; // rdx
  int v4; // ecx
  __int64 v5; // r12
  __int64 i; // rbx
  int v7; // ecx
  __int64 v8; // rax

  v1 = *(__int64 **)(*(_QWORD *)(a1 + 216) + 824LL);
  result = *v1;
  if ( !*v1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v3[1] )
    {
      v4 = 4 * ((int)log2ceil() / 4) + 4;
      result = -1;
      if ( (unsigned __int64)v4 <= 0x3F )
        result = (1LL << v4) - 1;
      *v1 = result;
    }
    else
    {
      v5 = v3[2];
      for ( i = v5 + 16LL * v3[3]; i != v5; *v1 = result )
      {
        v7 = 4 * ((int)log2ceil() / 4) + 4;
        v8 = -1;
        if ( (unsigned __int64)v7 <= 0x3F )
          v8 = (1LL << v7) - 1;
        result = *v1 | v8;
        v5 += 16;
      }
    }
  }
  return result;
}

