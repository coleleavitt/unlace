unsigned __int64 __fastcall sub_127D40(__int64 a1, char *a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r12
  int v13; // r13d
  __int64 v14; // rbx
  int *v15; // rbp
  __m128i *v16; // rax
  __int64 *v17; // rax
  const char *v18; // rsi
  int v19; // r14d
  __int64 *v20; // rax
  int *v21; // rdx
  int *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // r14
  int *v25; // r15
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rax
  int *v30; // rdx
  int *v31; // r15
  unsigned __int64 result; // rax
  int v33; // eax
  int v34; // eax
  char v35; // al
  unsigned int v36; // eax
  int v37; // ebp
  int v38; // edx
  __int64 *v39; // r14
  unsigned int v40; // r13d
  __int64 v41; // r12
  unsigned __int8 *v42; // rbp
  unsigned int v43; // r12d
  int *v44; // [rsp+8h] [rbp-1B0h]
  unsigned int v45; // [rsp+8h] [rbp-1B0h]
  int v46; // [rsp+10h] [rbp-1A8h]
  __int64 v47; // [rsp+18h] [rbp-1A0h]
  __int64 v48; // [rsp+20h] [rbp-198h]
  int v50; // [rsp+30h] [rbp-188h]
  __int64 v52; // [rsp+38h] [rbp-180h]
  __int128 v53; // [rsp+40h] [rbp-178h] BYREF
  __int128 v54; // [rsp+50h] [rbp-168h]
  __int128 v55; // [rsp+60h] [rbp-158h]
  __int64 v56; // [rsp+70h] [rbp-148h]
  _QWORD v57[14]; // [rsp+80h] [rbp-138h] BYREF
  _QWORD *v58[17]; // [rsp+F0h] [rbp-C8h] BYREF
  unsigned __int64 v59; // [rsp+178h] [rbp-40h]

  v5 = a1;
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a1 + 192);
  v59 = __readfsqword(0x28u);
  v48 = v7;
  v47 = v6;
  v52 = *(_QWORD *)(a1 + 16);
  memset(v58, 0, 0x80u);
  memset(v57, 0, sizeof(v57));
  v58[4] = sub_DD150(v6, *(_DWORD **)(v7 + 8), 0);
  v58[5] = v57;
  LODWORD(v57[0]) = 1;
  v57[5] = a3;
  LODWORD(v57[9]) = -1;
  sub_CFDC0(a1, (__int64)v58, 0);
  v11 = *(unsigned int *)(a1 + 48);
  if ( !(_DWORD)v11 )
    sub_F1FE0(a1, v58, v8, v11, v9, v10);
  if ( v58[4] )
    sub_D7810(v47, v58[4]);
  v12 = *(_QWORD *)a1;
  v44 = *(int **)(v48 + 8);
  if ( *v44 > 0 )
  {
    v13 = 0;
    v14 = a3;
    v15 = nullptr;
    while ( 1 )
    {
      v22 = &v44[6 * v13];
      v23 = *((_QWORD *)v22 + 1);
      if ( !v23 )
        goto LABEL_12;
      if ( *(_BYTE *)v23 != 0xB4 )
      {
        if ( *(_BYTE *)v23 != 0x8D || **(_BYTE **)(v23 + 24) != 0xB4 )
        {
          v16 = sub_DD6E0(v12, v23, 0, nullptr);
          v17 = sub_E0F20((__int64 *)a1, v15, (__int64)v16);
          v15 = (int *)v17;
          if ( !*(_BYTE *)(v12 + 103) )
          {
            v18 = *((const char **)v22 + 2);
            if ( v18 )
            {
              v19 = *(_DWORD *)v17 - 1;
              v20 = sub_DC720(v12, v18);
              v21 = &v15[6 * v19];
              *((_QWORD *)v21 + 2) = v20;
              *((_BYTE *)v21 + 25) = BYTE1(v44[6 * v13 + 6]) & 3 | *((_BYTE *)v21 + 25) & 0xFC;
            }
          }
          goto LABEL_12;
        }
        sub_DBD10(a1, "RETURNING may not use \"TABLE.*\" wildcards");
      }
      if ( *(__int16 *)(v14 + 54) > 0 )
      {
        v24 = 0;
        v25 = v15;
        do
        {
          while ( 1 )
          {
            v26 = 16 * v24 + *(_QWORD *)(v14 + 8);
            if ( (*(_BYTE *)(v26 + 14) & 2) == 0 )
            {
              v27 = sub_DEEF0(v12, 59, *(const char **)v26);
              v28 = sub_E0F20((__int64 *)a1, v25, (__int64)v27);
              v25 = (int *)v28;
              if ( !*(_BYTE *)(v12 + 103) )
                break;
            }
            if ( (int)++v24 >= *(__int16 *)(v14 + 54) )
              goto LABEL_21;
          }
          v50 = *(_DWORD *)v28 - 1;
          v29 = sub_DC720(v12, *(const char **)(*(_QWORD *)(v14 + 8) + 16 * v24));
          v30 = &v25[6 * v50];
          *((_BYTE *)v30 + 25) &= 0xFCu;
          *((_QWORD *)v30 + 2) = v29;
          ++v24;
        }
        while ( (int)v24 < *(__int16 *)(v14 + 54) );
LABEL_21:
        ++v13;
        v15 = v25;
        if ( v13 >= *v44 )
        {
LABEL_22:
          v31 = v15;
          a3 = v14;
          v5 = a1;
          if ( *(_BYTE *)(v47 + 103) )
            goto LABEL_23;
          goto LABEL_28;
        }
      }
      else
      {
LABEL_12:
        if ( ++v13 >= *v44 )
          goto LABEL_22;
      }
    }
  }
  if ( !*(_BYTE *)(v47 + 103) )
  {
    v31 = nullptr;
LABEL_28:
    v56 = 0;
    v33 = *(_DWORD *)(v48 + 188);
    v53 = 0;
    v54 = 0;
    v55 = 0;
    if ( !v33 )
    {
      *(_DWORD *)(v48 + 188) = *v31;
      v34 = *(_DWORD *)(v5 + 52);
      *(_DWORD *)(v5 + 52) = v34 + 1;
      *(_DWORD *)(v48 + 184) = v34;
    }
    *(_QWORD *)&v53 = v5;
    DWORD2(v55) = 1024;
    LODWORD(v54) = a4;
    v35 = *a2;
    *(_QWORD *)(v5 + 168) = a3;
    *(_BYTE *)(v5 + 212) = v35;
    v36 = sub_E46F0((__int64 *)&v53, v31);
    if ( !v36 && !*(_BYTE *)(v47 + 103) )
    {
      v37 = *v31;
      v38 = *(_DWORD *)(v5 + 56);
      *(_DWORD *)(v5 + 56) = *v31 + v38 + 2;
      v45 = v38 + 1;
      *(_DWORD *)(v48 + 192) = v38 + 1;
      if ( v37 <= 0 )
      {
        v43 = v38 + 1;
      }
      else
      {
        v39 = (__int64 *)(v31 + 2);
        v40 = v38 + 1;
        v46 = v37 - 1;
        v41 = (__int64)&v31[6 * (v37 - 1) + 8];
        do
        {
          v42 = (unsigned __int8 *)*v39;
          sub_127C90(v5, *v39, v40, 0.0);
          if ( (unsigned __int8)sub_C6820(v42) == 69 )
            sub_E1710(v52, 87, v40, 0, 0);
          v39 += 3;
          ++v40;
        }
        while ( v39 != (__int64 *)v41 );
        v36 = v46 + 1;
        v43 = v45 + v46 + 1;
      }
      sub_E1710(v52, 97, v45, v36, v43);
      sub_E1710(v52, 127, *(_DWORD *)(v48 + 184), v43 + 1, 0);
      sub_E1710(v52, 128, *(_DWORD *)(v48 + 184), v43, v43 + 1);
    }
LABEL_23:
    if ( v31 )
      sub_D7810(v47, v31);
  }
  result = __readfsqword(0x28u) ^ v59;
  *(_BYTE *)(v5 + 212) = 0;
  *(_QWORD *)(v5 + 168) = 0;
  return result;
}
