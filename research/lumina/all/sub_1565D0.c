__int64 __fastcall sub_1565D0(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v3; // rax
  int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // r13
  unsigned __int16 v9; // r12
  __int64 v10; // r14
  unsigned __int16 *v11; // rax
  __int64 v12; // r13
  unsigned __int16 i; // ax
  __int64 v14; // rdx
  int v15; // edx
  unsigned __int16 v16; // di
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 j; // rax
  const char *v20; // rdx
  int v21; // edi
  unsigned int v22; // ebp
  __int64 v23; // rdi
  _QWORD *v24; // rsi
  __int64 v25; // rsi
  _QWORD *v26; // rsi
  __int64 v28; // rdx
  const char *v29; // rax
  int v30; // eax
  unsigned __int8 *v32; // [rsp+8h] [rbp-A20h]
  unsigned int v33; // [rsp+10h] [rbp-A18h]
  int v34; // [rsp+14h] [rbp-A14h]
  __int64 v35; // [rsp+20h] [rbp-A08h]
  __int64 v36; // [rsp+28h] [rbp-A00h]
  int v37; // [rsp+34h] [rbp-9F4h] BYREF
  unsigned __int8 *v38; // [rsp+38h] [rbp-9F0h] BYREF
  unsigned __int8 *v39; // [rsp+40h] [rbp-9E8h] BYREF
  unsigned __int8 *v40; // [rsp+48h] [rbp-9E0h] BYREF
  unsigned __int8 *v41; // [rsp+50h] [rbp-9D8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-9D0h]
  _QWORD v43[2]; // [rsp+60h] [rbp-9C8h] BYREF
  __int64 *v44; // [rsp+70h] [rbp-9B8h] BYREF
  __int64 v45; // [rsp+78h] [rbp-9B0h]
  __int64 v46[297]; // [rsp+80h] [rbp-9A8h] BYREF
  __int64 v47; // [rsp+9C8h] [rbp-60h] BYREF
  __int64 *v48; // [rsp+9E0h] [rbp-48h]
  unsigned __int64 v49; // [rsp+9E8h] [rbp-40h]

  v2 = a2;
  v3 = *(_QWORD *)a1;
  v49 = __readfsqword(0x28u);
  v35 = v3;
  v34 = *(_DWORD *)(v3 + 140);
  if ( !*(_DWORD *)(v3 + 208) )
    *(_DWORD *)(v3 + 400) = 0;
  LODWORD(v46[0]) = 0;
  v4 = -1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 328) = a2;
  v44 = v46;
  v45 = a1;
  v48 = &v47;
  v5 = *(_QWORD *)(v3 + 344);
  *(_QWORD *)(v3 + 344) = a1;
  v36 = v5;
  while ( 1 )
  {
    v6 = (__int64)&v37;
    v7 = sub_D1270(v2, &v37);
    v8 = v7;
    v34 -= v7;
    if ( v34 < 0 )
    {
      *(_DWORD *)(a1 + 24) = 18;
      goto LABEL_37;
    }
    v9 = v37;
    if ( v37 <= 163 )
    {
      v32 = &v2[v7];
      v33 = (unsigned __int16)v37;
      goto LABEL_12;
    }
    v7 = *(_DWORD *)(v35 + 400);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 24) = 9;
      ++*(_DWORD *)(a1 + 48);
      goto LABEL_37;
    }
    v33 = v37;
    if ( v37 != 183 )
      break;
    v32 = &v2[v8];
LABEL_31:
    v2 = v32;
  }
  if ( !*v2 )
  {
    if ( v4 == 1 )
    {
      v37 = 0;
      v32 = v2;
      v9 = 0;
      v33 = 0;
    }
    else
    {
      if ( !v4 )
        goto LABEL_37;
      v37 = 1;
      v32 = v2;
      v9 = 1;
      v33 = 1;
    }
    goto LABEL_12;
  }
  if ( v37 == 164 )
  {
    v40 = v2 + 6;
    if ( (unsigned int)sub_D1A60(&v40) == 59 )
    {
      v9 = 164;
      if ( (unsigned int)sub_D1A60(&v40) == 24 )
        goto LABEL_55;
    }
    goto LABEL_54;
  }
  if ( v37 == 165 )
  {
    v38 = v2 + 4;
    if ( v4 == 23 && ((v30 = sub_D1A60(&v38), v30 == 22) || v30 == 59) )
    {
      v9 = 165;
    }
    else
    {
      v9 = 59;
      v33 = 59;
    }
    v37 = v33;
    v32 = &v2[(int)v8];
    v7 = v8;
    goto LABEL_12;
  }
  if ( v37 != 166 )
  {
    v6 = (__int64)"unrecognized token: \"%T\"";
    v41 = v2;
    LODWORD(v42) = v8;
    sub_DBD10(a1, "unrecognized token: \"%T\"", &v41);
    goto LABEL_37;
  }
  v39 = v2 + 6;
  if ( v4 != 23 || (v9 = 166, (unsigned int)sub_D1A60(&v39) != 22) )
  {
LABEL_54:
    v9 = 59;
    v33 = 59;
  }
