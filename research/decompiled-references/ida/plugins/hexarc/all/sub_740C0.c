__int64 __fastcall sub_740C0(int a1, int a2, unsigned __int64 a3)
{
  unsigned int v3; // ecx
  _QWORD *v5; // rsi
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx

  v3 = 1;
  if ( (a1 & 0xFFFFFFFB) == 0 )
    return v3;
  v5 = *(_QWORD **)*(&off_4BA140 + a2);
  if ( !v5 )
    return v3;
  v6 = 24;
  v7 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
    goto LABEL_12;
  if ( (*(_BYTE *)v7 & 2) != 0 )
    return v3;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v6 = v7 + 24;
    if ( a3 < v8 )
    {
      v7 = *(_QWORD *)(v7 + 8);
      goto LABEL_9;
    }
    if ( v8 >= a3 )
      break;
    v7 = *(_QWORD *)(v7 + 16);
LABEL_9:
    if ( (*(_BYTE *)v7 & 2) != 0 )
      return 1;
  }
  if ( (_QWORD *)v7 == v5 )
    return 1;
LABEL_12:
  if ( !*(_DWORD *)(v6 + 8) && a1 == 2 )
    return 0;
  v3 = 1;
  if ( *(_DWORD *)(v6 + 8) != 1 )
    return v3;
  LOBYTE(v3) = (unsigned int)(a1 - 2) > 1;
  return v3;
}

