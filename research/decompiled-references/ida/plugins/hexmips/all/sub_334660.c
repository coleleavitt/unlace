__int64 __fastcall sub_334660(unsigned __int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // r15
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // ebx
  _DWORD *v16; // rax
  unsigned int v17; // ebx
  __int64 v19; // rax
  char *v20; // r13
  char *v21; // r8
  signed __int64 v22; // r9
  __int64 v23; // rax
  unsigned int *i; // rbx
  bool v25; // dl
  int v26; // eax
  __int64 v27; // rdx
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // [rsp+0h] [rbp-90h]
  char *src; // [rsp+18h] [rbp-78h]
  __int64 v33; // [rsp+20h] [rbp-70h]
  __int64 v34; // [rsp+38h] [rbp-58h] BYREF
  __int128 v35; // [rsp+40h] [rbp-50h]
  unsigned __int64 v36; // [rsp+50h] [rbp-40h]

  v31 = (_QWORD *)a1;
  v36 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a3 + 64);
  v33 = 0;
  src = nullptr;
  v34 = 0;
  v35 = 0;
  if ( !v3 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * (unsigned int)(v3 - 1));
  if ( *(_DWORD *)(v5 + 76) != 1 )
    return 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v5 + 72);
    if ( v7 < v9 + 1 )
    {
      a1 = (unsigned __int64)&v34;
      v34 = qvector_reserve();
      v8 = v34;
      v9 = v35;
    }
    *(_DWORD *)(v8 + 4 * v9) = v10;
    v11 = *(_QWORD *)(v5 + 352);
    v12 = v33;
    v13 = v35 + 1;
    *(_QWORD *)&v35 = v35 + 1;
    if ( (int)v11 > 0 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = *(_DWORD *)(*(_QWORD *)(v5 + 344) + 4 * v14);
        v16 = (_DWORD *)v34;
        v13 = v34 + 4 * v13;
        if ( v34 != v13 )
        {
          while ( v15 != *v16 )
          {
            if ( (_DWORD *)v13 == ++v16 )
              goto LABEL_17;
          }
          if ( (_DWORD *)v13 != v16 )
            break;
        }
LABEL_17:
        a1 = (unsigned __int64)src;
        v13 = 4 * v12;
        v19 = (4 * v12) >> 2;
        v20 = src;
        while ( v19 > 0 )
        {
          while ( 1 )
          {
            v21 = &v20[4 * (v19 >> 1)];
            if ( v15 <= *(_DWORD *)v21 )
              break;
            v20 = v21 + 4;
            v19 = v19 - 1 - (v19 >> 1);
            if ( v19 <= 0 )
              goto LABEL_21;
          }
          v19 >>= 1;
        }
LABEL_21:
        if ( &src[4 * v12] != v20 && *(_DWORD *)v20 == v15 )
          break;
        v22 = v20 - src;
        if ( v12 != -1 )
        {
          v30 = qvector_reserve();
          v22 = v20 - src;
          src = (char *)v30;
          v20 = (char *)(v30 + v22);
          v13 = 4 * v33;
        }
        a1 = (unsigned __int64)(v20 + 4);
        ++v14;
        memmove(v20 + 4, v20, v13 - v22);
        *(_DWORD *)v20 = v15;
        v11 = *(_QWORD *)(v5 + 352);
        v12 = ++v33;
        if ( (int)v11 <= (int)v14 )
          goto LABEL_26;
LABEL_14:
        v13 = v35;
      }
      if ( (int)v11 <= (int)++v14 )
        goto LABEL_26;
      goto LABEL_14;
    }
LABEL_26:
    if ( !v12 )
      break;
    v23 = *(unsigned int *)&src[4 * v12 - 4];
    if ( (unsigned int)v23 >= *(_DWORD *)(a3 + 64) )
      sub_3340A0(a1, v12, v13);
    v5 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v23);
    v33 = v12 - 1;
    for ( i = *(unsigned int **)(v5 + 56); i; i = *((unsigned int **)i + 2) )
    {
      if ( *((char *)i + 4) >= 0 )
      {
        a1 = *i;
        if ( (_DWORD)a1 != 61 )
        {
          v25 = sub_11A6A0(a1);
          v26 = *i;
          if ( v25 )
          {
            if ( v26 != 4 && (v26 != 67 || i[9] != i[17])
              || *((_BYTE *)i + 32) != 5
              || *((_BYTE *)i + 64) != 1
              || (v27 = *(_QWORD *)(a3 + 920), v28 = *(_DWORD **)(v27 + 8),
                                               v29 = &v28[*(_QWORD *)(v27 + 16)],
                                               v28 == v29) )
            {
LABEL_33:
              *v31 = v5;
              *a2 = i;
              v17 = 1;
              goto LABEL_34;
            }
            while ( i[18] != *v28 )
            {
              if ( v29 == ++v28 )
                goto LABEL_33;
            }
          }
          else if ( v26 == 1 )
          {
            goto LABEL_33;
          }
        }
      }
    }
    v7 = *((_QWORD *)&v35 + 1);
    v9 = v35;
    v8 = v34;
  }
  v17 = 0;
LABEL_34:
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  if ( src )
    qfree();
  return v17;
}

