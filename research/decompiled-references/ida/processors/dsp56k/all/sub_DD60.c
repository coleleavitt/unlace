__int64 __fastcall sub_DD60(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  int wide_byte; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx

  if ( *(_DWORD *)(a1 + 600) == 1 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = *(_QWORD *)(a2 + 16) + a3 + 2LL;
  }
  else
  {
    wide_byte = get_wide_byte();
    ++*(_WORD *)(a2 + 26);
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a1 + 248);
    if ( *(_DWORD *)(a1 + 600) == 3 )
    {
      *(_QWORD *)(v8 + 16) = v7 + (__int16)wide_byte;
    }
    else
    {
      if ( (wide_byte & 0x800000) != 0 )
        wide_byte |= 0xFF800000;
      *(_QWORD *)(v8 + 16) = v7 + wide_byte;
    }
  }
  v3 = *(_QWORD *)(a1 + 248);
  if ( (*(_BYTE *)(v3 + 33) & 0x30) != 0 )
    goto LABEL_10;
  v4 = *(_WORD *)(a2 + 24) - 18;
  if ( v4 > 0x30u )
    goto LABEL_10;
  if ( ((1LL << v4) & 0x1FE0000000DD9LL) == 0 )
  {
    if ( ((1LL << v4) & 0x3C000000) != 0 )
    {
      if ( *(_DWORD *)(a1 + 600) != 1 )
      {
        ++*(_QWORD *)(v3 + 16);
        v3 = *(_QWORD *)(a1 + 248);
      }
      goto LABEL_9;
    }
LABEL_10:
    *(_BYTE *)(v3 + 1) = 2;
    goto LABEL_11;
  }
LABEL_9:
  *(_BYTE *)(v3 + 1) = 7;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 9;
LABEL_11:
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

