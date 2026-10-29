unsigned __int64 __fastcall sub_50C10(_QWORD *a1, int **a2)
{
  int *v2; // rax
  int *v3; // r12
  int *i; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  char *v9; // rsi
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // edx
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  char *v26; // rax
  void *v27; // rdi
  void *v28; // [rsp+0h] [rbp-148h] BYREF
  __int128 v29; // [rsp+8h] [rbp-140h]
  void *ptr; // [rsp+20h] [rbp-128h] BYREF
  __int128 v31; // [rsp+28h] [rbp-120h]
  void *v32; // [rsp+40h] [rbp-108h] BYREF
  __int128 v33; // [rsp+48h] [rbp-100h]
  int v34; // [rsp+60h] [rbp-E8h] BYREF
  __int16 v35; // [rsp+64h] [rbp-E4h]
  __int64 v36; // [rsp+68h] [rbp-E0h]
  __int64 v37; // [rsp+70h] [rbp-D8h]
  int v38; // [rsp+80h] [rbp-C8h]
  __int16 v39; // [rsp+84h] [rbp-C4h]
  unsigned __int64 v40; // [rsp+118h] [rbp-30h]

  v2 = a2[1];
  v3 = *a2;
  v40 = __readfsqword(0x28u);
  v28 = nullptr;
  v29 = 0;
  for ( i = (int *)((char *)v3 + 6 * (_QWORD)v2); i != v3; v3 = (int *)((char *)v3 + 6) )
  {
    v6 = a1[55];
    v7 = v6 + 6LL * a1[56];
    if ( v6 != v7 )
    {
      while ( *v3 != *(_DWORD *)v6 || *((_WORD *)v3 + 2) != *(_WORD *)(v6 + 4) )
      {
        v6 += 6;
        if ( v7 == v6 )
          goto LABEL_17;
      }
      if ( v6 != v7 )
      {
        memmove((void *)v6, (const void *)(v6 + 6), v7 - v6 - 6);
        v8 = v29;
        v9 = (char *)v28;
        --a1[56];
        v38 = *v3;
        v39 = *((_WORD *)v3 + 2);
        if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v8 + 1) )
        {
          v28 = (void *)sub_1987B0(&v28, v9, v8 + 1, 6);
          v8 = v29;
          v9 = (char *)v28;
        }
        v10 = &v9[6 * v8];
        *(_DWORD *)v10 = v38;
        *((_WORD *)v10 + 2) = v39;
        v11 = a1[59];
        v12 = a1[58];
        *(_QWORD *)&v29 = v29 + 1;
        v13 = v12 + 6 * v11;
        if ( v12 == v13 )
          goto LABEL_23;
        v14 = v12;
        while ( *v3 != *(_DWORD *)v14 || *((_WORD *)v3 + 2) != *(_WORD *)(v14 + 4) )
        {
          v14 += 6;
          if ( v13 == v14 )
            goto LABEL_23;
        }
        if ( v14 == v13 )
        {
LABEL_23:
          v20 = v11 + 1;
          v38 = *v3;
          v39 = *((_WORD *)v3 + 2);
          if ( a1[60] < v20 )
          {
            v21 = sub_1987B0(a1 + 58, v12, v20, 6);
            v22 = a1[59];
            a1[58] = v21;
            v13 = v21 + 6 * v22;
          }
          *(_DWORD *)v13 = v38;
          *(_WORD *)(v13 + 4) = v39;
          ++a1[59];
        }
        v15 = *v3;
        v16 = *((_WORD *)v3 + 2);
        v36 = 0;
        v38 = v15;
        v34 = v15;
        v39 = v16;
        v35 = v16;
        v37 = 0;
        v17 = sub_4CB80((__int64)a1, (__int64)&v34);
        sub_503C0((__int64)a1, v17, 1, 0, 0);
      }
    }
LABEL_17:
    ;
  }
  v18 = a1[54];
  ptr = nullptr;
  v32 = nullptr;
  v31 = 0;
  v33 = 0;
  if ( v18 && (_QWORD)v29 )
  {
    sub_5E2F0(v18, &v28, &v32, &ptr);
    v23 = (char *)v32;
    if ( v32 )
    {
      v24 = v33;
      if ( (_QWORD)v33 )
      {
        v25 = 0;
        do
        {
          v26 = &v23[32 * v25];
          v27 = *((void **)v26 + 1);
          if ( v27 )
          {
            *((_QWORD *)v26 + 2) = 0;
            j__free(v27);
            v23 = (char *)v32;
          }
          ++v25;
        }
        while ( v24 != v25 );
      }
      *(_QWORD *)&v33 = 0;
      j__free(v23);
    }
    if ( ptr )
    {
      *(_QWORD *)&v31 = 0;
      j__free(ptr);
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    j__free(v28);
  }
  return v40 - __readfsqword(0x28u);
}
