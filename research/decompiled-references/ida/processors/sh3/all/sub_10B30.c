__int64 __fastcall sub_10B30(__int64 a1, __int64 *a2, __int64 a3, _BYTE *a4)
{
  __int64 *v6; // rdi
  const char *(__fastcall *v7)(__int64 *, __int64, _BYTE *); // rcx
  const char *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  size_t v11; // rax
  size_t v12; // r12
  unsigned __int64 v14; // r13
  void *v15; // rdi
  __int64 v16; // rax

  v6 = *(__int64 **)(a1 + 8);
  v7 = *(const char *(__fastcall **)(__int64 *, __int64, _BYTE *))(*v6 + 32);
  if ( v7 == sub_10B20 )
  {
    v8 = sub_10880(v6, a4);
    if ( v8 )
      goto LABEL_3;
  }
  else
  {
    v8 = v7(v6, a3, a4);
    if ( v8 )
    {
LABEL_3:
      if ( v8 == (const char *)-1LL )
      {
        v14 = 27;
        v12 = 26;
        v8 = "SKIP device (logic error):";
      }
      else
      {
        v11 = strlen(v8);
        v12 = v11;
        if ( !v11 )
        {
          a2[1] = 0;
          return 0;
        }
        v14 = v11 + 1;
      }
      v15 = (void *)*a2;
      if ( a2[2] < v14 )
      {
        v16 = qvector_reserve(a2, *a2, v14, 1, v9, v10);
        *a2 = v16;
        v15 = (void *)v16;
      }
      a2[1] = v14;
      memmove(v15, v8, v12);
      *(_BYTE *)(*a2 + v12) = 0;
      return 0;
    }
  }
  return 1;
}

