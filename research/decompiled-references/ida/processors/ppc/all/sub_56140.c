char __fastcall sub_56140(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // ecx
  unsigned __int16 v5; // dx
  __int64 v6; // rcx
  char result; // al

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  v5 = *(_WORD *)(a2 + 24);
  if ( v3 < v4
    || v3 >= *(_DWORD *)(v2 + 108)
    || (v6 = v3 - v4, result = 1, (*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16 * v6 + 8) & 1) == 0) )
  {
    if ( v5 > 0x14Du )
    {
      if ( v5 == 334 )
        return (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) != 0x1000000000B00LL;
      else
        return (unsigned __int16)(v5 - 335) <= 1u;
    }
    else if ( v5 > 0x140u )
    {
      return 1;
    }
    else if ( v5 > 0x10u )
    {
      if ( v5 == 320 )
        return (*(_BYTE *)(a2 + 28) & 8) == 0;
      return 0;
    }
    else
    {
      result = 1;
      if ( v5 <= 0xEu )
      {
        result = 0;
        if ( (unsigned __int16)(v5 - 13) <= 1u )
          return (*(_BYTE *)(a2 + 28) & 8) == 0;
      }
    }
  }
  return result;
}

