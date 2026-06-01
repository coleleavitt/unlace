__int64 __fastcall sub_10D50(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _BYTE *v6; // rdi
  __int64 (__fastcall *v7)(_BYTE *, __int64, __int64); // rcx
  const char *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  size_t v11; // rax
  size_t v12; // r12
  unsigned __int64 v14; // r13
  void *v15; // rdi
  __int64 v16; // rax

  v6 = *(_BYTE **)(a1 + 8);
  v7 = *(__int64 (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v6 + 32LL);
  if ( v7 == sub_106D0 )
  {
    v8 = (const char *)sub_10450(v6, a4);
    if ( v8 )
      goto LABEL_3;
  }
  else
  {
    v8 = (const char *)v7(v6, a3, a4);
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
