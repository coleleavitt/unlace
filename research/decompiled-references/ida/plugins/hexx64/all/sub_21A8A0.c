__int64 __fastcall sub_21A8A0(char *a1, char *a2, __int64 a3, __int64 *a4, double a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int *v11; // r8
  __int64 v12; // rdx
  unsigned int *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r15
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rsi
  int v21; // edi
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int *v26; // r15
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // r12
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // r13
  __int64 v33; // r12
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r13
  int v37; // eax
  __int64 v38; // rax
  unsigned int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  __int64 i; // r13
  int v43; // ecx
  __int64 v44; // r15
  signed int v45; // ecx
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r15
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // edx
  signed int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  int v55; // edx
  int v56; // eax
  int *v57; // [rsp+8h] [rbp-60h]
  __int64 v59; // [rsp+18h] [rbp-50h]
  __int64 v60; // [rsp+18h] [rbp-50h]
  __int64 v61; // [rsp+18h] [rbp-50h]
  __int64 v62; // [rsp+18h] [rbp-50h]
  unsigned int *v63; // [rsp+20h] [rbp-48h]
  unsigned int *v64; // [rsp+20h] [rbp-48h]
  unsigned int *v65; // [rsp+20h] [rbp-48h]
  unsigned int *v66; // [rsp+28h] [rbp-40h]

  result = a2 - a1;
  v57 = (int *)a2;
  if ( a2 - a1 <= 64 )
    return result;
  while ( 2 )
  {
    v8 = result;
    v9 = result >> 3;
    v10 = v8 >> 2;
    if ( !a3 )
    {
      for ( i = v9 - 1; ; --i )
      {
        sub_21A640((__int64)a1, i, v10, *(_DWORD *)&a1[4 * i], a4, a5);
        if ( !i )
          break;
      }
      for ( result = (char *)v57 - a1;
            (char *)v57 - a1 > 4;
            result = sub_21A640((__int64)a1, 0, ((char *)v57 - a1) >> 2, v43, a4, a5) )
      {
        v43 = *--v57;
        *v57 = *(_DWORD *)a1;
      }
      return result;
    }
    v11 = (unsigned int *)&a1[4 * v9];
    v12 = *a4;
    v13 = (unsigned int *)(a1 + 4);
    --a3;
    v14 = *a4 + 104LL * *((int *)a1 + 1);
    v15 = *a4 + 104LL * (int)*v11;
    v16 = *(_DWORD *)(v15 + 24) & 0x100;
    if ( (*(_BYTE *)(v14 + 25) & 1) != 0 )
    {
      if ( !v16 )
      {
        v20 = v12 + 104LL * *(v57 - 1);
        if ( (*(_BYTE *)(v20 + 25) & 1) != 0 )
        {
          v44 = v12 + 104LL * *(v57 - 1);
          goto LABEL_67;
        }
        goto LABEL_10;
      }
    }
    else if ( v16 )
    {
      v20 = v12 + 104LL * *(v57 - 1);
      if ( (*(_BYTE *)(v20 + 25) & 1) == 0 )
        goto LABEL_40;
      v47 = *a4 + 104LL * (int)*v11;
      v48 = v20;
      goto LABEL_59;
    }
    v63 = v11;
    v59 = *a4 + 104LL * *((int *)a1 + 1);
    v17 = sub_1C2AD0((int *)v14, (int *)v15, a5);
    v11 = v63;
    if ( v17 )
      v18 = v17 >> 31;
    else
      LOBYTE(v18) = *(_QWORD *)(v59 + 16) < *(_QWORD *)(v15 + 16);
    v19 = *a4;
    v20 = *a4 + 104LL * *(v57 - 1);
    v21 = *(_DWORD *)(v20 + 24) & 0x100;
    if ( (_BYTE)v18 )
    {
      v22 = *v63;
      v15 = v19 + 104LL * (int)*v63;
      if ( (*(_BYTE *)(v15 + 25) & 1) != 0 )
      {
        if ( !v21 )
        {
LABEL_13:
          v24 = *(_DWORD *)a1;
          *(_DWORD *)a1 = v22;
          *v11 = v24;
          v25 = *(int *)a1;
          goto LABEL_14;
        }
      }
      else if ( v21 )
      {
        v25 = *((int *)a1 + 1);
        v44 = *a4 + 104LL * *(v57 - 1);
        v14 = v19 + 104LL * (int)v25;
        if ( (*(_BYTE *)(v14 + 25) & 1) == 0 )
          goto LABEL_66;
        goto LABEL_67;
      }
LABEL_10:
      v64 = v11;
      v23 = sub_1C2AD0((int *)v15, (int *)v20, a5);
      v11 = v64;
      if ( v23 )
      {
        if ( v23 < 0 )
          goto LABEL_12;
      }
      else if ( *(_QWORD *)(v15 + 16) < *(_QWORD *)(v20 + 16) )
      {
LABEL_12:
        v22 = *v64;
        goto LABEL_13;
      }
      v52 = *(v57 - 1);
      v25 = *((int *)a1 + 1);
      v14 = *a4 + 104 * v25;
      v44 = *a4 + 104LL * v52;
      if ( (*(_BYTE *)(v14 + 25) & 1) == 0 )
      {
LABEL_66:
        if ( (*(_BYTE *)(v44 + 25) & 1) != 0 )
        {
LABEL_71:
          *(_QWORD *)a1 = __ROL8__(*(_QWORD *)a1, 32);
          goto LABEL_14;
        }
        goto LABEL_67;
      }
      if ( (*(_BYTE *)(v44 + 25) & 1) == 0 )
      {
LABEL_79:
        v55 = *(_DWORD *)a1;
        *(_DWORD *)a1 = v52;
        *(v57 - 1) = v55;
        v25 = *(int *)a1;
        goto LABEL_14;
      }
LABEL_67:
      v62 = v14;
      v53 = sub_1C2AD0((int *)v14, (int *)v44, a5);
      if ( v53 )
        v54 = v53 >> 31;
      else
        LOBYTE(v54) = *(_QWORD *)(v62 + 16) < *(_QWORD *)(v44 + 16);
      if ( !(_BYTE)v54 )
      {
        v25 = *((int *)a1 + 1);
        goto LABEL_71;
      }
      v52 = *(v57 - 1);
      goto LABEL_79;
    }
    v25 = *((int *)a1 + 1);
    v41 = *((_DWORD *)a1 + 1);
    v14 = v19 + 104 * v25;
    if ( (*(_BYTE *)(v14 + 25) & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_43;
LABEL_40:
      v66 = v11;
      v60 = v14;
      v40 = sub_1C2AD0((int *)v14, (int *)v20, a5);
      v11 = v66;
      if ( v40 )
      {
        if ( v40 < 0 )
          goto LABEL_42;
      }
      else if ( *(_QWORD *)(v60 + 16) < *(_QWORD *)(v20 + 16) )
      {
LABEL_42:
        v25 = *((int *)a1 + 1);
        v41 = *((_DWORD *)a1 + 1);
LABEL_43:
        *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v41), _mm_cvtsi32_si128(*(_DWORD *)a1)).m128i_u64[0];
        *(double *)a1 = a5;
        goto LABEL_14;
      }
      v45 = *(v57 - 1);
      v46 = *v66;
      v47 = *a4 + 104LL * (int)*v66;
      v48 = *a4 + 104LL * v45;
      if ( (*(_BYTE *)(v47 + 25) & 1) != 0 )
      {
        if ( (*(_BYTE *)(v48 + 25) & 1) == 0 )
          goto LABEL_81;
        goto LABEL_59;
      }
      goto LABEL_58;
    }
    if ( !v21 )
      goto LABEL_40;
    v48 = *a4 + 104LL * *(v57 - 1);
    v46 = *v63;
    v47 = v19 + 104LL * (int)*v63;
    if ( (*(_BYTE *)(v47 + 25) & 1) == 0 )
    {
LABEL_58:
      if ( (*(_BYTE *)(v48 + 25) & 1) != 0 )
      {
LABEL_63:
        v51 = *(_DWORD *)a1;
        *(_DWORD *)a1 = v46;
        *v11 = v51;
        v25 = *(int *)a1;
        goto LABEL_14;
      }
    }
LABEL_59:
    v65 = v11;
    v61 = v47;
    v49 = sub_1C2AD0((int *)v47, (int *)v48, a5);
    v11 = v65;
    if ( v49 )
      v50 = v49 >> 31;
    else
      LOBYTE(v50) = *(_QWORD *)(v61 + 16) < *(_QWORD *)(v48 + 16);
    if ( !(_BYTE)v50 )
    {
      v46 = *v65;
      goto LABEL_63;
    }
    v45 = *(v57 - 1);
LABEL_81:
    v56 = *(_DWORD *)a1;
    *(_DWORD *)a1 = v45;
    *(v57 - 1) = v56;
    v25 = *(int *)a1;
LABEL_14:
    v26 = (unsigned int *)v57;
    while ( 2 )
    {
      v27 = *a4;
      v28 = *(_DWORD *)(*a4 + 104 * v25 + 24);
      while ( 1 )
      {
        v32 = v27 + 104LL * (int)*v13;
        if ( (*(_BYTE *)(v32 + 25) & 1) != 0 )
        {
          if ( (v28 & 0x100) == 0 )
            goto LABEL_20;
        }
        else if ( (v28 & 0x100) != 0 )
        {
          goto LABEL_28;
        }
        v29 = v27 + 104 * v25;
        v30 = sub_1C2AD0((int *)v32, (int *)v29, a5);
        if ( v30 )
          v31 = v30 >> 31;
        else
          LOBYTE(v31) = *(_QWORD *)(v32 + 16) < *(_QWORD *)(v29 + 16);
        v25 = *(int *)a1;
        v27 = *a4;
        v28 = *(_DWORD *)(*a4 + 104 * v25 + 24);
        if ( !(_BYTE)v31 )
          break;
LABEL_20:
        ++v13;
      }
      while ( 1 )
      {
LABEL_28:
        v35 = (int)*--v26;
        v36 = v27 + 104 * v35;
        v37 = *(_DWORD *)(v36 + 24) & 0x100;
        if ( (v28 & 0x100) != 0 )
        {
          if ( !v37 )
          {
            do
            {
              v38 = (int)*--v26;
              v36 = v27 + 104 * v38;
            }
            while ( (*(_DWORD *)(v36 + 24) & 0x100) == 0 );
          }
        }
        else if ( v37 )
        {
          goto LABEL_34;
        }
        v33 = v27 + 104 * v25;
        v34 = sub_1C2AD0((int *)v33, (int *)v36, a5);
        if ( v34 )
          break;
        if ( *(_QWORD *)(v33 + 16) >= *(_QWORD *)(v36 + 16) )
          goto LABEL_34;
LABEL_27:
        v25 = *(int *)a1;
        v27 = *a4;
        v28 = *(_DWORD *)(*a4 + 104 * v25 + 24);
      }
      if ( v34 < 0 )
        goto LABEL_27;
LABEL_34:
      if ( v13 < v26 )
      {
        v39 = *v13++;
        *(v13 - 1) = *v26;
        *v26 = v39;
        v25 = *(int *)a1;
        continue;
      }
      break;
    }
    sub_21A8A0(v13, v57, a3, a4);
    result = (char *)v13 - a1;
    if ( (char *)v13 - a1 > 64 )
    {
      v57 = (int *)v13;
      continue;
    }
    return result;
  }
}

