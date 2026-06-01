signed int **__fastcall sub_BDA40(signed int **a1, signed int **a2, signed int **a3, int a4)
{
  signed int *v7; // r11
  signed int *v9; // r12
  signed int *v10; // rbp
  signed int *v11; // r10
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  signed int *v17; // r13
  __int64 v18; // r14
  signed int *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  int *v22; // rax
  unsigned __int64 v23; // rax
  int v24; // ecx
  signed int v25; // edi
  int v26; // edx
  int v27; // r11d
  int v28; // ebp
  signed int v29; // r11d
  bool v30; // cl
  signed int v31; // eax
  bool v32; // al
  __int64 v33; // rdx
  signed int v34; // eax
  signed int v35; // r11d
  bool v36; // dl
  __int64 v37; // rcx
  signed int v38; // edx
  signed int *v39; // r10
  signed int *v40; // r13
  __int64 v41; // r11
  signed int **v42; // rbp
  signed int *v43; // rdi
  signed int *v44; // rcx
  signed int *v45; // r9
  signed int **v46; // r12
  signed __int64 v47; // rdi
  signed int *v48; // rax
  unsigned __int64 v49; // rax
  signed int v50; // edi
  signed int v51; // r8d
  signed int v52; // edx
  bool v53; // dl
  signed int v54; // edx
  signed int v55; // r14d
  bool v56; // dl
  signed int v57; // edx
  __m128i v58; // xmm1
  signed int v59; // edx
  __int64 v60; // rdx
  signed int v61; // eax
  signed int v62; // ecx
  signed int v63; // r11d
  bool v64; // dl

  v7 = a3[3];
  v9 = *a3;
  v10 = a2[3];
  v11 = *a2;
  v12 = 0xAAAAAAAAAAAAAAABLL * (*a3 - a3[1]);
  v13 = (__int64)(v12
                - 0x5555555555555555LL * (a2[2] - *a2)
                + 42 * ((v7 == nullptr) + (((char *)v7 - (char *)v10) >> 3) - 1))
      / 2;
  v14 = 0xAAAAAAAAAAAAAAABLL * (*a2 - a2[1]);
  v15 = v14 + v13;
  if ( (__int64)(v14 + v13) < 0 )
  {
    v16 = ~(~v15 / 0x2AuLL);
  }
  else
  {
    if ( v15 <= 41 )
    {
      v17 = &v11[3 * v13];
      v18 = v12 - 1;
      if ( (__int64)(v12 - 1) >= 0 )
        goto LABEL_5;
LABEL_39:
      v20 = ~(-(__int64)v12 / 0x2AuLL);
      goto LABEL_7;
    }
    v16 = v15 / 42;
  }
  v17 = (signed int *)(*(_QWORD *)&v10[2 * v16] + 12 * (v15 - 42 * v16));
  v18 = v12 - 1;
  if ( (__int64)(v12 - 1) < 0 )
    goto LABEL_39;
LABEL_5:
  v19 = v9 - 3;
  if ( v18 <= 41 )
    goto LABEL_8;
  v20 = v18 / 42;
LABEL_7:
  v19 = (signed int *)(*(_QWORD *)&v7[2 * v20] + 12 * (v18 - 42 * v20));
LABEL_8:
  v21 = v14 + 1;
  if ( v21 < 0 )
  {
    v23 = ~(~v21 / 0x2AuLL);
  }
  else
  {
    v22 = v11 + 3;
    if ( v21 <= 41 )
      goto LABEL_12;
    v23 = v21 / 42;
  }
  v22 = (int *)(*(_QWORD *)&v10[2 * v23] + 12 * (v21 - 42 * v23));
LABEL_12:
  v24 = *v22;
  v25 = *v19;
  v26 = *v17;
  if ( a4 == *v22 )
  {
    if ( a4 == v26 )
    {
      v62 = v17[1];
      if ( v22[1] <= v62 )
      {
LABEL_116:
        if ( a4 == v25 && v19[1] >= v22[1] )
        {
          if ( a4 != v26 )
            goto LABEL_37;
          goto LABEL_119;
        }
        goto LABEL_51;
      }
      if ( a4 != v25 || v62 > v19[1] )
        goto LABEL_37;
    }
    else if ( a4 != v25 )
    {
      goto LABEL_42;
    }
    v63 = v22[1];
LABEL_104:
    v64 = v63 > v19[1];
LABEL_105:
    if ( v64 )
      goto LABEL_99;
    goto LABEL_51;
  }
  if ( a4 == v26 )
  {
    if ( a4 == v25 )
      goto LABEL_119;
    if ( v24 )
      goto LABEL_22;
    goto LABEL_114;
  }
  if ( v26 | v24 )
  {
    v27 = v17[2];
    if ( v22[2] < v27 || v22[2] <= v27 && (v24 < v26 || v24 <= v26 && v22[1] < v17[1]) )
    {
      if ( a4 == v25 )
        goto LABEL_37;
      if ( v24 )
        goto LABEL_22;
LABEL_114:
      if ( !v25 )
      {
        v30 = v22[1] < v19[1];
LABEL_27:
        if ( !v30 )
          goto LABEL_28;
LABEL_51:
        v37 = *(_QWORD *)v11;
        v38 = v11[2];
        *(_QWORD *)v11 = *(_QWORD *)v22;
        v11[2] = v22[2];
        *(_QWORD *)v22 = v37;
        v22[2] = v38;
        goto LABEL_52;
      }
LABEL_22:
      v28 = v22[2];
      v29 = v19[2];
      if ( v28 < v29 )
        goto LABEL_28;
      goto LABEL_23;
    }
    if ( a4 == v25 )
      goto LABEL_51;
LABEL_42:
    if ( v25 | v26 )
    {
      v35 = v19[2];
      if ( v17[2] < v35 )
        goto LABEL_92;
      if ( v17[2] > v35 )
        goto LABEL_37;
      if ( v26 < v25 )
      {
LABEL_92:
        if ( a4 == v24 )
          goto LABEL_99;
LABEL_93:
        if ( v25 | v24 )
        {
          v59 = v19[2];
          if ( v22[2] >= v59 && (v22[2] > v59 || v24 >= v25 && (v24 > v25 || v22[1] >= v19[1])) )
            goto LABEL_99;
          goto LABEL_51;
        }
        v64 = v22[1] < v19[1];
        goto LABEL_105;
      }
      if ( v26 > v25 )
        goto LABEL_37;
      v36 = v17[1] >= v19[1];
    }
    else
    {
      v36 = v17[1] < v19[1];
    }
    if ( v36 )
      goto LABEL_37;
    if ( a4 == v24 )
      goto LABEL_99;
    if ( a4 == v25 )
      goto LABEL_51;
    goto LABEL_93;
  }
  v63 = v22[1];
  if ( v63 < v17[1] )
  {
    if ( a4 != v25 )
      goto LABEL_42;
    if ( a4 )
      goto LABEL_51;
    goto LABEL_104;
  }
  if ( !a4 )
    goto LABEL_116;
  if ( a4 == v25 )
    goto LABEL_37;
  if ( v25 )
  {
    v28 = v22[2];
    v29 = v19[2];
    if ( v28 >= v29 )
    {
LABEL_23:
      if ( v28 > v29 )
        goto LABEL_51;
      if ( v24 >= v25 )
      {
        if ( v24 > v25 )
          goto LABEL_51;
        v30 = v22[1] >= v19[1];
        goto LABEL_27;
      }
LABEL_28:
      if ( a4 != v26 )
        goto LABEL_29;
      if ( a4 != v25 )
        goto LABEL_99;
LABEL_119:
      v32 = v17[1] > v19[1];
      goto LABEL_36;
    }
  }
  else if ( v19[1] > v63 )
  {
    goto LABEL_51;
  }
LABEL_29:
  if ( a4 == v25 )
    goto LABEL_37;
  if ( !(v25 | v26) )
  {
    v32 = v17[1] < v19[1];
LABEL_36:
    if ( !v32 )
      goto LABEL_37;
LABEL_99:
    v60 = *(_QWORD *)v11;
    v61 = v11[2];
    *(_QWORD *)v11 = *(_QWORD *)v19;
    v11[2] = v19[2];
    *(_QWORD *)v19 = v60;
    v19[2] = v61;
    goto LABEL_52;
  }
  v31 = v19[2];
  if ( v17[2] >= v31 )
  {
    if ( v17[2] > v31 )
      goto LABEL_99;
    if ( v26 >= v25 )
    {
      if ( v26 > v25 )
        goto LABEL_99;
      v32 = v17[1] >= v19[1];
      goto LABEL_36;
    }
  }
LABEL_37:
  v33 = *(_QWORD *)v11;
  v34 = v11[2];
  *(_QWORD *)v11 = *(_QWORD *)v17;
  v11[2] = v17[2];
  *(_QWORD *)v17 = v33;
  v17[2] = v34;
LABEL_52:
  v39 = *a2;
  v40 = a2[1];
  v41 = (__int64)a2[2];
  v42 = (signed int **)a2[3];
  v43 = *a2;
  v44 = *a3;
  v45 = a3[1];
  v46 = (signed int **)a3[3];
  v47 = 0xAAAAAAAAAAAAAAABLL * (v43 - v40) + 1;
  if ( v47 < 0 )
  {
    v49 = ~(~v47 / 0x2AuLL);
  }
  else
  {
    v48 = v39 + 3;
    if ( v47 <= 41 )
      goto LABEL_56;
    v49 = v47 / 42;
  }
  v42 += v49;
  v40 = *v42;
  v41 = (__int64)(*v42 + 126);
  v48 = &(*v42)[3 * (v47 - 42 * v49)];
  while ( 1 )
  {
LABEL_56:
    v50 = *v39;
LABEL_57:
    v51 = *v48;
    if ( a4 != *v48 )
      goto LABEL_58;
    while ( a4 != v50 || v48[1] > v39[1] )
    {
LABEL_66:
      v48 += 3;
      if ( (signed int *)v41 != v48 )
        goto LABEL_57;
      v48 = v42[1];
      ++v42;
      v51 = *v48;
      v41 = (__int64)(v48 + 126);
      v40 = v48;
      if ( a4 != *v48 )
      {
LABEL_58:
        if ( a4 == v50 )
          break;
        if ( v51 | v50 )
        {
          v52 = v39[2];
          if ( v48[2] < v52 )
            break;
          if ( v48[2] > v52 )
            goto LABEL_66;
          if ( v50 > v51 )
            break;
          if ( v50 < v51 )
            goto LABEL_66;
          v53 = v48[1] >= v39[1];
        }
        else
        {
          v53 = v48[1] < v39[1];
        }
        if ( !v53 )
          break;
        goto LABEL_66;
      }
    }
    if ( v45 != v44 )
    {
LABEL_71:
      v44 -= 3;
      v54 = *v44;
      if ( a4 == v50 )
        goto LABEL_82;
LABEL_72:
      if ( a4 == v54 )
        goto LABEL_84;
      if ( v50 | v54 )
      {
        v55 = v44[2];
        if ( v39[2] < v55 )
          goto LABEL_84;
        if ( v39[2] > v55 )
          goto LABEL_80;
        if ( v54 > v50 )
          goto LABEL_84;
        if ( v54 < v50 )
          goto LABEL_80;
        v56 = v39[1] >= v44[1];
      }
      else
      {
        v56 = v39[1] < v44[1];
      }
      if ( !v56 )
        goto LABEL_84;
      goto LABEL_80;
    }
    while ( 1 )
    {
      v45 = *--v46;
      v44 = v45 + 123;
      v54 = v45[123];
      if ( a4 != v50 )
        goto LABEL_72;
LABEL_82:
      if ( a4 == v54 && v39[1] <= v44[1] )
        break;
LABEL_80:
      if ( v44 != v45 )
        goto LABEL_71;
    }
LABEL_84:
    if ( v42 == v46 )
      break;
    if ( v42 >= v46 )
      goto LABEL_110;
LABEL_86:
    v57 = v48[2];
    v48 += 3;
    v58 = _mm_cvtsi32_si128(*(v48 - 2));
    *(_QWORD *)(v48 - 3) = *(_QWORD *)v44;
    *(v48 - 1) = v44[2];
    v44[2] = v57;
    *(_QWORD *)v44 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v51), v58).m128i_u64[0];
    if ( (signed int *)v41 == v48 )
    {
      v48 = v42[1];
      ++v42;
      v41 = (__int64)(v48 + 126);
      v40 = v48;
    }
  }
  if ( v48 < v44 )
    goto LABEL_86;
LABEL_110:
  *a1 = v48;
  a1[1] = v40;
  a1[2] = (signed int *)v41;
  a1[3] = (signed int *)v42;
  return a1;
}

