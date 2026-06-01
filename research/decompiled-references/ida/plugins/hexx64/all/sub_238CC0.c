__int64 __fastcall sub_238CC0(__int64 a1, unsigned __int64 a2, __int64 *a3, char a4, double a5)
{
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx

  if ( *(char *)(*(_QWORD *)(a1 + 32) + 4LL) < 0 )
    return 0;
  if ( sub_237DA0(a1, a2, a3, a4, a5) )
    return 0;
  v6 = **(_QWORD ***)(a1 + 64);
  if ( !v6 )
    goto LABEL_8;
  v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_8;
      v8 = *(_QWORD *)(v7 + 24);
      if ( a2 >= v8 )
        break;
      v7 = *(_QWORD *)(v7 + 8);
    }
    if ( v8 >= a2 )
      break;
    v7 = *(_QWORD *)(v7 + 16);
  }
  if ( v6 == (_QWORD *)v7 )
  {
LABEL_8:
    if ( !under_debugger )
      sub_383060(0xCC97u, a5);
    BUG();
  }
  return 0;
}

