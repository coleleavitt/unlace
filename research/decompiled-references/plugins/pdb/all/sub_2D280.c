__int64 __fastcall sub_2D280(__int64 a1, __int64 *a2)
{
  const char **v2; // rax
  unsigned int v3; // edx
  const char *v4; // r12
  size_t v5; // rax
  size_t v6; // rbp
  void *v8; // rdi
  size_t v9; // r13
  __int64 v10; // rax

  v2 = (const char **)sub_2CEC0(*(__int64 **)(a1 + 16), 0x10000000, 0x10000000u, 0x10000000);
  v3 = 1;
  if ( v2 )
  {
    v4 = *v2;
    if ( *v2 && (v5 = strlen(*v2), (v6 = v5) != 0) )
    {
      v8 = (void *)*a2;
      v9 = v5 + 1;
      if ( a2[2] < v5 + 1 )
      {
        v10 = qvector_reserve(a2, *a2, v5 + 1, 1);
        *a2 = v10;
        v8 = (void *)v10;
      }
      a2[1] = v9;
      memmove(v8, v4, v6);
      v3 = 0;
      *(_BYTE *)(*a2 + v6) = 0;
    }
    else
    {
      a2[1] = 0;
      return 0;
    }
  }
  return v3;
}
