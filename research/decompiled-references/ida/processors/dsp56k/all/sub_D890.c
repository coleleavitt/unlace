__int64 __fastcall sub_D890(__int64 a1, __int64 a2)
{
  unsigned __int16 wide_byte; // ax
  __int64 v3; // rax
  unsigned __int16 v4; // cx

  wide_byte = get_wide_byte();
  ++*(_WORD *)(a2 + 26);
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = wide_byte;
  v3 = *(_QWORD *)(a1 + 248);
  if ( (*(_BYTE *)(v3 + 33) & 0x30) == 0 )
  {
    v4 = *(_WORD *)(a2 + 24) - 18;
    if ( v4 <= 0x30u )
    {
      if ( ((1LL << v4) & 0x1FE0000000DD9LL) != 0 )
      {
LABEL_7:
        *(_BYTE *)(v3 + 1) = 7;
        *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 9;
        return 1;
      }
      if ( ((1LL << v4) & 0x3C000000) != 0 )
      {
        if ( *(_DWORD *)(a1 + 600) != 1 )
        {
          ++*(_QWORD *)(v3 + 16);
          v3 = *(_QWORD *)(a1 + 248);
        }
        goto LABEL_7;
      }
    }
  }
  *(_BYTE *)(v3 + 1) = 2;
  return 1;
}

