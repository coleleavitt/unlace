__int64 __fastcall sub_386160(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 module_data; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rax

  module_data = get_module_data();
  v10 = qalloc_or_throw(32, a2, v8, v9);
  *(_QWORD *)v10 = off_4E6538;
  *(_DWORD *)(v10 + 12) = a3;
  *(_DWORD *)(v10 + 8) = a4;
  *(_OWORD *)(v10 + 16) = -1;
  if ( !a2 )
    return v10;
  v11 = *(_QWORD *)(module_data + 1008);
  v12 = *(__int64 **)(v11 + 40);
  v13 = &v12[*(_QWORD *)(v11 + 48)];
  if ( v12 == v13 )
    return v10;
  while ( 1 )
  {
    v14 = *v12;
    if ( *v12 )
    {
      v15 = *(_QWORD *)(v14 + 32);
      if ( v15 )
      {
        if ( a2 == v15 + 128 )
          break;
      }
    }
    if ( v13 == ++v12 )
      return v10;
  }
  v17 = *(_QWORD *)(v14 + 24);
  if ( !v17 )
    return v10;
  *(_QWORD *)(v10 + 16) = *(_QWORD *)(v17 + 40);
  *(_QWORD *)(v10 + 24) = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 40LL);
  return v10;
}

