__int64 __fastcall sub_153900(
        __int64 a1,
        unsigned int *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        __int64 a23,
        int a24,
        int a25,
        __int64 a26,
        __int64 a27,
        int a28,
        int a29,
        __int64 a30,
        __int64 a31,
        int a32,
        int a33,
        __int64 a34,
        __int64 a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        __int64 a51)
{
  unsigned int v51; // eax
  __int64 v53; // r12
  __int64 v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rsi
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // eax
  int v71; // eax
  int v72; // r14d
  int v73; // eax
  bool v74; // zf
  unsigned int v75; // [rsp+Ch] [rbp-5Ch]
  unsigned __int8 v76; // [rsp+Ch] [rbp-5Ch]
  __int64 v77; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v78[9]; // [rsp+20h] [rbp-48h] BYREF

  v51 = *a2;
  v78[1] = __readfsqword(0x28u);
  if ( v51 == 53 )
  {
    if ( (a3 & 0x10) == 0 && (unsigned __int8)sub_1DAAE0(*(_QWORD *)(a1 + 64)) )
    {
      v66 = *(_DWORD *)(a1 + 24);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 4LL) & 8) != 0 )
      {
        BYTE1(v66) &= ~0x80u;
        *(_DWORD *)(a1 + 24) = v66;
        return sub_1DB200(
                 (int)a1 + 448,
                 a1,
                 (_DWORD)a2,
                 v63,
                 v64,
                 v65,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20,
                 a21,
                 a22,
                 a23,
                 a24,
                 a25,
                 a26,
                 a27,
                 a28,
                 a29,
                 a30,
                 a31,
                 a32,
                 a33,
                 a34,
                 a35,
                 a36,
                 a37,
                 a38,
                 a39,
                 a40,
                 a41,
                 a42,
                 a43,
                 a44,
                 a45,
                 a46,
                 a47,
                 a48,
                 a49,
                 a50,
                 a51);
      }
      goto LABEL_22;
    }
    return 0;
  }
  if ( v51 - 42 > 0xA )
    return 0;
  if ( *((_BYTE *)a2 + 64) == 7 )
  {
    v67 = *(_QWORD *)(a1 + 64);
    v68 = a2[18];
    v69 = *(_QWORD *)(v67 + 528);
    if ( (unsigned int)v68 >= *(_DWORD *)(v67 + 64) )
      sub_147DE0(a1, a2, v67, v69);
    if ( sub_64B80(*(_QWORD *)(v69 + 8 * v68), 1) )
      goto LABEL_16;
  }
  v53 = (__int64)(a2 + 8);
  v54 = (__int64)(a2 + 12);
  if ( sub_64B80(*(_QWORD *)(a1 + 8), 1) )
  {
LABEL_5:
    sub_153480((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, (__int64)a2, 0);
    goto LABEL_6;
  }
  v71 = sub_11C7C0(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a2, v55, v56, v57, v58);
  v72 = v71;
  if ( v71 == 1 )
    return 1;
  if ( v71 )
  {
LABEL_20:
    sub_153480((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, (__int64)a2, 0);
    if ( v72 != 3 )
      goto LABEL_17;
    v53 = (__int64)(a2 + 8);
    v54 = (__int64)(a2 + 12);
LABEL_6:
    a2[1] &= ~0x10u;
    *a2 = 55;
    sub_11EAC0(v53, (unsigned __int8 *)a2 + 64);
    sub_1166E0(v54);
    sub_1166E0((__int64)(a2 + 16));
    v61 = a2[10];
LABEL_7:
    sub_64D40(a1, v61, v59, v60);
    return 1;
  }
  if ( (unsigned __int8)sub_148F00(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL), a1, (__int64)a2, v78) )
  {
    v72 = 2;
    if ( v78[0] )
      v72 = 3;
    goto LABEL_20;
  }
  v75 = *a2;
  v73 = sub_3275B0(*a2);
  v78[0] = 0;
  v74 = v75 == v73;
  v76 = v75 != v73;
  if ( (unsigned __int8)sub_147C20(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL), &v77, (__int64)(a2 + 8), !v74) )
  {
    if ( *a2 == 42 )
    {
LABEL_28:
      if ( v77 == v78[0] )
      {
LABEL_16:
        sub_153480((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, (__int64)a2, 0);
LABEL_17:
        sub_116EE0((__int64)a2);
        v70 = *(_DWORD *)(a1 + 24);
        BYTE1(v70) &= ~2u;
        LOBYTE(v70) = v70 | 0x80;
        *(_DWORD *)(a1 + 24) = v70;
        v61 = (unsigned int)(*(_DWORD *)(a1 + 72) + 1);
        goto LABEL_7;
      }
      v54 = (__int64)(a2 + 12);
      goto LABEL_5;
    }
    if ( (unsigned __int8)sub_147C20(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL), v78, (__int64)(a2 + 12), v76) )
    {
      switch ( *a2 )
      {
        case '*':
        case '+':
          goto LABEL_28;
        case ',':
          if ( v77 == v78[0] )
            goto LABEL_5;
          goto LABEL_16;
        case '-':
          if ( v77 < v78[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '.':
          if ( v77 >= v78[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '/':
          if ( v78[0] >= v77 )
            goto LABEL_16;
          goto LABEL_5;
        case '0':
          if ( v78[0] < v77 )
            goto LABEL_16;
          goto LABEL_5;
        case '1':
          if ( v77 <= (__int64)v78[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '2':
          if ( v77 < (__int64)v78[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '3':
          if ( v77 >= (__int64)v78[0] )
            goto LABEL_16;
          goto LABEL_5;
        case '4':
          if ( v77 > (__int64)v78[0] )
            goto LABEL_16;
          goto LABEL_5;
        default:
          goto LABEL_16;
      }
    }
  }
  if ( (a3 & 0x10) != 0 || !(unsigned __int8)sub_1DAAE0(*(_QWORD *)(a1 + 64)) )
    return 0;
  v66 = *(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 4LL) & 8) == 0 )
  {
LABEL_22:
    BYTE1(v66) |= 0x80u;
    *(_DWORD *)(a1 + 24) = v66;
    return 0;
  }
  BYTE1(v66) &= ~0x80u;
  *(_DWORD *)(a1 + 24) = v66;
  v72 = sub_1DAC40(a1 + 448, a2);
  if ( v72 )
    goto LABEL_20;
  return 0;
}

