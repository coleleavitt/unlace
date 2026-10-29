__int64 __fastcall sub_29DC0(__int64 a1, __int64 a2)
{
  size_t v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // r12
  void *v8; // rax
  const void *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r12
  size_t v15; // r12
  __int64 v16; // r13
  size_t v17; // rbx
  void *v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rcx
  void *v25; // rax
  void *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // rbx
  void *v32; // rax
  void *v33; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rbx
  int v37; // eax
  size_t v38; // r15
  __int64 v39; // r13
  size_t v40; // rbx
  __int64 v41; // r8
  __int64 v42; // r12
  size_t v43; // r15
  void *v44; // rax
  __int64 v45; // rax
  __int64 v46; // r10
  _QWORD *v47; // rcx
  __int64 v48; // r15
  void *v49; // rax
  void *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // r13
  int v54; // eax
  __int64 v55; // r12
  __int64 v56; // rbx
  void *v57; // rax
  void *v58; // rax
  void *v59; // rax
  void *v60; // rax
  void *v61; // rax
  size_t v62; // [rsp+0h] [rbp-60h]
  size_t v63; // [rsp+0h] [rbp-60h]
  size_t v64; // [rsp+0h] [rbp-60h]
  size_t v65; // [rsp+0h] [rbp-60h]
  size_t v66; // [rsp+0h] [rbp-60h]
  size_t v67; // [rsp+0h] [rbp-60h]
  size_t v68; // [rsp+0h] [rbp-60h]
  size_t v69; // [rsp+0h] [rbp-60h]
  size_t v70; // [rsp+0h] [rbp-60h]
  size_t v71; // [rsp+8h] [rbp-58h]
  size_t v72; // [rsp+8h] [rbp-58h]
  size_t n; // [rsp+10h] [rbp-50h]
  size_t na; // [rsp+10h] [rbp-50h]
  _QWORD *nb; // [rsp+10h] [rbp-50h]
  const void **v76; // [rsp+18h] [rbp-48h]
  __int64 v77; // [rsp+18h] [rbp-48h]
  __int64 v78; // [rsp+18h] [rbp-48h]
  __int64 v79; // [rsp+20h] [rbp-40h]
  __int64 v80; // [rsp+20h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v8 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 16) = v3;
    v9 = *(const void **)a2;
    *(_QWORD *)a1 = v8;
    memcpy(v8, v9, v3);
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    v51 = qalloc_or_throw();
    *(_QWORD *)(a1 + 24) = v51;
    v52 = v51;
    v53 = 0;
    *(_QWORD *)(a1 + 40) = v4;
    while ( 1 )
    {
      v55 = 136 * v53 + v52;
      v56 = *(_QWORD *)(a2 + 24) + 136 * v53;
      *(_QWORD *)v55 = 0;
      *(_OWORD *)(v55 + 8) = 0;
      if ( *(_QWORD *)(v56 + 8) )
      {
        v66 = *(_QWORD *)(v56 + 8);
        v57 = (void *)qalloc_or_throw();
        *(_QWORD *)v55 = v57;
        *(_QWORD *)(v55 + 16) = v66;
        memcpy(v57, *(const void **)v56, v66);
        *(_QWORD *)(v55 + 8) = v66;
      }
      *(_QWORD *)(v55 + 24) = *(_QWORD *)(v56 + 24);
      v54 = *(_DWORD *)(v56 + 32);
      *(_QWORD *)(v55 + 40) = 0;
      *(_DWORD *)(v55 + 32) = v54;
      *(_OWORD *)(v55 + 48) = 0;
      if ( *(_QWORD *)(v56 + 48) )
      {
        v70 = *(_QWORD *)(v56 + 48);
        v61 = (void *)qalloc_or_throw();
        *(_QWORD *)(v55 + 40) = v61;
        *(_QWORD *)(v55 + 56) = v70;
        memcpy(v61, *(const void **)(v56 + 40), v70);
        *(_QWORD *)(v55 + 48) = v70;
      }
      *(_QWORD *)(v55 + 64) = 0;
      *(_OWORD *)(v55 + 72) = 0;
      if ( *(_QWORD *)(v56 + 72) )
      {
        v69 = *(_QWORD *)(v56 + 72);
        v60 = (void *)qalloc_or_throw();
        *(_QWORD *)(v55 + 64) = v60;
        *(_QWORD *)(v55 + 80) = v69;
        memcpy(v60, *(const void **)(v56 + 64), v69);
        *(_QWORD *)(v55 + 72) = v69;
      }
      *(_QWORD *)(v55 + 88) = 0;
      *(_OWORD *)(v55 + 96) = 0;
      if ( *(_QWORD *)(v56 + 96) )
      {
        v68 = *(_QWORD *)(v56 + 96);
        v59 = (void *)qalloc_or_throw();
        *(_QWORD *)(v55 + 88) = v59;
        *(_QWORD *)(v55 + 104) = v68;
        memcpy(v59, *(const void **)(v56 + 88), v68);
        *(_QWORD *)(v55 + 96) = v68;
      }
      *(_QWORD *)(v55 + 112) = 0;
      *(_OWORD *)(v55 + 120) = 0;
      if ( *(_QWORD *)(v56 + 120) )
      {
        v67 = *(_QWORD *)(v56 + 120);
        v58 = (void *)qalloc_or_throw();
        *(_QWORD *)(v55 + 112) = v58;
        ++v53;
        *(_QWORD *)(v55 + 128) = v67;
        memcpy(v58, *(const void **)(v56 + 112), v67);
        *(_QWORD *)(v55 + 120) = v67;
        if ( v4 == v53 )
        {
LABEL_62:
          *(_QWORD *)(a1 + 32) = v4;
          break;
        }
      }
      else if ( v4 == ++v53 )
      {
        goto LABEL_62;
      }
      v52 = *(_QWORD *)(a1 + 24);
    }
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v79 = *(_QWORD *)(a2 + 56);
  if ( v79 )
  {
    v34 = *(_QWORD *)(a2 + 56);
    v35 = qalloc_or_throw();
    *(_QWORD *)(a1 + 48) = v35;
    v36 = v35;
    *(_QWORD *)(a1 + 64) = v34;
    v65 = 0;
    while ( 1 )
    {
      v40 = 80 * v65 + v36;
      v41 = *(_QWORD *)(a2 + 48) + 80 * v65;
      *(_QWORD *)v40 = 0;
      v42 = v41;
      *(_OWORD *)(v40 + 8) = 0;
      v43 = *(_QWORD *)(v41 + 8);
      if ( v43 )
      {
        v44 = (void *)qalloc_or_throw();
        *(_QWORD *)v40 = v44;
        *(_QWORD *)(v40 + 16) = v43;
        memcpy(v44, *(const void **)v42, v43);
        *(_QWORD *)(v40 + 8) = v43;
      }
      v37 = *(_DWORD *)(v42 + 24);
      *(_QWORD *)(v40 + 32) = 0;
      *(_OWORD *)(v40 + 40) = 0;
      *(_DWORD *)(v40 + 24) = v37;
      v38 = *(_QWORD *)(v42 + 40);
      if ( v38 )
      {
        v50 = (void *)qalloc_or_throw();
        *(_QWORD *)(v40 + 32) = v50;
        *(_QWORD *)(v40 + 48) = v38;
        memcpy(v50, *(const void **)(v42 + 32), v38);
        *(_QWORD *)(v40 + 40) = v38;
      }
      *(_QWORD *)(v40 + 56) = 0;
      *(_OWORD *)(v40 + 64) = 0;
      v39 = *(_QWORD *)(v42 + 64);
      if ( v39 )
      {
        v45 = qalloc_or_throw();
        *(_QWORD *)(v40 + 56) = v45;
        v46 = 0;
        *(_QWORD *)(v40 + 72) = v39;
        while ( 1 )
        {
          v47 = (_QWORD *)(v45 + 32 * v46);
          v48 = *(_QWORD *)(v42 + 56) + 32 * v46;
          *v47 = 0;
          *(_OWORD *)(v47 + 1) = 0;
          if ( *(_QWORD *)(v48 + 8) )
          {
            v78 = v46;
            nb = (_QWORD *)(v45 + 32 * v46);
            v72 = *(_QWORD *)(v48 + 8);
            v49 = (void *)qalloc_or_throw();
            nb[2] = v72;
            *nb = v49;
            memcpy(v49, *(const void **)v48, v72);
            v47 = nb;
            v46 = v78;
            nb[1] = v72;
          }
          ++v46;
          v47[3] = *(_QWORD *)(v48 + 24);
          if ( v39 == v46 )
            break;
          v45 = *(_QWORD *)(v40 + 56);
        }
        *(_QWORD *)(v40 + 64) = v39;
      }
      if ( v79 == ++v65 )
        break;
      v36 = *(_QWORD *)(a1 + 48);
    }
    *(_QWORD *)(a1 + 56) = v79;
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v5 = *(_QWORD *)(a2 + 80);
  if ( v5 )
  {
    v27 = qalloc_or_throw();
    *(_QWORD *)(a1 + 72) = v27;
    v28 = v27;
    v29 = 0;
    *(_QWORD *)(a1 + 88) = v5;
    while ( 1 )
    {
      v30 = 56 * v29 + v28;
      v31 = *(_QWORD *)(a2 + 72) + 56 * v29;
      *(_QWORD *)v30 = 0;
      *(_OWORD *)(v30 + 8) = 0;
      if ( *(_QWORD *)(v31 + 8) )
      {
        v63 = *(_QWORD *)(v31 + 8);
        v32 = (void *)qalloc_or_throw();
        *(_QWORD *)v30 = v32;
        *(_QWORD *)(v30 + 16) = v63;
        memcpy(v32, *(const void **)v31, v63);
        *(_QWORD *)(v30 + 8) = v63;
      }
      *(_QWORD *)(v30 + 24) = 0;
      *(_OWORD *)(v30 + 32) = 0;
      if ( *(_QWORD *)(v31 + 32) )
      {
        v64 = *(_QWORD *)(v31 + 32);
        v33 = (void *)qalloc_or_throw();
        *(_QWORD *)(v30 + 24) = v33;
        ++v29;
        *(_QWORD *)(v30 + 40) = v64;
        memcpy(v33, *(const void **)(v31 + 24), v64);
        *(_QWORD *)(v30 + 32) = v64;
        *(_DWORD *)(v30 + 48) = *(_DWORD *)(v31 + 48);
        if ( v5 == v29 )
        {
LABEL_33:
          *(_QWORD *)(a1 + 80) = v5;
          break;
        }
      }
      else
      {
        ++v29;
        *(_DWORD *)(v30 + 48) = *(_DWORD *)(v31 + 48);
        if ( v5 == v29 )
          goto LABEL_33;
      }
      v28 = *(_QWORD *)(a1 + 72);
    }
  }
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  result = *(_QWORD *)(a2 + 104);
  v80 = result;
  if ( result )
  {
    v12 = *(_QWORD *)(a2 + 104);
    v13 = qalloc_or_throw();
    *(_QWORD *)(a1 + 96) = v13;
    v14 = v13;
    *(_QWORD *)(a1 + 112) = v12;
    v71 = 0;
    while ( 1 )
    {
      v15 = 48 * v71 + v14;
      v16 = *(_QWORD *)(a2 + 96) + 48 * v71;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v18 = (void *)qalloc_or_throw();
        *(_QWORD *)v15 = v18;
        *(_QWORD *)(v15 + 16) = v17;
        memcpy(v18, *(const void **)v16, v17);
        *(_QWORD *)(v15 + 8) = v17;
      }
      *(_QWORD *)(v15 + 24) = 0;
      *(_OWORD *)(v15 + 32) = 0;
      v62 = *(_QWORD *)(v16 + 32);
      if ( v62 )
      {
        v19 = *(_QWORD *)(v16 + 32);
        v20 = qalloc_or_throw();
        *(_QWORD *)(v15 + 40) = v19;
        v21 = v20;
        v22 = 0;
        for ( *(_QWORD *)(v15 + 24) = v20; ; v21 = *(_QWORD *)(v15 + 24) )
        {
          v23 = 48 * v22 + v21;
          v24 = *(_QWORD *)(v16 + 24) + 48 * v22;
          *(_QWORD *)v23 = 0;
          *(_OWORD *)(v23 + 8) = 0;
          if ( *(_QWORD *)(v24 + 8) )
          {
            v76 = (const void **)v24;
            n = *(_QWORD *)(v24 + 8);
            v25 = (void *)qalloc_or_throw();
            *(_QWORD *)v23 = v25;
            *(_QWORD *)(v23 + 16) = n;
            memcpy(v25, *v76, n);
            v24 = (__int64)v76;
            *(_QWORD *)(v23 + 8) = n;
          }
          *(_QWORD *)(v23 + 24) = 0;
          *(_OWORD *)(v23 + 32) = 0;
          if ( *(_QWORD *)(v24 + 32) )
          {
            v77 = v24;
            na = *(_QWORD *)(v24 + 32);
            v26 = (void *)qalloc_or_throw();
            *(_QWORD *)(v23 + 24) = v26;
            ++v22;
            *(_QWORD *)(v23 + 40) = na;
            memcpy(v26, *(const void **)(v77 + 24), na);
            *(_QWORD *)(v23 + 32) = na;
            if ( v62 == v22 )
            {
LABEL_25:
              *(_QWORD *)(v15 + 32) = v62;
              break;
            }
          }
          else if ( v62 == ++v22 )
          {
            goto LABEL_25;
          }
        }
      }
      if ( v80 == ++v71 )
        break;
      v14 = *(_QWORD *)(a1 + 96);
    }
    result = v80;
    *(_QWORD *)(a1 + 104) = v80;
  }
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  v7 = *(_QWORD *)(a2 + 128);
  if ( v7 )
  {
    v10 = qalloc_or_throw();
    *(_QWORD *)(a1 + 120) = v10;
    v11 = 0;
    *(_QWORD *)(a1 + 136) = v7;
    while ( 1 )
    {
      result = sub_29DC0(v10 + 144 * v11, 144 * v11 + *(_QWORD *)(a2 + 120));
      if ( v7 == ++v11 )
        break;
      v10 = *(_QWORD *)(a1 + 120);
    }
    *(_QWORD *)(a1 + 128) = v7;
  }
  return result;
}

