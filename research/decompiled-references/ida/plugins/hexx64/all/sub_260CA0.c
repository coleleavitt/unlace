unsigned __int64 __fastcall sub_260CA0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  char *v7; // rax
  char *v8; // r12
  char v9; // dl
  __int64 v10; // rax
  char *v11; // rdx
  int v12; // eax
  char *v13; // rdi
  char *v15; // rcx
  char v16; // [rsp+Fh] [rbp-61h]
  __int64 v17; // [rsp+10h] [rbp-60h]
  char *haystack; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+28h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  sub_2604A0((__int64)&haystack, a1, a2, 0, a5);
  if ( *(_QWORD *)(a2 + 64) <= 1u )
  {
    v15 = (char *)s1;
    if ( v19 )
      v15 = haystack;
    (**(void (***)(__int64, _QWORD, const char *, ...))a4)(a4, a3, "%s\n", v15);
    v12 = *(_DWORD *)(a4 + 32) + 1;
  }
  else
  {
    v7 = strstr(haystack, "//");
    v8 = v7;
    if ( !v7 )
    {
      if ( !under_debugger )
        sub_383060(0xC3C6u, a5);
      BUG();
    }
    v9 = *v7;
    *v7 = 0;
    v16 = v9;
    v17 = tag_strlen();
    *v8 = v16;
    v10 = (unsigned int)tag_strlen() + 1;
    v11 = (char *)s1;
    if ( *(_QWORD *)(a2 + 64) )
      v11 = *(char **)(a2 + 56);
    v12 = *(_DWORD *)(a4 + 32)
        + sub_25F9E0(
            0,
            0,
            a3,
            (void (__fastcall ***)(_QWORD, _QWORD, void *, __int64))a4,
            (__int64 *)&haystack,
            v17,
            a5,
            v10,
            v11);
  }
  v13 = haystack;
  *(_DWORD *)(a4 + 32) = v12;
  if ( v13 )
  {
    v19 = 0;
    qfree((__int64)v13);
  }
  return v20 - __readfsqword(0x28u);
}

