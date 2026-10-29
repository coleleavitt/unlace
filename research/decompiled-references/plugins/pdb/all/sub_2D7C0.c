__int64 __fastcall sub_2D7C0(__int64 a1, __int64 *a2)
{
  __int64 **v2; // rdi
  unsigned int (*v3)(void); // rax
  const char **v4; // rax
  unsigned int v5; // edx
  const char *v6; // r12
  size_t v7; // rax
  size_t v8; // rbp
  unsigned int v10; // edx
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v2 = *(__int64 ***)(a1 + 24);
  v3 = (unsigned int (*)(void))(*v2)[18];
  if ( (char *)v3 == (char *)sub_2D280 )
  {
    v4 = (const char **)sub_2CEC0(v2[2], 0x10000000, 0x10000000u, 0x10000000);
    v5 = 0;
    if ( v4 )
    {
      v6 = *v4;
      if ( *v4 && (v7 = strlen(*v4), (v8 = v7) != 0) )
      {
        v11 = (void *)*a2;
        v12 = v7 + 1;
        if ( a2[2] < v7 + 1 )
        {
          v13 = qvector_reserve(a2, *a2, v7 + 1, 1);
          *a2 = v13;
          v11 = (void *)v13;
        }
        a2[1] = v12;
        memmove(v11, v6, v8);
        *(_BYTE *)(*a2 + v8) = 0;
      }
      else
      {
        a2[1] = 0;
      }
      return 1;
    }
    return v5;
  }
  else
  {
    LOBYTE(v10) = v3() == 0;
    return v10;
  }
}
