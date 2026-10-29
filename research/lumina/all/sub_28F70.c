__int64 __fastcall sub_28F70(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax

  sub_28840(a2, (_QWORD *)(a1 + 120), " AND ", 5u);
  v3 = a2[1];
  if ( v3 <= 1 )
    return 1;
  v5 = *a2;
  if ( a2[2] < v3 + 6 )
  {
    v7 = sub_1987B0(a2, v5, v3 + 6, 1);
    *a2 = v7;
    v5 = v7;
  }
  a2[1] = v3 + 6;
  *(_BYTE *)(v5 + v3 + 5) = 0;
  memmove((void *)(*a2 + 6), (const void *)*a2, v3 - 1);
  v6 = *a2;
  *(_DWORD *)v6 = 1380272215;
  *(_WORD *)(v6 + 4) = 8261;
  return 1;
}
