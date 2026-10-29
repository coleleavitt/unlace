__int64 __fastcall sub_15190(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rax
  __int64 v9; // rax
  int v10; // eax
  const char *v11; // rax
  const char *v12; // rbp
  size_t v13; // rax
  size_t v14; // r13
  size_t v15; // r12
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax

  if ( a3 != 65 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v6 = (_BYTE *)qvector_reserve(a1, 0, 1, 1, a5, a6);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = 1;
    *v6 = 0;
    return a1;
  }
  v9 = node2ea(a4);
  v10 = netnode_altval(*(_QWORD *)(a5 + 128), v9, 321);
  v11 = (const char *)sub_E8A0(a5, v10 - 1);
  *(_QWORD *)a1 = 0;
  v12 = v11;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !v11 )
    return a1;
  v13 = strlen(v11);
  v14 = v13 + 1;
  v15 = v13;
  v18 = (void *)qvector_reserve(a1, 0, v13 + 1, 1, v16, v17);
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)a1 = v18;
  memmove(v18, v12, v15);
  *(_BYTE *)(*(_QWORD *)a1 + v15) = 0;
  return a1;
}
