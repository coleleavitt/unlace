__int64 __fastcall sub_62400(_QWORD *a1, char **a2, __int64 a3)
{
  char *v3; // r13
  unsigned __int64 v4; // rbx
  char *v8; // rsi
  unsigned int v9; // eax
  char *v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r13
  char *v13; // r13
  __int64 v14; // rdi
  unsigned __int64 i; // rax
  char *v16; // rdx
  bool v17; // zf
  char *v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdi
  int v22; // edi
  __int16 v23; // cx
  __int64 v24; // rax
  char *j; // rbp
  const void *v26; // r15
  __int64 v27; // r8
  size_t v28; // r9
  signed __int64 v29; // r10
  __int64 v30; // rsi
  signed __int64 v31; // rdx
  _BYTE *k; // rax
  char *v33; // r13
  __int64 v34; // rax
  __int64 v35; // rbp
  size_t v36; // rbx
  size_t v37; // r8
  __int64 v38; // rsi
  size_t v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // [rsp+0h] [rbp-78h]
  signed __int64 v46; // [rsp+0h] [rbp-78h]
  size_t v47; // [rsp+8h] [rbp-70h]
  size_t v48; // [rsp+8h] [rbp-70h]
  __int64 v49; // [rsp+18h] [rbp-60h]
  const void *v50; // [rsp+20h] [rbp-58h] BYREF
  int v51; // [rsp+2Ch] [rbp-4Ch] BYREF
  __int16 v52; // [rsp+30h] [rbp-48h]
  int v53; // [rsp+32h] [rbp-46h]
  __int16 v54; // [rsp+36h] [rbp-42h]
  unsigned __int64 v55; // [rsp+38h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = (unsigned __int64)&(*a2)[a3];
  if ( __CFADD__(*a2, a3) )
    return 0;
  v8 = &(*a2)[a3];
  v50 = v3;
  v9 = sub_196ED0(&v50, v8);
  v10 = v50;
  if ( v3 >= v50 )
    return 0;
  v11 = a1[3];
  v12 = v9;
  if ( v9 != v11 )
  {
    v51 = 0;
    v52 = 0;
    if ( v9 >= v11 )
    {
      v19 = a1[2];
      v20 = a1[4];
      v21 = a1 + 2;
      if ( (unsigned __int64)&v51 < v19 || (unsigned __int64)&v51 >= v19 + 6 * v20 )
      {
        if ( v20 >= v12 || (v43 = sub_1987B0(v21, v19, v12, 6), v11 = a1[3], a1[2] = v43, v19 = v43, v11 < v12) )
        {
          v40 = 6 * v11;
          while ( 1 )
          {
            ++v11;
            *(_DWORD *)(v19 + v40) = v51;
            *(_WORD *)(v19 + v40 + 4) = v52;
            v40 += 6;
            if ( v12 == v11 )
              break;
            v19 = a1[2];
          }
        }
      }
      else
      {
        v53 = 0;
        v54 = 0;
        if ( v20 >= v12 || (v44 = sub_1987B0(v21, v19, v12, 6), v11 = a1[3], a1[2] = v44, v19 = v44, v11 < v12) )
        {
          v22 = v53;
          v23 = v54;
          v24 = 6 * v11;
          while ( 1 )
          {
            ++v11;
            *(_DWORD *)(v19 + v24) = v22;
            *(_WORD *)(v19 + v24 + 4) = v23;
            v24 += 6;
            if ( v12 == v11 )
              break;
            v19 = a1[2];
          }
        }
      }
      a1[3] = v12;
LABEL_8:
      v13 = &v10[6 * v12];
      v14 = -6LL - (_QWORD)v10;
      for ( i = (unsigned __int64)v10; v4 >= i; i += 6LL )
      {
        v16 = (char *)(i + 6);
        if ( v4 < i + 6 )
          break;
        v17 = &v16[v14 + a1[2]] == nullptr;
        v18 = &v16[v14 + a1[2]];
        *(_DWORD *)v18 = *(_DWORD *)i;
        *((_WORD *)v18 + 2) = *(_WORD *)(i + 4);
        if ( v17 )
          break;
        if ( v13 == v16 )
          goto LABEL_23;
      }
      return 0;
    }
    a1[3] = v9;
  }
  if ( v9 )
    goto LABEL_8;
  v13 = v10;
LABEL_23:
  for ( j = v13; (unsigned __int64)j < v4; ++j )
  {
    v26 = j + 1;
    if ( !*j )
    {
      v27 = a1[6];
      v28 = j - v13;
      v29 = j - v13;
      if ( v27 )
      {
        --v27;
        v29 = v28 + v27;
      }
      v30 = a1[5];
      v31 = v29 + 1;
      if ( a1[7] < (unsigned __int64)(v29 + 1) )
      {
        v49 = v27;
        v48 = v29;
        v46 = v29 + 1;
        v42 = sub_1987B0(a1 + 5, v30, v31, 1);
        v27 = v49;
        v28 = j - v13;
        a1[5] = v42;
        v29 = v48;
        v30 = v42;
        v31 = v46;
      }
      a1[6] = v31;
      *(_BYTE *)(v30 + v29) = 0;
      memmove((void *)(v27 + a1[5]), v13, v28);
      for ( k = j + 1; (unsigned __int64)k < v4; ++k )
      {
        v33 = k + 1;
        if ( !*k )
        {
          v34 = k - j;
          v35 = a1[9];
          v36 = v34 - 1;
          v37 = v34 - 1;
          if ( v35 )
          {
            --v35;
            v37 = v36 + v35;
          }
          v38 = a1[8];
          v39 = v37 + 1;
          if ( a1[10] < v37 + 1 )
          {
            v47 = v37;
            v45 = v37 + 1;
            v41 = sub_1987B0(a1 + 8, v38, v39, 1);
            v37 = v47;
            v39 = v45;
            a1[8] = v41;
            v38 = v41;
          }
          a1[9] = v39;
          *(_BYTE *)(v38 + v37) = 0;
          memmove((void *)(v35 + a1[8]), v26, v36);
          *a2 = v33;
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}
