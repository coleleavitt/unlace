__int64 __fastcall sub_1CAED0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = a1[184];
  v3 = v2 + 40LL * a1[185];
  if ( !(40LL * a1[185]) )
  {
LABEL_8:
    if ( !under_debugger )
      sub_37CFE0(52700);
    BUG();
  }
  while ( a2 < *(_QWORD *)(v2 + 8) )
  {
    v2 += 40;
    if ( v3 == v2 )
      goto LABEL_8;
  }
  result = a2 - *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(*(_QWORD *)(a1[187] + 24LL) + 24LL) != 8 )
    return (int)result;
  return result;
}

