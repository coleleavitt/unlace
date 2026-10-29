__int64 __fastcall sub_4B4E0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool (__fastcall *v6)(__int64, int); // rax
  int v7; // eax
  struct _IO_FILE *v8; // rbx
  const char *v10; // rcx

  v6 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 24LL);
  if ( v6 == sub_4B190 )
  {
    v7 = *(_DWORD *)(a1 + 16);
    if ( v7 <= a2 )
    {
      v8 = *(struct _IO_FILE **)(a1 + 8);
      if ( v8 )
        goto LABEL_4;
LABEL_11:
      v8 = stdout;
      if ( v7 != 1 )
        goto LABEL_5;
      goto LABEL_9;
    }
    return 0;
  }
  if ( !((unsigned __int8 (*)(void))v6)() )
    return 0;
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(struct _IO_FILE **)(a1 + 8);
  if ( !v8 )
    goto LABEL_11;
LABEL_4:
  if ( v7 != 1 )
  {
LABEL_5:
    if ( (v7 & 0xFFFFFFFD) != 0 )
      sub_4B420();
    v10 = "DEBUG";
    goto LABEL_10;
  }
LABEL_9:
  v10 = "VERB";
LABEL_10:
  __fprintf_chk(v8, 1, "%s: ", v10);
  return sub_19D8E0(v8, a3, a4);
}
