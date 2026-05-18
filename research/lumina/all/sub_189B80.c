__int64 __fastcall sub_189B80(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _UNKNOWN *__ptr32 *a5, __int64 a6)
{
  __int64 *v6; // rbp
  void *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx

  v6 = a1 + 22;
  v8 = (void *)a1[22];
  if ( !v8 )
  {
    v9 = a1[6];
    v10 = v9 + 16;
    if ( a1[24] >= (unsigned __int64)(v9 + 16) )
      return sub_1896E0(v6, (__int64)(a1 + 5), v10, v9, a5, a6);
LABEL_5:
    a1[22] = sub_1987B0(v6, a1[22], v10, 1);
    return sub_1896E0(v6, (__int64)(a1 + 5), v10, v9, a5, a6);
  }
  a1[23] = 0;
  j__free(v8);
  v9 = a1[6];
  a1[22] = 0;
  a1[24] = 0;
  v10 = v9 + 16;
  if ( v9 != -16 )
    goto LABEL_5;
  return sub_1896E0(v6, (__int64)(a1 + 5), v10, v9, a5, a6);
}
