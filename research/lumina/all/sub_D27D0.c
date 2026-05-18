__int64 __fastcall sub_D27D0(__int64 a1, const void *a2, int a3, __int64 a4)
{
  const void *v4; // r13
  size_t v5; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rdi
  unsigned int v21; // [rsp+Ch] [rbp-3Ch]

  v4 = a2;
  v5 = a3;
  v7 = *(__int64 **)(a1 + 8);
  v8 = v7[4];
  if ( v8 )
  {
    xmmword_241500(v8);
    v9 = *((unsigned int *)v7 + 11);
    if ( (v9 & 4) != 0 )
    {
      v10 = v7[4];
      if ( v10 )
        xmmword_241510(v10, a2, v9);
      return 778;
    }
  }
  else
  {
    LODWORD(v9) = *((_DWORD *)v7 + 11);
    if ( (v9 & 4) != 0 )
      return 778;
  }
  v12 = *v7;
  v13 = v5 + a4;
  if ( (__int64)(v5 + a4) <= *v7 )
  {
    v14 = v7[3];
LABEL_14:
    memcpy((void *)(v14 + a4), v4, v5);
    v16 = v7[4];
    if ( v16 )
      xmmword_241510(v16, v4, v15);
    return 0;
  }
  if ( v13 <= v7[1] )
  {
    v14 = v7[3];
LABEL_11:
    if ( a4 > v12 )
    {
      memset((void *)(v14 + v12), 0, a4 - v12);
      v14 = v7[3];
    }
    *v7 = v13;
    goto LABEL_14;
  }
  v17 = v9 & 2;
  if ( (_DWORD)v17 && *((int *)v7 + 10) <= 0 && (v18 = v7[2], v13 <= v18) )
  {
    v19 = 2 * v13;
    if ( v18 <= 2 * v13 )
      v19 = v7[2];
    a2 = (const void *)v19;
    v14 = sub_D2640(v7[3], v19);
    if ( v14 )
    {
      v7[3] = v14;
      v7[1] = v19;
      v12 = *v7;
      goto LABEL_11;
    }
    result = 3082;
  }
  else
  {
    result = 13;
  }
  v20 = v7[4];
  if ( v20 )
  {
    v21 = result;
    xmmword_241510(v20, a2, v17);
    return v21;
  }
  return result;
}
