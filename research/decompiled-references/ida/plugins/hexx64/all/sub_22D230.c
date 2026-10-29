__int64 __fastcall sub_22D230(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4, double a5)
{
  __int64 v6; // rbx
  char v7; // al
  _DWORD *v8; // [rsp+8h] [rbp-18h]
  __int64 v9; // [rsp+10h] [rbp-10h]

  if ( (*(_BYTE *)(a1 + 5) & 0x10) == 0 )
    return 0;
  v6 = *(_QWORD *)(a1 + 944);
  if ( *(_QWORD *)(v6 + 8) == -1 )
  {
    v9 = a4;
    v8 = a3;
    v7 = sub_21E760(*(__int64 **)(a1 + 944), a5);
    a3 = v8;
    a4 = v9;
    if ( !v7 )
      return 0;
  }
  if ( !*(_QWORD *)(v6 + 16) )
    return 0;
  if ( a2 )
    *a2 = *(_QWORD *)(v6 + 8);
  if ( a3 )
    *a3 = *(_QWORD *)(v6 + 16);
  if ( a4 )
    copy_tinfo_t();
  return 1;
}

