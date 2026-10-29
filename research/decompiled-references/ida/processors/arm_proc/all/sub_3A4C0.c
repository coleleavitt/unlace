unsigned __int64 __fastcall sub_3A4C0(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rax
  const char *v5; // rbp
  unsigned __int64 v6; // r13
  size_t v7; // r12
  size_t v8; // rax
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = *a1;
  v13 = __readfsqword(0x28u);
  if ( a2 < *(_DWORD *)(v3 + 64) )
  {
    v5 = *(const char **)(*(_QWORD *)(v3 + 56) + 8LL * a2);
    if ( a3 == -1 )
    {
      if ( !v5 )
        goto LABEL_5;
      goto LABEL_4;
    }
  }
  else
  {
    v5 = "<bad register>";
    v6 = 15;
    v7 = 14;
    if ( a3 == -1 )
      goto LABEL_11;
  }
  qsnprintf();
  v5 = (const char *)&v12;
LABEL_4:
  v8 = strlen(v5);
  v7 = v8;
  if ( !v8 )
  {
LABEL_5:
    a1[2] = 0;
    return v13 - __readfsqword(0x28u);
  }
  v6 = v8 + 1;
LABEL_11:
  v10 = (void *)a1[1];
  if ( a1[3] < v6 )
  {
    v11 = qvector_reserve();
    a1[1] = v11;
    v10 = (void *)v11;
  }
  a1[2] = v6;
  memmove(v10, v5, v7);
  *(_BYTE *)(a1[1] + v7) = 0;
  return v13 - __readfsqword(0x28u);
}

