__int64 __fastcall sub_159FC0(__int64 a1, unsigned int *a2, char a3, double a4, double a5, __m128 a6)
{
  int v6; // eax
  unsigned __int8 *v8; // r12
  unsigned int *v9; // r13
  unsigned int v10; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // r14d
  int v18; // eax
  bool v19; // zf
  int v20; // [rsp+Ch] [rbp-5Ch]
  char v21; // [rsp+Ch] [rbp-5Ch]
  unsigned __int64 v22; // [rsp+18h] [rbp-50h] BYREF
  __int64 v23[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *a2;
  v23[1] = __readfsqword(0x28u);
  if ( v6 == 53 )
  {
    if ( (a3 & 0x10) == 0 && (unsigned __int8)sub_1E1E80(*(_QWORD *)(a1 + 64), (int *)a2) )
    {
      v12 = *(_DWORD *)(a1 + 24);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 4LL) & 8) != 0 )
      {
        BYTE1(v12) &= ~0x80u;
        *(_DWORD *)(a1 + 24) = v12;
        return sub_1E2580((_BYTE *)(a1 + 448), a1, (__int64)a2);
      }
      goto LABEL_22;
    }
    return 0;
  }
  if ( (unsigned int)(v6 - 42) > 0xA )
    return 0;
  if ( *((_BYTE *)a2 + 64) == 7 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    v14 = a2[18];
    if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 64) )
      sub_14E4A0(a4);
    if ( sub_6B100(*(_QWORD *)(*(_QWORD *)(v13 + 528) + 8 * v14), 1, a4) )
      goto LABEL_16;
  }
  v8 = (unsigned __int8 *)(a2 + 8);
  v9 = a2 + 12;
  if ( sub_6B100(*(_QWORD *)(a1 + 8), 1, a4) )
  {
LABEL_5:
    sub_159B40((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, (__int64)a2, 0, a4);
    goto LABEL_6;
  }
  v16 = sub_122E80(*(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL), a2);
  v17 = v16;
  if ( v16 == 1 )
    return 1;
  if ( v16 )
  {
LABEL_20:
    sub_159B40((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, (__int64)a2, 0, a4);
    if ( v17 != 3 )
      goto LABEL_17;
    v8 = (unsigned __int8 *)(a2 + 8);
    v9 = a2 + 12;
LABEL_6:
    a2[1] &= ~0x10u;
    *a2 = 55;
    sub_125180(v8, (unsigned __int8 *)a2 + 64);
    sub_11CDA0((__int64)v9);
    sub_11CDA0((__int64)(a2 + 16));
    v10 = a2[10];
LABEL_7:
    sub_6B2C0(a1, v10, a4);
    return 1;
  }
  if ( (unsigned __int8)sub_14F5C0(
                          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL),
                          a1,
                          (__int64)a2,
                          (unsigned __int64 *)v23,
                          a4) )
  {
    v17 = 2;
    if ( v23[0] )
      v17 = 3;
    goto LABEL_20;
  }
  v20 = *a2;
  v18 = sub_32EAF0(*a2);
  v23[0] = 0;
  v19 = v20 == v18;
  v21 = v20 != v18;
  if ( (unsigned __int8)sub_14E2E0(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL), (__int64 *)&v22, (__int64)(a2 + 8), !v19) )
  {
    if ( *a2 == 42 )
    {
LABEL_28:
      if ( v22 == v23[0] )
      {
LABEL_16:
        sub_159B40((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, (__int64)a2, 0, a4);
LABEL_17:
        sub_11D5A0((__int64)a2);
        v15 = *(_DWORD *)(a1 + 24);
        BYTE1(v15) &= ~2u;
        LOBYTE(v15) = v15 | 0x80;
        *(_DWORD *)(a1 + 24) = v15;
        v10 = *(_DWORD *)(a1 + 72) + 1;
        goto LABEL_7;
      }
      v9 = a2 + 12;
      goto LABEL_5;
    }
    if ( (unsigned __int8)sub_14E2E0(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL), v23, (__int64)(a2 + 12), v21) )
    {
      switch ( *a2 )
      {
        case '*':
        case '+':
          goto LABEL_28;
        case ',':
          if ( v22 == v23[0] )
            goto LABEL_5;
          goto LABEL_16;
        case '-':
          if ( v22 < v23[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '.':
          if ( v22 >= v23[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '/':
          if ( v23[0] >= v22 )
            goto LABEL_16;
          goto LABEL_5;
        case '0':
          if ( v23[0] < v22 )
            goto LABEL_16;
          goto LABEL_5;
        case '1':
          if ( (__int64)v22 <= v23[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '2':
          if ( (__int64)v22 < v23[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '3':
          if ( (__int64)v22 >= v23[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '4':
          if ( (__int64)v22 > v23[0] )
            goto LABEL_16;
          goto LABEL_5;
        default:
          goto LABEL_16;
      }
    }
  }
  if ( (a3 & 0x10) != 0 || !(unsigned __int8)sub_1E1E80(*(_QWORD *)(a1 + 64), (int *)a2) )
    return 0;
  v12 = *(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 4LL) & 8) == 0 )
  {
LABEL_22:
    BYTE1(v12) |= 0x80u;
    *(_DWORD *)(a1 + 24) = v12;
    return 0;
  }
  BYTE1(v12) &= ~0x80u;
  *(_DWORD *)(a1 + 24) = v12;
  v17 = sub_1E1FE0((__int64 *)(a1 + 448), (__int64)a2, a4, a5, a6);
  if ( v17 )
    goto LABEL_20;
  return 0;
}

