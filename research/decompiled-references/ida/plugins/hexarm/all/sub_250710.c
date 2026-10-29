_QWORD *__fastcall sub_250710(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, int, int); // rax
  unsigned int *v5; // rax
  unsigned int v6; // r13d
  int v7; // r14d
  int v8; // ebp
  _QWORD *v9; // r12
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r15
  int v15; // r14d
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v22; // rax
  __int64 (__fastcall *v23)(__int64, int, int); // rax

  v4 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v4 == sub_64AD0 )
  {
    v5 = *(unsigned int **)(a1[6] + 24LL * (int)a2);
    v6 = *v5;
LABEL_3:
    v7 = v5[1];
    goto LABEL_4;
  }
  v6 = v4((__int64)a1, a2, 0);
  v23 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v23 == sub_64AD0 )
  {
    v5 = *(unsigned int **)(a1[6] + 24LL * (int)a2);
    goto LABEL_3;
  }
  v7 = v23((__int64)a1, a2, 1);
LABEL_4:
  v8 = *(_DWORD *)(a1[38] + 4LL * (int)a2);
  v9 = (_QWORD *)sub_2508D0(a1, v6, a3, 1);
  v10 = v8 - 6;
  v14 = sub_250390(a1, v7);
  if ( (v10 & 2) == 0 )
    v9 = sub_244820(*(_QWORD *)(a1[41] + 112LL), (__int64)v9, v11, v12, v13);
  v15 = v10 & 1;
  if ( (v10 & 1) != 0 )
  {
    v16 = (__int64)v14;
    if ( !v9 )
      return (_QWORD *)v16;
  }
  else
  {
    v22 = sub_244820(*(_QWORD *)(a1[41] + 112LL), (__int64)v14, v11, v12, v13);
    v14 = v22;
    if ( !v9 )
    {
      v16 = (__int64)v22;
      return sub_244820(*(_QWORD *)(a1[41] + 112LL), v16, v18, v19, v20);
    }
  }
  v17 = j__qalloc_or_throw();
  *(_QWORD *)v17 = -1;
  v16 = v17;
  *(_DWORD *)(v17 + 8) = 18;
  *(_QWORD *)(v17 + 12) = -1;
  *(_QWORD *)(v17 + 24) = v9;
  *(_QWORD *)(v17 + 32) = v14;
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 48) = 0;
  *(_DWORD *)(v17 + 56) = 0;
  *(_QWORD *)v17 = sub_2418B0((__int64)a1);
  sub_244580(v16, *(_QWORD *)(a1[41] + 112LL), 0);
  if ( v15 )
    return (_QWORD *)v16;
  return sub_244820(*(_QWORD *)(a1[41] + 112LL), v16, v18, v19, v20);
}

