__int64 __fastcall sub_3B7B90(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // edx
  unsigned int v6; // edx

  v3 = *a2;
  v4 = sub_384CF0(*(_QWORD *)(a1 + 16), *a2);
  if ( !v4 )
    return 6;
  v5 = *(_DWORD *)(a1 + 24);
  if ( !v5 )
    return 2;
  if ( v5 != 1 )
    sub_3B5AD0(a3);
  v6 = 6;
  if ( v3 == *(_QWORD *)(v4 + 8) )
    return 2;
  return v6;
}

