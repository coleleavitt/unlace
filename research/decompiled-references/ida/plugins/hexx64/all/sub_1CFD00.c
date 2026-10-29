__int64 __fastcall sub_1CFD00(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = *(_QWORD *)(a1 + 1472);
  v4 = result + 40LL * *(_QWORD *)(a1 + 1480);
  if ( !(40LL * *(_QWORD *)(a1 + 1480)) )
  {
LABEL_6:
    if ( !under_debugger )
      sub_383060(0xCDDCu, a3);
    BUG();
  }
  while ( a2 < *(_QWORD *)(result + 8) )
  {
    result += 40;
    if ( v4 == result )
      goto LABEL_6;
  }
  return result;
}

