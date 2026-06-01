void __fastcall sub_48FC0(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int64 a4, unsigned __int8 a5)
{
  _QWORD *v5; // r10
  __int64 *v7; // r14
  __int64 v9; // rcx
  unsigned int v11; // ebx
  int v13; // r8d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  bool v16; // cf
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  char *v19; // rsi
  signed __int64 v20; // rdx
  __int64 v21; // r11
  signed __int64 v22; // r9
  __int64 *v23; // rdi
  __int64 *v24; // r9
  __int64 v25; // rsi
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 *v29; // r8
  __int64 v30; // r9
  int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 *v48; // r8
  __int64 v49; // r14
  void *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int64 *v53; // r8
  __int64 v54; // rax
  bool v55; // sf
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // r10
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  _QWORD *v65; // [rsp+8h] [rbp-80h]
  unsigned __int64 *v66; // [rsp+8h] [rbp-80h]
  unsigned __int64 *v67; // [rsp+8h] [rbp-80h]
  unsigned __int64 *v68; // [rsp+8h] [rbp-80h]
  unsigned __int64 v69; // [rsp+10h] [rbp-78h]
  __int64 v70; // [rsp+18h] [rbp-70h]
  __int64 *v71; // [rsp+18h] [rbp-70h]
  __int64 *v72; // [rsp+20h] [rbp-68h]
  __int64 v73; // [rsp+20h] [rbp-68h]
  __int64 *v75; // [rsp+40h] [rbp-48h]

  if ( !a4 )
    return;
  v5 = *(_QWORD **)(a1 + 16);
  v7 = a2;
  v9 = *(unsigned int *)(a1 + 24);
  v11 = a3;
  v13 = *(_DWORD *)(a1 + 24);
  v14 = v9 + (((__int64)v5 - *(_QWORD *)a1) >> 3 << 6);
  if ( ((__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)a1) >> 3 << 6) - v14 >= a4 )
  {
    v36 = a4 + v9 + 63;
    if ( (__int64)(a4 + v9) >= 0 )
      v36 = a4 + v9;
    v37 = &v5[v36 >> 6];
    v38 = (__int64)(a4 + v9) % 64;
    if ( v38 < 0 )
    {
      LODWORD(v38) = v38 + 64;
      --v37;
    }
    v39 = a3;
    v40 = v9 - a3 + ((v5 - a2) << 6);
    if ( v40 > 0 )
    {
      while ( 1 )
      {
        if ( v13 )
        {
          v41 = 1LL << --v13;
          if ( !(_DWORD)v38 )
            goto LABEL_52;
        }
        else
        {
          --v5;
          v41 = 0x8000000000000000LL;
          v13 = 63;
          if ( !(_DWORD)v38 )
          {
LABEL_52:
            --v37;
            v42 = 0x8000000000000000LL;
            LODWORD(v38) = 63;
            goto LABEL_47;
          }
        }
        LODWORD(v38) = v38 - 1;
        v42 = 1LL << v38;
LABEL_47:
        v43 = *v5 & v41;
        v44 = v42 | *v37;
        v45 = *v37 & ~v42;
        if ( v43 )
          v45 = v44;
        *v37 = v45;
        if ( !--v40 )
        {
          v11 = a3;
          v39 = a3;
          break;
        }
      }
    }
    v46 = a4 + v39;
    v47 = a4 + v39 + 63;
    if ( (__int64)(a4 + v39) >= 0 )
      v47 = a4 + v39;
    v48 = (unsigned __int64 *)&a2[v47 >> 6];
    v49 = v46 % 64;
    if ( v46 % 64 < 0 )
    {
      v49 += 64;
      --v48;
    }
    if ( v48 == (unsigned __int64 *)a2 )
    {
      if ( (_DWORD)v49 != v11 )
      {
        v64 = (-1LL << v11) & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v49)) | *v48;
        if ( !a5 )
          v64 = *v48 & ~((-1LL << v11) & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v49)));
        *v48 = v64;
      }
      goto LABEL_62;
    }
    if ( v11 )
    {
      v50 = a2 + 1;
      v51 = *a2;
      v52 = -1LL << v11;
      if ( a5 )
      {
        v66 = v48;
        *a2 = v52 | v51;
        memset(v50, -1, (char *)v48 - (char *)(a2 + 1));
        v53 = v66;
        if ( !v49 )
        {
LABEL_62:
          v54 = *(unsigned int *)(a1 + 24);
          v55 = (__int64)(a4 + v54) < 0;
          v56 = a4 + v54;
          v57 = v56 + 63;
          if ( !v55 )
            v57 = v56;
          v58 = *(_QWORD *)(a1 + 16) + 8 * (v57 >> 6);
          v59 = v56 % 64;
          if ( v59 < 0 )
          {
            LODWORD(v59) = v59 + 64;
            v58 -= 8;
          }
          *(_QWORD *)(a1 + 16) = v58;
          *(_DWORD *)(a1 + 24) = v59;
          return;
        }
        v60 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v49);
LABEL_74:
        *v53 |= v60;
        goto LABEL_62;
      }
      v68 = v48;
      *a2 = v51 & ~v52;
      memset(v50, 0, (char *)v48 - (char *)(a2 + 1));
      v53 = v68;
      if ( !v49 )
        goto LABEL_62;
      v60 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v49);
    }
    else
    {
      v67 = v48;
      memset(a2, -a5, (char *)v48 - (char *)a2);
      if ( !v49 )
        goto LABEL_62;
      v53 = v67;
      v60 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v49);
      if ( a5 )
        goto LABEL_74;
    }
    *v53 &= ~v60;
    goto LABEL_62;
  }
  if ( 0x7FFFFFFFFFFFFFC0LL - v14 < a4 )
    std::__throw_length_error("vector<bool>::_M_fill_insert");
  v15 = v9 + ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3 << 6);
  if ( a4 >= v14 )
    v15 = a4;
  v16 = __CFADD__(v15, v14);
  v17 = v15 + v14;
  if ( v16 )
  {
    v69 = 0x1FFFFFFFFFFFFFFLL;
    v18 = (_QWORD *)operator new(0xFFFFFFFFFFFFFF8uLL);
  }
  else
  {
    if ( v17 > 0x7FFFFFFFFFFFFFC0LL )
      v17 = 0x7FFFFFFFFFFFFFC0LL;
    v69 = (v17 + 63) >> 6;
    v18 = (_QWORD *)operator new(v69 * 8);
  }
  v19 = *(char **)a1;
  v65 = v18;
  v20 = (signed __int64)a2 - *(_QWORD *)a1;
  if ( v20 <= 8 )
  {
    if ( (char *)a2 - v19 == 8 )
      *v18 = *(_QWORD *)v19;
  }
  else
  {
    memmove(v18, v19, v20);
    v20 = (char *)a2 - v19;
  }
  v21 = a3;
  v22 = a4;
  v23 = (_QWORD *)((char *)v65 + v20);
  if ( a3 )
  {
    v24 = a2;
    v25 = a3;
    v26 = 0;
    do
    {
      while ( 1 )
      {
        v27 = *v23 & ~(1LL << v26);
        if ( ((1LL << v26) & *v24) != 0 )
          v27 = (1LL << v26) | *v23;
        *v23 = v27;
        if ( v26 == 63 )
          break;
        ++v26;
        if ( !--v25 )
          goto LABEL_19;
      }
      ++v24;
      ++v23;
      v26 = 0;
      --v25;
    }
    while ( v25 );
LABEL_19:
    v28 = v26;
    v22 = a4 + v26;
  }
  else
  {
    v28 = 0;
  }
  v29 = &v23[v22 / 64];
  v30 = v22 % 64;
  if ( v30 < 0 )
  {
    v30 += 64;
    --v29;
  }
  v31 = v30;
  if ( v29 == v23 )
  {
    if ( (_DWORD)v30 != v28 )
    {
      v62 = (-1LL << v28) & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v30));
      v63 = v62 | *v29;
      if ( !a5 )
        v63 = *v29 & ~v62;
      *v29 = v63;
    }
    goto LABEL_26;
  }
  if ( !v28 )
  {
    v73 = v30;
    v71 = v29;
    memset(v23, -a5, (char *)v29 - (char *)v23);
    v29 = v71;
    v21 = a3;
    if ( !v73 )
      goto LABEL_26;
    v61 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v31);
    if ( a5 )
    {
LABEL_76:
      *v29 |= v61;
      goto LABEL_26;
    }
