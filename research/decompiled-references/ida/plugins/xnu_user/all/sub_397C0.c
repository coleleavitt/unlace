__int64 __fastcall sub_397C0(__int64 a1, __int64 a2)
{
  size_t v3; // rbx
  __int64 v4; // rbx
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
  size_t v53; // [rsp+0h] [rbp-60h]
  size_t v54; // [rsp+0h] [rbp-60h]
  size_t v55; // [rsp+0h] [rbp-60h]
  size_t v56; // [rsp+0h] [rbp-60h]
  size_t v57; // [rsp+8h] [rbp-58h]
  size_t v58; // [rsp+8h] [rbp-58h]
  size_t n; // [rsp+10h] [rbp-50h]
  size_t na; // [rsp+10h] [rbp-50h]
  _QWORD *nb; // [rsp+10h] [rbp-50h]
  const void **v62; // [rsp+18h] [rbp-48h]
  __int64 v63; // [rsp+18h] [rbp-48h]
  __int64 v64; // [rsp+18h] [rbp-48h]
  __int64 v65; // [rsp+20h] [rbp-40h]
  __int64 v66; // [rsp+20h] [rbp-40h]

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
    v52 = 0;
    *(_QWORD *)(a1 + 40) = v4;
    while ( 1 )
    {
      sub_304B0(v51 + 136 * v52, 136 * v52 + *(_QWORD *)(a2 + 24));
      if ( v4 == ++v52 )
        break;
      v51 = *(_QWORD *)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = v4;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v65 = *(_QWORD *)(a2 + 56);
  if ( v65 )
  {
    v34 = *(_QWORD *)(a2 + 56);
    v35 = qalloc_or_throw();
    *(_QWORD *)(a1 + 48) = v35;
    v36 = v35;
    *(_QWORD *)(a1 + 64) = v34;
    v56 = 0;
    while ( 1 )
    {
      v40 = 80 * v56 + v36;
      v41 = *(_QWORD *)(a2 + 48) + 80 * v56;
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
            nb = (_QWORD *)(v45 + 32 * v46);
            v64 = v46;
            v58 = *(_QWORD *)(v48 + 8);
            v49 = (void *)qalloc_or_throw();
            nb[2] = v58;
            *nb = v49;
            memcpy(v49, *(const void **)v48, v58);
            v47 = nb;
            v46 = v64;
            nb[1] = v58;
          }
          ++v46;
          v47[3] = *(_QWORD *)(v48 + 24);
          if ( v39 == v46 )
            break;
          v45 = *(_QWORD *)(v40 + 56);
        }
        *(_QWORD *)(v40 + 64) = v39;
      }
      if ( v65 == ++v56 )
        break;
      v36 = *(_QWORD *)(a1 + 48);
    }
    *(_QWORD *)(a1 + 56) = v65;
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
        v54 = *(_QWORD *)(v31 + 8);
        v32 = (void *)qalloc_or_throw();
        *(_QWORD *)v30 = v32;
        *(_QWORD *)(v30 + 16) = v54;
        memcpy(v32, *(const void **)v31, v54);
        *(_QWORD *)(v30 + 8) = v54;
      }
      *(_QWORD *)(v30 + 24) = 0;
      *(_OWORD *)(v30 + 32) = 0;
      if ( *(_QWORD *)(v31 + 32) )
      {
        v55 = *(_QWORD *)(v31 + 32);
        v33 = (void *)qalloc_or_throw();
        *(_QWORD *)(v30 + 24) = v33;
        ++v29;
        *(_QWORD *)(v30 + 40) = v55;
        memcpy(v33, *(const void **)(v31 + 24), v55);
        *(_QWORD *)(v30 + 32) = v55;
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
  v66 = result;
  if ( result )
  {
    v12 = *(_QWORD *)(a2 + 104);
    v13 = qalloc_or_throw();
    *(_QWORD *)(a1 + 96) = v13;
    v14 = v13;
    *(_QWORD *)(a1 + 112) = v12;
    v57 = 0;
    while ( 1 )
    {
      v15 = 48 * v57 + v14;
      v16 = *(_QWORD *)(a2 + 96) + 48 * v57;
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
      v53 = *(_QWORD *)(v16 + 32);
      if ( v53 )
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
            v62 = (const void **)v24;
            n = *(_QWORD *)(v24 + 8);
            v25 = (void *)qalloc_or_throw();
            *(_QWORD *)v23 = v25;
            *(_QWORD *)(v23 + 16) = n;
            memcpy(v25, *v62, n);
            v24 = (__int64)v62;
            *(_QWORD *)(v23 + 8) = n;
          }
          *(_QWORD *)(v23 + 24) = 0;
          *(_OWORD *)(v23 + 32) = 0;
          if ( *(_QWORD *)(v24 + 32) )
          {
            v63 = v24;
            na = *(_QWORD *)(v24 + 32);
            v26 = (void *)qalloc_or_throw();
            *(_QWORD *)(v23 + 24) = v26;
            ++v22;
            *(_QWORD *)(v23 + 40) = na;
            memcpy(v26, *(const void **)(v63 + 24), na);
            *(_QWORD *)(v23 + 32) = na;
            if ( v53 == v22 )
            {
LABEL_25:
              *(_QWORD *)(v15 + 32) = v53;
              break;
            }
          }
          else if ( v53 == ++v22 )
          {
            goto LABEL_25;
          }
        }
      }
      if ( v66 == ++v57 )
        break;
      v14 = *(_QWORD *)(a1 + 96);
    }
    result = v66;
    *(_QWORD *)(a1 + 104) = v66;
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
      result = sub_397C0(v10 + 144 * v11, 144 * v11 + *(_QWORD *)(a2 + 120));
      if ( v7 == ++v11 )
        break;
      v10 = *(_QWORD *)(a1 + 120);
    }
    *(_QWORD *)(a1 + 128) = v7;
  }
  return result;
}

