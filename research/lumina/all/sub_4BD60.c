__int64 sub_4BD60(__int64 a1, __int64 a2, ...)
{
  __int64 (__fastcall *v2)(__int64, int, __int64, __int64); // r8
  bool (__fastcall *v3)(__int64, int); // rax
  int v4; // eax
  struct _IO_FILE *v5; // rbx
  const char *v7; // rcx
  gcc_va_list va; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-D0h]

  va_start(va, a2);
  v9 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64, int, __int64, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v2 != sub_4B4E0 )
    return v2(a1, 1, a2, (__int64)va);
  v3 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 24LL);
  if ( v3 != sub_4B190 )
  {
    if ( v3(a1, 1) )
    {
      v4 = *(_DWORD *)(a1 + 16);
      goto LABEL_4;
    }
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 > 1 )
    return 0;
LABEL_4:
  v5 = *(struct _IO_FILE **)(a1 + 8);
  if ( !v5 )
    v5 = stdout;
  if ( v4 == 1 )
  {
    v7 = "VERB";
  }
  else
  {
    if ( (v4 & 0xFFFFFFFD) != 0 )
      sub_4B420();
    v7 = "DEBUG";
  }
  __fprintf_chk(v5, 1, "%s: ", v7);
  return sub_19D8E0(v5, a2, va);
}
