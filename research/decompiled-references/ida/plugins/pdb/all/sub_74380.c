__int64 __fastcall sub_74380(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rax
  int v6; // ecx
  int v7; // r14d
  __int64 v8; // r13
  __int64 *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdx

  if ( !a1 )
  {
    v46 = operator new(0x48u);
    *(_BYTE *)(v46 + 64) = 1;
    v11 = v46;
    *(_QWORD *)(v46 + 16) = a2;
    *(_QWORD *)(v46 + 24) = a3;
    *(_QWORD *)(v46 + 32) = a3;
    *(_QWORD *)(v46 + 40) = 0;
    *(_OWORD *)(v46 + 48) = 0;
    *(_OWORD *)v46 = 0;
    v47 = qvector_reserve(v46 + 40, 0, 1, 4);
    v48 = *(_QWORD *)(v11 + 48);
    *(_QWORD *)(v11 + 40) = v47;
    *(_DWORD *)(v47 + 4 * v48) = a4;
    ++*(_QWORD *)(v11 + 48);
    return v11;
  }
  if ( a1[4] < a3 )
  {
    a1[4] = a3;
    v5 = a1[2];
    if ( v5 < a2 )
      goto LABEL_13;
  }
  else
  {
    v5 = a1[2];
    if ( v5 < a2 )
      goto LABEL_13;
  }
  v6 = 0;
  v7 = 0;
  if ( a2 != v5 )
    goto LABEL_5;
  v16 = a1[3];
  if ( v16 < a3 )
  {
LABEL_13:
    v6 = 1;
    v7 = 1;
    goto LABEL_5;
  }
  if ( a3 == v16 )
  {
    v17 = a1[6];
    v18 = a1[5];
    if ( a1[7] < (unsigned __int64)(v17 + 1) )
    {
      v19 = qvector_reserve(a1 + 5, v18, v17 + 1, 4);
      a1[5] = v19;
      v18 = v19;
      v17 = a1[6];
    }
    *(_DWORD *)(v18 + 4 * v17) = a4;
    ++a1[6];
    return (__int64)a1;
  }
LABEL_5:
  v8 = v6;
  v9 = &a1[v6];
  v10 = sub_74380(*v9, a2, a3, a4);
  *v9 = v10;
  v11 = v10;
  if ( !v10 || !*(_BYTE *)(v10 + 64) )
    return (__int64)a1;
  v12 = v7 ^ 1;
  v13 = a1[v12];
  if ( v13 && *(_BYTE *)(v13 + 64) )
  {
    v14 = *a1;
    *((_BYTE *)a1 + 64) = 1;
    *(_BYTE *)(v14 + 64) = 0;
    *(_BYTE *)(a1[1] + 64) = 0;
    return (__int64)a1;
  }
  v20 = *(_QWORD *)(v11 + 8 * v8);
  v21 = *(_QWORD *)(v11 + 8 * v12);
  if ( v20 && *(_BYTE *)(v20 + 64) )
  {
    *v9 = v21;
    *(_QWORD *)(v11 + 8 * v12) = a1;
    *((_BYTE *)a1 + 64) = 1;
    *(_BYTE *)(v11 + 64) = 0;
    v49 = a1[3];
    v50 = *a1;
    a1[4] = v49;
    if ( v50 )
    {
      v51 = *(_QWORD *)(v50 + 32);
      if ( v51 < v49 )
        v51 = v49;
      a1[4] = v51;
    }
    v52 = a1[1];
    if ( v52 )
    {
      v53 = a1[4];
      v54 = *(_QWORD *)(v52 + 32);
      if ( v53 < v54 )
        v53 = v54;
      a1[4] = v53;
    }
    v55 = *(_QWORD *)(v11 + 24);
    v56 = *(_QWORD *)v11;
    *(_QWORD *)(v11 + 32) = v55;
    if ( v56 )
    {
      v57 = *(_QWORD *)(v56 + 32);
      if ( v57 < v55 )
        v57 = v55;
      *(_QWORD *)(v11 + 32) = v57;
    }
    v58 = *(_QWORD *)(v11 + 8);
    if ( v58 )
    {
      v59 = *(_QWORD *)(v11 + 32);
      v60 = *(_QWORD *)(v58 + 32);
      if ( v59 < v60 )
        v59 = v60;
      *(_QWORD *)(v11 + 32) = v59;
    }
  }
  else
  {
    if ( !v21 || !*(_BYTE *)(v21 + 64) )
      return (__int64)a1;
    *(_QWORD *)(v11 + 8 * v12) = *(_QWORD *)(v21 + 8 * v8);
    *(_QWORD *)(v21 + 8 * v8) = v11;
    *(_BYTE *)(v11 + 64) = 1;
    *(_BYTE *)(v21 + 64) = 0;
    v22 = *(_QWORD *)(v11 + 24);
    v23 = *(_QWORD *)v11;
    *(_QWORD *)(v11 + 32) = v22;
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 32);
      if ( v24 < v22 )
        v24 = v22;
      *(_QWORD *)(v11 + 32) = v24;
    }
    v25 = *(_QWORD *)(v11 + 8);
    if ( v25 )
    {
      v26 = *(_QWORD *)(v11 + 32);
      v27 = *(_QWORD *)(v25 + 32);
      if ( v26 < v27 )
        v26 = v27;
      *(_QWORD *)(v11 + 32) = v26;
    }
    v28 = *(_QWORD *)(v21 + 24);
    v29 = *(_QWORD *)v21;
    *(_QWORD *)(v21 + 32) = v28;
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 32);
      if ( v30 < v28 )
        v30 = v28;
      *(_QWORD *)(v21 + 32) = v30;
    }
    v31 = *(_QWORD *)(v21 + 8);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v21 + 32);
      v33 = *(_QWORD *)(v31 + 32);
      if ( v32 < v33 )
        v32 = v33;
      *(_QWORD *)(v21 + 32) = v32;
    }
    *v9 = v21;
    *v9 = *(_QWORD *)(v21 + 8 * v12);
    *(_QWORD *)(v21 + 8 * v12) = a1;
    *((_BYTE *)a1 + 64) = 1;
    *(_BYTE *)(v21 + 64) = 0;
    v34 = a1[3];
    v35 = *a1;
    a1[4] = v34;
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 32);
      if ( v36 < v34 )
        v36 = v34;
      a1[4] = v36;
    }
    v37 = a1[1];
    if ( v37 )
    {
      v38 = a1[4];
      v39 = *(_QWORD *)(v37 + 32);
      if ( v38 < v39 )
        v38 = v39;
      a1[4] = v38;
    }
    v40 = *(_QWORD *)(v21 + 24);
    v41 = *(_QWORD *)v21;
    *(_QWORD *)(v21 + 32) = v40;
    if ( v41 )
    {
      v42 = *(_QWORD *)(v41 + 32);
      if ( v42 < v40 )
        v42 = v40;
      *(_QWORD *)(v21 + 32) = v42;
    }
    v43 = *(_QWORD *)(v21 + 8);
    if ( v43 )
    {
      v44 = *(_QWORD *)(v21 + 32);
      v45 = *(_QWORD *)(v43 + 32);
      if ( v44 < v45 )
        v44 = v45;
      *(_QWORD *)(v21 + 32) = v44;
    }
    return v21;
  }
  return v11;
}

