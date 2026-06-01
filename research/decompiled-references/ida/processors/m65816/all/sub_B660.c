__int64 __fastcall sub_B660(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 *v6; // rdi
  const char *(__fastcall *v7)(__int64 *, __int64, _BYTE *); // rcx
  const char *v8; // rbx
  size_t v9; // rax
  size_t v10; // r12
  unsigned __int64 v12; // r13
  void *v13; // rdi
  __int64 v14; // rax

  v6 = *(__int64 **)(a1 + 8);
  v7 = *(const char *(__fastcall **)(__int64 *, __int64, _BYTE *))(*v6 + 32);
  if ( v7 == sub_B650 )
  {
    v8 = sub_B3B0(v6, a4);
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
        v12 = 27;
        v10 = 26;
        v8 = "SKIP device (logic error):";
      }
      else
      {
        v9 = strlen(v8);
        v10 = v9;
        if ( !v9 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          return 0;
        }
        v12 = v9 + 1;
      }
      v13 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v12 )
      {
        v14 = qvector_reserve();
        *(_QWORD *)a2 = v14;
        v13 = (void *)v14;
      }
      *(_QWORD *)(a2 + 8) = v12;
      memmove(v13, v8, v10);
      *(_BYTE *)(*(_QWORD *)a2 + v10) = 0;
      return 0;
    }
  }
  return 1;
}

