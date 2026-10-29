__int64 __fastcall sub_7DFD0(__int64 *a1, __int64 a2, double a3)
{
  char *v4; // rax
  char v5; // r12
  __int64 v6; // rax
  bool v7; // cf
  __int64 v8; // rax

  if ( *(_DWORD *)(a2 + 48) <= 3u )
  {
    *a1 = sub_7CEC0((_QWORD *)a2, a3);
    a1[1] = sub_7CEC0((_QWORD *)a2, a3);
    return 1;
  }
  v4 = *(char **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_7A4F0(a3);
  v5 = *v4;
  *(_QWORD *)a2 = v4 + 1;
  *a1 = sub_7CFC0(a2, 0, a3);
  v6 = sub_7CEC0((_QWORD *)a2, a3);
  a1[1] = v6;
  v7 = __CFADD__(*a1, v6);
  v8 = *a1 + v6;
  if ( !v7 || (v5 & 3) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      a1[1] = v8;
      *a1 = 0;
    }
    if ( (v5 & 2) != 0 )
      a1[1] = ~*a1;
    return 1;
  }
  return 0;
}

