__int64 __fastcall sub_CFBE0(__int64 a1, int a2, int a3, unsigned __int8 *a4, _DWORD *a5, int *a6, int a7)
{
  int v7; // r15d
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  __int64 v14; // rdx

  if ( a2 > a3 )
    return 0;
  v7 = a2;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1 + 104LL * v7 + 40);
    v11 = *(_QWORD *)(v10 + 8);
    v12 = sub_CFB50(v11, *(_WORD *)(v10 + 54), a4);
    if ( v12 >= 0 && (!a7 || (*(_BYTE *)(v11 + 16LL * v12 + 14) & 2) == 0) )
      break;
    if ( a3 < ++v7 )
      return 0;
  }
  if ( a5 )
  {
    if ( (*(_BYTE *)(a1 + 104LL * v7 + 70) & 8) != 0 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 104LL * v7 + 48) + 32LL) + 24LL * v12;
      *(_BYTE *)(v14 + 25) |= 0x40u;
    }
    *a5 = v7;
    *a6 = v12;
  }
  return 1;
}
