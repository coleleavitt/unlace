unsigned __int64 __fastcall sub_72980(int *a1, int *a2, __int64 a3)
{
  int *v3; // rbx
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r13
  int *v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rax
  int *v15; // r12
  __int64 v16; // r9
  __int64 v17; // rdx
  int **v18; // rax
  int *v19; // rsi
  int v20; // eax
  int **v21; // rax
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rax
  int **v27; // rax
  int *v28; // rsi
  int v29; // eax
  int **v30; // rax
  int v31; // eax
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int **v36; // rax
  int *v37; // rsi
  int v38; // eax
  __int64 *v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rax
  int **v43; // rax
  int *v44; // rsi
  int v45; // eax
  __int64 *v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rax
  __int64 v49; // rax
  size_t v50; // rbp
  void *v51; // [rsp+8h] [rbp-70h]
  int v53; // [rsp+1Ch] [rbp-5Ch]
  __int64 v54; // [rsp+28h] [rbp-50h] BYREF
  __int64 v55; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v56; // [rsp+38h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( a1 == a2 )
    return v56 - __readfsqword(0x28u);
  v3 = a1 + 1;
  if ( a2 == a1 + 1 )
    return v56 - __readfsqword(0x28u);
LABEL_8:
  while ( 2 )
  {
    v6 = **(_QWORD **)(a3 + 24);
    v7 = v6 + 80LL * *v3;
    v8 = 80LL * *a1 + v6;
    if ( *(_DWORD *)v7 == 1 )
    {
      v54 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      if ( *(_DWORD *)v7 != 2 )
        goto LABEL_10;
      v36 = *(int ***)(v7 + 8);
      if ( !v36[1] )
        goto LABEL_10;
      v37 = *v36;
      v38 = **v36;
      if ( v38 == 1 )
      {
        v54 = *((_QWORD *)v37 + 1);
      }
      else
      {
        if ( v38 != 2 )
          goto LABEL_10;
        v39 = *((__int64 **)v37 + 1);
        if ( !v39[1] )
          goto LABEL_10;
        v40 = *v39;
        if ( *(_DWORD *)v40 == 1 )
          goto LABEL_90;
        if ( *(_DWORD *)v40 != 2 )
          goto LABEL_10;
        v41 = *(__int64 **)(v40 + 8);
        if ( !v41[1] )
          goto LABEL_10;
        v40 = *v41;
        if ( *(_DWORD *)v40 == 1 )
        {
LABEL_90:
          v54 = *(_QWORD *)(v40 + 8);
        }
        else
        {
          if ( *(_DWORD *)v40 != 2 )
            goto LABEL_10;
          v42 = *(_QWORD *)(v40 + 8);
          if ( !*(_QWORD *)(v42 + 8) || !(unsigned __int8)sub_6FB30(&v54, *(int **)v42) )
            goto LABEL_10;
        }
      }
    }
    if ( *(_DWORD *)v8 == 1 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      goto LABEL_83;
    }
    if ( *(_DWORD *)v8 != 2 )
      goto LABEL_10;
    v43 = *(int ***)(v8 + 8);
    if ( !v43[1] )
      goto LABEL_10;
    v44 = *v43;
    v45 = **v43;
    if ( v45 == 1 )
    {
      v9 = *((_QWORD *)v44 + 1);
      goto LABEL_83;
    }
    if ( v45 != 2 )
      goto LABEL_10;
    v46 = *((__int64 **)v44 + 1);
    if ( !v46[1] )
      goto LABEL_10;
    v47 = *v46;
    if ( *(_DWORD *)v47 == 1 )
      goto LABEL_91;
    if ( *(_DWORD *)v47 != 2 )
      goto LABEL_10;
    v48 = *(__int64 **)(v47 + 8);
    if ( !v48[1] )
      goto LABEL_10;
    v47 = *v48;
    if ( *(_DWORD *)v47 == 1 )
    {
LABEL_91:
      v9 = *(_QWORD *)(v47 + 8);
      goto LABEL_83;
    }
    if ( *(_DWORD *)v47 != 2
      || (v49 = *(_QWORD *)(v47 + 8), !*(_QWORD *)(v49 + 8))
      || !(unsigned __int8)sub_6FB30(&v55, *(int **)v49) )
    {
LABEL_10:
      LODWORD(v9) = (unsigned int)compare_arglocs(v7, v8) >> 31;
      goto LABEL_11;
    }
    v9 = v55;
LABEL_83:
    LOBYTE(v9) = v54 < v9;
LABEL_11:
    if ( !(_BYTE)v9 )
    {
      v51 = nullptr;
      v10 = *(_QWORD *)(a3 + 8);
      if ( v10 )
      {
        v50 = 4 * v10;
        v51 = (void *)qalloc_or_throw(4 * v10);
        memcpy(v51, *(const void **)a3, v50);
      }
      v11 = *(_QWORD **)(a3 + 24);
      v12 = v3;
      v53 = *v3;
      v13 = 80LL * *v3;
      while ( 1 )
      {
        v15 = v12;
        v16 = *v11 + v13;
        v17 = 80LL * *(v12 - 1) + *v11;
        if ( *(_DWORD *)v16 == 1 )
        {
          v54 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          if ( *(_DWORD *)v16 != 2 || (v18 = *(int ***)(v16 + 8), !v18[1]) )
          {
LABEL_15:
            LODWORD(v14) = (unsigned int)compare_arglocs(v16, v17) >> 31;
            goto LABEL_16;
          }
          v19 = *v18;
          v20 = **v18;
          if ( v20 == 1 )
            goto LABEL_84;
          if ( v20 != 2 )
            goto LABEL_15;
          v21 = *((int ***)v19 + 1);
          if ( !v21[1] )
            goto LABEL_15;
          v19 = *v21;
          v22 = **v21;
          if ( v22 == 1 )
          {
LABEL_84:
            v54 = *((_QWORD *)v19 + 1);
          }
          else
          {
            if ( v22 != 2 )
              goto LABEL_15;
            v23 = *((__int64 **)v19 + 1);
            if ( !v23[1] )
              goto LABEL_15;
            v24 = *v23;
            if ( *(_DWORD *)v24 == 1 )
              goto LABEL_92;
            if ( *(_DWORD *)v24 != 2 )
              goto LABEL_15;
            v25 = *(__int64 **)(v24 + 8);
            if ( !v25[1] )
              goto LABEL_15;
            v24 = *v25;
            if ( *(_DWORD *)v24 == 1 )
            {
LABEL_92:
              v54 = *(_QWORD *)(v24 + 8);
            }
            else
            {
              if ( *(_DWORD *)v24 != 2 )
                goto LABEL_15;
              v26 = *(_QWORD *)(v24 + 8);
              if ( !*(_QWORD *)(v26 + 8) || !(unsigned __int8)sub_6FB30(&v54, *(int **)v26) )
                goto LABEL_15;
            }
          }
        }
        if ( *(_DWORD *)v17 == 1 )
        {
          v14 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          if ( *(_DWORD *)v17 != 2 )
            goto LABEL_15;
          v27 = *(int ***)(v17 + 8);
          if ( !v27[1] )
            goto LABEL_15;
          v28 = *v27;
          v29 = **v27;
          if ( v29 == 1 )
            goto LABEL_87;
          if ( v29 != 2 )
            goto LABEL_15;
          v30 = *((int ***)v28 + 1);
          if ( !v30[1] )
            goto LABEL_15;
          v28 = *v30;
          v31 = **v30;
          if ( v31 == 1 )
          {
LABEL_87:
            v14 = *((_QWORD *)v28 + 1);
          }
          else
          {
            if ( v31 != 2 )
              goto LABEL_15;
            v32 = *((__int64 **)v28 + 1);
            if ( !v32[1] )
              goto LABEL_15;
            v33 = *v32;
            if ( *(_DWORD *)v33 == 1 )
            {
              v14 = *(_QWORD *)(v33 + 8);
            }
            else
            {
              if ( *(_DWORD *)v33 != 2 )
                goto LABEL_15;
              v34 = *(_QWORD *)(v33 + 8);
              if ( !*(_QWORD *)(v34 + 8) || !(unsigned __int8)sub_6FB30(&v55, *(int **)v34) )
                goto LABEL_15;
              v14 = v55;
            }
          }
        }
        LOBYTE(v14) = v54 < v14;
LABEL_16:
        --v12;
        if ( !(_BYTE)v14 )
        {
          *v15 = v53;
          if ( !v51 )
            goto LABEL_7;
          ++v3;
          qfree(v51);
          if ( a2 == v3 )
            return v56 - __readfsqword(0x28u);
          goto LABEL_8;
        }
        v12[1] = *v12;
      }
    }
    v5 = *v3;
    if ( (char *)v3 - (char *)a1 <= 4 )
    {
      if ( (char *)v3 - (char *)a1 == 4 )
        *v3 = *a1;
    }
    else
    {
      memmove(a1 + 1, a1, (char *)v3 - (char *)a1);
    }
    *a1 = v5;
LABEL_7:
    if ( a2 != ++v3 )
      continue;
    return v56 - __readfsqword(0x28u);
  }
}

