__int64 __fastcall sub_1CF740(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(_QWORD *)(a1 + 1472);
  v3 = result + 40LL * *(_QWORD *)(a1 + 1480);
  if ( !(40LL * *(_QWORD *)(a1 + 1480)) )
  {
LABEL_6:
    if ( !under_debugger )
      sub_3835A0(52700);
    BUG();
  }
  while ( a2 < *(_QWORD *)(result + 8) )
  {
    result += 40;
    if ( v3 == result )
      goto LABEL_6;
  }
  return result;
}

