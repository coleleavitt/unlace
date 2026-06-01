__int64 __fastcall sub_3B7F10(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rdx

  if ( *(_DWORD *)(a2 + 8) == 27 )
    return 2;
  v3 = *(_QWORD *)a2;
  v4 = sub_384CF0(*(_QWORD *)(a1 + 16), *(_QWORD *)a2);
  if ( !v4 )
    return 7;
  v5 = *(_DWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( v5 != 1 )
      sub_3B5AD0(a3);
    if ( v3 != *(_QWORD *)(v4 + 8) )
      return 7;
  }
  if ( *(_DWORD *)(v4 + 80) != 1 )
    return 7;
  sub_387230(v4);
  v7 = sub_3C0A30(*(_QWORD *)(v4 + 24) + 1312LL);
  result = 3;
  if ( !v7 && (*(_DWORD *)(v4 + 80) != 1 || *(_DWORD *)(*(_QWORD *)(v4 + 88) + 8LL) != 82) )
    return 7;
  return result;
}

