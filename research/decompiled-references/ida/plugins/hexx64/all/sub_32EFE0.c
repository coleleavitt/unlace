char __fastcall sub_32EFE0(__int64 a1, __int64 a2, double a3)
{
  char result; // al
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r12

  if ( *(_DWORD *)(a1 + 20) != *(_DWORD *)(a2 + 20) )
    return 0;
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 != *(_QWORD *)(a2 + 56) )
    return 0;
  if ( v4 )
  {
    v5 = 0;
    while ( sub_125B60((unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 16 * v5), 16 * v5 + *(_QWORD *)(a2 + 48), 0, a3) )
    {
      if ( (unsigned __int64)++v5 >= *(_QWORD *)(a1 + 56) )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( (unsigned int)lexcompare_tinfo() )
    return 0;
  if ( sub_122C30(a1 + 96, a2 + 96) )
    return 0;
  if ( sub_122C30(a1 + 136, a2 + 136) )
    return 0;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 != *(_QWORD *)(a2 + 32) )
    return 0;
  if ( !v6 )
    return 1;
  v7 = 0;
  while ( 1 )
  {
    result = sub_125B60((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 80 * v7), 80 * v7 + *(_QWORD *)(a2 + 24), 0, a3);
    if ( !result )
      break;
    if ( (unsigned __int64)++v7 >= *(_QWORD *)(a1 + 32) )
      return 1;
  }
  return result;
}

