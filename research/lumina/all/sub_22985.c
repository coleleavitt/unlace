__int64 __fastcall sub_22985(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned int *v8; // rax
  int v9; // r12d
  unsigned int v10; // eax
  unsigned int v11; // r12d
  char v12; // al
  unsigned __int8 v13; // al
  char v14; // al
  unsigned __int8 v15; // al
  __int64 i; // r9
  char v17; // al
  __int64 v18; // rsi
  int v19; // r12d
  int v20; // edx
  _DWORD *v21; // rax
  int v22; // ecx
  unsigned int v23; // eax
  _DWORD *v24; // rdx
  int v25; // ecx
  unsigned int v26; // eax
  _DWORD *v27; // rdx
  __int64 v28; // r15
  const char *v29; // rax
  unsigned int v30; // r13d
  char v31; // al
  unsigned int v32; // ebx
  __int64 v33; // rdx
  unsigned __int8 v34; // al
  int v35; // r13d
  char v36; // al
  unsigned __int8 v37; // al
  __int64 v38; // rcx
  char v39; // al
  unsigned int v40; // r15d
  unsigned int v41; // r13d
  unsigned __int8 v42; // al
  __int64 v43; // rdx
  unsigned int v45; // [rsp+0h] [rbp-68h]
  unsigned int v46; // [rsp+0h] [rbp-68h]
  unsigned int v47; // [rsp+0h] [rbp-68h]
  unsigned int v48; // [rsp+4h] [rbp-64h]
  unsigned int v49; // [rsp+4h] [rbp-64h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  unsigned int v51; // [rsp+8h] [rbp-60h]
  unsigned int v52; // [rsp+10h] [rbp-58h]
  unsigned int v53; // [rsp+18h] [rbp-50h]
  unsigned int v54; // [rsp+18h] [rbp-50h]
  unsigned int v55; // [rsp+1Ch] [rbp-4Ch]
  __int64 v56; // [rsp+20h] [rbp-48h]
  unsigned int v57; // [rsp+20h] [rbp-48h]
  __int64 v58; // [rsp+28h] [rbp-40h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(v2 + 132) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v50 = v5;
    v6 = *(_QWORD *)a1;
    while ( 1 )
    {
      if ( !v5 )
      {
        v1 = a1;
        return sub_E1710(v3, 9, *(unsigned int *)(v1 + 28), *(unsigned int *)(v1 + 24), 0);
      }
      v28 = *(_QWORD *)(v5 + 80);
      v29 = *(const char **)(v28 + 56);
      if ( v29 == "nth_value" || v29 == "first_value" )
      {
        v46 = *(_DWORD *)(v5 + 100);
        v30 = *(_DWORD *)(v6 + 68) - 1;
        v31 = *(_BYTE *)(v6 + 31);
        *(_DWORD *)(v6 + 68) = v30;
        if ( v31 )
        {
          v34 = v31 - 1;
          *(_BYTE *)(v6 + 31) = v34;
          v32 = *(_DWORD *)(v6 + 4LL * v34 + 216);
        }
        else
        {
          v32 = *(_DWORD *)(v6 + 56) + 1;
          *(_DWORD *)(v6 + 56) = v32;
        }
        sub_E1710(v3, 75, 0, *(unsigned int *)(v5 + 96), 0);
        if ( *(char **)(v28 + 56) == "nth_value" )
        {
          sub_E1710(v3, 94, *(unsigned int *)(v50 + 88), (unsigned int)(*(_DWORD *)(v5 + 124) + 1), v32);
          sub_21791(v6, v32, 2);
        }
        else
        {
          sub_E1710(v3, 71, 1, v32, 0);
        }
        sub_E1710(v3, 106, v32, *(unsigned int *)(v5 + 104), v32);
        sub_E1710(v3, 54, (unsigned int)(*(_DWORD *)(v5 + 104) + 1), v30, v32);
        sub_E1710(v3, 29, v46, 0, v32);
        sub_E1710(v3, 94, v46, *(unsigned int *)(v5 + 124), *(unsigned int *)(v5 + 96));
        sub_E0BB0(v3, v30);
        if ( v32 )
          goto LABEL_82;
      }
      else if ( v29 == (const char *)&unk_1BEAC0 || v29 == "lead" )
      {
        v35 = **(_DWORD **)(*(_QWORD *)(v5 + 112) + 32LL);
        v54 = *(_DWORD *)(v5 + 100);
        v49 = *(_DWORD *)(v6 + 68) - 1;
        *(_DWORD *)(v6 + 68) = v49;
        v36 = *(_BYTE *)(v6 + 31);
        if ( v36 )
        {
          v37 = v36 - 1;
          *(_BYTE *)(v6 + 31) = v37;
          v32 = *(_DWORD *)(v6 + 4LL * v37 + 216);
        }
        else
        {
          v32 = *(_DWORD *)(v6 + 56) + 1;
          *(_DWORD *)(v6 + 56) = v32;
        }
        v38 = *(unsigned int *)(v5 + 96);
        v47 = *(_DWORD *)(v50 + 88);
        if ( v35 > 2 )
          sub_E1710(v3, 94, v47, (unsigned int)(*(_DWORD *)(v5 + 124) + 2), (unsigned int)v38);
        else
          sub_E1710(v3, 75, 0, v38, 0);
        sub_E1710(v3, 135, v47, v32, 0);
        if ( v35 > 1 )
        {
          v39 = *(_BYTE *)(v6 + 31);
          v40 = (*(_QWORD *)(v28 + 56) != (_QWORD)"lead") + 106;
          if ( v39 )
          {
            v42 = v39 - 1;
            *(_BYTE *)(v6 + 31) = v42;
            v41 = *(_DWORD *)(v6 + 4LL * v42 + 216);
          }
          else
          {
            v41 = *(_DWORD *)(v6 + 56) + 1;
            *(_DWORD *)(v6 + 56) = v41;
          }
          sub_E1710(v3, 94, v47, (unsigned int)(*(_DWORD *)(v5 + 124) + 1), v41);
          sub_E1710(v3, v40, v41, v32, v32);
          if ( v41 )
            sub_CEFE0(v6, v41, v43);
        }
        else
        {
          sub_E1710(v3, 86, v32, 2 * (unsigned int)(*(_QWORD *)(v28 + 56) == (_QWORD)"lead") - 1, 0);
        }
        sub_E1710(v3, 29, v54, v49, v32);
        sub_E1710(v3, 94, v54, *(unsigned int *)(v5 + 124), *(unsigned int *)(v5 + 96));
        sub_E0BB0(v3, v49);
        if ( v32 )
LABEL_82:
          sub_CEFE0(v6, v32, v33);
      }
      v5 = *(_QWORD *)(v5 + 64);
    }
  }
  v7 = 0;
  v53 = *(_DWORD *)(v2 + 100);
  v8 = *(unsigned int **)(v2 + 24);
  if ( v8 )
    v7 = *v8;
  v9 = *(_DWORD *)(v4 + 68);
  v10 = v9 - 1;
  v11 = v9 - 2;
  *(_DWORD *)(v4 + 68) = v11;
  v55 = v10;
  v12 = *(_BYTE *)(v4 + 31);
  if ( v12 )
  {
    v13 = v12 - 1;
    *(_BYTE *)(v4 + 31) = v13;
    v48 = *(_DWORD *)(v4 + 4LL * v13 + 216);
  }
  else
  {
    v48 = *(_DWORD *)(v4 + 56) + 1;
    *(_DWORD *)(v4 + 56) = v48;
  }
  v14 = *(_BYTE *)(v4 + 31);
  if ( v14 )
  {
    v15 = v14 - 1;
    *(_BYTE *)(v4 + 31) = v15;
    v45 = *(_DWORD *)(v4 + 4LL * v15 + 216);
  }
  else
  {
    v45 = *(_DWORD *)(v4 + 56) + 1;
    *(_DWORD *)(v4 + 56) = v45;
  }
  if ( v7 )
  {
    v51 = sub_CF000(v4, v7);
    v52 = sub_CF000(v4, v7);
  }
  else
  {
    v52 = 0;
    v51 = 0;
  }
  sub_E1710(v3, 135, *(unsigned int *)(v2 + 88), v48, 0);
  sub_21AB0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_DWORD *)(v2 + 88), v51);
  for ( i = v2; i; i = *(_QWORD *)(v56 + 64) )
  {
    v56 = i;
    sub_E1710(v3, 75, 0, *(unsigned int *)(i + 92), 0);
  }
  sub_E1710(v3, 22, v53, v11, *(unsigned int *)(v2 + 132));
  v57 = *(_DWORD *)(v3 + 144);
  sub_E1710(v3, 135, v53, v45, 0);
  sub_E1710(v3, 54, *(unsigned int *)(v2 + 136), v11, v45);
  v17 = *(_BYTE *)(v2 + 36);
  if ( v17 == 85 )
  {
    sub_E1710(v3, 53, v48, v55, v45);
  }
  else if ( v17 != 66 )
  {
    v18 = *(_QWORD *)(v2 + 24);
    v58 = 0;
    if ( v18 )
      v58 = sub_F44C0(v4, v18, 0, 0);
    v19 = 0;
    if ( *(_BYTE *)(v2 + 36) == 94 )
      v19 = sub_E1710(v3, 53, v48, 0, v45);
    if ( v58 )
    {
      sub_21AB0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), v53, v52);
      sub_E1710(v3, 90, v52, v51, v7);
      sub_D04B0(v3, v58, 4294967288LL);
      sub_E1710(v3, 13, (unsigned int)(*(_DWORD *)(v3 + 144) + 1), v55, (unsigned int)(*(_DWORD *)(v3 + 144) + 1));
    }
    else
    {
      sub_E1710(v3, 8, 0, v55, 0);
    }
    if ( v19 )
    {
      v20 = *(_DWORD *)(v3 + 144);
      if ( v19 < 0 )
        v19 = v20 - 1;
      v21 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v3 + 103LL) )
        v21 = (_DWORD *)(24LL * v19 + *(_QWORD *)(v3 + 136));
      v21[2] = v20;
    }
  }
  sub_224F4(*(_QWORD *)a1, v2, v53, 0, *(_DWORD *)(a1 + 32));
  sub_E0BB0(v3, v55);
  sub_E1710(v3, 38, v53, v57, 0);
  v22 = *(_DWORD *)(v3 + 144);
  v23 = v57 - 1;
  if ( (int)(v57 - 1) < 0 )
    v23 = v22 - 1;
  v24 = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v3 + 103LL) )
    v24 = (_DWORD *)(*(_QWORD *)(v3 + 136) + 24LL * (int)v23);
  v24[2] = v22;
  v25 = *(_DWORD *)(v3 + 144);
  v26 = v57 + 1;
  if ( (int)(v57 + 1) < 0 )
    v26 = v25 - 1;
  v27 = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v3 + 103LL) )
    v27 = (_DWORD *)(*(_QWORD *)(v3 + 136) + 24LL * (int)v26);
  v27[2] = v25;
  if ( v45 )
    sub_CEFE0(v4, v45, v27);
  if ( v48 )
    sub_CEFE0(v4, v48, v27);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      sub_CF060(v4, v52);
      sub_CF060(v4, v51);
    }
    else
    {
      if ( (signed int)v7 > *(_DWORD *)(v4 + 40) )
      {
        *(_DWORD *)(v4 + 40) = v7;
        *(_DWORD *)(v4 + 44) = v52;
      }
      if ( (signed int)v7 > *(_DWORD *)(v4 + 40) )
      {
        *(_DWORD *)(v4 + 40) = v7;
        *(_DWORD *)(v4 + 44) = v51;
      }
    }
  }
  sub_21946(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), 1);
  return sub_E1710(v3, 9, *(unsigned int *)(v1 + 28), *(unsigned int *)(v1 + 24), 0);
}
