__int64 __fastcall sub_D3690(__int64 a1, __int64 a2, __int64 **a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // r12d
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-30h]

  v6 = a2;
  if ( qword_241610 && (unsigned int)qword_241610(201) )
    return 266;
  if ( *(_QWORD *)(a2 + 64) )
  {
    v8 = *(_QWORD *)(a2 + 24);
    a2 = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 144LL))(v8, 0);
    *(_QWORD *)(v6 + 64) = 0;
  }
  *(_QWORD *)v6 = a4;
  *(_QWORD *)(v6 + 8) = a3[1];
  *(_QWORD *)(v6 + 24) = *a3;
  v9 = a3[1];
  if ( (__int64)v9 <= *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 184LL) )
  {
    v10 = **a3;
    if ( *(int *)v10 > 2 )
    {
      a2 = 0;
      v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, __int64))(v10 + 136))(*a3, 0, v9, v6 + 64);
      if ( v11 )
        return v11;
    }
  }
  v11 = 0;
  if ( *(_QWORD *)(v6 + 64) )
    return v11;
  v13 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
  v14 = *(_QWORD *)v6 % v13;
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
  v11 = v14;
  if ( !*(_QWORD *)(v6 + 48) )
  {
    v18 = *(_QWORD *)v6 % v13;
    v17 = sub_D1E10(v13, a2);
    *(_QWORD *)(v6 + 48) = v17;
    v14 = v18;
    *(_DWORD *)(v6 + 56) = v15;
    if ( !v17 )
      return 7;
  }
  if ( !(_DWORD)v14 )
    return v11;
  v16 = v15 - v14;
  if ( *(_QWORD *)v6 + (int)v16 > *(__int64 *)(v6 + 8) )
    v16 = *(_QWORD *)(v6 + 8) - *(_QWORD *)v6;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v6 + 24) + 16LL))(
           *(_QWORD *)(v6 + 24),
           v14 + *(_QWORD *)(v6 + 48),
           v16);
}
