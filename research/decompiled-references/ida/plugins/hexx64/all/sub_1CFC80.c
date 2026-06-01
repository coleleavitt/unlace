unsigned __int64 __fastcall sub_1CFC80(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1 + 1472);
  if ( !(40LL * *(_QWORD *)(a1 + 1480)) )
  {
LABEL_6:
    if ( !under_debugger )
      sub_383060(0xCDDCu, a3);
    BUG();
  }
  v4 = *(_QWORD *)(a1 + 1472);
  while ( *(_QWORD *)(v4 + 8) > a2 )
  {
    v4 += 40;
    if ( v4 == v3 + 40LL * *(_QWORD *)(a1 + 1480) )
      goto LABEL_6;
  }
  return 0xCCCCCCCCCCCCCCCDLL * ((v4 - v3) >> 3);
}

