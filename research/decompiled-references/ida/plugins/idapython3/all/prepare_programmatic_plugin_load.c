void __fastcall prepare_programmatic_plugin_load(void *src)
{
  _QWORD *v1; // r12
  size_t v3; // rax
  size_t v4; // rbp
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  v1 = (_QWORD *)qword_24798;
  if ( src && (v3 = strlen((const char *)src), (v4 = v3) != 0) )
  {
    v5 = (void *)v1[30];
    v6 = v3 + 1;
    if ( v1[32] < v3 + 1 )
    {
      v7 = qvector_reserve();
      v1[30] = v7;
      v5 = (void *)v7;
    }
    v1[31] = v6;
    memmove(v5, src, v4);
    *(_BYTE *)(v1[30] + v4) = 0;
  }
  else
  {
    v1[31] = 0;
  }
}

