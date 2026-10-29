bool __fastcall sub_1B640(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 first_seg; // rax

  v2 = *(_DWORD *)(a1 + 120);
  if ( v2 > 5 )
    goto LABEL_11;
  if ( ((1LL << v2) & 0x16) != 0 )
    return 1;
  if ( ((1LL << v2) & 0x29) == 0 )
  {
LABEL_11:
    if ( under_debugger )
      goto LABEL_15;
    interr(10339);
LABEL_13:
    if ( !under_debugger )
      interr(10206);
LABEL_15:
    BUG();
  }
  if ( a2 == -1 )
    first_seg = get_first_seg();
  else
    first_seg = getseg(a2);
  if ( !first_seg )
    goto LABEL_13;
  if ( *(_BYTE *)(first_seg + 43) != 2 )
    return (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1;
  return 1;
}
