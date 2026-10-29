unsigned __int64 __fastcall sub_6D640(__int64 *a1, void *a2, unsigned __int64 a3)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // r13
  char *v7; // r15
  char *v8; // r8
  __int64 v9; // rsi
  char *v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rbx
  unsigned int v13; // eax
  _BYTE *v14; // r14
  bool v15; // cf
  char *v16; // rax
  __int64 *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  char *v23; // [rsp+0h] [rbp-88h]
  char *v24; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  char v28; // [rsp+30h] [rbp-58h]
  __int64 *v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v29 = a1;
  v28 = 1;
  v27 = 0;
  src = a2;
  v26 = a3;
  v3 = sub_196ED0(&src, a3);
  v4 = v26;
  for ( LODWORD(v27) = v3; (unsigned __int64)src < v26; v4 = v26 )
  {
    v11 = sub_196ED0(&src, v4);
    if ( v28 == 1 || v11 )
    {
      v12 = v26;
      HIDWORD(v27) += v11;
      v13 = sub_196ED0(&src, v26);
      v14 = src;
      v15 = __CFADD__(src, v13);
      v16 = (char *)src + v13;
      if ( v15 )
        return v30 - __readfsqword(0x28u);
      if ( v12 < (unsigned __int64)v16 )
        return v30 - __readfsqword(0x28u);
      src = v16;
      if ( !v14 )
        return v30 - __readfsqword(0x28u);
      v17 = v29;
      v18 = v29[1];
      v19 = *v29;
      if ( v29[2] < (unsigned __int64)(v18 + 1) )
      {
        v20 = sub_1987B0(v29, v19, v18 + 1, 32);
        v18 = v17[1];
        *v17 = v20;
        v19 = v20;
      }
      v5 = v19 + 32 * v18;
      *(_QWORD *)v5 = -1;
      *(_QWORD *)(v5 + 8) = 0;
      *(_OWORD *)(v5 + 16) = 0;
      ++v17[1];
      v6 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)v5 = v27;
      v7 = (char *)((_BYTE *)src - v14);
      v8 = (char *)((_BYTE *)src - v14);
      if ( v6 )
        v8 = &v7[--v6];
      v9 = *(_QWORD *)(v5 + 8);
      v10 = v8 + 1;
      if ( *(_QWORD *)(v5 + 24) < (unsigned __int64)(v8 + 1) )
      {
        v24 = v8;
        v23 = v8 + 1;
        v21 = sub_1987B0(v5 + 8, v9, v10, 1);
        v8 = v24;
        v10 = v23;
        *(_QWORD *)(v5 + 8) = v21;
        v9 = v21;
      }
      *(_QWORD *)(v5 + 16) = v10;
      v8[v9] = 0;
      memmove((void *)(v6 + *(_QWORD *)(v5 + 8)), v14, (size_t)v7);
      if ( v28 )
        v28 = 0;
    }
    else
    {
      v27 = (unsigned int)sub_196ED0(&src, v26);
      v28 = 1;
    }
  }
  return v30 - __readfsqword(0x28u);
}
