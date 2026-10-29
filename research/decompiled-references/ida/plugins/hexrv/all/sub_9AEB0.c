__int64 __fastcall sub_9AEB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  _DWORD *v9; // rax
  unsigned int v10; // r13d
  __int64 v12; // rax
  _DWORD *v13; // r15
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r12
  int v19; // eax
  int v20; // eax
  _QWORD *v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // [rsp+4h] [rbp-10Ch]
  _QWORD *v27; // [rsp+8h] [rbp-108h]
  int v28; // [rsp+8h] [rbp-108h]
  __int64 v29; // [rsp+28h] [rbp-E8h]
  __int64 v30; // [rsp+30h] [rbp-E0h]
  __int64 v31; // [rsp+38h] [rbp-D8h]
  __int64 v32; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C8h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-C0h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A8h]
  __int64 v37; // [rsp+70h] [rbp-A0h] BYREF
  _BYTE v38[24]; // [rsp+78h] [rbp-98h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v41[2]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v42[10]; // [rsp+C0h] [rbp-50h]

  v31 = a1;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v42[3] = __readfsqword(0x28u);
  v30 = v2;
  v4 = sub_118420(a2, &v32, 12);
  if ( !v4 )
    return 0;
  v5 = v4;
  v37 = a1;
  *(_QWORD *)v38 = a2;
  *(_OWORD *)&v38[8] = 0;
  if ( *(_BYTE *)v32 == 4 && **(_DWORD **)(v32 + 8) == 9 )
  {
    *(_QWORD *)&v38[16] = a2;
    v14 = (_DWORD *)sub_124F80(a1, v32, &v38[16], 0);
    if ( v14 )
    {
      if ( *v14 == 9 )
      {
        v15 = sub_124F80(v37, v14 + 8, &v38[16], 0);
        *(_QWORD *)&v38[8] = v15;
        if ( v15 )
        {
          if ( *(_DWORD *)v15 == 25 )
          {
            v16 = *(_QWORD *)&v38[16];
            v13 = (_DWORD *)v15;
            v32 = v5 + 32;
            v29 = v5 + 48;
            goto LABEL_31;
          }
          if ( *(_DWORD *)v15 == 35 && *(_BYTE *)(v15 + 32) == 4 )
          {
            v13 = *(_DWORD **)(v15 + 40);
            if ( *v13 == 12
              && ((unsigned __int8)sub_1216A0(v13 + 8, v15 + 48, 0)
               || (unsigned __int8)sub_1216A0(v13 + 12, *(_QWORD *)&v38[8] + 48LL, 0)) )
            {
              v16 = *(_QWORD *)&v38[16];
              v32 = v5 + 32;
              v29 = v5 + 48;
              goto LABEL_30;
            }
          }
        }
      }
    }
    return 0;
  }
  v6 = 0;
  v42[0] = v4 + 32;
  v7 = a2;
  v42[1] = v5 + 48;
  while ( 1 )
  {
    v8 = v42[v6];
    *(_QWORD *)&v38[16] = v7;
    v9 = (_DWORD *)sub_124F80(a1, v8, &v38[16], 0);
    if ( !v9 )
      goto LABEL_6;
    if ( *v9 != 9 )
      goto LABEL_6;
    v12 = sub_124F80(v37, v9 + 8, &v38[16], 0);
    *(_QWORD *)&v38[8] = v12;
    if ( !v12 )
      goto LABEL_6;
    if ( *(_DWORD *)v12 == 25 )
      break;
    if ( *(_DWORD *)v12 == 35 && *(_BYTE *)(v12 + 32) == 4 )
    {
      v13 = *(_DWORD **)(v12 + 40);
      if ( *v13 == 12
        && ((unsigned __int8)sub_1216A0(v13 + 8, v12 + 48, 0)
         || (unsigned __int8)sub_1216A0(v13 + 12, *(_QWORD *)&v38[8] + 48LL, 0)) )
      {
        goto LABEL_29;
      }
    }
LABEL_6:
    if ( v6 )
      return 0;
    v7 = *(_QWORD *)v38;
    a1 = v37;
    v6 = 1;
  }
  v13 = (_DWORD *)v12;
LABEL_29:
  v16 = *(_QWORD *)&v38[16];
  v29 = v42[v6 ^ 1];
LABEL_30:
  if ( !v13 )
    return 0;
