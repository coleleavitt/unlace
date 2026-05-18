__int64 __fastcall sub_EAC10(__int64 a1, __off_t st_size)
{
  int v2; // eax
  size_t v3; // rbx
  size_t v4; // r12
  __int64 result; // rax
  char *v6; // r14
  int v7; // r8d
  const char *v8; // r15
  char *v9; // r13
  __int64 v10; // rsi
  int v11; // [rsp+Ch] [rbp-DCh]
  int v12; // [rsp+Ch] [rbp-DCh]
  struct stat64 stat_buf; // [rsp+10h] [rbp-D8h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( st_size < 0 )
  {
    v2 = off_2411E0(*(_DWORD *)(a1 + 24), &stat_buf);
    st_size = stat_buf.st_size;
    if ( v2 )
      return 1802;
  }
  v3 = st_size;
  v4 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 96) <= st_size )
    v3 = *(_QWORD *)(a1 + 96);
  result = 0;
  if ( v4 != v3 )
  {
    v6 = *(char **)(a1 + 104);
    v7 = *(_DWORD *)(a1 + 24);
    v8 = "mmap";
    if ( !v6 )
      goto LABEL_7;
    v10 = *(_QWORD *)(a1 + 88);
    if ( v4 != v10 )
    {
      v11 = *(_DWORD *)(a1 + 24);
      off_241390(&v6[v4], v10 - v4);
      v7 = v11;
    }
    v12 = v7;
    v9 = (char *)off_2413A8(v6, v4, v3, 1);
    v7 = v12;
    if ( (unsigned __int64)(v9 - 1) > 0xFFFFFFFFFFFFFFFDLL )
    {
      off_241390(v6, v4);
      v7 = v12;
    }
    v8 = "mremap";
    if ( !v9 )
LABEL_7:
      v9 = (char *)off_241378(nullptr, v3, 1, 1, v7, 0);
    if ( v9 == (char *)-1LL )
    {
      v9 = nullptr;
      v3 = 0;
      sub_EABB0(0, (__int64)v8, *(char **)(a1 + 56), 0x9E52u);
      *(_QWORD *)(a1 + 96) = 0;
    }
    *(_QWORD *)(a1 + 104) = v9;
    *(_QWORD *)(a1 + 88) = v3;
    result = 0;
    *(_QWORD *)(a1 + 80) = v3;
  }
  return result;
}
