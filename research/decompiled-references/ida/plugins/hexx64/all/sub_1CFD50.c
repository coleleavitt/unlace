__int64 __fastcall sub_1CFD50(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = a1[184];
  v4 = v3 + 40LL * a1[185];
  if ( !(40LL * a1[185]) )
  {
LABEL_8:
    if ( !under_debugger )
      sub_383060(0xCDDCu, a3);
    BUG();
  }
  while ( a2 < *(_QWORD *)(v3 + 8) )
  {
    v3 += 40;
    if ( v4 == v3 )
      goto LABEL_8;
  }
  result = a2 - *(_QWORD *)(v3 + 32);
  if ( *(_DWORD *)(*(_QWORD *)(a1[187] + 24LL) + 24LL) != 8 )
    return (int)result;
  return result;
}

