__int64 __fastcall sub_111910(_QWORD *a1, int a2, int a3, int a4, __int64 a5, int *a6, __int64 a7, __int64 a8)
{
  int *v9; // r13
  char v10; // cl
  char v11; // al
  __int64 v13; // rsi
  int *v14; // rax
  int v15; // eax
  int v16; // edx
  bool v17; // sf
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  int *v21; // [rsp+8h] [rbp-68h]
  __int64 v22; // [rsp+10h] [rbp-60h] BYREF
  __int64 v23; // [rsp+18h] [rbp-58h] BYREF
  _QWORD v24[10]; // [rsp+20h] [rbp-50h] BYREF

  LODWORD(v9) = a4;
  v23 = a5;
  v21 = a6;
  v22 = a7;
  v24[3] = __readfsqword(0x28u);
  if ( a2 )
  {
    a1[15] = 0;
    a1[3] = 0;
    *((_DWORD *)a1 + 32) = 0;
    a1[14] = 0;
    *((_WORD *)a1 + 66) = 0;
    *((_OWORD *)a1 + 3) = 0;
    *((_DWORD *)a1 + 30) = 8 * a6[17];
  }
  if ( (unsigned int)(*a6 - 23) > 1 || !(unsigned __int8)sub_14BF70(a6, a1 + 16) )
  {
LABEL_4:
    v10 = 2;
    goto LABEL_5;
  }
  a3 = v23;
  v9 = v21 + 8;
  v14 = (int *)sub_122D80(a1[1], v21 + 8, &v23, 0);
  v21 = v14;
  if ( !v14 )
    return 0;
  v15 = *v14;
  if ( v15 != 23 )
  {
    if ( v15 == 14 )
    {
      if ( (unsigned __int8)sub_11EF10(v9, *a1, v21 + 16, 1) )
      {
        v16 = *((int *)a1 + 30) >> 1;
        v17 = *((_DWORD *)a1 + 32) - v16 < 0;
        *((_DWORD *)a1 + 32) -= v16;
        *((_DWORD *)a1 + 30) = v16;
        if ( v17 )
          return 0;
      }
    }
    goto LABEL_4;
  }
  v10 = 10;
LABEL_5:
  if ( !(unsigned __int8)sub_110160(a1, v23, v21, v10) )
  {
    if ( a2 )
      v11 = sub_111EA0((_DWORD)a1, a2, a3, (_DWORD)v9, v23, (_DWORD)v21, v22, a8);
    else
      v11 = sub_111860((__int64)a1, v23, v21 + 8, (__int64)(v21 + 12), v22, a8);
    if ( !v11 )
      return 0;
    goto LABEL_9;
  }
  if ( a2 == 13 || (unsigned int)(a2 - 29) <= 0xC )
  {
    sub_11D380(v24, a1 + 4);
    if ( 8 * HIDWORD(v24[0]) > *((_DWORD *)a1 + 30) )
      sub_120CF0(v24, *a1, -1);
    if ( !(unsigned __int8)sub_306570(*a1, a1[1], v22, a8, v23, v24) )
    {
      sub_1166E0(v24);
      return 0;
    }
    sub_1166E0(v24);
    if ( a1[14] )
      return 1;
LABEL_17:
    if ( (unsigned __int8)sub_1100E0((__int64)a1, 1) )
    {
      if ( *((_BYTE *)a1 + 132) )
      {
        v13 = 8;
        if ( *((int *)a1 + 9) <= 4 )
          v13 = 4;
        a1[14] = sub_323690(a1[14], v13, 1);
      }
      return 1;
    }
    return 0;
  }
  if ( a2 != 12 )
    goto LABEL_9;
  v18 = sub_305FC0(*a1, a1[1], &v22, a8);
  v19 = v18;
  if ( !v18 )
    return 0;
  if ( (unsigned __int8)sub_1283C0(*a1, a1[1], v22, v18, v23, (int)a1 + 32, 0) )
  {
LABEL_9:
    if ( a1[14] )
      return 1;
    goto LABEL_17;
  }
  v24[1] = 0;
  v24[0] = 0xFFFFFFFF00000000LL;
  sub_11FC20(v24, v21);
  if ( (unsigned __int8)sub_1283C0(*a1, a1[1], v22, v19, a3, (unsigned int)v24, 0) )
    goto LABEL_39;
  v20 = sub_122D80(a1[1], v19, &v22, 1);
  if ( v20 && *(_DWORD *)v20 == 24 && *(_BYTE *)(v20 + 32) == 4 )
    v20 = *(_QWORD *)(v20 + 40);
  if ( v21 == (int *)v20 )
  {
LABEL_39:
    sub_1166E0(v24);
    goto LABEL_9;
  }
  sub_1166E0(v24);
  return 0;
}

