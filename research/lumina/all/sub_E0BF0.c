char *__fastcall sub_E0BF0(__int64 a1, __int64 a2, const char *a3)
{
  char *v5; // r12
  __int16 v6; // bx
  size_t v7; // r14
  int v8; // ebx
  __int64 v9; // rdx
  char *result; // rax
  size_t v11; // rax
  const char *v12; // rdi

  v5 = *(char **)a2;
  v6 = *(_WORD *)(a2 + 14) & 4;
  if ( *(_QWORD *)a2 )
  {
    v7 = (strlen(*(const char **)a2) & 0x3FFFFFFF) + 1;
    if ( !v6 )
      goto LABEL_3;
    v11 = 1;
    v12 = &v5[v7];
    if ( !&v5[v7] )
    {
LABEL_10:
      v7 += v11;
      if ( a3 )
        goto LABEL_4;
      goto LABEL_11;
    }
LABEL_9:
    v11 = (strlen(v12) & 0x3FFFFFFF) + 1;
    goto LABEL_10;
  }
  v7 = 1;
  if ( v6 )
  {
    v12 = (_BYTE *)(&dword_0 + 1);
    goto LABEL_9;
  }
LABEL_3:
  if ( a3 )
  {
LABEL_4:
    v8 = (strlen(a3) & 0x3FFFFFFF) + 1;
    v9 = v8;
    goto LABEL_5;
  }
LABEL_11:
  v9 = 1;
  v8 = 1;
LABEL_5:
  result = (char *)sub_DFAD0(a1, v5, v7 + v9);
  if ( result )
  {
    *(_QWORD *)a2 = result;
    result = (char *)memcpy(&result[v7], a3, v8);
    *(_WORD *)(a2 + 14) |= 0x200u;
  }
  return result;
}
