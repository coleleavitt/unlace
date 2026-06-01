__int64 __fastcall sub_39CD0(_QWORD *a1, int a2, int a3)
{
  __int64 v5; // r12
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rbp
  const char *v12; // rbp
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 result; // rax
  size_t v18; // rax
  __int64 v19; // r12
  size_t v20; // r13
  size_t v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  size_t v24; // r14
  const char *v25; // r8
  __int64 v26; // r13
  size_t v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  size_t v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r14
  unsigned __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rbp
  unsigned __int64 v37; // r12
  __int64 v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rax
  size_t v41; // rax
  const char *v42; // r8
  size_t v43; // r13
  __int64 v44; // rbp
  size_t v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbp
  unsigned __int64 v50; // r13
  __int64 v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rbp
  unsigned __int64 v54; // r12
  __int64 v55; // r13
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rbp
  unsigned __int64 v59; // r13
  __int64 v60; // r14
  __int64 v61; // rsi
  __int64 v62; // rbp
  unsigned __int64 v63; // r13
  __int64 v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rbp
  unsigned __int64 v67; // r13
  __int64 v68; // r14
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rbp
  unsigned __int64 v74; // r13
  __int64 v75; // r14
  __int64 v76; // rsi
  __int64 v77; // rbp
  __int64 v78; // r14
  unsigned __int64 v79; // r13
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  const char *src; // [rsp+0h] [rbp-48h]
  const char *srca; // [rsp+0h] [rbp-48h]
  const char *v91; // [rsp+8h] [rbp-40h]
  const char *v92; // [rsp+8h] [rbp-40h]

  if ( (unsigned int)(a2 - 8) <= 0xA && (a3 & 0x80u) != 0 )
  {
    v5 = a3 & 0x1F;
    if ( (_DWORD)v5 == 26 && a2 == 14 )
    {
      v6 = a1[2];
      if ( v6 )
      {
        v8 = v6 + 2;
        v7 = v6 + 3;
        --v6;
      }
      else
      {
        v7 = 4;
        v8 = 3;
      }
      v9 = a1[1];
      v10 = (__int64)(a1 + 1);
      if ( a1[3] < v7 )
      {
        v71 = qvector_reserve((__int64)(a1 + 1), v9, v7, 1);
        a1[1] = v71;
        v9 = v71;
      }
      a1[2] = v7;
      *(_BYTE *)(v9 + v8) = 0;
      v11 = a1[1] + v6;
      *(_WORD *)v11 = 19525;
      *(_BYTE *)(v11 + 2) = 82;
      v12 = "hyp";
LABEL_10:
      v13 = a1[2];
      if ( v13 )
      {
        v14 = v13 + 1;
        v15 = a1[2];
        --v13;
      }
      else
      {
        v15 = 1;
        v14 = 2;
      }
      v16 = a1[1];
      if ( a1[3] < v14 )
      {
        v72 = qvector_reserve(v10, v16, v14, 1);
        a1[1] = v72;
        v16 = v72;
      }
      a1[2] = v14;
      *(_BYTE *)(v16 + v13) = 95;
      result = a1[1];
      *(_BYTE *)(result + v15) = 0;
      if ( v12 )
      {
        v18 = strlen(v12);
        v19 = a1[2];
        v20 = v18;
        v21 = v18;
        if ( v19 )
        {
          --v19;
          v21 = v18 + v19;
        }
        v22 = a1[1];
        v23 = v21 + 1;
        if ( a1[3] < v21 + 1 )
        {
          v82 = qvector_reserve(v10, v22, v23, 1);
          v23 = v21 + 1;
          a1[1] = v82;
          v22 = v82;
        }
        a1[2] = v23;
        *(_BYTE *)(v22 + v21) = 0;
        return (__int64)memmove((void *)(v19 + a1[1]), v12, v20);
      }
      return result;
    }
    if ( a2 >= *(_DWORD *)(*a1 + 64LL) )
    {
      v43 = 14;
      v42 = "<bad register>";
    }
    else
    {
      v40 = *(_QWORD *)(*a1 + 56LL);
      if ( !*(_QWORD *)(v40 + 8LL * a2) )
      {
LABEL_55:
        result = (__int64)off_A0820;
        v12 = off_A0820[v5];
        if ( !*v12 )
          return result;
        v10 = (__int64)(a1 + 1);
        goto LABEL_10;
      }
      srca = *(const char **)(v40 + 8LL * a2);
      v41 = strlen(srca);
      v42 = srca;
      v43 = v41;
    }
    v44 = a1[2];
    v45 = v43;
    if ( v44 )
      v45 = --v44 + v43;
    v46 = a1[1];
    v47 = v45 + 1;
    if ( a1[3] < v45 + 1 )
    {
      v92 = v42;
      v57 = qvector_reserve((__int64)(a1 + 1), v46, v47, 1);
      v42 = v92;
      v47 = v45 + 1;
      a1[1] = v57;
      v46 = v57;
    }
    a1[2] = v47;
    *(_BYTE *)(v46 + v45) = 0;
    memmove((void *)(v44 + a1[1]), v42, v43);
    goto LABEL_55;
  }
  if ( a2 >= *(_DWORD *)(*a1 + 64LL) )
  {
    v24 = 14;
    v25 = "<bad register>";
LABEL_22:
    v26 = a1[2];
    v27 = v24;
    if ( v26 )
    {
      --v26;
      v27 = v24 + v26;
    }
    v28 = a1[1];
    v29 = v27 + 1;
    if ( a1[3] < v27 + 1 )
    {
      v91 = v25;
      v48 = qvector_reserve((__int64)(a1 + 1), v28, v29, 1);
      v25 = v91;
      v29 = v27 + 1;
      a1[1] = v48;
      v28 = v48;
    }
    a1[2] = v29;
    *(_BYTE *)(v28 + v27) = 0;
    memmove((void *)(v26 + a1[1]), v25, v24);
    goto LABEL_27;
  }
  v30 = *(_QWORD *)(*a1 + 56LL);
  if ( *(_QWORD *)(v30 + 8LL * a2) )
  {
    src = *(const char **)(v30 + 8LL * a2);
    v31 = strlen(src);
    v25 = src;
    v24 = v31;
    goto LABEL_22;
  }
LABEL_27:
  result = a2 & 0xFFFFFFFD;
  if ( (_DWORD)result == 16 )
  {
    if ( a3 )
    {
      v49 = a1[2];
      if ( v49 )
      {
        v50 = v49 + 1;
        v51 = a1[2];
        --v49;
      }
      else
      {
        v51 = 1;
        v50 = 2;
      }
      v52 = a1[1];
      if ( a1[3] < v50 )
      {
        v70 = qvector_reserve((__int64)(a1 + 1), v52, v50, 1);
        a1[1] = v70;
        v52 = v70;
      }
      a1[2] = v50;
      *(_BYTE *)(v52 + v49) = 95;
      result = a1[1];
      *(_BYTE *)(result + v51) = 0;
      if ( (a3 & 8) != 0 )
      {
        v66 = a1[2];
        if ( v66 )
        {
          v67 = v66 + 1;
          v68 = a1[2];
          --v66;
        }
        else
        {
          v68 = 1;
          v67 = 2;
        }
        v69 = a1[1];
        if ( a1[3] < v67 )
        {
          v84 = qvector_reserve((__int64)(a1 + 1), v69, v67, 1);
          a1[1] = v84;
          v69 = v84;
        }
        a1[2] = v67;
        *(_BYTE *)(v69 + v66) = 102;
        result = a1[1];
        *(_BYTE *)(result + v68) = 0;
      }
      if ( (a3 & 4) != 0 )
      {
        v62 = a1[2];
        if ( v62 )
        {
          v63 = v62 + 1;
          v64 = a1[2];
          --v62;
        }
        else
        {
          v64 = 1;
          v63 = 2;
        }
        v65 = a1[1];
        if ( a1[3] < v63 )
        {
          v86 = qvector_reserve((__int64)(a1 + 1), v65, v63, 1);
          a1[1] = v86;
          v65 = v86;
        }
        a1[2] = v63;
        *(_BYTE *)(v65 + v62) = 115;
        result = a1[1];
        *(_BYTE *)(result + v64) = 0;
      }
      if ( (a3 & 2) != 0 )
      {
        v58 = a1[2];
        if ( v58 )
        {
          v59 = v58 + 1;
          v60 = a1[2];
          --v58;
        }
        else
        {
          v60 = 1;
          v59 = 2;
        }
        v61 = a1[1];
        if ( a1[3] < v59 )
        {
          v85 = qvector_reserve((__int64)(a1 + 1), v61, v59, 1);
          a1[1] = v85;
          v61 = v85;
        }
        a1[2] = v59;
        *(_BYTE *)(v61 + v58) = 120;
        result = a1[1];
        *(_BYTE *)(result + v60) = 0;
      }
      if ( (a3 & 1) != 0 )
      {
        v53 = a1[2];
        if ( v53 )
        {
          v54 = v53 + 1;
          v55 = a1[2];
          --v53;
        }
        else
        {
          v55 = 1;
          v54 = 2;
        }
        v56 = a1[1];
        if ( a1[3] < v54 )
        {
          v83 = qvector_reserve((__int64)(a1 + 1), v56, v54, 1);
          a1[1] = v83;
          v56 = v83;
        }
        a1[2] = v54;
        *(_BYTE *)(v56 + v53) = 99;
        result = a1[1];
        *(_BYTE *)(result + v55) = 0;
      }
    }
  }
  else if ( (unsigned int)(a2 - 31) <= 3 && a3 )
  {
    v32 = a1[2];
    if ( v32 )
    {
      v34 = v32 + 1;
      v33 = a1[2];
      --v32;
    }
    else
    {
      v33 = 1;
      v34 = 2;
    }
    v35 = a1[1];
    if ( a1[3] < v34 )
    {
      v81 = qvector_reserve((__int64)(a1 + 1), v35, v34, 1);
      a1[1] = v81;
      v35 = v81;
    }
    a1[2] = v34;
    *(_BYTE *)(v35 + v32) = 95;
    result = a1[1];
    *(_BYTE *)(result + v33) = 0;
    if ( (a3 & 1) != 0 )
    {
      v77 = a1[2];
      if ( v77 )
      {
        v78 = v77 + 3;
        v79 = v77 + 4;
        --v77;
      }
      else
      {
        v79 = 5;
        v78 = 4;
      }
      v80 = a1[1];
      if ( a1[3] < v79 )
      {
        result = qvector_reserve((__int64)(a1 + 1), v80, v79, 1);
        a1[1] = result;
        v80 = result;
      }
      a1[2] = v79;
      *(_BYTE *)(v80 + v78) = 0;
      *(_DWORD *)(a1[1] + v77) = 1986230894;
    }
    if ( (a3 & 2) != 0 )
    {
      v73 = a1[2];
      if ( v73 )
      {
        v74 = v73 + 1;
        v75 = a1[2];
        --v73;
      }
      else
      {
        v75 = 1;
        v74 = 2;
      }
      v76 = a1[1];
      if ( a1[3] < v74 )
      {
        v87 = qvector_reserve((__int64)(a1 + 1), v76, v74, 1);
        a1[1] = v87;
        v76 = v87;
      }
      a1[2] = v74;
      *(_BYTE *)(v76 + v73) = 113;
      result = a1[1];
      *(_BYTE *)(result + v75) = 0;
    }
    if ( (a3 & 4) != 0 )
    {
      v36 = a1[2];
      if ( v36 )
      {
        v37 = v36 + 1;
        v38 = a1[2];
        --v36;
      }
      else
      {
        v38 = 1;
        v37 = 2;
      }
      v39 = a1[1];
      if ( a1[3] < v37 )
      {
        v88 = qvector_reserve((__int64)(a1 + 1), v39, v37, 1);
        a1[1] = v88;
        v39 = v88;
      }
      a1[2] = v37;
      *(_BYTE *)(v39 + v36) = 103;
      result = a1[1];
      *(_BYTE *)(result + v38) = 0;
    }
  }
  return result;
}
