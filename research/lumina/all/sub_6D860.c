unsigned __int64 __fastcall sub_6D860(__int64 *a1, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned int v6; // eax
  void *v7; // r12
  size_t v8; // r13
  char *v9; // rax
  unsigned __int64 v10; // rbx
  unsigned int v11; // eax
  _BYTE *v12; // r15
  bool v13; // cf
  char *v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rsi
  size_t v18; // r9
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rsi
  size_t v22; // rdx
  __int64 v23; // r13
  char *v24; // r14
  char *v25; // r8
  __int64 v26; // rsi
  char *v27; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  char *v32; // [rsp+0h] [rbp-88h]
  size_t v33; // [rsp+0h] [rbp-88h]
  char *v34; // [rsp+8h] [rbp-80h]
  size_t v35; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v37; // [rsp+20h] [rbp-68h]
  __int64 v38; // [rsp+28h] [rbp-60h]
  char v39; // [rsp+30h] [rbp-58h]
  __int64 *v40; // [rsp+38h] [rbp-50h]
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v40 = a1;
  v39 = 1;
  v38 = 0;
  src = a2;
  v37 = a3;
  LODWORD(v38) = sub_196ED0(&src, a3);
LABEL_2:
  while ( 1 )
  {
    v3 = v37;
    if ( (unsigned __int64)src >= v37 )
      return v41 - __readfsqword(0x28u);
    while ( 1 )
    {
      v4 = sub_196ED0(&src, v3);
      if ( v39 != 1 && !v4 )
        break;
      v5 = v37;
      HIDWORD(v38) += v4;
      v6 = sub_196ED0(&src, v37);
      v7 = src;
      v8 = v6;
      v9 = (char *)src + v6;
      if ( __CFADD__(v8, src) )
        return v41 - __readfsqword(0x28u);
      if ( v5 < (unsigned __int64)v9 )
        return v41 - __readfsqword(0x28u);
      src = v9;
      if ( !v7 )
        return v41 - __readfsqword(0x28u);
      v10 = v37;
      v11 = sub_196ED0(&src, v37);
      v12 = src;
      v13 = __CFADD__(src, v11);
      v14 = (char *)src + v11;
      if ( v13 )
        return v41 - __readfsqword(0x28u);
      if ( v10 < (unsigned __int64)v14 )
        return v41 - __readfsqword(0x28u);
      src = v14;
      if ( !v12 )
        return v41 - __readfsqword(0x28u);
      v15 = v40;
      v16 = v40[1];
      v17 = *v40;
      if ( v40[2] < (unsigned __int64)(v16 + 1) )
      {
        v31 = sub_1987B0(v40, v17, v16 + 1, 56);
        v16 = v15[1];
        *v15 = v31;
        v17 = v31;
      }
      v18 = v8;
      v19 = v17 + 56 * v16;
      *(_QWORD *)v19 = -1;
      *(_OWORD *)(v19 + 16) = 0;
      *(_QWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 32) = 0;
      *(_OWORD *)(v19 + 40) = 0;
      ++v15[1];
      v20 = *(_QWORD *)(v19 + 16);
      *(_QWORD *)v19 = v38;
      if ( v20 )
      {
        --v20;
        v18 = v8 + v20;
      }
      v21 = *(_QWORD *)(v19 + 8);
      v22 = v18 + 1;
      if ( *(_QWORD *)(v19 + 24) < v18 + 1 )
      {
        v35 = v18;
        v33 = v18 + 1;
        v30 = sub_1987B0(v19 + 8, v21, v22, 1);
        v18 = v35;
        v22 = v33;
        *(_QWORD *)(v19 + 8) = v30;
        v21 = v30;
      }
      *(_QWORD *)(v19 + 16) = v22;
      *(_BYTE *)(v21 + v18) = 0;
      memmove((void *)(v20 + *(_QWORD *)(v19 + 8)), v7, v8);
      v23 = *(_QWORD *)(v19 + 40);
      v24 = (char *)((_BYTE *)src - v12);
      v25 = (char *)((_BYTE *)src - v12);
      if ( v23 )
        v25 = &v24[--v23];
      v26 = *(_QWORD *)(v19 + 32);
      v27 = v25 + 1;
      if ( *(_QWORD *)(v19 + 48) < (unsigned __int64)(v25 + 1) )
      {
        v34 = v25;
        v32 = v25 + 1;
        v29 = sub_1987B0(v19 + 32, v26, v27, 1);
        v25 = v34;
        v27 = v32;
        *(_QWORD *)(v19 + 32) = v29;
        v26 = v29;
      }
      *(_QWORD *)(v19 + 40) = v27;
      v25[v26] = 0;
      memmove((void *)(v23 + *(_QWORD *)(v19 + 32)), v12, (size_t)v24);
      if ( !v39 )
        goto LABEL_2;
      v39 = 0;
      v3 = v37;
      if ( (unsigned __int64)src >= v37 )
        return v41 - __readfsqword(0x28u);
    }
    v38 = (unsigned int)sub_196ED0(&src, v37);
    v39 = 1;
  }
}
