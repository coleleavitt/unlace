__int64 __fastcall sub_72E20(__int64 *a1, _QWORD **a2, _QWORD *a3, int **a4)
{
  int v5; // r15d
  __int64 v6; // rax
  unsigned int *v7; // rbx
  unsigned int *v8; // r14
  _QWORD *v9; // rdx
  __int64 (__fastcall *v10)(__int64, int); // rax
  __int64 v11; // rsi
  unsigned int v12; // ebx
  unsigned int v14; // eax
  int v15; // eax
  __int64 (__fastcall *v16)(__int64, int); // rax
  __int64 v17; // rsi
  unsigned int v18; // r14d
  __int64 (__fastcall *v19)(__int64, int); // rax
  __int64 (__fastcall *v20)(__int64, int, int); // rax
  unsigned int v21; // ebx
  int v22; // eax
  __int64 (__fastcall *v23)(__int64, int); // rax
  int v24; // eax
  __int64 (__fastcall *v25)(__int64, int, int); // rax
  unsigned int *v28; // [rsp+20h] [rbp-50h] BYREF
  __int128 v29; // [rsp+28h] [rbp-48h]
  unsigned __int64 v30; // [rsp+38h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v5 = **a4;
  v28 = nullptr;
  v29 = 0;
  sub_6BFA0((__int64)a1, a4, (__int64 *)&v28);
  v6 = v29;
  if ( !(_QWORD)v29 )
    goto LABEL_13;
  v7 = v28;
  v8 = &v28[2 * v29];
  if ( v8 == v28 )
  {
    v9 = (_QWORD *)*a1;
    goto LABEL_33;
  }
  v9 = (_QWORD *)*a1;
  while ( 1 )
  {
    if ( *v7 == v5 )
      goto LABEL_7;
    v10 = (__int64 (__fastcall *)(__int64, int))v9[13];
    v11 = (int)v7[1];
    if ( v10 != sub_60EB0 )
      break;
    if ( a1[10] )
    {
      if ( *(int *)(a1[9] + 24 * v11 + 8) > 1 )
        goto LABEL_11;
      goto LABEL_6;
    }
LABEL_7:
    v7 += 2;
    if ( v7 == v8 )
      goto LABEL_20;
  }
  if ( (int)v10((__int64)a1, v11) <= 1 )
  {
LABEL_6:
    v9 = (_QWORD *)*a1;
    goto LABEL_7;
  }
LABEL_11:
  if ( v7 != v8 )
  {
LABEL_12:
    if ( !sub_6C610((__int64)a1, (__int64)a3, *v7) )
    {
      v14 = sub_70E60(a1, a2, a3, (__int64)a4, *v7, v7[1], 0);
      goto LABEL_18;
    }
    goto LABEL_13;
  }
  v9 = (_QWORD *)*a1;
LABEL_20:
  v7 = v28;
  if ( v8 == v28 )
    goto LABEL_32;
  while ( 2 )
  {
    v16 = (__int64 (__fastcall *)(__int64, int))v9[13];
    v17 = (int)v7[1];
    if ( v16 == sub_60EB0 )
    {
      if ( a1[10] )
      {
        v15 = *(_DWORD *)(a1[9] + 24 * v17 + 8);
        goto LABEL_24;
      }
LABEL_26:
      v7 += 2;
      if ( v7 == v8 )
        goto LABEL_31;
      continue;
    }
    break;
  }
  v15 = v16((__int64)a1, v17);
LABEL_24:
  if ( v15 <= 1 )
  {
    v9 = (_QWORD *)*a1;
    goto LABEL_26;
  }
  if ( v7 != v8 )
    goto LABEL_12;
  v9 = (_QWORD *)*a1;
LABEL_31:
  v7 = v28;
LABEL_32:
  v6 = v29;
LABEL_33:
  v18 = v7[2 * v6 - 1];
LABEL_34:
  v19 = (__int64 (__fastcall *)(__int64, int))v9[13];
  if ( v19 == sub_60EB0 )
  {
LABEL_35:
    if ( a1[10] )
    {
      v22 = *(_DWORD *)(a1[9] + 24LL * (int)v18 + 8);
      goto LABEL_41;
    }
  }
  else
  {
    while ( 1 )
    {
      v22 = v19((__int64)a1, v18);
      v9 = (_QWORD *)*a1;
LABEL_41:
      if ( v22 != 1 )
        break;
      v23 = (__int64 (__fastcall *)(__int64, int))v9[12];
      if ( v23 == sub_60E90 )
      {
        if ( !a1[7] )
          goto LABEL_13;
        v24 = *(_DWORD *)(a1[6] + 24LL * (int)v18 + 8);
      }
      else
      {
        v24 = v23((__int64)a1, v18);
      }
      if ( !v24 )
        goto LABEL_13;
      v9 = (_QWORD *)*a1;
      v25 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
      if ( v25 != sub_60ED0 )
      {
        v18 = v25((__int64)a1, v18, 0);
        v9 = (_QWORD *)*a1;
        goto LABEL_34;
      }
      v18 = **(_DWORD **)(a1[6] + 24LL * (int)v18);
      v19 = (__int64 (__fastcall *)(__int64, int))v9[13];
      if ( v19 == sub_60EB0 )
        goto LABEL_35;
    }
  }
  v20 = (__int64 (__fastcall *)(__int64, int, int))v9[15];
  if ( v20 == sub_60EF0 )
    v21 = **(_DWORD **)(a1[9] + 24LL * (int)v18);
  else
    v21 = v20((__int64)a1, v18, 0);
  if ( sub_6C610((__int64)a1, (__int64)a3, v21) )
  {
LABEL_13:
    v12 = 0;
    goto LABEL_14;
  }
  v14 = sub_70E60(a1, a2, a3, (__int64)a4, v21, v18, 0);
LABEL_18:
  v12 = v14;
LABEL_14:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  return v12;
}

