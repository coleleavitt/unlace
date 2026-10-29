__int64 __fastcall sub_3FC5B0(__int64 a1, __int64 *a2, int a3, int a4, double a5)
{
  __int64 v5; // rax
  __int64 v7; // rdi
  unsigned int v8; // r13d
  int v9; // r15d
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  size_t v13; // r14
  void *v15; // rdi
  size_t v16; // rdx
  __int64 v17; // rax
  size_t v18; // [rsp+8h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xCD1Cu, a5);
LABEL_22:
    BUG();
  }
  v5 = a1 + 536;
  v7 = a1 + 4408;
  while ( a3 >= *(_DWORD *)(v5 + 28) )
  {
    v5 += 32;
    if ( v5 == v7 )
      goto LABEL_6;
  }
  if ( v5 == 32 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC8A4u, a5);
    goto LABEL_22;
  }
LABEL_6:
  if ( *(char *)(v5 - 11) <= a4 )
    a4 = *(char *)(v5 - 11);
  v8 = a4;
  if ( a2 )
  {
    v9 = *(_DWORD *)(v5 - 4);
    v10 = (const char *)(v5 - 24);
    v11 = v10;
    if ( v10 && (v12 = strlen(v10), (v13 = v12) != 0) )
    {
      v15 = (void *)*a2;
      v16 = v12 + 1;
      if ( a2[2] < v12 + 1 )
      {
        v18 = v12 + 1;
        v17 = qvector_reserve();
        v16 = v18;
        *a2 = v17;
        v15 = (void *)v17;
      }
      a2[1] = v16;
      memmove(v15, v11, v13);
      *(_BYTE *)(*a2 + v13) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    if ( a3 != v9 )
      sub_F7090(a2);
  }
  return v8;
}

