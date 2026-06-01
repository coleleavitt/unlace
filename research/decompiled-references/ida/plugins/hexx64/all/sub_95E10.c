__int64 __fastcall sub_95E10(__int128 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // r14
  __int128 v8; // kr00_16
  __int64 v9; // r8
  __int64 v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // r8
  __int128 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // r15
  __int128 v19; // rdi
  char *v20; // rdi
  char v21; // al
  __int128 v22; // rdi
  char v23; // al
  __int64 v24; // [rsp+8h] [rbp-E0h]
  __int64 v25; // [rsp+8h] [rbp-E0h]
  __int64 v26; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v27; // [rsp+8h] [rbp-E0h]
  __int64 v28; // [rsp+18h] [rbp-D0h]
  __int128 v29; // [rsp+20h] [rbp-C8h]
  __int64 v30; // [rsp+30h] [rbp-B8h]
  __int64 v31; // [rsp+38h] [rbp-B0h] BYREF
  char v32[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+48h] [rbp-A0h]
  __int64 v34; // [rsp+58h] [rbp-90h]
  _QWORD v35[2]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v36[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v37[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v38[11]; // [rsp+90h] [rbp-58h]

  v38[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a4 != 4 )
    return 0;
  v5 = *(_DWORD **)(a4 + 8);
  if ( *v5 != 12 || !v5 )
    return 0;
  v29 = a1;
  v8 = a1;
  v9 = 0;
  v38[1] = a2 + 48;
  v38[0] = a2 + 32;
  v10 = *((_QWORD *)&a1 + 1);
  while ( 1 )
  {
    *((_QWORD *)&a1 + 1) = v38[v9];
    v24 = v9;
    v31 = v10;
    v11 = (_DWORD *)sub_129440(a1, (__int64)&v31, 0);
    v12 = v24;
    if ( v11 )
    {
      if ( *v11 == 9 )
      {
        *(_QWORD *)&v13 = v29;
        *((_QWORD *)&v13 + 1) = v11 + 8;
        v14 = sub_129440(v13, (__int64)&v31, 0);
        v12 = v24;
        v30 = v14;
        if ( v14 )
        {
          if ( *(_DWORD *)v14 == 25 )
            goto LABEL_17;
          if ( *(_DWORD *)v14 == 35 && *(_BYTE *)(v14 + 32) == 4 )
          {
            v15 = *(_QWORD *)(v14 + 40);
            if ( *(_DWORD *)v15 == 12 )
            {
              v28 = v24;
              v25 = *(_QWORD *)(v14 + 40);
              v16 = sub_125B60((unsigned __int8 *)(v15 + 32), v14 + 48, 0);
              v17 = v25;
              v12 = v28;
              if ( v16 )
                break;
              v23 = sub_125B60((unsigned __int8 *)(v25 + 48), v30 + 48, 0);
              v17 = v25;
              v12 = v28;
              if ( v23 )
                break;
            }
          }
        }
      }
    }
    if ( v12 )
      return 0;
    v10 = *((_QWORD *)&v29 + 1);
    *(_QWORD *)&a1 = v29;
    v9 = 1;
  }
  v14 = v17;
LABEL_17:
  v18 = v38[v12 ^ 1];
  v26 = *(_QWORD *)(*(_QWORD *)(v8 + 480) + 112LL);
  if ( !(unsigned int)sub_130480(v26, (const __m128i *)v8, a3, v5, v31, v14 + 32, v14 + 48, 2) )
    return 0;
  v35[1] = 0;
  v35[0] = 0xFFFFFFFF00000000LL;
  v36[0] = 0xFFFFFFFF00000000LL;
  v37[0] = 0xFFFFFFFF00000000LL;
  v36[1] = 0;
  v37[1] = 0;
  v33 = 0;
  sub_1253A0((__int64)v32, (__int64)v5);
  if ( LOBYTE(v35[0]) == 2 )
  {
    sub_1571F0(v8, a3, (__int64)v36, *((__int64 *)&v8 + 1), v18, 0);
LABEL_26:
    v20 = (char *)v35;
    goto LABEL_22;
  }
  *((_QWORD *)&v19 + 1) = a3;
  *(_QWORD *)&v19 = v8;
  if ( LOBYTE(v36[0]) == 2 )
  {
    sub_1571F0(v8, a3, (__int64)v35, *((__int64 *)&v8 + 1), v18, 0);
    goto LABEL_21;
  }
  if ( !(unsigned __int8)sub_132E20(v19, (__int64)v35, *((__int64 *)&v8 + 1), v18, 0) )
  {
    *((_QWORD *)&v22 + 1) = a3;
    *(_QWORD *)&v22 = v8;
    v21 = sub_132E20(v22, (__int64)v36, *((__int64 *)&v8 + 1), v18, 0);
    if ( !v21 )
      goto LABEL_23;
    goto LABEL_26;
  }
LABEL_21:
  v20 = (char *)v36;
LABEL_22:
  HIDWORD(v37[0]) *= 2;
  sub_1207E0(v20, v26, 9, v34, SHIDWORD(v37[0]));
  sub_11D890(*(_QWORD *)(a4 + 8), (__int64)v32);
  *(_DWORD *)(a4 + 4) *= 2;
  v21 = 1;
LABEL_23:
  v27 = v21;
  sub_11CDA0((__int64)v37);
  sub_11CDA0((__int64)v36);
  sub_11CDA0((__int64)v35);
  return v27;
}

