__int64 __fastcall sub_1152E0(int *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  _DWORD *v7; // rdi
  int v9; // r14d
  __int64 v10; // rbp
  _DWORD *v11; // rax
  _DWORD *v12; // r12
  int v13; // eax
  int v14; // r9d
  _DWORD *v15; // r14
  __int64 v16; // rbx
  int v17; // eax
  int v18; // r9d
  __int64 v19; // rbx
  _DWORD *v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v23[4]; // [rsp+20h] [rbp-68h] BYREF
  int v24; // [rsp+24h] [rbp-64h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  _QWORD v26[11]; // [rsp+30h] [rbp-58h] BYREF

  v26[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a4 != 4 )
    return 0;
  v7 = *(_DWORD **)(a4 + 8);
  if ( *v7 != 14 )
    return 0;
  if ( !a2 )
    return 0;
  v9 = *a1;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
  v11 = (_DWORD *)sub_1186E0(v7, &v22, 0);
  v12 = v11;
  if ( !v11 )
    return 0;
  v13 = *v11;
  switch ( v13 )
  {
    case 10:
      if ( *((_BYTE *)v12 + 32) != 4 )
        return 0;
      v12 = *((_DWORD **)v12 + 5);
      if ( (unsigned int)(*v12 - 15) > 1 )
        return 0;
      goto LABEL_10;
    case 9:
      if ( *((_BYTE *)v12 + 32) != 4 )
        return 0;
      v12 = *((_DWORD **)v12 + 5);
      if ( *v12 != 34 || v12[9] < *(_DWORD *)(a5 + 4) )
        return 0;
LABEL_22:
      v18 = a5;
      v21 = v12 + 8;
      if ( !(unsigned __int8)sub_12A880(v10, a2, a3, (int)v12 + 32, a3, v18, 1) )
        return 0;
LABEL_23:
      if ( *((_BYTE *)v12 + 48) == 2 )
      {
        v19 = sub_325C90(*(_QWORD *)(*((_QWORD *)v12 + 7) + 16LL), *(unsigned int *)(v22 + 4), 0);
        if ( (unsigned __int8)sub_11BB80(v22, v26, 0) )
        {
          if ( *a1 == 12 )
            v26[0] = sub_325C90(-v26[0], *(unsigned int *)(v22 + 4), 0);
          v15 = v12 + 12;
          if ( v26[0] == v19 )
            goto LABEL_13;
        }
      }
      return 0;
    case 34:
      goto LABEL_22;
  }
  if ( (unsigned int)(v13 - 15) > 1 )
    return 0;
LABEL_10:
  v14 = a5;
  v21 = v12 + 8;
  if ( !(unsigned __int8)sub_12A880(v10, a2, a3, (int)v12 + 32, a3, v14, 1) )
    return 0;
  if ( v9 == 12 )
    goto LABEL_23;
  v15 = v12 + 12;
  if ( !(unsigned __int8)sub_12A880(v10, a2, a3, (int)v12 + 48, a3, v22, 1) )
    return 0;
LABEL_13:
  *a1 = (*v12 == 16) + 17;
  sub_11F840(v23, v21);
  sub_11F840(v26, v15);
  sub_118810(a1 + 8, v23);
  sub_118810(a1 + 12, v26);
  if ( a1[9] > a1[17] )
  {
    v16 = j__qalloc_or_throw();
    *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 56) = 0;
    *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 72) = 0;
    *(_OWORD *)(v16 + 8) = 0;
    sub_1211A0(v16, a1);
    sub_118BA0(v23);
    v17 = a1[9];
    v23[0] = 4;
    v25 = v16;
    v24 = v17;
    sub_118BA0(v16 + 64);
    *(_DWORD *)(v25 + 68) = a1[9];
    sub_118810(a1 + 8, v23);
    sub_118BA0(a1 + 12);
    *(_QWORD *)a1 = 10;
  }
  sub_118BA0(v26);
  sub_118BA0(v23);
  return 1;
}

