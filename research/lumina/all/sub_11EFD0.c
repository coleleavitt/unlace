__int64 __fastcall sub_11EFD0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rax
  const char *v4; // rsi
  __int64 *v5; // rbp

  v2 = a2[5];
  v3 = sub_DC1C0(*(_QWORD *)a1, 0x68u);
  a2[4] = v3;
  if ( !v3 )
    return 7;
  *((_DWORD *)v3 + 11) = 1;
  v4 = (const char *)a2[3];
  v5 = v3;
  if ( v4 )
    *v3 = (__int64)sub_DC720(*(_QWORD *)a1, v4);
  else
    *v3 = sub_E8280(*(_QWORD *)a1, "subquery_%u", *(_DWORD *)(v2 + 16));
  while ( *(_QWORD *)(v2 + 80) )
    v2 = *(_QWORD *)(v2 + 80);
  sub_11EBA0(*(_QWORD *)a1, *(int **)(v2 + 32), (_WORD *)v5 + 27, (__int64 **)v5 + 1);
  *((_DWORD *)v5 + 12) |= 0x4200u;
  *((_WORD *)v5 + 26) = -1;
  *((_WORD *)v5 + 29) = 200;
  return *(_DWORD *)(a1 + 48) != 0;
}
