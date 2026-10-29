size_t __fastcall sub_5BC0(void *src)
{
  size_t result; // rax
  _QWORD *v3; // rbp
  size_t v4; // r12
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  result = get_module_data((unsigned int)dword_29364);
  v3 = (_QWORD *)result;
  if ( src && (result = strlen((const char *)src), (v4 = result) != 0) )
  {
    v5 = (void *)v3[19];
    v6 = result + 1;
    if ( v3[21] < result + 1 )
    {
      v7 = qvector_reserve(v3 + 19, v3[19], v6, 1);
      v3[19] = v7;
      v5 = (void *)v7;
    }
    v3[20] = v6;
    memmove(v5, src, v4);
    result = v3[19];
    *(_BYTE *)(result + v4) = 0;
  }
  else
  {
    v3[20] = 0;
  }
  return result;
}
