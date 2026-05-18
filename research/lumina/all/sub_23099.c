__int64 __fastcall sub_23099(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // edx
  char v11; // al
  unsigned int v12; // r14d
  unsigned __int8 v13; // al
  char v14; // al
  unsigned int v15; // r15d
  unsigned __int8 v16; // al
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // ecx
  unsigned int *v21; // rax
  unsigned int v22; // r15d
  int v23; // eax
  unsigned int v24; // [rsp+4h] [rbp-54h]
  unsigned int v25; // [rsp+8h] [rbp-50h]
  unsigned int v26; // [rsp+Ch] [rbp-4Ch]
  char v27; // [rsp+13h] [rbp-45h]
  unsigned int v28; // [rsp+14h] [rbp-44h]
  unsigned int v30; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a1 + 16);
  v27 = *(_BYTE *)(v5 + 32);
  v24 = *(_DWORD *)(*(_QWORD *)a1 + 68LL) - 1;
  *(_DWORD *)(*(_QWORD *)a1 + 68LL) = v24;
  if ( a2 == 2 )
  {
    result = 0;
    if ( *(_BYTE *)(v5 + 33) == 90 )
      return result;
    if ( (int)a3 <= 0 )
    {
      v26 = 0;
      goto LABEL_16;
    }
  }
  else if ( (int)a3 <= 0 )
  {
    v26 = 0;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v5 + 32) == 89 )
  {
    v26 = *(_DWORD *)(v7 + 144);
    v9 = *(_DWORD *)(a1 + 52);
    if ( a2 == 2 )
    {
      v10 = *(_DWORD *)(a1 + 44);
      if ( *(_BYTE *)(v5 + 33) == 86 )
        sub_21DEB((__int64 *)a1, 0x37u, v9, v4, v10, v24);
      else
        sub_21DEB((__int64 *)a1, 0x39u, v10, v4, v9, v24);
      goto LABEL_16;
    }
    sub_21DEB((__int64 *)a1, 0x36u, *(_DWORD *)(a1 + 60), a3, v9, v24);
  }
  else
  {
    sub_E1710(v7, 49, (unsigned int)a3, v24, 1);
    v26 = 0;
  }
LABEL_13:
  if ( a2 == 1 && !*(_DWORD *)(v5 + 132) )
    sub_21946(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), 0);
LABEL_16:
  v30 = *(_DWORD *)(v7 + 144);
  if ( *(_BYTE *)(v5 + 33) == *(_BYTE *)(v5 + 34) && v4 && *(_BYTE *)(v5 + 32) == 89 )
  {
    v11 = *(_BYTE *)(v6 + 31);
    if ( v11 )
    {
      v13 = v11 - 1;
      *(_BYTE *)(v6 + 31) = v13;
      v12 = *(_DWORD *)(v6 + 4LL * v13 + 216);
    }
    else
    {
      v12 = *(_DWORD *)(v6 + 56) + 1;
      *(_DWORD *)(v6 + 56) = v12;
    }
    v14 = *(_BYTE *)(v6 + 31);
    if ( v14 )
    {
      v16 = v14 - 1;
      *(_BYTE *)(v6 + 31) = v16;
      v15 = *(_DWORD *)(v6 + 4LL * v16 + 216);
    }
    else
    {
      v15 = *(_DWORD *)(v6 + 56) + 1;
      *(_DWORD *)(v6 + 56) = v15;
    }
    if ( a2 == 2 )
    {
      sub_E1710(v7, 135, *(unsigned int *)(a1 + 44), v12, 0);
      sub_E1710(v7, 135, *(unsigned int *)(a1 + 60), v15, 0);
      sub_E1710(v7, 57, v15, v24, v12);
    }
    else if ( *(_DWORD *)(a1 + 40) )
    {
      sub_E1710(v7, 135, *(unsigned int *)(a1 + 60), v12, 0);
      sub_E1710(v7, 57, *(unsigned int *)(a1 + 40), v24, v12);
    }
    if ( v12 )
      sub_CEFE0(v6, v12, a3);
    if ( v15 )
      sub_CEFE0(v6, v15, a3);
  }
  if ( a2 == 1 )
  {
    v17 = *(_DWORD *)(a1 + 52);
    v28 = *(_DWORD *)(a1 + 56);
    sub_22985(a1);
  }
  else
  {
    if ( a2 != 2 )
    {
      v17 = *(_DWORD *)(a1 + 60);
      v28 = *(_DWORD *)(a1 + 64);
      if ( !*(_DWORD *)(v5 + 132) )
      {
        sub_224F4(*(_QWORD *)a1, v5, v17, 0, *(_DWORD *)(a1 + 32));
        goto LABEL_43;
      }
      v18 = *(unsigned int *)(v5 + 136);
      goto LABEL_41;
    }
    v18 = *(unsigned int *)(v5 + 132);
    v17 = *(_DWORD *)(a1 + 44);
    v28 = *(_DWORD *)(a1 + 48);
    if ( (_DWORD)v18 )
    {
LABEL_41:
      sub_E1710(v7, 86, v18, 1, 0);
      goto LABEL_43;
    }
    sub_224F4(*(_QWORD *)a1, v5, v17, 1u, *(_DWORD *)(a1 + 32));
  }
LABEL_43:
  if ( *(_DWORD *)(a1 + 36) == a2 )
  {
    sub_E1710(v7, 130, v17, 0, 0);
    v19 = *(int *)(v7 + 144);
    if ( (int)v19 > 0 )
      *(_WORD *)(*(_QWORD *)(v7 + 136) + 24 * v19 - 22) = 2;
  }
  v20 = *(_DWORD *)(v7 + 144);
  if ( a4 )
  {
    sub_E1710(v7, 38, v17, (unsigned int)(v20 + 2), 0);
    a4 = sub_E1710(v7, 8, 0, 0, 0);
    if ( v27 == 76 )
      goto LABEL_59;
LABEL_51:
    v21 = *(unsigned int **)(v5 + 24);
    if ( v21 )
    {
      v22 = *v21;
      v23 = 0;
      if ( v22 )
        v23 = sub_CF000(v6, v22);
    }
    else
    {
      v22 = 0;
      v23 = 0;
    }
    v25 = v23;
    sub_21AB0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), v17, v23);
    sub_22167(v6, *(unsigned int **)(v5 + 24), v25, v28, v30);
    if ( v22 == 1 )
    {
      sub_CF060(v6, v25);
    }
    else if ( (signed int)v22 > *(_DWORD *)(v6 + 40) )
    {
      *(_DWORD *)(v6 + 40) = v22;
      *(_DWORD *)(v6 + 44) = v25;
    }
    goto LABEL_59;
  }
  sub_E1710(v7, 38, v17, v20 + (unsigned int)(v27 != 76) + 1, 0);
  if ( v27 != 76 )
  {
    sub_E1710(v7, 8, 0, v24, 0);
    goto LABEL_51;
  }
LABEL_59:
  if ( v26 )
    sub_E1710(v7, 8, 0, v26, 0);
  sub_E0BB0(v7, v24);
  return a4;
}
