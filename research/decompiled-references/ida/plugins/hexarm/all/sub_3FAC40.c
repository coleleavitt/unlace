__int64 __fastcall sub_3FAC40(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        double a7,
        int a8)
{
  unsigned __int16 v10; // ax
  char v11; // r13
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned int v16; // [rsp+10h] [rbp-58h]
  int v17; // [rsp+14h] [rbp-54h]
  unsigned int v19; // [rsp+1Ch] [rbp-4Ch]
  __int64 v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+2Ch] [rbp-3Ch]

  v10 = *(_WORD *)(a2 + 24);
  if ( v10 > 0x207u )
  {
    if ( v10 == 594 )
      goto LABEL_19;
LABEL_21:
    if ( !under_debugger )
      sub_3835A0(0xC86Cu, a7);
LABEL_25:
    BUG();
  }
  if ( v10 > 0x1FEu )
  {
    switch ( *(_WORD *)(a2 + 24) )
    {
      case 0x200:
        v21 = 1;
        v19 = 12;
        v17 = 1;
        v16 = 4;
        goto LABEL_5;
      case 0x201:
        v21 = 1;
        v19 = 7;
        v17 = 1;
        v16 = 4;
        goto LABEL_5;
      case 0x202:
        v21 = 1;
        v19 = 5;
        v17 = 1;
        v16 = 4;
        goto LABEL_5;
      case 0x203:
        v21 = 0;
        v19 = 3;
        v17 = 1;
        v16 = 3;
        goto LABEL_5;
      case 0x204:
        v21 = 0;
        v19 = 3;
        v11 = v10 == 594;
        v17 = -1;
        v16 = 3;
        if ( a3 - 14 <= 1 )
          goto LABEL_11;
        goto LABEL_6;
      case 0x205:
        v21 = 1;
        v19 = 4;
        v17 = 1;
        v16 = 12;
        goto LABEL_5;
      case 0x206:
        v21 = 1;
        v19 = 4;
        v17 = 1;
        v16 = 7;
        goto LABEL_5;
      case 0x207:
        v21 = 1;
        v19 = 4;
        v17 = 1;
        v16 = 5;
        goto LABEL_5;
      default:
        goto LABEL_19;
    }
  }
  if ( v10 != 435 )
    goto LABEL_21;
LABEL_19:
  v21 = 1;
  v19 = 4;
  v17 = 1;
  v16 = 4;
LABEL_5:
  v11 = v10 == 594;
  if ( a3 - 14 <= 1 )
  {
LABEL_11:
    sub_3F7690((__int64)a1, v16, a4, a5, a6, v17, a7, v11);
    return 0;
  }
LABEL_6:
  v12 = sub_3FAA90((__int64)a1, a3, a7);
  if ( v12 == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCB91u, a7);
    goto LABEL_25;
  }
  v22 = v12;
  v20 = sub_679D0(a1[1], *(_QWORD *)(a2 + 16), 2);
  v13 = sub_679D0(a1[1], *(_QWORD *)(a2 + 16), 2);
  sub_1D7370((__int64)a1, *(_DWORD *)(v13 + 72), v22);
  a1[2] = v20;
  sub_3F7690((__int64)a1, v16, a4, a5, a6, v17, a7, v11);
  v14 = 2;
  if ( *(_DWORD *)(a1[104] + 84) == 8 )
    v14 = 7;
  sub_3F56D0(
    (__int64)a1,
    0x37u,
    v14,
    *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26),
    0x3BEA45E214ADDC55LL,
    0x3BEA45E214ADDC55LL,
    0);
  a1[2] = v13;
  sub_3F7690((__int64)a1, v19, a4, a5, a8, v21, a7, v11);
  return 1;
}

