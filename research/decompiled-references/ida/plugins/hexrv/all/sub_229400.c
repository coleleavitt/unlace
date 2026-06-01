__int64 __fastcall sub_229400(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // rbp
  _QWORD *v4; // rbx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  int v10; // r9d
  __int64 v11; // rax
  const char *v12; // r12
  unsigned __int64 v13; // r15
  const char *v14; // r14
  char *v15; // rax
  _QWORD *v16; // rdx
  char *v17; // rsi
  int v18; // r8d
  int v19; // r9d
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
  __int64 v30; // rdi
  const char *v31; // rcx
  unsigned int v32; // ebx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  char *v37; // rsi
  size_t v38; // r15
  size_t v39; // r9
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r14
  char *v42; // rsi
  _DWORD *v43; // [rsp+0h] [rbp-98h]
  __int64 v44; // [rsp+8h] [rbp-90h]
  char *src; // [rsp+20h] [rbp-78h]
  __int128 v46; // [rsp+28h] [rbp-70h]
  unsigned __int64 v47; // [rsp+28h] [rbp-70h]
  const char *v48; // [rsp+40h] [rbp-58h] BYREF
  __int128 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 8);
  v50 = __readfsqword(0x28u);
  v46 = 0;
  src = nullptr;
  v43 = *(_DWORD **)(v2 + 1504);
  if ( !v3 )
  {
    v4 = *(_QWORD **)(a1 + 112);
    if ( v4 != *(_QWORD **)(a1 + 120) )
      goto LABEL_3;
    goto LABEL_79;
  }
  *((_QWORD *)&v46 + 1) = v3;
  src = (char *)qalloc_or_throw();
  memcpy(src, *(const void **)a2, v3);
  *(_QWORD *)&v46 = v3;
  v4 = *(_QWORD **)(a1 + 112);
  if ( v4 != *(_QWORD **)(a1 + 120) )
  {
    while ( 1 )
    {
LABEL_3:
      v5 = *((_DWORD *)v4 + 20);
      if ( (v5 & 2) != 0 && (v5 & 0x1018) == 0 )
        goto LABEL_22;
      v6 = *((int *)v4 + 19);
      v7 = 1;
      v8 = v4[7];
      v9 = *(_QWORD *)(a1 + 176);
      if ( (int)v6 > 0 )
        v7 = *((int *)v4 + 19);
      if ( v8 + v7 - 1 < v9 )
        goto LABEL_22;
      v10 = *(_DWORD *)(a1 + 196);
      v11 = 1;
      if ( v10 > 0 )
        v11 = *(int *)(a1 + 196);
      if ( v9 + v11 - 1 < v8 )
        goto LABEL_22;
      if ( (v5 & 0x1018) == 0 )
        break;
      if ( v9 != v8 || v10 != (_DWORD)v6 )
        goto LABEL_14;
      if ( (_DWORD)v6 != -1 )
        goto LABEL_58;
LABEL_22:
      if ( (*v4 & 2) != 0 )
      {
LABEL_25:
        if ( *(_QWORD **)(a1 + 120) == v4 )
          goto LABEL_26;
      }
      else
      {
        v16 = (_QWORD *)v4[2];
        if ( (*(_BYTE *)v16 & 2) == 0 )
        {
          do
          {
            v4 = v16;
            v16 = (_QWORD *)v16[1];
          }
          while ( (*(_BYTE *)v16 & 2) == 0 );
          goto LABEL_25;
        }
        v34 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
        v35 = *v34;
        if ( (*v34 & 2) == 0 )
        {
          while ( (_QWORD *)v34[2] == v4 )
          {
            v4 = v34;
            v36 = v35 & 0xFFFFFFFFFFFFFFFCLL;
            v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v35 & 2) != 0 )
            {
              v4 = (_QWORD *)v36;
              if ( *(_QWORD *)(a1 + 120) != v36 )
                goto LABEL_3;
              goto LABEL_26;
            }
            v34 = (_QWORD *)v36;
          }
        }
        v4 = v34;
        if ( *(_QWORD **)(a1 + 120) == v34 )
        {
LABEL_26:
          v3 = v46;
          goto LABEL_27;
        }
      }
    }
    if ( (_DWORD)v6 != -1 )
