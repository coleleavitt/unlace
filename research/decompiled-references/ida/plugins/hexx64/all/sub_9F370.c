__int64 __fastcall sub_9F370(__int128 a1)
{
  unsigned __int64 *v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rax
  unsigned int v8; // r13d
  __int128 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r15
  _DWORD *v13; // rax
  __int128 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // rax
  char v21; // al
  int v22; // eax
  _QWORD *v23; // rdx
  __int32 v24; // eax
  __int128 v25; // rdi
  unsigned __int8 *v26; // rax
  unsigned __int8 *v27; // rdx
  unsigned __int8 *v28; // rsi
  __int64 v29; // rdx
  int v30; // [rsp+4h] [rbp-10Ch]
  char *v31; // [rsp+8h] [rbp-108h]
  int v32; // [rsp+8h] [rbp-108h]
  __int64 v33; // [rsp+28h] [rbp-E8h]
  unsigned __int64 *v34; // [rsp+30h] [rbp-E0h]
  const __m128i *v35; // [rsp+38h] [rbp-D8h]
  __int64 v36; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C8h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-C0h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-A8h]
  __int64 v41; // [rsp+70h] [rbp-A0h] BYREF
  _BYTE v42[24]; // [rsp+78h] [rbp-98h] BYREF
  _QWORD v43[2]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD v44[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v45[2]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v46[10]; // [rsp+C0h] [rbp-50h]

  v35 = (const __m128i *)a1;
  v1 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
  v46[3] = __readfsqword(0x28u);
  v2 = *((_QWORD *)&a1 + 1);
  v34 = v1;
  v3 = sub_11C8E0(*((__int64 *)&a1 + 1), &v36, 12);
  if ( !v3 )
    return 0;
  *((_QWORD *)&a1 + 1) = v36;
  v4 = v3;
  v41 = a1;
  *(_QWORD *)v42 = v2;
  *(_OWORD *)&v42[8] = 0;
  if ( *(_BYTE *)v36 == 4 && **(_DWORD **)(v36 + 8) == 9 )
  {
    *(_QWORD *)&v42[16] = v2;
    v13 = (_DWORD *)sub_129440(a1, (__int64)&v42[16], 0);
    if ( v13 )
    {
      if ( *v13 == 9 )
      {
        *(_QWORD *)&v14 = v41;
        *((_QWORD *)&v14 + 1) = v13 + 8;
        v15 = sub_129440(v14, (__int64)&v42[16], 0);
        *(_QWORD *)&v42[8] = v15;
        if ( v15 )
        {
          if ( *(_DWORD *)v15 == 25 )
          {
            v16 = *(_QWORD *)&v42[16];
            v12 = v15;
            v36 = v4 + 32;
            v33 = v4 + 48;
            goto LABEL_31;
          }
          if ( *(_DWORD *)v15 == 35 && *(_BYTE *)(v15 + 32) == 4 )
          {
            v12 = *(_QWORD *)(v15 + 40);
            if ( *(_DWORD *)v12 == 12
              && (sub_125B60((unsigned __int8 *)(v12 + 32), v15 + 48, 0)
               || sub_125B60((unsigned __int8 *)(v12 + 48), *(_QWORD *)&v42[8] + 48LL, 0)) )
            {
              v16 = *(_QWORD *)&v42[16];
              v36 = v4 + 32;
              v33 = v4 + 48;
              goto LABEL_30;
            }
          }
        }
      }
    }
    return 0;
  }
  v5 = 0;
  v46[0] = v3 + 32;
  v6 = v2;
  v46[1] = v4 + 48;
  while ( 1 )
  {
    *((_QWORD *)&a1 + 1) = v46[v5];
    *(_QWORD *)&v42[16] = v6;
    v7 = (_DWORD *)sub_129440(a1, (__int64)&v42[16], 0);
    if ( !v7 )
      goto LABEL_6;
    if ( *v7 != 9 )
      goto LABEL_6;
    *(_QWORD *)&v10 = v41;
    *((_QWORD *)&v10 + 1) = v7 + 8;
    v11 = sub_129440(v10, (__int64)&v42[16], 0);
    *(_QWORD *)&v42[8] = v11;
    if ( !v11 )
      goto LABEL_6;
    if ( *(_DWORD *)v11 == 25 )
      break;
    if ( *(_DWORD *)v11 == 35 && *(_BYTE *)(v11 + 32) == 4 )
    {
      v12 = *(_QWORD *)(v11 + 40);
      if ( *(_DWORD *)v12 == 12
        && (sub_125B60((unsigned __int8 *)(v12 + 32), v11 + 48, 0)
         || sub_125B60((unsigned __int8 *)(v12 + 48), *(_QWORD *)&v42[8] + 48LL, 0)) )
      {
        goto LABEL_29;
      }
    }
LABEL_6:
    if ( v5 )
      return 0;
    v6 = *(_QWORD *)v42;
    *(_QWORD *)&a1 = v41;
    v5 = 1;
  }
  v12 = v11;
LABEL_29:
  v16 = *(_QWORD *)&v42[16];
  v33 = v46[v5 ^ 1];
LABEL_30:
  if ( !v12 )
    return 0;
LABEL_31:
  v37 = v2;
  v17 = sub_94260(v35, &v37, v16, (_DWORD *)v12);
  v18 = v17;
  if ( !v17 || v37 != v17 || *(_DWORD *)(v17 + 68) != *(_DWORD *)(v2 + 68) )
    return 0;
  v43[1] = 0;
  v43[0] = 0xFFFFFFFF00000000LL;
  v44[0] = 0xFFFFFFFF00000000LL;
  v45[0] = 0xFFFFFFFF00000000LL;
  v44[1] = 0;
  v45[1] = 0;
  *(_OWORD *)v42 = 0;
  sub_1253A0((__int64)&v41, v17);
  v8 = sub_93760((__int64)v34, (int *)&v41);
  if ( !(_BYTE)v8 )
  {
    sub_11CDA0((__int64)v45);
    goto LABEL_57;
  }
  v38[1] = 0;
  v38[0] = 0xFFFFFFFF00000000LL;
  if ( *(_BYTE *)v36 == 4 )
  {
    v19 = (unsigned __int8 *)sub_30D1C0(*(_QWORD *)(v36 + 8));
    if ( v19 )
    {
      sub_125180((__int64)v38, v19);
      v36 = 0;
      v39 = 0xFFFFFFFF00000000LL;
      v40 = 0;
      goto LABEL_38;
    }
  }
  if ( *(_BYTE *)v33 == 4 )
  {
    v26 = (unsigned __int8 *)sub_30D1C0(*(_QWORD *)(v33 + 8));
    v27 = (unsigned __int8 *)v36;
    if ( v26 )
    {
      v33 = v36;
      v36 = 0;
      sub_125180((__int64)v38, v26);
      v27 = (unsigned __int8 *)v36;
    }
  }
  else
  {
    v27 = (unsigned __int8 *)v36;
  }
  v40 = 0;
  v39 = 0xFFFFFFFF00000000LL;
  if ( !v27 )
  {
LABEL_38:
    sub_125180((__int64)&v39, (unsigned __int8 *)v33);
    if ( !(unsigned __int8)sub_12CD10((__int16 *)&v39, v34, 0) )
    {
      v20 = (unsigned __int8 *)sub_132840(v35, v16, v12, v16, (__int64)v38, 0);
      if ( !v20 )
      {
LABEL_67:
        v8 = 0;
        goto LABEL_56;
      }
      sub_125180((__int64)&v39, v20);
    }
    if ( (unsigned int)sub_130480((__int64)v34, v35, v16, (_DWORD *)v12, v2, (__int64)&v39, (__int64)v38, 3) )
    {
      v21 = 3;
      goto LABEL_43;
    }
    goto LABEL_67;
  }
  if ( LOBYTE(v38[0]) )
  {
    v28 = (unsigned __int8 *)sub_132840(v35, v18, (__int64)&v41, v16, (__int64)v38, 0);
    if ( v28 )
      goto LABEL_65;
    goto LABEL_67;
  }
  sub_125180((__int64)v38, v27);
  if ( !(unsigned __int8)sub_12CD10((__int16 *)v38, v34, 0)
    || (v28 = (unsigned __int8 *)sub_132840(v35, v18, (__int64)&v41, v16, (__int64)v38, 0)) == nullptr )
  {
    sub_125180((__int64)v38, (unsigned __int8 *)v33);
    if ( (unsigned __int8)sub_12CD10((__int16 *)v38, v34, 0) )
    {
      v28 = (unsigned __int8 *)sub_132840(v35, v18, (__int64)&v41, v16, (__int64)v38, 0);
      if ( v28 )
      {
        v29 = v33;
        v33 = v36;
        v36 = v29;
        goto LABEL_65;
      }
    }
    goto LABEL_67;
  }
LABEL_65:
  sub_125180((__int64)&v39, v28);
  v21 = 2;
  if ( !(_BYTE)v39 )
    goto LABEL_38;
LABEL_43:
  v22 = sub_130480((__int64)v34, v35, v18, &v41, v16, (__int64)&v39, (__int64)v38, v21);
  if ( !v22 )
    goto LABEL_67;
  v30 = HIDWORD(v45[0]);
  if ( v22 == -1 )
  {
    v31 = (char *)v43;
    v23 = v44;
  }
  else
  {
    v31 = (char *)v44;
    v23 = v43;
  }
  sub_1571F0((__int64)v35, v18, (__int64)v23, v2, v33, 4);
  if ( v36 )
    sub_1571F0((__int64)v35, v18, (__int64)v31, v2, v36, 4);
  else
    sub_1207E0(v31, (__int64)v34, 8, *(__int64 *)&v42[16], 2 * v30);
  sub_1571F0((__int64)v35, *(_QWORD *)(v18 + 8), (__int64)v45, *(_QWORD *)(v2 + 8), v2 + 64, 5);
  if ( sub_1201A0(&v41, (__int64)v34) )
    goto LABEL_67;
  v32 = sub_944B0(v35, v18, v2, (__int64)&v41, 1u);
  if ( !v32 )
    goto LABEL_67;
  sub_12AB50((unsigned __int8 *)v43, (__int64)v34, SHIDWORD(v43[0]), 2);
  sub_12AB50((unsigned __int8 *)v44, (__int64)v34, SHIDWORD(v44[0]), 2);
  sub_12AB50((unsigned __int8 *)v45, (__int64)v34, SHIDWORD(v45[0]), 2);
  if ( (v32 & 2) != 0 && *(_BYTE *)(v18 + 64) )
    sub_11D5A0(v18);
  if ( (v32 & 4) != 0 )
    sub_11D5A0(v2);
  else
    v18 = v2;
  sub_93C10((__int64)v35, v18, (__int64)&v41, 0.0);
  sub_11D890(v18, (__int64)&v41);
  v24 = v35[1].m128i_i32[2];
  BYTE1(v24) &= ~2u;
  LOBYTE(v24) = v24 | 0x80;
  v35[1].m128i_i32[2] = v24;
  sub_11D5D0(v18, *(_QWORD *)(v35[30].m128i_i64[0] + 112));
  *((_QWORD *)&v25 + 1) = v18;
  *(_QWORD *)&v25 = v35;
  sub_992D0(v25, 0.0);
LABEL_56:
  sub_11CDA0((__int64)&v39);
  sub_11CDA0((__int64)v38);
  sub_11CDA0((__int64)v45);
LABEL_57:
  sub_11CDA0((__int64)v44);
  sub_11CDA0((__int64)v43);
  return v8;
}

