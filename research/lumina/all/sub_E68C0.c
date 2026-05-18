__int64 *__fastcall sub_E68C0(__int64 a1, _QWORD *a2, _DWORD *a3, int a4)
{
  __int64 v6; // r15
  __int64 *v7; // rbx

  v6 = *(_QWORD *)a1;
  v7 = sub_DEC00(*(_QWORD *)a1, 172, (__int64)a3, 1);
  if ( v7 )
  {
    *((_DWORD *)v7 + 13) = *a3 - *(_DWORD *)(a1 + 328);
    if ( a2 && *(_DWORD *)a2 > *(_DWORD *)(*(_QWORD *)a1 + 160LL) && !*(_BYTE *)(a1 + 30) )
      sub_DBD10(a1, "too many arguments on function %T", a3);
    *((_DWORD *)v7 + 1) |= 4u;
    v7[4] = (__int64)a2;
    if ( *(_DWORD *)(a1 + 48) )
    {
      if ( a4 != 1 )
        return v7;
    }
    else
    {
      sub_E4950(a1, (__int64)v7);
      if ( a4 != 1 )
        return v7;
    }
    *((_DWORD *)v7 + 1) |= 2u;
    return v7;
  }
  if ( a2 )
    sub_D7810(v6, a2);
  return v7;
}