LABEL_31:
  v33 = a2;
  v17 = sub_8FDA0(v31, &v33, v16, (__int64)v13);
  v18 = v17;
  if ( !v17 || v33 != v17 || *(_DWORD *)(v17 + 68) != *(_DWORD *)(a2 + 68) )
    return 0;
  v39[1] = 0;
  v39[0] = 0xFFFFFFFF00000000LL;
  v40[0] = 0xFFFFFFFF00000000LL;
  v41[0] = 0xFFFFFFFF00000000LL;
  v40[1] = 0;
  v41[1] = 0;
  *(_OWORD *)v38 = 0;
  sub_120EE0(&v37, v17);
  v10 = sub_8F2A0(v30, (int *)&v37);
  if ( !(_BYTE)v10 )
  {
    sub_1188E0(v41);
    goto LABEL_57;
  }
  v34[1] = 0;
  v34[0] = 0xFFFFFFFF00000000LL;
  if ( *(_BYTE *)v32 == 4 && sub_3085C0(*(_QWORD *)(v32 + 8)) )
  {
    sub_120CC0(v34);
    v32 = 0;
    v35 = 0xFFFFFFFF00000000LL;
    v36 = 0;
    goto LABEL_38;
  }
  if ( *(_BYTE *)v29 == 4 )
  {
    v23 = sub_3085C0(*(_QWORD *)(v29 + 8));
    v24 = v32;
    if ( v23 )
    {
      v29 = v32;
      v32 = 0;
      sub_120CC0(v34);
      v24 = v32;
    }
  }
  else
  {
    v24 = v32;
  }
  v36 = 0;
  v35 = 0xFFFFFFFF00000000LL;
  if ( !v24 )
  {
LABEL_38:
    sub_120CC0(&v35);
    if ( !(unsigned __int8)sub_128850(&v35, v30, 0) )
    {
      if ( !sub_12E380(v31, v16, v13, v16, v34, 0) )
      {
LABEL_67:
        v10 = 0;
        goto LABEL_56;
      }
      sub_120CC0(&v35);
    }
    if ( (unsigned int)sub_12BFC0(v30, v31, v16, (_DWORD)v13, a2, (unsigned int)&v35, (__int64)v34, 3) )
    {
      v19 = 3;
      goto LABEL_43;
    }
    goto LABEL_67;
  }
  if ( LOBYTE(v34[0]) )
  {
    if ( sub_12E380(v31, v18, &v37, v16, v34, 0) )
      goto LABEL_65;
    goto LABEL_67;
  }
  sub_120CC0(v34);
  if ( !(unsigned __int8)sub_128850(v34, v30, 0) || !sub_12E380(v31, v18, &v37, v16, v34, 0) )
  {
    sub_120CC0(v34);
    if ( (unsigned __int8)sub_128850(v34, v30, 0) && sub_12E380(v31, v18, &v37, v16, v34, 0) )
    {
      v25 = v29;
      v29 = v32;
      v32 = v25;
      goto LABEL_65;
    }
    goto LABEL_67;
  }
LABEL_65:
  sub_120CC0(&v35);
  v19 = 2;
  if ( !(_BYTE)v35 )
    goto LABEL_38;
LABEL_43:
  v20 = sub_12BFC0(v30, v31, v18, (unsigned int)&v37, v16, (unsigned int)&v35, (__int64)v34, v19);
  if ( !v20 )
    goto LABEL_67;
  v26 = HIDWORD(v41[0]);
  if ( v20 == -1 )
  {
    v27 = v39;
    v21 = v40;
  }
  else
  {
    v27 = v40;
    v21 = v39;
  }
  sub_152D30(v31, v18, v21, a2, v29, 4);
  if ( v32 )
    sub_152D30(v31, v18, v27, a2, v32, 4);
  else
    sub_11C320(v27, v30, 8, *(_QWORD *)&v38[16], (unsigned int)(2 * v26));
  sub_152D30(v31, *(_QWORD *)(v18 + 8), v41, *(_QWORD *)(a2 + 8), a2 + 64, 5);
  if ( (unsigned __int8)sub_11BCE0(&v37, v30) )
    goto LABEL_67;
  v28 = sub_8FFF0(v31, v18, a2, (__int64)&v37, 1u);
  if ( !v28 )
    goto LABEL_67;
  sub_126690(v39, v30, HIDWORD(v39[0]), 2);
  sub_126690(v40, v30, HIDWORD(v40[0]), 2);
  sub_126690(v41, v30, HIDWORD(v41[0]), 2);
  if ( (v28 & 2) != 0 && *(_BYTE *)(v18 + 64) )
    sub_1190E0(v18);
  if ( (v28 & 4) != 0 )
    sub_1190E0(a2);
  else
    v18 = a2;
  sub_8F750(v31, v18, (__int64)&v37);
  sub_1193D0(v18, &v37);
  v22 = *(_DWORD *)(v31 + 24);
  BYTE1(v22) &= ~2u;
  LOBYTE(v22) = v22 | 0x80;
  *(_DWORD *)(v31 + 24) = v22;
  sub_119110(v18, *(_QWORD *)(*(_QWORD *)(v31 + 480) + 112LL));
  sub_94E10(v31, v18);
LABEL_56:
  sub_1188E0(&v35);
  sub_1188E0(v34);
  sub_1188E0(v41);
LABEL_57:
  sub_1188E0(v40);
  sub_1188E0(v39);
  return v10;
}

