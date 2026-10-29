__int64 __fastcall sub_11EBA0(__int64 a1, int *a2, _WORD *a3, __int64 **a4)
{
  __int64 v5; // rbx
  __int64 *v6; // r14
  int v7; // eax
  int v8; // r15d
  int *v9; // rax
  char *v10; // r9
  const char *v11; // r9
  const char *v12; // rsi
  unsigned __int8 *v13; // r15
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // esi
  unsigned __int8 v17; // al
  unsigned __int8 *v18; // rdi
  __int64 v19; // rcx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // r12
  int v27; // [rsp+18h] [rbp-90h]
  int v28; // [rsp+1Ch] [rbp-8Ch]
  __int64 *v31; // [rsp+30h] [rbp-78h]
  __int64 *v32; // [rsp+38h] [rbp-70h]
  unsigned int v33; // [rsp+4Ch] [rbp-5Ch] BYREF
  _QWORD v34[11]; // [rsp+50h] [rbp-58h] BYREF

  v34[3] = __readfsqword(0x28u);
  memset(v34, 0, 24);
  if ( !a2 )
  {
    *a3 = 0;
    *a4 = nullptr;
    sub_C9C70((__int64)v34, 0);
    if ( !*(_BYTE *)(a1 + 103) )
      return 0;
    goto LABEL_60;
  }
  v5 = *a2;
  v6 = sub_DC1C0(a1, 16 * v5);
  v32 = v6;
  v7 = 0x7FFF;
  if ( (int)v5 <= 0x7FFF )
    v7 = v5;
  *a3 = v7;
  v28 = v7;
  *a4 = v6;
  if ( (int)v5 <= 0 || *(_BYTE *)(a1 + 103) )
  {
    sub_C9C70((__int64)v34, (__int64)a3);
    if ( !*(_BYTE *)(a1 + 103) )
      return 0;
    goto LABEL_58;
  }
  v31 = v6;
  v8 = 0;
  while ( 2 )
  {
    v9 = &a2[6 * v8];
    v10 = *((char **)v9 + 2);
    v27 = v8 + 1;
    if ( !v10 || (*((_BYTE *)v9 + 25) & 3) != 0 )
    {
      v21 = *((_QWORD *)v9 + 1);
LABEL_37:
      if ( v21 )
      {
        while ( 1 )
        {
          v22 = *(_DWORD *)(v21 + 4);
          if ( (v22 & 0x41000) == 0 )
            break;
          if ( (v22 & 0x40000) == 0 )
          {
            v21 = *(_QWORD *)(v21 + 16);
            goto LABEL_37;
          }
          v21 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 8LL);
          if ( !v21 )
            goto LABEL_41;
        }
        do
        {
          if ( *(_BYTE *)v21 != 0x8D )
            break;
          v21 = *(_QWORD *)(v21 + 24);
        }
        while ( v21 );
      }
LABEL_41:
      if ( (*(_QWORD *)v21 & 0x3000000000000FFLL) == 0xA7 && (v23 = *(_QWORD *)(v21 + 64)) != 0 )
      {
        v24 = *(__int16 *)(v21 + 48);
        if ( (int)v24 < 0 )
        {
          v24 = *(__int16 *)(v23 + 52);
          if ( (int)v24 < 0 )
          {
            v10 = "rowid";
            goto LABEL_9;
          }
        }
        v10 = *(char **)(*(_QWORD *)(v23 + 8) + 16 * v24);
      }
      else if ( *(_BYTE *)v21 == 59 )
      {
        v10 = *(char **)(v21 + 8);
      }
      if ( !v10 || (unsigned int)sub_CE6F0((__int64)v10) )
        goto LABEL_10;
      goto LABEL_46;
    }
LABEL_9:
    if ( (unsigned int)sub_CE6F0((__int64)v10) )
    {
LABEL_10:
      v12 = "column%d";
      v13 = (unsigned __int8 *)sub_E8280(a1, "column%d", v27);
      goto LABEL_11;
    }
LABEL_46:
    v12 = v11;
    v13 = (unsigned __int8 *)sub_DC720(a1, v11);
LABEL_11:
    v33 = 0;
    if ( !v13 )
    {
LABEL_24:
      *v6 = 0;
      *((_BYTE *)v6 + 11) = 0;
      goto LABEL_25;
    }
    while ( 1 )
    {
      v12 = (const char *)v13;
      if ( !sub_C2AB0((__int64)v34, v13, nullptr)[2] )
        break;
      v14 = strlen((const char *)v13);
      v15 = v14 & 0x3FFFFFFF;
      if ( (v14 & 0x3FFFFFFF) != 0 )
      {
        v16 = v15 - 1;
        if ( (_DWORD)v15 == 1 )
          goto LABEL_19;
        v17 = v13[v16];
        if ( (byte_1BEF00[v17] & 4) != 0 )
        {
          v18 = &v13[(int)v15 - 2];
          while ( --v16 )
          {
            v19 = *v18--;
            v17 = v19;
            if ( (byte_1BEF00[v19] & 4) == 0 )
              goto LABEL_20;
          }
LABEL_19:
          v17 = *v13;
        }
LABEL_20:
        if ( v17 == 58 )
          v15 = v16;
      }
      v12 = "%.*z:%u";
      ++v33;
      v13 = (unsigned __int8 *)sub_E8280(a1, "%.*z:%u", v15, v13);
      if ( v33 > 3 && !(unsigned int)sub_FEBD0(a1, (__int64)"%.*z:%u") )
      {
        v12 = (const char *)&v33;
        sub_FF240(4, (const char *)&v33);
      }
      if ( !v13 )
        goto LABEL_24;
    }
    *v6 = (__int64)v13;
    *((_BYTE *)v6 + 11) = sub_CAF70(v13);
    if ( (__int64 *)sub_D1F90((__int64)v34, v13, (__int64)v6) != v6 )
      goto LABEL_25;
    if ( *(_BYTE *)(a1 + 103) )
      goto LABEL_34;
    if ( *(_BYTE *)(a1 + 104) )
    {
      if ( v28 <= v27 )
        goto LABEL_34;
LABEL_27:
      v6 += 2;
      v8 = v27;
      continue;
    }
    break;
  }
  sub_DBE60(a1);
LABEL_25:
  if ( v28 > v27 && !*(_BYTE *)(a1 + 103) )
    goto LABEL_27;
LABEL_34:
  sub_C9C70((__int64)v34, (__int64)v12);
  if ( !*(_BYTE *)(a1 + 103) )
    return 0;
  v25 = v31;
  do
  {
    if ( *v25 )
      sub_C9250(a1, (_QWORD *)*v25);
    v25 += 2;
  }
  while ( &v32[2 * (unsigned int)(v27 - 1) + 2] != v25 );
LABEL_58:
  if ( v32 )
    sub_C9250(a1, v32);
LABEL_60:
  *a4 = nullptr;
  *a3 = 0;
  return 7;
}
