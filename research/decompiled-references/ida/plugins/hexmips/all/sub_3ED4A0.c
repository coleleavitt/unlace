unsigned __int64 __fastcall sub_3ED4A0(_QWORD *a1, unsigned int a2, char a3, double a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax

  if ( sub_CBD70() != 1 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCD9u, a4);
LABEL_14:
    BUG();
  }
  if ( a1[98] != -1 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCDAu, a4);
    goto LABEL_14;
  }
  v5 = a1[5];
  v6 = a1[52];
  if ( v5 == v6 && v6 != -1 && !sub_CBD70() )
    v5 = a1[55];
  v7 = v5;
  v8 = v5 & 0xFFFFFFFFFFFFFFFCLL;
  v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( a3 != 7 )
    v9 = v8;
  return sub_3ECCE0((__int64)a1, v9, a2);
}

