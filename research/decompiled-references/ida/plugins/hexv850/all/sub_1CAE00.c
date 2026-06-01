unsigned __int64 __fastcall sub_1CAE00(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 1472);
  if ( !(40LL * *(_QWORD *)(a1 + 1480)) )
  {
LABEL_6:
    if ( !under_debugger )
      sub_37CFE0(52700);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 1472);
  while ( *(_QWORD *)(v3 + 8) > a2 )
  {
    v3 += 40;
    if ( v3 == v2 + 40LL * *(_QWORD *)(a1 + 1480) )
      goto LABEL_6;
  }
  return 0xCCCCCCCCCCCCCCCDLL * ((v3 - v2) >> 3);
}

