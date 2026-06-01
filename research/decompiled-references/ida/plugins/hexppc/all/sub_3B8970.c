__int64 __fastcall sub_3B8970(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // edx
  unsigned int v6; // edx

  v3 = *a2;
  v4 = sub_385A70(*(_QWORD *)(a1 + 16), *a2);
  if ( !v4 )
    return 6;
  v5 = *(_DWORD *)(a1 + 24);
  if ( !v5 )
    goto LABEL_5;
  if ( v5 != 1 )
    sub_3B6850(a3);
  v6 = 6;
  if ( v3 == *(_QWORD *)(v4 + 8) )
  {
LABEL_5:
    v6 = 7;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 880LL) + 24LL) )
      return 3;
  }
  return v6;
}

