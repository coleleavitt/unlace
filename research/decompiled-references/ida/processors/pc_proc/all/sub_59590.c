__int64 __fastcall sub_59590(__int64 *a1, char a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // r15
  __int64 v4; // r13
  int v5; // r14d
  int v6; // r12d
  unsigned __int64 v7; // rbx
  __int64 tinfo_size; // rax

  v2 = getinf();
  v3 = *a1;
  v4 = *a1 + 80 * a1[1];
  if ( v4 == *a1 )
    return 1;
  v5 = v2 - 1;
  v6 = -v2;
  while ( 1 )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size == -1 )
      break;
    v7 = v6 & (unsigned __int64)(v5 + tinfo_size);
    if ( !a2 )
      v7 = tinfo_size;
    v3 += 80;
    cleanup_argloc();
    *(_DWORD *)(v3 - 80) = 1;
    *(_QWORD *)(v3 - 72) = v7;
    if ( v4 == v3 )
      return 1;
  }
  return 0;
}

