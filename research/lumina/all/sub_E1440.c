__int64 __fastcall sub_E1440(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *v3; // rax
  __int64 *v4; // rdx

  v1 = *(int *)(a1 + 532);
  if ( (int)v1 % 5 )
    return 0;
  v3 = sub_DFAD0(a1, *(_QWORD **)(a1 + 568), 8 * v1 + 40);
  if ( !v3 )
    return 7;
  v4 = &v3[*(int *)(a1 + 532)];
  *(_OWORD *)v4 = 0;
  v4[4] = 0;
  *((_OWORD *)v4 + 1) = 0;
  *(_QWORD *)(a1 + 568) = v3;
  return 0;
}
