__int64 __fastcall sub_79550(__int64 *a1, __int64 a2)
{
  char *v3; // rax
  char v4; // r12
  __int64 v5; // rax
  bool v6; // cf
  __int64 v7; // rax

  if ( *(_DWORD *)(a2 + 48) <= 3u )
  {
    *a1 = sub_78440((_QWORD *)a2);
    a1[1] = sub_78440((_QWORD *)a2);
    return 1;
  }
  v3 = *(char **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_75A70(a1);
  v4 = *v3;
  *(_QWORD *)a2 = v3 + 1;
  *a1 = sub_78540(a2, 0);
  v5 = sub_78440((_QWORD *)a2);
  a1[1] = v5;
  v6 = __CFADD__(*a1, v5);
  v7 = *a1 + v5;
  if ( !v6 || (v4 & 3) != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      a1[1] = v7;
      *a1 = 0;
    }
    if ( (v4 & 2) != 0 )
      a1[1] = ~*a1;
    return 1;
  }
  return 0;
}

