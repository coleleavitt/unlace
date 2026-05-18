void __fastcall sub_E3B50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // ecx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi

  v2 = *(_QWORD *)(a1 + 160);
  if ( !v2 )
    v2 = a1;
  v3 = *(_DWORD *)(v2 + 296);
  v4 = *(_QWORD **)(v2 + 384);
  if ( v3 > 0 )
  {
    if ( a2 == *v4 )
      return;
    v5 = v4 + 1;
    while ( v5 != &v4[(unsigned int)(v3 - 1) + 1] )
    {
      if ( *v5++ == a2 )
        return;
    }
  }
  v6 = sub_D2640((__int64)v4, 8 * v3 + 8);
  if ( v6 )
  {
    v7 = *(int *)(v2 + 296);
    *(_QWORD *)(v2 + 384) = v6;
    *(_DWORD *)(v2 + 296) = v7 + 1;
    *(_QWORD *)(v6 + 8 * v7) = a2;
  }
  else
  {
    v8 = *(_QWORD *)v2;
    if ( !*(_BYTE *)(*(_QWORD *)v2 + 103LL) && !*(_BYTE *)(v8 + 104) )
      sub_DBE60(v8);
  }
}
