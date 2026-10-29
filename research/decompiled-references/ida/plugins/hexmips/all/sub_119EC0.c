__int64 __fastcall sub_119EC0(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbp
  __int64 result; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 19 )
  {
    v5 = sub_119F60(a1 + 32);
    result = v5 | sub_119F60(a1 + 48);
  }
  else if ( v1 <= 0x13 )
  {
    if ( v1 == 4 || (v4 = v1 - 8, result = 0, v4 <= 1) )
    {
      result = sub_119F60(a1 + 32);
      if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
        return sub_117720(result, *(_DWORD *)(a1 + 68));
      return result;
    }
  }
  else if ( v1 == 20 )
  {
    v2 = sub_119F60(a1 + 32);
    result = v2 & sub_119F60(a1 + 48);
  }
  else
  {
    result = 0;
  }
  if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
    return sub_117720(result, *(_DWORD *)(a1 + 68));
  return result;
}

