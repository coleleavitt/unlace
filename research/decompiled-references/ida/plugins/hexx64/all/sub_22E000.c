__int64 __fastcall sub_22E000(__int64 a1, const void **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _BYTE *v5; // rbp
  _QWORD *v6; // rbx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  int v12; // r9d
  __int64 v13; // rax
  const char *v14; // r12
  __int64 v15; // r15
  const char *v16; // r14
  char *v17; // rax
  _QWORD *v18; // rdx
  void *v19; // rsi
  __int64 v20; // rbx
  unsigned __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rsi
  char *v24; // rbx
  unsigned __int64 v25; // rbx
  size_t v26; // r14
  __int64 v27; // r12
  size_t v28; // r15
  __int64 v29; // rsi
  const char *v30; // rcx
  unsigned int v31; // ebx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  _BYTE *v36; // rsi
  size_t v37; // r15
  size_t v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r14
  _BYTE *v41; // rsi
  void *v42; // rax
  const void *v43; // rsi
  _DWORD *v44; // [rsp+0h] [rbp-98h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v47; // [rsp+28h] [rbp-70h]
  const char *v48; // [rsp+40h] [rbp-58h] BYREF
  __int128 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a2[1];
  v50 = __readfsqword(0x28u);
  v47 = 0;
  src = nullptr;
  v44 = *(_DWORD **)(v4 + 1504);
  if ( !v5 )
  {
    v6 = *(_QWORD **)(a1 + 112);
    if ( v6 != *(_QWORD **)(a1 + 120) )
      goto LABEL_3;
LABEL_81:
    if ( (unsigned __int64)v47 <= 1 )
      return 0;
    goto LABEL_31;
  }
  v42 = (void *)qalloc_or_throw((__int64)v5, (__int64)a2, a3, a4);
  v43 = *a2;
  *((_QWORD *)&v47 + 1) = v5;
  src = v42;
  memcpy(v42, v43, (size_t)v5);
  *(_QWORD *)&v47 = v5;
  v6 = *(_QWORD **)(a1 + 112);
  if ( v6 != *(_QWORD **)(a1 + 120) )
  {
    while ( 1 )
    {
LABEL_3:
      v7 = *((_DWORD *)v6 + 20);
      if ( (v7 & 2) != 0 && (v7 & 0x1018) == 0 )
        goto LABEL_22;
      v8 = *((int *)v6 + 19);
      v9 = 1;
      v10 = v6[7];
      v11 = *(_QWORD *)(a1 + 176);
      if ( (int)v8 > 0 )
        v9 = *((int *)v6 + 19);
      if ( v10 + v9 - 1 < v11 )
        goto LABEL_22;
      v12 = *(_DWORD *)(a1 + 196);
      v13 = 1;
      if ( v12 > 0 )
        v13 = *(int *)(a1 + 196);
      if ( v11 + v13 - 1 < v10 )
        goto LABEL_22;
      if ( (v7 & 0x1018) == 0 )
        break;
      if ( v11 != v10 || v12 != (_DWORD)v8 )
        goto LABEL_14;
      if ( (_DWORD)v8 != -1 )
        goto LABEL_59;
LABEL_22:
      if ( (*v6 & 2) != 0 )
      {
LABEL_25:
        if ( *(_QWORD **)(a1 + 120) == v6 )
          goto LABEL_26;
      }
      else
      {
        v18 = (_QWORD *)v6[2];
        if ( (*(_BYTE *)v18 & 2) == 0 )
        {
          do
          {
            v6 = v18;
            v18 = (_QWORD *)v18[1];
          }
          while ( (*(_BYTE *)v18 & 2) == 0 );
          goto LABEL_25;
        }
        v33 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v34 = *v33;
        if ( (*v33 & 2) == 0 )
        {
          while ( (_QWORD *)v33[2] == v6 )
          {
            v6 = v33;
            v35 = v34 & 0xFFFFFFFFFFFFFFFCLL;
            v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v34 & 2) != 0 )
            {
              v6 = (_QWORD *)v35;
              if ( *(_QWORD *)(a1 + 120) != v35 )
                goto LABEL_3;
              goto LABEL_26;
            }
            v33 = (_QWORD *)v35;
          }
        }
        v6 = v33;
        if ( *(_QWORD **)(a1 + 120) == v33 )
        {
LABEL_26:
          v5 = (_BYTE *)v47;
          goto LABEL_27;
        }
      }
    }
    if ( (_DWORD)v8 != -1 )
LABEL_59:
      v10 += v8;
    if ( v12 != -1 )
      v11 += v12;
    if ( (__int64)v11 >= (__int64)v10 )
      goto LABEL_22;
