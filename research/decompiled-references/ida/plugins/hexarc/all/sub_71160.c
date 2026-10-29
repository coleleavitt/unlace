__int64 __fastcall sub_71160(__int64 *a1, _QWORD **a2, signed int a3, _QWORD *a4, __int64 *a5, _QWORD *a6, __int64 *a7)
{
  __int64 (__fastcall *v8)(__int64, int); // rax
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // r12
  __int64 v12; // r10
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, int, int); // rax
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  int v20; // eax
  unsigned int v21; // eax
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+8h] [rbp-60h]

  v8 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
  if ( v8 == sub_5EB30 )
  {
    if ( !a1[10] )
      return 0;
    v9 = *(_DWORD *)(a1[9] + 24LL * a3 + 8);
  }
  else
  {
    v9 = v8((__int64)a1, a3);
  }
  v10 = v9 - 1;
  if ( v10 < 0 )
    return 0;
  v11 = 4LL * v10;
  v12 = 24LL * a3;
LABEL_6:
  v13 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120);
  if ( v13 == sub_5EB70 )
  {
    v14 = *(unsigned int *)(*(_QWORD *)(a1[9] + v12) + v11);
  }
  else
  {
    v24 = v12;
    v21 = v13((__int64)a1, a3, v10);
    v12 = v24;
    v14 = v21;
  }
  v15 = *(__int64 (__fastcall **)(__int64, int, int))(*a6 + 8LL);
  if ( v15 != sub_654A0 )
  {
    v23 = v12;
    v20 = v15((__int64)a6, v14, a3);
    v12 = v23;
    goto LABEL_21;
  }
  v16 = (_QWORD *)a6[1];
  if ( !v16 )
    goto LABEL_16;
  v17 = *v16 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v17 )
  {
    if ( (*(_BYTE *)(*v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_16;
    while ( 1 )
    {
      v18 = v17 + 24;
      if ( (int)v14 < *(_DWORD *)(v17 + 24) )
        break;
      if ( (_DWORD)v14 == *(_DWORD *)(v17 + 24) )
      {
        if ( a3 < *(_DWORD *)(v17 + 28) )
          break;
        if ( a3 <= *(_DWORD *)(v17 + 28) )
        {
          if ( v16 != (_QWORD *)v17 )
            goto LABEL_26;
LABEL_16:
          --v10;
          v11 -= 4;
          if ( v10 == -1 )
            return 0;
          goto LABEL_6;
        }
      }
      v17 = *(_QWORD *)(v17 + 16);
LABEL_15:
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_16;
    }
    v17 = *(_QWORD *)(v17 + 8);
    goto LABEL_15;
  }
  v18 = 24;
LABEL_26:
  v20 = *(_DWORD *)(v18 + 8);
LABEL_21:
  if ( v20 != 3 )
    goto LABEL_16;
  sub_6A580(a1, a3, (__int64)a5, a6);
  sub_6B6C0((__int64)a1, a7, a3, a5, -1);
  result = sub_70E20(a1, a2, (__int64)a4, a5);
  if ( !(_DWORD)result )
    return sub_70AA0(a1, a2, a4, (int **)a5);
  return result;
}

