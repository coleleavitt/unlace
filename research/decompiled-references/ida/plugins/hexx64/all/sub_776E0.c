__int64 __fastcall sub_776E0(
        __int64 *a1,
        _QWORD **a2,
        signed int a3,
        _QWORD *a4,
        __int64 *a5,
        _QWORD *a6,
        double a7,
        __int64 *a8)
{
  __int64 (__fastcall *v9)(__int64, int); // rax
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // r10
  __int64 (__fastcall *v14)(__int64, int, int); // rax
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, int, int); // rax
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // eax
  unsigned int v22; // eax
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+8h] [rbp-60h]

  v9 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
  if ( v9 == sub_650B0 )
  {
    if ( !a1[10] )
      return 0;
    v10 = *(_DWORD *)(a1[9] + 24LL * a3 + 8);
  }
  else
  {
    v10 = v9((__int64)a1, a3);
  }
  v11 = v10 - 1;
  if ( v11 < 0 )
    return 0;
  v12 = 4LL * v11;
  v13 = 24LL * a3;
LABEL_6:
  v14 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120);
  if ( v14 == sub_650F0 )
  {
    v15 = *(unsigned int *)(*(_QWORD *)(a1[9] + v13) + v12);
  }
  else
  {
    v25 = v13;
    v22 = v14((__int64)a1, a3, v11);
    v13 = v25;
    v15 = v22;
  }
  v16 = *(__int64 (__fastcall **)(__int64, int, int))(*a6 + 8LL);
  if ( v16 != sub_6BA20 )
  {
    v24 = v13;
    v21 = v16((__int64)a6, v15, a3);
    v13 = v24;
    goto LABEL_21;
  }
  v17 = (_QWORD *)a6[1];
  if ( !v17 )
    goto LABEL_16;
  v18 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v18 )
  {
    if ( (*(_BYTE *)(*v17 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_16;
    while ( 1 )
    {
      v19 = v18 + 24;
      if ( (int)v15 < *(_DWORD *)(v18 + 24) )
        break;
      if ( (_DWORD)v15 == *(_DWORD *)(v18 + 24) )
      {
        if ( a3 < *(_DWORD *)(v18 + 28) )
          break;
        if ( a3 <= *(_DWORD *)(v18 + 28) )
        {
          if ( v17 != (_QWORD *)v18 )
            goto LABEL_26;
LABEL_16:
          --v11;
          v12 -= 4;
          if ( v11 == -1 )
            return 0;
          goto LABEL_6;
        }
      }
      v18 = *(_QWORD *)(v18 + 16);
LABEL_15:
      if ( (*(_BYTE *)v18 & 2) != 0 )
        goto LABEL_16;
    }
    v18 = *(_QWORD *)(v18 + 8);
    goto LABEL_15;
  }
  v19 = 24;
LABEL_26:
  v21 = *(_DWORD *)(v19 + 8);
LABEL_21:
  if ( v21 != 3 )
    goto LABEL_16;
  sub_70B00(a1, a3, a5, a6, a7);
  sub_71C40((__int64)a1, a8, a3, a5, -1);
  result = sub_773A0(a1, a2, (__int64)a4, a5);
  if ( !(_DWORD)result )
    return sub_77020(a1, a2, a4, (int **)a5);
  return result;
}