LABEL_14:
    v48 = nullptr;
    v49 = 0;
    sub_22DCC0((__int64)(v6 + 3), v44, (__int64 *)&v48);
    v14 = s1;
    if ( (_QWORD)v49 )
      v14 = v48;
    v15 = v47;
    v16 = s1;
    v45 = 0;
    if ( (_QWORD)v47 )
    {
      v16 = (const char *)src;
      v45 = v47 - 1;
    }
    v17 = strstr(v16, v14);
    if ( v17 && v17 - v16 != -1 )
    {
LABEL_20:
      if ( v48 )
      {
        *(_QWORD *)&v49 = 0;
        qfree((__int64)v48);
      }
      goto LABEL_22;
    }
    if ( v14 )
    {
      v36 = src;
      v37 = strlen(v14);
      v38 = v37 + v45;
      v39 = v37 + v45 + 1;
      if ( *((_QWORD *)&v47 + 1) < v39 )
      {
        src = (void *)qvector_reserve((__int64)&src, (__int64)v36, v39, 1);
        v38 = v37 + v45;
        v36 = src;
        v39 = v37 + v45 + 1;
      }
      *(_QWORD *)&v47 = v39;
      v36[v38] = 0;
      memmove((char *)src + v45, v14, v37);
      v15 = v47;
    }
    v40 = 2;
    if ( v15 )
    {
      v40 = v15 + 1;
      v41 = src;
      --v15;
      if ( *((_QWORD *)&v47 + 1) >= v40 )
        goto LABEL_70;
    }
    else
    {
      v41 = src;
      if ( *((_QWORD *)&v47 + 1) >= 2u )
      {
LABEL_70:
        *(_QWORD *)&v47 = v40;
        v41[v15] = 44;
        *((_BYTE *)src + v15 + 1) = 0;
        goto LABEL_20;
      }
    }
    src = (void *)qvector_reserve((__int64)&src, (__int64)v41, v40, 1);
    v41 = src;
    goto LABEL_70;
  }
LABEL_27:
  v19 = src;
  if ( (__int64)(v5 - 1) <= 1 )
  {
    if ( src )
    {
      *(_QWORD *)&v47 = 0;
      qfree((__int64)src);
      src = nullptr;
      *((_QWORD *)&v47 + 1) = 0;
    }
    goto LABEL_81;
  }
  if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v5 - 1) )
  {
    src = (void *)qvector_reserve((__int64)&src, (__int64)src, (__int64)(v5 - 1), 1);
    v19 = src;
  }
  *(_QWORD *)&v47 = v5 - 1;
  v5[(_QWORD)v19 - 2] = 0;
  if ( (unsigned __int64)v47 > 1 )
  {
LABEL_31:
    v49 = 0;
    v48 = nullptr;
    sub_22DCC0(a1 + 144, v44, (__int64 *)&v48);
    v20 = v49;
    if ( (_QWORD)v49 )
    {
      v22 = v49 + 4;
      v21 = v49 + 5;
      v20 = v49 - 1;
    }
    else
    {
      v21 = 6;
      v22 = 5;
    }
    v23 = (__int64)v48;
    if ( *((_QWORD *)&v49 + 1) < v21 )
    {
      v48 = (const char *)qvector_reserve((__int64)&v48, (__int64)v48, v21, 1);
      v23 = (__int64)v48;
    }
    *(_QWORD *)&v49 = v21;
    *(_BYTE *)(v23 + v22) = 0;
    v24 = (char *)&v48[v20];
    *(_DWORD *)v24 = 1684955424;
    v24[4] = 32;
    v25 = v47;
    if ( (_QWORD)v47 )
    {
      v26 = v47 - 1;
      if ( (_QWORD)v47 != 1 )
      {
        v27 = v49;
        v28 = v47 - 1;
        if ( (_QWORD)v49 )
        {
          v27 = v49 - 1;
          v28 = v26 + v49 - 1;
          v25 = v47 + v49 - 1;
        }
        v29 = (__int64)v48;
        if ( *((_QWORD *)&v49 + 1) < v25 )
        {
          v48 = (const char *)qvector_reserve((__int64)&v48, (__int64)v48, v25, 1);
          v29 = (__int64)v48;
        }
        *(_QWORD *)&v49 = v25;
        *(_BYTE *)(v29 + v28) = 0;
        memcpy((void *)&v48[v27], src, v26);
      }
    }
    v30 = s1;
    if ( (_QWORD)v49 )
      v30 = v48;
    sub_3311F0(*(_QWORD **)(a1 + 8), 0xFFFFFFFFFFFFFFFFLL, 0x14u, v30);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree((__int64)v48);
    }
    v31 = 1;
    goto LABEL_47;
  }
  v31 = 0;
LABEL_47:
  if ( src )
  {
    *(_QWORD *)&v47 = 0;
    qfree((__int64)src);
  }
  return v31;
}