LABEL_55:
  v37 = v33;
  v32 = &v2[(int)v8];
  v7 = v8;
LABEL_12:
  v10 = v45;
  *(_DWORD *)(a1 + 280) = v7;
  v11 = (unsigned __int16 *)v44;
  *(_QWORD *)(a1 + 272) = v2;
  v12 = *(_QWORD *)(a1 + 280);
  for ( i = *v11; ; i = sub_14FE60(&v44, v6, v2, v12, v10) )
  {
    if ( i > 0x239u )
      goto LABEL_16;
    v15 = word_1BC480[i];
    v16 = v9;
    v17 = v9;
    v6 = v15 + v9;
    if ( v9 == word_1BC900[v6] )
      break;
    while ( 1 )
    {
      v6 = (__int64)word_1BBB40;
      LOWORD(v17) = word_1BBB40[v17];
      if ( !(_WORD)v17 )
        break;
      v17 = (unsigned __int16)v17;
      v16 = v17;
      v6 = v15 + (unsigned __int16)v17;
      if ( (_WORD)v17 == word_1BC900[v6] )
        goto LABEL_24;
    }
    v14 = v15 + 101;
    if ( word_1BC900[v14] == 101 && v16 )
      i = word_1BDAA0[v14];
    else
      i = word_1BBCC0[i];
LABEL_16:
    if ( i <= 0x4D2u )
      goto LABEL_25;
LABEL_17:
    v6 = (unsigned int)i - 1235;
    if ( !byte_1BB660[v6] && v44 >= v48 )
      goto LABEL_35;
  }
LABEL_24:
  i = word_1BDAA0[v6];
  if ( i > 0x4D2u )
    goto LABEL_17;
LABEL_25:
  if ( i > 0x4CFu )
  {
    if ( i == 1233 )
    {
      v44 -= 3;
    }
    else
    {
      v41 = v2;
      v42 = v12;
      v43[0] = v2;
      v43[1] = v12;
      v18 = v45;
      if ( *v2 )
        sub_DBD10(v45, "near \"%T\": syntax error", v43);
      else
        sub_DBD10(v45, "incomplete input");
      v6 = v33;
      v45 = v18;
      sub_D8D00((__int64)&v44, v33, (__int64 *)&v41);
    }
    goto LABEL_30;
  }
  v28 = (__int64)v44;
  v44 += 3;
  if ( v44 <= v48 )
  {
    *(_WORD *)(v28 + 26) = v9;
    *(_QWORD *)(v28 + 32) = v2;
    *(_DWORD *)(v28 + 40) = v12;
    if ( i > 0x239u )
      i += 406;
    *(_WORD *)(v28 + 24) = i;
LABEL_30:
    v4 = v37;
    if ( !*(_DWORD *)(a1 + 24) )
      goto LABEL_31;
    goto LABEL_36;
  }
  v44 = (__int64 *)v28;
LABEL_35:
  sub_E3D50((__int64 *)&v44);
  v4 = v37;
  if ( !*(_DWORD *)(a1 + 24) )
    goto LABEL_31;
LABEL_36:
  v2 = v32;
LABEL_37:
  for ( j = (__int64)v44; v44 > v46; j = (__int64)v44 )
  {
    v44 = (__int64 *)(j - 24);
    v6 = *(unsigned __int16 *)(j + 2);
    sub_D8D00((__int64)&v44, v6, (__int64 *)(j + 8));
  }
  v20 = *(const char **)(a1 + 8);
  if ( *(_BYTE *)(v35 + 103) )
  {
    *(_DWORD *)(a1 + 24) = 7;
    v21 = 7;
    if ( v20 )
      goto LABEL_41;
LABEL_80:
    v29 = sub_D1BA0(v21);
    v20 = (const char *)sub_E8280(v35, "%s", v29);
    *(_QWORD *)(a1 + 8) = v20;
    v21 = *(_DWORD *)(a1 + 24);
LABEL_41:
    v6 = (__int64)"%s in \"%s\"";
    v22 = 1;
    sub_E8BB0(v21, "%s in \"%s\"", v20, *(const char **)(a1 + 328));
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 24);
    if ( v20 )
      goto LABEL_41;
    if ( v21 && v21 != 101 )
      goto LABEL_80;
    v22 = 0;
  }
  v23 = *(_QWORD *)(a1 + 384);
  *(_QWORD *)(a1 + 328) = v2;
  sub_C91C0(v23, v6);
  v24 = *(_QWORD **)(a1 + 336);
  if ( v24 && !*(_BYTE *)(a1 + 292) )
    sub_D8230(v35, v24);
  v25 = *(_QWORD *)(a1 + 352);
  if ( v25 && *(_BYTE *)(a1 + 292) <= 1u && !*(_BYTE *)(v25 + 18) )
    sub_D8450(v35, (_QWORD *)v25);
  v26 = *(_QWORD **)(a1 + 312);
  if ( v26 )
    sub_C9250(v35, v26);
  *(_QWORD *)(v35 + 344) = v36;
  return v22;
}
