__int64 __fastcall sub_95850(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v6; // r14
  __int64 v9; // rbp
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  _DWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  _DWORD *v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // r15
  _QWORD *v21; // rdi
  char v22; // al
  char v23; // al
  __int64 v24; // [rsp+8h] [rbp-E0h]
  __int64 v25; // [rsp+8h] [rbp-E0h]
  __int64 v26; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v27; // [rsp+8h] [rbp-E0h]
  __int64 v28; // [rsp+18h] [rbp-D0h]
  __int64 v29; // [rsp+20h] [rbp-C8h]
  __int64 v31; // [rsp+30h] [rbp-B8h]
  __int64 v32; // [rsp+38h] [rbp-B0h] BYREF
  char v33[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-A0h]
  __int64 v35; // [rsp+58h] [rbp-90h]
  _QWORD v36[2]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v38[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v39[11]; // [rsp+90h] [rbp-58h]

  v39[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a5 != 4 )
    return 0;
  v6 = *(_DWORD **)(a5 + 8);
  if ( *v6 != 12 || !v6 )
    return 0;
  v29 = a1;
  v9 = a1;
  v11 = 0;
  v39[1] = a3 + 48;
  v39[0] = a3 + 32;
  v12 = a2;
  while ( 1 )
  {
    v13 = v39[v11];
    v24 = v11;
    v32 = v12;
    v14 = (_DWORD *)sub_128E80(a1, v13, &v32, 0);
    v15 = v24;
    if ( v14 )
    {
      if ( *v14 == 9 )
      {
        v16 = sub_128E80(v29, v14 + 8, &v32, 0);
        v15 = v24;
        v31 = v16;
        if ( v16 )
        {
          if ( *(_DWORD *)v16 == 25 )
            goto LABEL_17;
          if ( *(_DWORD *)v16 == 35 && *(_BYTE *)(v16 + 32) == 4 )
          {
            v17 = *(_DWORD **)(v16 + 40);
            if ( *v17 == 12 )
            {
              v28 = v24;
              v25 = *(_QWORD *)(v16 + 40);
              v18 = sub_1255A0(v17 + 8, v16 + 48, 0);
              v19 = v25;
              v15 = v28;
              if ( v18 )
                break;
              v23 = sub_1255A0(v25 + 48, v31 + 48, 0);
              v19 = v25;
              v15 = v28;
              if ( v23 )
                break;
            }
          }
        }
      }
    }
    if ( v15 )
      return 0;
    v12 = a2;
    a1 = v29;
    v11 = 1;
  }
  v16 = v19;
LABEL_17:
  v20 = v39[v15 ^ 1];
  v26 = *(_QWORD *)(*(_QWORD *)(v9 + 480) + 112LL);
  if ( !(unsigned int)sub_12FEC0(v26, v9, a4, (_DWORD)v6, v32, (int)v16 + 32, v16 + 48, 2) )
    return 0;
  v36[1] = 0;
  v36[0] = 0xFFFFFFFF00000000LL;
  v37[0] = 0xFFFFFFFF00000000LL;
  v38[0] = 0xFFFFFFFF00000000LL;
  v37[1] = 0;
  v38[1] = 0;
  v34 = 0;
  sub_124DE0(v33, v6);
  if ( LOBYTE(v36[0]) == 2 )
  {
    sub_156C30(v9, a4, v37, a2, v20, 0);
LABEL_26:
    v21 = v36;
    goto LABEL_22;
  }
  if ( LOBYTE(v37[0]) == 2 )
  {
    sub_156C30(v9, a4, v36, a2, v20, 0);
    goto LABEL_21;
  }
  if ( !(unsigned __int8)sub_132860(v9, a4, (unsigned int)v36, a2, v20, 0) )
  {
    v22 = sub_132860(v9, a4, (unsigned int)v37, a2, v20, 0);
    if ( !v22 )
      goto LABEL_23;
    goto LABEL_26;
  }
LABEL_21:
  v21 = v37;
LABEL_22:
  HIDWORD(v38[0]) *= 2;
  sub_120220(v21, v26, 9, v35, HIDWORD(v38[0]));
  sub_11D2D0(*(_QWORD *)(a5 + 8), v33);
  *(_DWORD *)(a5 + 4) *= 2;
  v22 = 1;
LABEL_23:
  v27 = v22;
  sub_11C7E0(v38);
  sub_11C7E0(v37);
  sub_11C7E0(v36);
  return v27;
}

