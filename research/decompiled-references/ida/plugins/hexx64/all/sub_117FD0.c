__int64 __fastcall sub_117FD0(
        _QWORD *a1,
        int a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        int *a6,
        __int64 a7,
        int *a8)
{
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // al
  int v17; // edx
  int v18; // esi
  __int128 v19; // rdi
  int *v20; // rax
  int v21; // eax
  int v22; // edx
  bool v23; // sf
  _DWORD *v24; // rax
  __int64 v25; // r15
  __int128 v26; // rdi
  __int64 v27; // rax
  int v28; // ecx
  int *v29; // [rsp+8h] [rbp-68h]
  __int64 v30; // [rsp+10h] [rbp-60h] BYREF
  __int64 v31; // [rsp+18h] [rbp-58h] BYREF
  _QWORD v32[10]; // [rsp+20h] [rbp-50h] BYREF

  v31 = a5;
  v29 = a6;
  v30 = a7;
  v32[3] = __readfsqword(0x28u);
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
  if ( (unsigned int)(*a6 - 23) > 1 || !(unsigned __int8)sub_152630((__int64)a6, (_DWORD *)a1 + 32) )
  {
LABEL_4:
    v12 = 2;
    goto LABEL_5;
  }
  *(_QWORD *)&v19 = a1[1];
  a3 = v31;
  a4 = (unsigned __int8 *)(v29 + 8);
  *((_QWORD *)&v19 + 1) = v29 + 8;
  v20 = (int *)sub_129440(v19, (__int64)&v31, 0);
  v29 = v20;
  if ( !v20 )
    return 0;
  v21 = *v20;
  if ( v21 != 23 )
  {
    if ( v21 == 14 )
    {
      if ( sub_1255D0(a4, *a1, (__int64)(v29 + 16), 1) )
      {
        v22 = *((int *)a1 + 30) >> 1;
        v23 = *((_DWORD *)a1 + 32) - v22 < 0;
        *((_DWORD *)a1 + 32) -= v22;
        *((_DWORD *)a1 + 30) = v22;
        if ( v23 )
          return 0;
      }
    }
    goto LABEL_4;
  }
  v12 = 10;
LABEL_5:
  if ( !(unsigned __int8)sub_116820(a1, v31, v29, v12) )
  {
    if ( a2 )
      v15 = sub_118560(a1, a2, a3, (__int64)a4, v31, (__int64)v29, v30, (__int64)a8);
    else
      v15 = sub_117F20((__int64)a1, v31, v29 + 8, (__int64)(v29 + 12), v30, (__int64)a8);
    if ( !v15 )
      return 0;
    goto LABEL_9;
  }
  if ( a2 == 13 || (unsigned int)(a2 - 29) <= 0xC )
  {
    sub_123A40((__int64)v32, (unsigned __int8 *)a1 + 32, v13, v14);
    v17 = *((_DWORD *)a1 + 30);
    if ( 8 * HIDWORD(v32[0]) > v17 )
    {
      v28 = v17 + 7;
      if ( v17 >= 0 )
        v28 = *((_DWORD *)a1 + 30);
      sub_1273B0((unsigned __int64)v32, *a1, -1, v28 >> 3);
    }
    if ( !sub_30D8F0(*a1, a1[1], v30, a8, v31, (__int64)v32) )
    {
      sub_11CDA0((__int64)v32);
      return 0;
    }
    sub_11CDA0((__int64)v32);
    if ( a1[14] )
      return 1;
LABEL_16:
    if ( (unsigned __int8)sub_1167A0((__int64)a1, 1) )
    {
      if ( *((_BYTE *)a1 + 132) )
      {
        v18 = 8;
        if ( *((int *)a1 + 9) <= 4 )
          v18 = 4;
        a1[14] = sub_32ABC0(a1[14], v18, 1);
      }
      return 1;
    }
    return 0;
  }
  if ( a2 != 12 )
    goto LABEL_9;
  v24 = sub_30D340(*a1, a1[1], &v30, a8);
  v25 = (__int64)v24;
  if ( !v24 )
    return 0;
  if ( (unsigned __int8)sub_12EA80(*a1, (const __m128i *)a1[1], v30, (__int64)v24, v31, (__int64)(a1 + 4), 0) )
  {
LABEL_9:
    if ( a1[14] )
      return 1;
    goto LABEL_16;
  }
  v32[1] = 0;
  v32[0] = 0xFFFFFFFF00000000LL;
  sub_1262E0((__int64)v32, (unsigned __int8 *)v29);
  if ( (unsigned __int8)sub_12EA80(*a1, (const __m128i *)a1[1], v30, v25, a3, (__int64)v32, 0) )
    goto LABEL_38;
  *(_QWORD *)&v26 = a1[1];
  *((_QWORD *)&v26 + 1) = v25;
  v27 = sub_129440(v26, (__int64)&v30, 1);
  if ( v27 && *(_DWORD *)v27 == 24 && *(_BYTE *)(v27 + 32) == 4 )
    v27 = *(_QWORD *)(v27 + 40);
  if ( v29 == (int *)v27 )
  {
LABEL_38:
    sub_11CDA0((__int64)v32);
    goto LABEL_9;
  }
  sub_11CDA0((__int64)v32);
  return 0;
}

