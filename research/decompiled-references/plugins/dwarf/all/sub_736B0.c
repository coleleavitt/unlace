void *__fastcall sub_736B0(int *dest, int *a2, char *a3, __int64 a4, __int64 a5, int *a6, __int64 a7)
{
  int *v7; // r13
  int *v8; // r12
  char *v9; // rbp
  char *v10; // rbx
  size_t v11; // r14
  __int64 v12; // rdx
  int *v13; // r14
  _QWORD *v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  void *v20; // rdi
  signed __int64 v22; // r14
  __int64 v23; // rdx
  int *v24; // r8
  _QWORD *v25; // r14
  int *v26; // rbx
  int *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  int **v31; // rax
  int *v32; // rsi
  int v33; // eax
  int **v34; // rax
  int v35; // eax
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int **v39; // rax
  int *v40; // rsi
  int v41; // eax
  int **v42; // rax
  int v43; // eax
  __int64 *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int **v47; // rax
  int *v48; // rsi
  int v49; // eax
  int **v50; // rax
  int v51; // eax
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int **v55; // rax
  int *v56; // rsi
  int v57; // eax
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rax
  signed __int64 v62; // rdx
  int v63; // eax
  void *v64; // [rsp+8h] [rbp-70h]
  void *v65; // [rsp+8h] [rbp-70h]
  __int64 n; // [rsp+10h] [rbp-68h]
  __int64 na; // [rsp+10h] [rbp-68h]
  int *v68; // [rsp+18h] [rbp-60h]
  __int64 v69; // [rsp+28h] [rbp-50h] BYREF
  __int64 v70; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v71; // [rsp+38h] [rbp-40h]

  v7 = dest;
  v8 = a6;
  v9 = a3;
  v10 = (char *)a2;
  v71 = __readfsqword(0x28u);
  if ( a4 <= a5 )
  {
    v11 = (char *)a2 - (char *)dest;
    if ( (char *)a2 - (char *)dest <= 4 )
    {
      if ( (char *)a2 - (char *)dest == 4 )
        *a6 = *dest;
    }
    else
    {
      memmove(a6, dest, v11);
    }
    v64 = nullptr;
    v12 = *(_QWORD *)(a7 + 8);
    v13 = (int *)((char *)v8 + v11);
    if ( v12 )
    {
      n = 4 * v12;
      v64 = (void *)qalloc_or_throw(4 * v12);
      memcpy(v64, *(const void **)a7, n);
    }
    v14 = *(_QWORD **)(a7 + 24);
    if ( a2 == (int *)v9 || v8 == v13 )
    {
LABEL_16:
      if ( v13 != v8 )
      {
        if ( (char *)v13 - (char *)v8 <= 4 )
        {
          if ( (char *)v13 - (char *)v8 == 4 )
            *v7 = *v8;
        }
        else
        {
          memmove(v7, v8, (char *)v13 - (char *)v8);
        }
      }
      v20 = v64;
      if ( !v64 )
        return (void *)(v71 - __readfsqword(0x28u));
      goto LABEL_20;
    }
    while ( 1 )
    {
      v16 = *v14 + 80LL * *(int *)v10;
      v17 = 80LL * *v8 + *v14;
      if ( *(_DWORD *)v16 == 1 )
      {
        v69 = *(_QWORD *)(v16 + 8);
      }
      else
      {
        if ( *(_DWORD *)v16 != 2 || (v47 = *(int ***)(v16 + 8), !v47[1]) )
        {
LABEL_13:
          LODWORD(v18) = (unsigned int)compare_arglocs(v16, v17) >> 31;
          goto LABEL_14;
        }
        v48 = *v47;
        v49 = **v47;
        if ( v49 == 1 )
          goto LABEL_109;
        if ( v49 != 2 )
          goto LABEL_13;
        v50 = *((int ***)v48 + 1);
        if ( !v50[1] )
          goto LABEL_13;
        v48 = *v50;
        v51 = **v50;
        if ( v51 == 1 )
        {
LABEL_109:
          v69 = *((_QWORD *)v48 + 1);
        }
        else
        {
          if ( v51 != 2 )
            goto LABEL_13;
          v52 = *((__int64 **)v48 + 1);
          if ( !v52[1] )
            goto LABEL_13;
          v53 = *v52;
          if ( *(_DWORD *)v53 == 1 )
          {
            v69 = *(_QWORD *)(v53 + 8);
          }
          else
          {
            if ( *(_DWORD *)v53 != 2 )
              goto LABEL_13;
            v54 = *(_QWORD *)(v53 + 8);
            if ( !*(_QWORD *)(v54 + 8) || !(unsigned __int8)sub_6FB30(&v69, *(int **)v54) )
              goto LABEL_13;
          }
        }
      }
      if ( *(_DWORD *)v17 == 1 )
      {
        v18 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        if ( *(_DWORD *)v17 != 2 )
          goto LABEL_13;
        v55 = *(int ***)(v17 + 8);
        if ( !v55[1] )
          goto LABEL_13;
        v56 = *v55;
        v57 = **v55;
        if ( v57 == 1 )
        {
          v18 = *((_QWORD *)v56 + 1);
        }
        else
        {
          if ( v57 != 2 )
            goto LABEL_13;
          v58 = *((__int64 **)v56 + 1);
          if ( !v58[1] )
            goto LABEL_13;
          v59 = *v58;
          if ( *(_DWORD *)v59 == 1 )
            goto LABEL_122;
          if ( *(_DWORD *)v59 != 2 )
            goto LABEL_13;
          v60 = *(__int64 **)(v59 + 8);
          if ( !v60[1] )
            goto LABEL_13;
          v59 = *v60;
          if ( *(_DWORD *)v59 == 1 )
          {
LABEL_122:
            v18 = *(_QWORD *)(v59 + 8);
          }
          else
          {
            if ( *(_DWORD *)v59 != 2 )
              goto LABEL_13;
            v61 = *(_QWORD *)(v59 + 8);
            if ( !*(_QWORD *)(v61 + 8) || !(unsigned __int8)sub_6FB30(&v70, *(int **)v61) )
              goto LABEL_13;
            v18 = v70;
          }
        }
      }
      LOBYTE(v18) = v69 < v18;
LABEL_14:
      if ( (_BYTE)v18 )
      {
        v15 = *(_DWORD *)v10;
        ++v7;
        v10 += 4;
        *(v7 - 1) = v15;
        if ( v8 == v13 )
          goto LABEL_16;
      }
      else
      {
        v19 = *v8++;
        *v7++ = v19;
        if ( v8 == v13 )
          goto LABEL_16;
      }
      if ( v9 == v10 )
        goto LABEL_16;
    }
  }
  v22 = a3 - (char *)a2;
  if ( a3 - (char *)a2 <= 4 )
  {
    if ( a3 - (char *)a2 == 4 )
    {
      v63 = *a2;
      v24 = a6 + 1;
      *a6 = *a2;
      v23 = *(_QWORD *)(a7 + 8);
      if ( !v23 )
      {
        if ( a2 == dest )
        {
          *((_DWORD *)v9 - 1) = v63;
          return (void *)(v71 - __readfsqword(0x28u));
        }
        goto LABEL_25;
      }
    }
    else
    {
      v23 = *(_QWORD *)(a7 + 8);
      v24 = (int *)((char *)a6 + v22);
      if ( !v23 )
      {
        if ( a2 == dest )
          return (void *)(v71 - __readfsqword(0x28u));
        goto LABEL_25;
      }
    }
LABEL_106:
    v68 = v24;
    na = 4 * v23;
    v65 = (void *)qalloc_or_throw(4 * v23);
    memcpy(v65, *(const void **)a7, na);
    v24 = v68;
    if ( a2 == dest )
    {
      if ( v22 <= 4 )
      {
        if ( v22 == 4 )
          *((_DWORD *)v9 - 1) = *v8;
      }
      else
      {
        memmove(&v9[-v22], v8, v22);
      }
LABEL_97:
      v20 = v65;
      if ( !v65 )
        return (void *)(v71 - __readfsqword(0x28u));
LABEL_20:
      qfree(v20);
      return (void *)(v71 - __readfsqword(0x28u));
    }
    if ( v8 == v68 )
      goto LABEL_97;
    v25 = *(_QWORD **)(a7 + 24);
    goto LABEL_27;
  }
  memmove(a6, a2, a3 - (char *)a2);
  v23 = *(_QWORD *)(a7 + 8);
  v24 = (int *)((char *)v8 + v22);
  if ( v23 )
    goto LABEL_106;
  if ( a2 != dest )
  {
LABEL_25:
    if ( v8 == v24 )
      return (void *)(v71 - __readfsqword(0x28u));
    v65 = nullptr;
    v25 = *(_QWORD **)(a7 + 24);
LABEL_27:
    v26 = a2 - 1;
    v27 = v24 - 1;
    while ( 1 )
    {
      v28 = *v25 + 80LL * *v27;
      v29 = *v25 + 80LL * *v26;
      if ( *(_DWORD *)v28 == 1 )
      {
        v69 = *(_QWORD *)(v28 + 8);
      }
      else
      {
        if ( *(_DWORD *)v28 != 2 || (v31 = *(int ***)(v28 + 8), !v31[1]) )
        {
LABEL_33:
          LODWORD(v30) = (unsigned int)compare_arglocs(v28, v29) >> 31;
          goto LABEL_34;
        }
        v32 = *v31;
        v33 = **v31;
        if ( v33 == 1 )
          goto LABEL_105;
        if ( v33 != 2 )
          goto LABEL_33;
        v34 = *((int ***)v32 + 1);
        if ( !v34[1] )
          goto LABEL_33;
        v32 = *v34;
        v35 = **v34;
        if ( v35 == 1 )
        {
LABEL_105:
          v69 = *((_QWORD *)v32 + 1);
        }
        else
        {
          if ( v35 != 2 )
            goto LABEL_33;
          v36 = *((__int64 **)v32 + 1);
          if ( !v36[1] )
            goto LABEL_33;
          v37 = *v36;
          if ( *(_DWORD *)v37 == 1 )
          {
            v69 = *(_QWORD *)(v37 + 8);
          }
          else
          {
            if ( *(_DWORD *)v37 != 2 )
              goto LABEL_33;
            v38 = *(_QWORD *)(v37 + 8);
            if ( !*(_QWORD *)(v38 + 8) || !(unsigned __int8)sub_6FB30(&v69, *(int **)v38) )
              goto LABEL_33;
          }
        }
      }
      if ( *(_DWORD *)v29 == 1 )
      {
        v30 = *(_QWORD *)(v29 + 8);
      }
      else
      {
        if ( *(_DWORD *)v29 != 2 )
          goto LABEL_33;
        v39 = *(int ***)(v29 + 8);
        if ( !v39[1] )
          goto LABEL_33;
        v40 = *v39;
        v41 = **v39;
        if ( v41 == 1 )
          goto LABEL_110;
        if ( v41 != 2 )
          goto LABEL_33;
        v42 = *((int ***)v40 + 1);
        if ( !v42[1] )
          goto LABEL_33;
        v40 = *v42;
        v43 = **v42;
        if ( v43 == 1 )
        {
LABEL_110:
          v30 = *((_QWORD *)v40 + 1);
        }
        else
        {
          if ( v43 != 2 )
            goto LABEL_33;
          v44 = *((__int64 **)v40 + 1);
          if ( !v44[1] )
            goto LABEL_33;
          v45 = *v44;
          if ( *(_DWORD *)v45 == 1 )
          {
            v30 = *(_QWORD *)(v45 + 8);
          }
          else
          {
            if ( *(_DWORD *)v45 != 2 )
              goto LABEL_33;
            v46 = *(_QWORD *)(v45 + 8);
            if ( !*(_QWORD *)(v46 + 8) || !(unsigned __int8)sub_6FB30(&v70, *(int **)v46) )
              goto LABEL_33;
            v30 = v70;
          }
        }
      }
      LOBYTE(v30) = v69 < v30;
LABEL_34:
      if ( (_BYTE)v30 )
      {
        *((_DWORD *)v9 - 1) = *v26;
        if ( dest == v26 )
        {
          v62 = (char *)(v27 + 1) - (char *)v8;
          if ( v62 <= 4 )
          {
            if ( v62 == 4 )
              *((_DWORD *)v9 - 2) = *v8;
          }
          else
          {
            memmove(&v9[-v62 - 4], v8, v62);
          }
          goto LABEL_97;
        }
        --v26;
      }
      else
      {
        *((_DWORD *)v9 - 1) = *v27;
        if ( v8 == v27 )
          goto LABEL_97;
        --v27;
      }
      v9 -= 4;
    }
  }
  return memmove(a2, v8, v22);
}
