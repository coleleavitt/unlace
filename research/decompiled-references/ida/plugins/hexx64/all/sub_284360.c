__int64 __fastcall sub_284360(__int64 a1, __int64 a2, _DWORD *a3, double a4)
{
  __int64 *v4; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi

  if ( !a1 || *(_DWORD *)(a1 + 8) != 57 )
  {
    if ( !under_debugger )
      sub_383060(0xC5B1u, a4);
LABEL_18:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 24) == a2 )
  {
    if ( !under_debugger )
      sub_383060(0xC5B2u, a4);
    goto LABEL_18;
  }
  v4 = *(__int64 **)(a1 + 32);
  v5 = v4[1];
  if ( !v5 )
    goto LABEL_12;
  v6 = *v4;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = 72 * v8;
    v10 = v6 + v9;
    if ( a2 == v6 + v9 )
      break;
    v8 = ++v7;
    if ( v7 >= v5 )
      goto LABEL_12;
  }
  if ( a3 )
  {
    *a3 = v7;
    v10 = *v4 + v9;
  }
  if ( !v10 )
  {
LABEL_12:
    if ( !under_debugger )
      sub_383060(0xC5B3u, a4);
    goto LABEL_18;
  }
  return v10;
}

