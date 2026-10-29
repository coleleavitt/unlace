__int64 __fastcall sub_19F880(__int64 a1, double a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  if ( (*(_BYTE *)(v2 + 4) & 0x40) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCB49u, a2);
    goto LABEL_12;
  }
  if ( !(unsigned __int8)sub_19F810((_QWORD *)a1) )
    return 0xFFFFFFFFLL;
  if ( !*(_BYTE *)(v2 + 320) )
  {
    v3 = *(_QWORD *)(v2 + 464);
    if ( v3 )
      return *(unsigned int *)(*(_QWORD *)(v2 + 456) + 4 * v3 - 4);
    if ( !under_debugger )
      sub_383060(0xCB4Au, a2);
LABEL_12:
    BUG();
  }
  return *(unsigned int *)(a1 + 48);
}

