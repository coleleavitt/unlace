unsigned __int64 __fastcall sub_30EA40(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v10; // ecx

  sub_30DE00(a1);
  if ( a4 > 0 )
  {
    if ( a3 >= a2 )
    {
      v6 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = 3;
      if ( v6 != 8 )
      {
        v7 = (1LL << (8 * (unsigned __int8)v6)) - 1;
        if ( v7 < a2 )
          goto LABEL_17;
        v8 = a3 - (a3 - a2) % a4;
        goto LABEL_6;
      }
      *(_QWORD *)(a1 + 8) = a2;
      v8 = a3 - (a3 - a2) % a4;
      goto LABEL_7;
    }
LABEL_18:
    if ( !under_debugger )
      sub_37E160(51740);
    BUG();
  }
  if ( !a4 || a2 < a3 )
    goto LABEL_18;
  v10 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)a1 = 3;
  if ( v10 != 8 )
  {
    v7 = (1LL << (8 * (unsigned __int8)v10)) - 1;
    if ( v7 < a2 )
      goto LABEL_17;
    v8 = a3 - (a3 - a2) % -a4;
LABEL_6:
    *(_QWORD *)(a1 + 8) = a2;
    if ( v7 >= v8 )
      goto LABEL_7;
LABEL_17:
    sub_30DCC0(a1);
  }
  *(_QWORD *)(a1 + 8) = a2;
  v8 = a3 - (a3 - a2) % -a4;
LABEL_7:
  *(_QWORD *)(a1 + 16) = v8;
  if ( a3 == a2 )
    a4 = 1;
  *(_QWORD *)(a1 + 24) = a4;
  return sub_30E1E0(a1);
}

