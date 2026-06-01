__int64 __fastcall sub_39CD0(_QWORD *a1, int a2, int a3)
{
  __int64 v5; // r12
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rbp
  const char *v11; // rbp
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 result; // rax
  size_t v17; // rax
  __int64 v18; // r12
  size_t v19; // r13
  size_t v20; // r14
  __int64 v21; // rsi
  size_t v22; // rdx
  size_t v23; // r14
  const char *v24; // r8
  __int64 v25; // r13
  size_t v26; // r15
  __int64 v27; // rsi
  size_t v28; // rdx
  __int64 v29; // rcx
  size_t v30; // rax
  __int64 v31; // rbp
  __int64 v32; // r14
  unsigned __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rbp
  unsigned __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rax
  size_t v40; // rax
  const char *v41; // r8
  size_t v42; // r13
  __int64 v43; // rbp
  size_t v44; // r14
  __int64 v45; // rsi
  size_t v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rbp
  unsigned __int64 v49; // r13
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rbp
  unsigned __int64 v53; // r12
  __int64 v54; // r13
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rbp
  unsigned __int64 v58; // r13
  __int64 v59; // r14
  __int64 v60; // rsi
  __int64 v61; // rbp
  unsigned __int64 v62; // r13
  __int64 v63; // r14
  __int64 v64; // rsi
  __int64 v65; // rbp
  unsigned __int64 v66; // r13
  __int64 v67; // r14
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbp
  unsigned __int64 v73; // r13
  __int64 v74; // r14
  __int64 v75; // rsi
  __int64 v76; // rbp
  __int64 v77; // r14
  unsigned __int64 v78; // r13
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  const char *src; // [rsp+0h] [rbp-48h]
  const char *srca; // [rsp+0h] [rbp-48h]
  const char *v90; // [rsp+8h] [rbp-40h]
  const char *v91; // [rsp+8h] [rbp-40h]

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
      if ( a1[3] < v7 )
      {
        v70 = qvector_reserve();
        a1[1] = v70;
        v9 = v70;
      }
      a1[2] = v7;
      *(_BYTE *)(v9 + v8) = 0;
      v10 = a1[1] + v6;
      *(_WORD *)v10 = 19525;
      *(_BYTE *)(v10 + 2) = 82;
      v11 = "hyp";
LABEL_10:
      v12 = a1[2];
      if ( v12 )
      {
        v13 = v12 + 1;
        v14 = a1[2];
        --v12;
      }
      else
      {
        v14 = 1;
        v13 = 2;
      }
      v15 = a1[1];
      if ( a1[3] < v13 )
      {
        v71 = qvector_reserve();
        a1[1] = v71;
        v15 = v71;
      }
      a1[2] = v13;
      *(_BYTE *)(v15 + v12) = 95;
      result = a1[1];
      *(_BYTE *)(result + v14) = 0;
      if ( v11 )
      {
        v17 = strlen(v11);
        v18 = a1[2];
        v19 = v17;
        v20 = v17;
        if ( v18 )
        {
          --v18;
          v20 = v17 + v18;
        }
        v21 = a1[1];
        v22 = v20 + 1;
        if ( a1[3] < v20 + 1 )
        {
          v81 = qvector_reserve();
          v22 = v20 + 1;
          a1[1] = v81;
          v21 = v81;
        }
        a1[2] = v22;
        *(_BYTE *)(v21 + v20) = 0;
        return (__int64)memmove((void *)(v18 + a1[1]), v11, v19);
      }
      return result;
    }
    if ( a2 >= *(_DWORD *)(*a1 + 64LL) )
    {
      v42 = 14;
      v41 = "<bad register>";
    }
    else
    {
      v39 = *(_QWORD *)(*a1 + 56LL);
      if ( !*(_QWORD *)(v39 + 8LL * a2) )
        goto LABEL_55;
      srca = *(const char **)(v39 + 8LL * a2);
      v40 = strlen(srca);
      v41 = srca;
      v42 = v40;
    }
    v43 = a1[2];
    v44 = v42;
    if ( v43 )
      v44 = --v43 + v42;
    v45 = a1[1];
    v46 = v44 + 1;
    if ( a1[3] < v44 + 1 )
    {
      v91 = v41;
      v56 = qvector_reserve();
      v41 = v91;
      v46 = v44 + 1;
      a1[1] = v56;
      v45 = v56;
    }
    a1[2] = v46;
    *(_BYTE *)(v45 + v44) = 0;
    memmove((void *)(v43 + a1[1]), v41, v42);
LABEL_55:
    result = (__int64)off_A0820;
    v11 = off_A0820[v5];
    if ( !*v11 )
      return result;
    goto LABEL_10;
  }
  if ( a2 >= *(_DWORD *)(*a1 + 64LL) )
  {
    v23 = 14;
    v24 = "<bad register>";
LABEL_22:
    v25 = a1[2];
    v26 = v23;
    if ( v25 )
    {
      --v25;
      v26 = v23 + v25;
    }
    v27 = a1[1];
    v28 = v26 + 1;
    if ( a1[3] < v26 + 1 )
    {
      v90 = v24;
      v47 = qvector_reserve();
      v24 = v90;
      v28 = v26 + 1;
      a1[1] = v47;
      v27 = v47;
    }
    a1[2] = v28;
    *(_BYTE *)(v27 + v26) = 0;
    memmove((void *)(v25 + a1[1]), v24, v23);
    goto LABEL_27;
  }
  v29 = *(_QWORD *)(*a1 + 56LL);
  if ( *(_QWORD *)(v29 + 8LL * a2) )
  {
    src = *(const char **)(v29 + 8LL * a2);
    v30 = strlen(src);
    v24 = src;
    v23 = v30;
    goto LABEL_22;
  }
