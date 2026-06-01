__int64 __fastcall sub_1D4E20(__int64 a1, __int64 *a2, double a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 first_cref_from; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  int v8; // ebx
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 next_cref_from; // r14
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
  first_cref_from = get_first_cref_from();
  if ( first_cref_from >= v4 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(a1 + 32);
    if ( v6 + 1 != v7 && first_cref_from >= v7 && v6 >= first_cref_from )
    {
      v8 = *(_DWORD *)(a1 + 72) + 1;
      goto LABEL_11;
    }
    result = 2;
    if ( first_cref_from == -1 )
      return result;
  }
  v10 = sub_670B0(*(_QWORD *)(a1 + 64), first_cref_from);
  if ( v10 && v10[4] == first_cref_from )
  {
    v15 = *((_DWORD *)v10 + 18);
    v16 = a2[1];
    v17 = *a2;
    if ( a2[2] < (unsigned __int64)(v16 + 1) )
    {
      v21 = qvector_reserve((__int64)a2, v17, v16 + 1, 4);
      *a2 = v21;
      v17 = v21;
      v16 = a2[1];
    }
    *(_DWORD *)(v17 + 4 * v16) = v15;
    ++a2[1];
    next_cref_from = get_next_cref_from();
    v19 = sub_670B0(*(_QWORD *)(a1 + 64), next_cref_from);
    if ( !v19 || v19[4] != next_cref_from )
      return 3;
  }
  v12 = sub_68FD0(*(_QWORD *)(a1 + 64), v4, first_cref_from, 1, a3);
  result = 0;
  if ( !v12 )
    return result;
  sub_B52C0((_QWORD *)a1, v4, *(unsigned int *)(v12 + 72), v11, a3);
  v8 = *(_DWORD *)(v12 + 72);
LABEL_11:
  v13 = a2[1];
  v14 = *a2;
  if ( a2[2] < (unsigned __int64)(v13 + 1) )
  {
    v20 = qvector_reserve((__int64)a2, v14, v13 + 1, 4);
    *a2 = v20;
    v14 = v20;
    v13 = a2[1];
  }
  *(_DWORD *)(v14 + 4 * v13) = v8;
  ++a2[1];
  return 3;
}

