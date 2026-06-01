__int64 __fastcall sub_16730(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx
  unsigned __int16 v3; // cx
  __int64 result; // rax
  char v5; // bl
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+10h] [rbp-18h] BYREF

  v2 = *(_WORD *)(a2 + 24);
  v7[1] = __readfsqword(0x28u);
  if ( v2 == 29 )
  {
    v5 = 1;
    if ( *(_BYTE *)(a2 + 41) != 1 )
      return 0;
LABEL_12:
    if ( *(_WORD *)(a2 + 46) == 2 )
    {
      if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 2 )
      {
        v6 = a2 + 120;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 121) != 1 || *(_WORD *)(a2 + 126) != 2 )
          return 0;
        v6 = a2 + 80;
      }
      if ( (unsigned __int8)sub_262E0(a1, v7, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(v6 + 6)) )
      {
        result = v7[0];
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
          result = SLODWORD(v7[0]);
        if ( v5 )
          return -result;
        return result;
      }
    }
    return 0;
  }
  if ( v2 <= 0x1Du )
  {
    if ( v2 == 19 )
    {
      if ( *(_BYTE *)(a2 + 41) == 1
        && *(_WORD *)(a2 + 46) == 2
        && *(_BYTE *)(a2 + 81) == 1
        && *(_WORD *)(a2 + 86) == 2
        && *(_BYTE *)(a2 + 121) == 5 )
      {
        return *(_QWORD *)(a2 + 128);
      }
      return 0;
    }
    v5 = 0;
    if ( v2 != 28 || *(_BYTE *)(a2 + 41) != 1 )
      return 0;
    goto LABEL_12;
  }
  v3 = v2 - 443;
  if ( v3 > 0x15u )
    return 0;
  if ( ((1LL << v3) & 0x2AAAAA) != 0 )
  {
    if ( *(_WORD *)(a2 + 86) == 2 )
    {
      result = 0;
      if ( *(_BYTE *)(a2 + 81) != 3 )
        return *(_QWORD *)(a2 + 96);
      return result;
    }
    return 0;
  }
  if ( ((1LL << v3) & 0x155555) == 0 || *(_WORD *)(a2 + 86) != 2 )
    return 0;
  result = *(_QWORD *)(a2 + 128);
  if ( *(_BYTE *)(a2 + 161) )
    result <<= *(_QWORD *)(a2 + 168);
  return result;
}