LABEL_27:
  result = a2 & 0xFFFFFFFD;
  if ( (_DWORD)result == 16 )
  {
    if ( a3 )
    {
      v48 = a1[2];
      if ( v48 )
      {
        v49 = v48 + 1;
        v50 = a1[2];
        --v48;
      }
      else
      {
        v50 = 1;
        v49 = 2;
      }
      v51 = a1[1];
      if ( a1[3] < v49 )
      {
        v69 = qvector_reserve();
        a1[1] = v69;
        v51 = v69;
      }
      a1[2] = v49;
      *(_BYTE *)(v51 + v48) = 95;
      result = a1[1];
      *(_BYTE *)(result + v50) = 0;
      if ( (a3 & 8) != 0 )
      {
        v65 = a1[2];
        if ( v65 )
        {
          v66 = v65 + 1;
          v67 = a1[2];
          --v65;
        }
        else
        {
          v67 = 1;
          v66 = 2;
        }
        v68 = a1[1];
        if ( a1[3] < v66 )
        {
          v83 = qvector_reserve();
          a1[1] = v83;
          v68 = v83;
        }
        a1[2] = v66;
        *(_BYTE *)(v68 + v65) = 102;
        result = a1[1];
        *(_BYTE *)(result + v67) = 0;
      }
      if ( (a3 & 4) != 0 )
      {
        v61 = a1[2];
        if ( v61 )
        {
          v62 = v61 + 1;
          v63 = a1[2];
          --v61;
        }
        else
        {
          v63 = 1;
          v62 = 2;
        }
        v64 = a1[1];
        if ( a1[3] < v62 )
        {
          v85 = qvector_reserve();
          a1[1] = v85;
          v64 = v85;
        }
        a1[2] = v62;
        *(_BYTE *)(v64 + v61) = 115;
        result = a1[1];
        *(_BYTE *)(result + v63) = 0;
      }
      if ( (a3 & 2) != 0 )
      {
        v57 = a1[2];
        if ( v57 )
        {
          v58 = v57 + 1;
          v59 = a1[2];
          --v57;
        }
        else
        {
          v59 = 1;
          v58 = 2;
        }
        v60 = a1[1];
        if ( a1[3] < v58 )
        {
          v84 = qvector_reserve();
          a1[1] = v84;
          v60 = v84;
        }
        a1[2] = v58;
        *(_BYTE *)(v60 + v57) = 120;
        result = a1[1];
        *(_BYTE *)(result + v59) = 0;
      }
      if ( (a3 & 1) != 0 )
      {
        v52 = a1[2];
        if ( v52 )
        {
          v53 = v52 + 1;
          v54 = a1[2];
          --v52;
        }
        else
        {
          v54 = 1;
          v53 = 2;
        }
        v55 = a1[1];
        if ( a1[3] < v53 )
        {
          v82 = qvector_reserve();
          a1[1] = v82;
          v55 = v82;
        }
        a1[2] = v53;
        *(_BYTE *)(v55 + v52) = 99;
        result = a1[1];
        *(_BYTE *)(result + v54) = 0;
      }
    }
  }
  else if ( (unsigned int)(a2 - 31) <= 3 && a3 )
  {
    v31 = a1[2];
    if ( v31 )
    {
      v33 = v31 + 1;
      v32 = a1[2];
      --v31;
    }
    else
    {
      v32 = 1;
      v33 = 2;
    }
    v34 = a1[1];
    if ( a1[3] < v33 )
    {
      v80 = qvector_reserve();
      a1[1] = v80;
      v34 = v80;
    }
    a1[2] = v33;
    *(_BYTE *)(v34 + v31) = 95;
    result = a1[1];
    *(_BYTE *)(result + v32) = 0;
    if ( (a3 & 1) != 0 )
    {
      v76 = a1[2];
      if ( v76 )
      {
        v77 = v76 + 3;
        v78 = v76 + 4;
        --v76;
      }
      else
      {
        v78 = 5;
        v77 = 4;
      }
      v79 = a1[1];
      if ( a1[3] < v78 )
      {
        result = qvector_reserve();
        a1[1] = result;
        v79 = result;
      }
      a1[2] = v78;
      *(_BYTE *)(v79 + v77) = 0;
      *(_DWORD *)(a1[1] + v76) = 1986230894;
    }
    if ( (a3 & 2) != 0 )
    {
      v72 = a1[2];
      if ( v72 )
      {
        v73 = v72 + 1;
        v74 = a1[2];
        --v72;
      }
      else
      {
        v74 = 1;
        v73 = 2;
      }
      v75 = a1[1];
      if ( a1[3] < v73 )
      {
        v86 = qvector_reserve();
        a1[1] = v86;
        v75 = v86;
      }
      a1[2] = v73;
      *(_BYTE *)(v75 + v72) = 113;
      result = a1[1];
      *(_BYTE *)(result + v74) = 0;
    }
    if ( (a3 & 4) != 0 )
    {
      v35 = a1[2];
      if ( v35 )
      {
        v36 = v35 + 1;
        v37 = a1[2];
        --v35;
      }
      else
      {
        v37 = 1;
        v36 = 2;
      }
      v38 = a1[1];
      if ( a1[3] < v36 )
      {
        v87 = qvector_reserve();
        a1[1] = v87;
        v38 = v87;
      }
      a1[2] = v36;
      *(_BYTE *)(v38 + v35) = 103;
      result = a1[1];
      *(_BYTE *)(result + v37) = 0;
    }
  }
  return result;
}

