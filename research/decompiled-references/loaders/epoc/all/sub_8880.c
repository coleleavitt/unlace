__int64 __fastcall sub_8880(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  unsigned __int64 v6; // rcx
  char *v7; // rsi
  __int64 v9; // rax

  v3 = 4 * a3;
  if ( 4 * a3 < a3 )
    goto LABEL_13;
  if ( !a3 )
  {
    if ( !*(_QWORD *)(a2 + 8) )
      return sub_78F0(a1, *(char **)a2, v3);
    goto LABEL_10;
  }
  if ( a3 >> 62 )
LABEL_13:
    sub_58B0((__int64)"Corrupted file");
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 >= a3 )
  {
    if ( a3 == v6 )
      return sub_78F0(a1, *(char **)a2, v3);
LABEL_10:
    *(_QWORD *)(a2 + 8) = a3;
    return sub_78F0(a1, *(char **)a2, v3);
  }
  v7 = *(char **)a2;
  if ( *(_QWORD *)(a2 + 16) < a3 )
  {
    v9 = qvector_reserve(a2, v7, a3, 4);
    v6 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v9;
    v7 = (char *)v9;
  }
  memset(&v7[4 * v6], 0, 4 * (a3 - v6));
  *(_QWORD *)(a2 + 8) = a3;
  return sub_78F0(a1, *(char **)a2, v3);
}
