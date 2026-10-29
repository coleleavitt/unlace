__int64 __fastcall sub_D5120(__int64 a1, __off_t *a2)
{
  int v3; // edi
  __int64 result; // rax
  __off_t st_size; // rdx
  struct stat64 v6; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v7; // [rsp+98h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 24);
  v7 = __readfsqword(0x28u);
  result = off_2411E0(v3, &v6);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 32) = *__errno_location();
    return 1802;
  }
  else
  {
    st_size = v6.st_size;
    if ( v6.st_size == 1 )
      st_size = 0;
    *a2 = st_size;
  }
  return result;
}
