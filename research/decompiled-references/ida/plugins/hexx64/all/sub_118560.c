_BOOL8 __fastcall sub_118560(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, int *a8)
{
  bool v8; // zf
  __int128 v15; // rdi
  char v16; // al
  _DWORD *v17; // r15
  _DWORD *v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rsi
  __int128 v23; // rdi
  int *v24; // r9
  __int128 v25; // rdi
  __int128 v26; // rdi
  char v27; // al
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rdi
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // [rsp+8h] [rbp-60h]
  unsigned __int8 *v39; // [rsp+18h] [rbp-50h]
  __int64 v40[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_DWORD *)a6 == 12;
  v40[1] = __readfsqword(0x28u);
  if ( !v8 )
    return 0;
  *((_QWORD *)&v15 + 1) = a1[1];
  v39 = (unsigned __int8 *)(a6 + 48);
  v37 = (_DWORD *)(a6 + 32);
  *(_QWORD *)&v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v15 + 1) + 480LL) + 112LL);
  if ( a2 == 12 )
  {
    if ( sub_30D9F0(v15, a7, a8, a5, a6 + 32) )
      goto LABEL_5;
    *((_QWORD *)&v25 + 1) = a1[1];
    *(_QWORD *)&v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v25 + 1) + 480LL) + 112LL);
    if ( sub_30D9F0(v25, a7, a8, a5, (__int64)v39) )
      goto LABEL_18;
    *((_QWORD *)&v26 + 1) = a1[1];
    *(_QWORD *)&v26 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v26 + 1) + 480LL) + 112LL);
    v27 = sub_30D9F0(v26, a7, a8, a3, a4);
LABEL_22:
    if ( !v27 )
      goto LABEL_7;
    if ( *(_BYTE *)(a6 + 32) != 4 || **(_DWORD **)(a6 + 40) != 11 )
      goto LABEL_5;
    goto LABEL_18;
  }
  if ( sub_30D8F0(v15, *((__int64 *)&v15 + 1), a7, a8, a5, (__int64)v37) )
  {
LABEL_5:
    v16 = sub_117F20((__int64)a1, a5, v37, (__int64)v39, a7, (__int64)a8);
    goto LABEL_6;
  }
  if ( !sub_30D8F0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a5, (__int64)v39) )
  {
    v27 = sub_30D8F0(*(_QWORD *)(*(_QWORD *)(a1[1] + 480LL) + 112LL), a1[1], a7, a8, a3, a4);
    goto LABEL_22;
  }
LABEL_18:
  v16 = sub_117F20((__int64)a1, a5, v39, (__int64)v37, a7, (__int64)a8);
LABEL_6:
  if ( !v16 )
  {
LABEL_7:
    if ( *(_BYTE *)a4 != 4 )
      return 0;
    v17 = *(_DWORD **)(a4 + 8);
    if ( *v17 != 12 || !v17 )
      return 0;
    v18 = v17 + 8;
    if ( sub_30D9F0(*(_OWORD *)a1, a7, a8, a3, (__int64)(v17 + 8)) )
    {
      v19 = a1[10];
      v20 = a1[11];
      v21 = (__int64)(v17 + 12);
      v40[0] = v21;
      v22 = a1[9];
      if ( v20 < v19 + 1 )
      {
        v34 = qvector_reserve((__int64)(a1 + 9), v22, v19 + 1, 8);
        a1[9] = v34;
        v22 = v34;
        v19 = a1[10];
      }
      *(_QWORD *)(v22 + 8 * v19) = v21;
    }
    else
    {
      if ( !sub_30D9F0(*(_OWORD *)a1, a7, a8, a3, (__int64)(v17 + 12)) )
        return 0;
      v28 = a1[10];
      v29 = a1[9];
      v40[0] = (__int64)(v17 + 8);
      v30 = a1[11];
      v31 = a1 + 9;
      v32 = v28;
      v33 = v28 + 1;
      if ( (unsigned __int64)v40 < v29 || (unsigned __int64)v40 >= v29 + 8 * v30 )
      {
        if ( v30 < v33 )
        {
          v35 = qvector_reserve((__int64)v31, v29, v33, 8);
          v32 = a1[10];
          a1[9] = v35;
          v29 = v35;
        }
        *(_QWORD *)(v29 + 8 * v32) = v18;
      }
      else
      {
        if ( v30 < v33 )
        {
          v36 = qvector_reserve((__int64)v31, v29, v33, 8);
          a1[9] = v36;
          v29 = v36;
          v28 = a1[10];
        }
        *(_QWORD *)(v29 + 8 * v28) = v18;
      }
    }
    ++a1[10];
    *(_QWORD *)&v23 = a1[1];
    *((_QWORD *)&v23 + 1) = v39;
    v40[0] = a5;
    v24 = (int *)sub_129440(v23, (__int64)v40, 1);
    return v24 && (unsigned __int8)sub_117FD0(a1, 0, v40[0], v39, v40[0], v24, a7, a8);
  }
  return 1;
}

