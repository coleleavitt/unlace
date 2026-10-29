__int64 __fastcall sub_26670(__int64 a1)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  if ( *(_QWORD *)(a1 + 64) )
    return 0;
  *(_QWORD *)(a1 + 64) = qsem_create();
  v3 = qsem_create();
  v4 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 56) = v3;
  if ( v4 )
  {
    if ( v3 )
      return 0;
  }
  else
  {
    if ( !v3 )
      return 19;
    qsem_free();
    v5 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 56) = 0;
    if ( !v5 )
      return 19;
  }
  qsem_free();
  *(_QWORD *)(a1 + 64) = 0;
  return 19;
}

