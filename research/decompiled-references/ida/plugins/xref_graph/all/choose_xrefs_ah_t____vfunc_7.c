__int64 __fastcall choose_xrefs_ah_t__::vfunc_7(__int64 a1, __int64 a2, __int64 a3, int **a4, __int64 a5, __int64 a6)
{
  int *v8; // rax
  int *v9; // rdx
  int *v10; // rbx
  int *v11; // r12

  v8 = *a4;
  if ( !*a4 || *v8 > 1 )
  {
    sub_22070((__int64)a4, 0, 0, 0, a5, a6);
    v8 = *a4;
  }
  v9 = a4[1];
  v10 = v9;
  if ( !v8 || *v8 > 1 )
  {
    sub_22070((__int64)a4, 0, 0, 0, a5, a6);
    v9 = a4[1];
  }
  v11 = &v9[2 * (_QWORD)a4[2]];
  if ( v10 == v11 )
    return 7;
  while ( !(unsigned __int8)sub_1FC80(a3, *(_QWORD *)(*(_QWORD *)v10 + 16LL), 511) )
  {
    v10 += 2;
    if ( v11 == v10 )
      return 7;
  }
  return 3;
}

