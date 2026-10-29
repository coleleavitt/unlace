__int64 __fastcall sub_E440(__int64 a1, unsigned __int16 a2)
{
  int v2; // eax
  unsigned int v4; // esi
  bool v5; // zf
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 600);
  if ( v2 == 3 )
    return (a2 & 8) != 0;
  if ( v2 == 2 )
    return (a2 & 4) != 0;
  v4 = a2 & 1;
  v5 = v2 == 1;
  result = (a2 >> 1) & 1;
  if ( !v5 )
    return v4;
  return result;
}

