__int64 __fastcall sub_3B7E30(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // edx

  v3 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v3 - 27) <= 1 || v3 == 61 )
    return 2;
  v4 = *(_QWORD *)a2;
  v5 = sub_384CF0(*(_QWORD *)(a1 + 16), *(_QWORD *)a2);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 24);
    if ( !v6 )
      return 2;
    if ( v6 != 1 )
      sub_3B5AD0(a3);
    v7 = 6;
    if ( v4 == *(_QWORD *)(v5 + 8) )
      return 2;
  }
  else
  {
    return 6;
  }
  return v7;
}