LABEL_72:
    *v29 &= ~v61;
    goto LABEL_26;
  }
  v72 = v29;
  v32 = -1LL << v28;
  v70 = v30;
  v33 = *v23;
  if ( !a5 )
  {
    *v23 = v33 & ~v32;
    memset(v23 + 1, 0, (char *)v29 - (char *)(v23 + 1));
    v29 = v72;
    v21 = a3;
    if ( !v70 )
      goto LABEL_26;
    v61 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v31);
    goto LABEL_72;
  }
  *v23 = v33 | v32;
  memset(v23 + 1, -1, (char *)v29 - (char *)(v23 + 1));
  v29 = v72;
  v21 = a3;
  if ( v70 )
  {
    v61 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v70);
    goto LABEL_76;
  }
LABEL_26:
  v34 = *(unsigned int *)(a1 + 24) - v21 + ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)a2) >> 3 << 6);
  if ( v34 > 0 )
  {
    while ( 1 )
    {
      v35 = *v29 & ~(1LL << v31);
      if ( ((1LL << v11) & *v7) != 0 )
        v35 = (1LL << v31) | *v29;
      *v29 = v35;
      if ( v11 == 63 )
      {
        ++v7;
        v11 = 0;
        if ( v31 == 63 )
          goto LABEL_34;
LABEL_29:
        ++v31;
        if ( !--v34 )
          break;
      }
      else
      {
        ++v11;
        if ( v31 != 63 )
          goto LABEL_29;
LABEL_34:
        ++v29;
        v31 = 0;
        if ( !--v34 )
          break;
      }
    }
  }
  v75 = v29;
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 32) - *(_QWORD *)a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v65;
  *(_QWORD *)(a1 + 32) = &v65[v69];
  *(_QWORD *)(a1 + 16) = v75;
  *(_DWORD *)(a1 + 24) = v31;
}

