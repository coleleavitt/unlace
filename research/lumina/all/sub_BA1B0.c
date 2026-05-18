__int64 __fastcall sub_BA1B0(
        void *src,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(),
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  void *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  size_t v16; // r9
  _QWORD *v17; // r8
  size_t v18; // rax
  int v19; // eax
  char v20; // al
  unsigned int v21; // edx
  void *v22; // rdi
  size_t v23; // rdx
  const char *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // [rsp+8h] [rbp-60h]
  unsigned __int8 v27; // [rsp+8h] [rbp-60h]
  int v28[2]; // [rsp+8h] [rbp-60h]
  _QWORD *v29; // [rsp+10h] [rbp-58h]
  size_t v30; // [rsp+10h] [rbp-58h]
  size_t v31; // [rsp+18h] [rbp-50h]
  _BYTE v32[65]; // [rsp+27h] [rbp-41h] BYREF

  *(_QWORD *)&v32[1] = __readfsqword(0x28u);
  if ( a2 )
    return sub_B9CA0((__int64)src, a2, a3, a4, a5, a6, a7, a8);
  v32[0] = 0;
  v13 = (void *)sub_B7E80(a6, a7);
  v14 = sub_17E3E0(v13);
  v17 = (_QWORD *)v14;
  if ( src && (v26 = (_QWORD *)v14, v18 = strlen((const char *)src), v17 = v26, (v16 = v18) != 0) )
  {
    v22 = (void *)*v26;
    v23 = v18 + 1;
    if ( v26[2] < v18 + 1 )
    {
      v30 = v18 + 1;
      v31 = v18;
      v25 = sub_1987B0(v26, *v26, v23, 1);
      v17 = v26;
      v16 = v31;
      v23 = v30;
      v22 = (void *)v25;
      *v26 = v25;
    }
    v17[1] = v23;
    v29 = v17;
    *(_QWORD *)v28 = v16;
    memmove(v22, src, v16);
    v17 = v29;
    v16 = *(_QWORD *)v28;
    *(_BYTE *)(*v29 + *(_QWORD *)v28) = 0;
  }
  else
  {
    v17[1] = 0;
  }
  v19 = sub_185590(v13, src, 0, v15, v17, v16);
  if ( v19 )
  {
    v24 = sub_2C700(v19);
    sub_B81F0((__int64)v13, (__int64)"%s", v24);
    v21 = 0;
  }
  else
  {
    do
    {
      v20 = sub_B8DA0(v32, v13, a3, a4, a5, a8);
      v21 = v32[0];
    }
    while ( v20 && !v32[0] );
  }
  if ( v13 )
  {
    v27 = v21;
    sub_B8170(v13);
    return v27;
  }
  return v21;
}
