__int64 __fastcall sub_3398A0(_QWORD *a1, _QWORD *a2, __int64 a3)
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
  _DWORD *v17; // rdx
  unsigned int v18; // ebx
  __int64 v20; // rdx
  __int64 v21; // rax
  char *v22; // r13
  char *v23; // r8
  unsigned __int64 v24; // rsi
  signed __int64 v25; // r9
  __int64 v26; // rax
  unsigned int *i; // rbx
  unsigned __int64 v28; // rdi
  bool v29; // dl
  int v30; // eax
  __int64 v31; // rdx
  _DWORD *v32; // rax
  _DWORD *v33; // rdx
  char *v34; // rax
  signed __int64 v36; // [rsp+8h] [rbp-88h]
  void *src; // [rsp+18h] [rbp-78h] BYREF
  __int128 v38; // [rsp+20h] [rbp-70h]
  _DWORD *v39; // [rsp+38h] [rbp-58h] BYREF
  __int128 v40; // [rsp+40h] [rbp-50h]
  unsigned __int64 v41; // [rsp+50h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a3 + 64);
  v38 = 0;
  src = nullptr;
  v39 = nullptr;
  v40 = 0;
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
      v39 = (_DWORD *)qvector_reserve((__int64)&v39, v8, v9 + 1, 4);
      v8 = (__int64)v39;
      v9 = v40;
    }
    *(_DWORD *)(v8 + 4 * v9) = v10;
    v11 = *(_QWORD *)(v5 + 352);
    v12 = v38;
    v13 = v40 + 1;
    *(_QWORD *)&v40 = v40 + 1;
    if ( (int)v11 > 0 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = *(_DWORD *)(*(_QWORD *)(v5 + 344) + 4 * v14);
        v16 = v39;
        v17 = &v39[v13];
        if ( v39 != v17 )
        {
          while ( v15 != *v16 )
          {
            if ( v17 == ++v16 )
              goto LABEL_17;
          }
          if ( v17 != v16 )
            break;
        }
LABEL_17:
        v20 = 4 * v12;
        v21 = (4 * v12) >> 2;
        v22 = (char *)src;
        while ( v21 > 0 )
        {
          while ( 1 )
          {
            v23 = &v22[4 * (v21 >> 1)];
            if ( v15 <= *(_DWORD *)v23 )
              break;
            v22 = v23 + 4;
            v21 = v21 - 1 - (v21 >> 1);
            if ( v21 <= 0 )
              goto LABEL_21;
          }
          v21 >>= 1;
        }
LABEL_21:
        if ( (char *)src + 4 * v12 != v22 && *(_DWORD *)v22 == v15 )
          break;
        v24 = v12 + 1;
        v25 = v22 - (_BYTE *)src;
        if ( *((_QWORD *)&v38 + 1) < v24 )
        {
          v36 = v22 - (_BYTE *)src;
          v34 = (char *)qvector_reserve((__int64)&src, (__int64)src, v24, 4);
          v25 = v36;
          src = v34;
          v22 = &v34[v36];
          v20 = 4 * v38;
        }
        ++v14;
        memmove(v22 + 4, v22, v20 - v25);
        *(_DWORD *)v22 = v15;
        v11 = *(_QWORD *)(v5 + 352);
        v12 = v38 + 1;
        *(_QWORD *)&v38 = v38 + 1;
        if ( (int)v11 <= (int)v14 )
          goto LABEL_26;
LABEL_14:
        v13 = v40;
      }
      if ( (int)v11 <= (int)++v14 )
        goto LABEL_26;
      goto LABEL_14;
    }
LABEL_26:
    if ( !v12 )
      break;
    v26 = *((unsigned int *)src + v12 - 1);
    if ( (unsigned int)v26 >= *(_DWORD *)(a3 + 64) )
      sub_3392E0(0.0);
    v5 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v26);
    *(_QWORD *)&v38 = v12 - 1;
    for ( i = *(unsigned int **)(v5 + 56); i; i = *((unsigned int **)i + 2) )
    {
      if ( *((char *)i + 4) >= 0 )
      {
        v28 = *i;
        if ( (_DWORD)v28 != 61 )
        {
          v29 = sub_11E8A0(v28);
          v30 = *i;
          if ( v29 )
          {
            if ( v30 != 4 && (v30 != 67 || i[9] != i[17])
              || *((_BYTE *)i + 32) != 5
              || *((_BYTE *)i + 64) != 1
              || (v31 = *(_QWORD *)(a3 + 920), v32 = *(_DWORD **)(v31 + 8),
                                               v33 = &v32[*(_QWORD *)(v31 + 16)],
                                               v32 == v33) )
            {
LABEL_33:
              *a1 = v5;
              *a2 = i;
              v18 = 1;
              goto LABEL_34;
            }
            while ( i[18] != *v32 )
            {
              if ( v33 == ++v32 )
                goto LABEL_33;
            }
          }
          else if ( v30 == 1 )
          {
            goto LABEL_33;
          }
        }
      }
    }
    v7 = *((_QWORD *)&v40 + 1);
    v9 = v40;
    v8 = (__int64)v39;
  }
  v18 = 0;
LABEL_34:
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree((__int64)v39);
  }
  if ( src )
  {
    *(_QWORD *)&v38 = 0;
    qfree((__int64)src);
  }
  return v18;
}

