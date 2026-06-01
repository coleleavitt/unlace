__int64 __fastcall sub_6FD80(
        _QWORD *a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        void (__fastcall ***a5)(_QWORD, _QWORD, _QWORD, __int64))
{
  __int64 (__fastcall *v6)(__int64, int, int); // rax
  __int64 v8; // rdx
  signed int *v9; // rax
  signed int v10; // r13d
  unsigned int v11; // r12d
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  unsigned int v16; // eax
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, int); // rax
  int v19; // eax
  __int64 (__fastcall *v20)(__int64, int); // rax
  int v21; // eax
  unsigned int v22; // eax
  __int64 (__fastcall *v23)(__int64, int, int); // rax
  int *v24; // rax
  int v25; // ebx
  int v26; // eax
  bool v27; // zf
  int *v28; // rsi
  __int64 v29; // rax
  int *v30; // rsi
  __int64 v31; // rcx
  __int64 (__fastcall *v33)(__int64, int, int); // rax
  unsigned int v34; // eax
  __int64 (__fastcall *v35)(__int64, int, int); // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx

  v6 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v6 == sub_64AD0 )
  {
    v8 = a1[6];
    v9 = *(signed int **)(v8 + 24LL * a3);
    v10 = *v9;
LABEL_3:
    v11 = v9[1];
    goto LABEL_4;
  }
  v10 = v6((__int64)a1, a3, 0);
  v33 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v33 == sub_64AD0 )
  {
    v8 = a1[6];
    v9 = *(signed int **)(v8 + 24LL * a3);
    goto LABEL_3;
  }
  v34 = v33((__int64)a1, a3, 1);
  v8 = a1[6];
  v11 = v34;
LABEL_4:
  v12 = v8 + 24LL * v10;
  v13 = *(_DWORD **)v12;
  v14 = *(_QWORD *)v12 + 4LL * *(_QWORD *)(v12 + 8);
  if ( v13 == (_DWORD *)v14 )
  {
LABEL_34:
    v15 = 5;
  }
  else
  {
    while ( v11 != *v13 )
    {
      if ( (_DWORD *)v14 == ++v13 )
        goto LABEL_34;
    }
    v15 = 5;
    if ( v13 != (_DWORD *)v14 )
    {
      v16 = v11;
      v15 = 1;
      v11 = v10;
      v10 = v16;
    }
  }
  v17 = sub_6F980(a2, v11);
  if ( sub_6FB70((__int64)a2, v17) )
    return 0;
  v18 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104LL);
  if ( v18 == sub_64AB0 )
  {
    if ( !a1[10] )
      return 0;
    v19 = *(_DWORD *)(a1[9] + 24LL * (int)v11 + 8);
  }
  else
  {
    v19 = v18((__int64)a1, v11);
  }
  if ( v19 != 1 )
    return 0;
  v20 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  if ( v20 == sub_64A90 )
  {
    if ( !a1[7] )
      return 0;
    v21 = *(_DWORD *)(a1[6] + 24LL * (int)v11 + 8);
  }
  else
  {
    v21 = v20((__int64)a1, v11);
  }
  if ( v21 != 2 )
    return 0;
  v22 = sub_6FA20(a2, v11);
  if ( (unsigned __int64)v22 < a2[36] && (*(_BYTE *)(a2[35] + 4LL * (int)v22) & 8) != 0 )
    return 0;
  v23 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v23 == sub_64AD0 )
  {
    v24 = *(int **)(a1[6] + 24LL * (int)v11);
    v25 = *v24;
LABEL_23:
    v26 = v24[1];
    goto LABEL_24;
  }
  v25 = v23((__int64)a1, v11, 0);
  v35 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v35 == sub_64AD0 )
  {
    v24 = *(int **)(a1[6] + 24LL * (int)v11);
    goto LABEL_23;
  }
  v26 = v35((__int64)a1, v11, 1);
LABEL_24:
  if ( v25 == v10 )
  {
    v15 |= 2u;
    if ( v26 != v25 )
      goto LABEL_26;
    return 0;
  }
  if ( v26 != v10 )
    return 0;
LABEL_26:
  v27 = *(_QWORD *)(a4 + 16) == 0;
  v28 = *(int **)a4;
  *(_QWORD *)(a4 + 8) = 0;
  if ( v27 )
  {
    v37 = qvector_reserve();
    v38 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)a4 = v37;
    v28 = (int *)(v37 + 4 * v38);
  }
  *v28 = a3;
  v29 = *(_QWORD *)(a4 + 8);
  v30 = *(int **)a4;
  v31 = v29 + 1;
  *(_QWORD *)(a4 + 8) = v29 + 1;
  if ( *(_QWORD *)(a4 + 16) < (unsigned __int64)(v29 + 2) )
  {
    v36 = qvector_reserve();
    v31 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)a4 = v36;
    v30 = (int *)v36;
  }
  v30[v31] = v11;
  ++*(_QWORD *)(a4 + 8);
  (**a5)(a5, (unsigned int)a3, v11, 5);
  return v15;
}

