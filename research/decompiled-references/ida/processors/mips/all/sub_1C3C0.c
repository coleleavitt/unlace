__int64 __fastcall sub_1C3C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // ebp
  unsigned int v5; // ecx
  __int64 first_seg; // rax

  v4 = (a4 >> 21) & 0x1F;
  *(_BYTE *)(a3 + 1) = 1;
  v5 = *(_DWORD *)(a1 + 120);
  if ( v5 > 5 )
    goto LABEL_12;
  if ( ((1LL << v5) & 0x16) != 0 )
    goto LABEL_10;
  if ( ((1LL << v5) & 0x29) == 0 )
  {
LABEL_12:
    if ( under_debugger )
      goto LABEL_16;
    interr(10339);
LABEL_14:
    if ( !under_debugger )
      interr(10206);
LABEL_16:
    BUG();
  }
  if ( a2 == -1 )
    first_seg = get_first_seg();
  else
    first_seg = getseg(a2);
  if ( !first_seg )
    goto LABEL_14;
  if ( *(_BYTE *)(first_seg + 43) != 2 && (unsigned int)(*(_DWORD *)(a1 + 184) - 4) > 1 )
  {
    *(_WORD *)(a3 + 6) = v4;
    *(_BYTE *)(a3 + 5) = 2;
    return 2;
  }
LABEL_10:
  *(_WORD *)(a3 + 6) = v4;
  *(_BYTE *)(a3 + 5) = 7;
  return 7;
}

