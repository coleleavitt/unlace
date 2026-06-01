__int64 __fastcall sub_E190(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // cx

  result = *(_QWORD *)(a1 + 248);
  if ( (*(_BYTE *)(result + 33) & 0x30) == 0 )
  {
    v3 = *(_WORD *)(a2 + 24) - 18;
    if ( v3 <= 0x30u )
    {
      if ( ((1LL << v3) & 0x1FE0000000DD9LL) != 0 )
      {
LABEL_7:
        *(_BYTE *)(result + 1) = 7;
        result = *(_QWORD *)(a1 + 248);
        *(_BYTE *)(result + 5) = 9;
        return result;
      }
      if ( ((1LL << v3) & 0x3C000000) != 0 )
      {
        if ( *(_DWORD *)(a1 + 600) != 1 )
        {
          ++*(_QWORD *)(result + 16);
          result = *(_QWORD *)(a1 + 248);
        }
        goto LABEL_7;
      }
    }
  }
  *(_BYTE *)(result + 1) = 2;
  return result;
}