LABEL_58:
      v8 += v6;
    if ( v10 != -1 )
      v9 += v10;
    if ( (__int64)v9 >= (__int64)v8 )
      goto LABEL_22;
LABEL_14:
    v48 = nullptr;
    v49 = 0;
    sub_2290C0((__int64)(v4 + 3), v43, (__int64 *)&v48);
    v12 = s1;
    if ( (_QWORD)v49 )
      v12 = v48;
    v13 = v46;
    v14 = s1;
    v44 = 0;
    if ( (_QWORD)v46 )
    {
      v14 = src;
      v44 = v46 - 1;
    }
    v15 = strstr(v14, v12);
    if ( v15 && v15 - v14 != -1 )
    {
LABEL_20:
      if ( v48 )
      {
        *(_QWORD *)&v49 = 0;
        qfree();
      }
      goto LABEL_22;
    }
    if ( v12 )
    {
      v37 = src;
      v38 = strlen(v12);
      v39 = v38 + v44;
      v40 = v38 + v44 + 1;
      if ( *((_QWORD *)&v46 + 1) < v40 )
      {
        src = (char *)qvector_reserve();
        v39 = v38 + v44;
        v37 = src;
        v40 = v38 + v44 + 1;
      }
      v47 = v40;
      v37[v39] = 0;
      memmove(&src[v44], v12, v38);
      v13 = v47;
    }
    v41 = 2;
    if ( v13 )
    {
      v41 = v13 + 1;
      v42 = src;
      --v13;
      if ( *((_QWORD *)&v46 + 1) >= v41 )
        goto LABEL_69;
    }
    else
    {
      v42 = src;
      if ( *((_QWORD *)&v46 + 1) >= 2u )
      {
LABEL_69:
        *(_QWORD *)&v46 = v41;
        v42[v13] = 44;
        src[v13 + 1] = 0;
        goto LABEL_20;
      }
    }
    src = (char *)qvector_reserve();
    v42 = src;
    goto LABEL_69;
  }
LABEL_27:
  v17 = src;
  if ( (__int64)(v3 - 1) > 1 )
  {
    if ( *((_QWORD *)&v46 + 1) < v3 - 1 )
    {
      src = (char *)qvector_reserve();
      v17 = src;
    }
    *(_QWORD *)&v46 = v3 - 1;
    v17[v3 - 2] = 0;
    goto LABEL_31;
  }
  if ( src )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
    src = nullptr;
  }
LABEL_79:
  if ( (unsigned __int64)v46 <= 1 )
    return 0;
LABEL_31:
  v49 = 0;
  v48 = nullptr;
  sub_2290C0(a1 + 144, v43, (__int64 *)&v48);
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
    v48 = (const char *)qvector_reserve();
    v23 = (__int64)v48;
  }
  *(_QWORD *)&v49 = v21;
  *(_BYTE *)(v23 + v22) = 0;
  v24 = (char *)&v48[v20];
  *(_DWORD *)v24 = 1684955424;
  v24[4] = 32;
  v25 = v46;
  if ( (_QWORD)v46 )
  {
    v26 = v46 - 1;
    if ( (_QWORD)v46 != 1 )
    {
      v27 = v49;
      v28 = v46 - 1;
      if ( (_QWORD)v49 )
      {
        v27 = v49 - 1;
        v28 = v26 + v49 - 1;
        v25 = v46 + v49 - 1;
      }
      v29 = (__int64)v48;
      if ( *((_QWORD *)&v49 + 1) < v25 )
      {
        v48 = (const char *)qvector_reserve();
        v29 = (__int64)v48;
      }
      *(_QWORD *)&v49 = v25;
      *(_BYTE *)(v29 + v28) = 0;
      memcpy((void *)&v48[v27], src, v26);
    }
  }
  v30 = *(_QWORD *)(a1 + 8);
  v31 = s1;
  if ( (_QWORD)v49 )
    LODWORD(v31) = (_DWORD)v48;
  sub_32BE10(v30, -1, 20, (_DWORD)v31, v18, v19);
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  v32 = 1;
  if ( src )
    qfree();
  return v32;
}

