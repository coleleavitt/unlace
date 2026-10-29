_QWORD *__fastcall sub_250350(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 (__fastcall *v5)(__int64, int, int); // rax
  unsigned int *v6; // rax
  unsigned int v7; // r13d
  unsigned int v8; // r14d
  int v9; // ebp
  __int64 v10; // rsi
  _QWORD *v11; // r12
  char v12; // bp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // r15
  int v19; // r14d
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r8
  _QWORD *v24; // rax
  __int64 (__fastcall *v25)(__int64, int, int); // rax

  v5 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v5 == sub_650D0 )
  {
    v6 = *(unsigned int **)(a1[6] + 24LL * (int)a2);
    v7 = *v6;
LABEL_3:
    v8 = v6[1];
    goto LABEL_4;
  }
  v7 = v5((__int64)a1, a2, 0);
  v25 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v25 == sub_650D0 )
  {
    v6 = *(unsigned int **)(a1[6] + 24LL * (int)a2);
    goto LABEL_3;
  }
  v8 = v25((__int64)a1, a2, 1);
LABEL_4:
  v9 = *(_DWORD *)(a1[38] + 4LL * (int)a2);
  v10 = v8;
  v11 = (_QWORD *)sub_250510(a1, v7, a3, 1);
  v12 = v9 - 6;
  v18 = sub_24FFD0(a1, v8, v13, v14, a4);
  if ( (v12 & 2) == 0 )
  {
    v10 = (__int64)v11;
    v11 = sub_244460(*(_QWORD *)(a1[41] + 112LL), (__int64)v11, v15, v16, v17, a4);
  }
  v19 = v12 & 1;
  if ( (v12 & 1) != 0 )
  {
    v20 = (__int64)v18;
    if ( !v11 )
      return (_QWORD *)v20;
  }
  else
  {
    v10 = (__int64)v18;
    v24 = sub_244460(*(_QWORD *)(a1[41] + 112LL), (__int64)v18, v15, v16, v17, a4);
    v18 = v24;
    if ( !v11 )
    {
      v20 = (__int64)v24;
      return sub_244460(*(_QWORD *)(a1[41] + 112LL), v20, v15, v16, v22, a4);
    }
  }
  v21 = j__qalloc_or_throw(64, v10, v15, v16);
  *(_QWORD *)v21 = -1;
  v20 = v21;
  *(_DWORD *)(v21 + 8) = 18;
  *(_QWORD *)(v21 + 12) = -1;
  *(_QWORD *)(v21 + 24) = v11;
  *(_QWORD *)(v21 + 32) = v18;
  *(_QWORD *)(v21 + 40) = 0;
  *(_QWORD *)(v21 + 48) = 0;
  *(_DWORD *)(v21 + 56) = 0;
  *(_QWORD *)v21 = sub_2414F0(a1, v7, a4);
  sub_2441C0(v20, *(_QWORD *)(a1[41] + 112LL), 0, a4);
  if ( v19 )
    return (_QWORD *)v20;
  return sub_244460(*(_QWORD *)(a1[41] + 112LL), v20, v15, v16, v22, a4);
}

