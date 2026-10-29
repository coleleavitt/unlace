__int64 __fastcall sub_423F0(int a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v5; // r12d
  const char *v6; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  char *v10; // rax
  const char *v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v2 = *a2;
  v13 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 72))(a2);
  if ( a1 == 10 || a1 == -1 )
  {
    v5 = 2;
    sub_55E60(&v11, v3 + 296);
    if ( v12 )
    {
      v7 = (__int64)v11;
      v8 = v12 - 1;
      v9 = 0;
      while ( v8 >= v9 )
      {
        v10 = strchr((const char *)(v7 + v9), 10);
        if ( !v10 || &v10[-v7] == (char *)-1LL )
          break;
        v9 = (unsigned __int64)&v10[-v7 + 1];
        ++v5;
      }
    }
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, _QWORD))(*a2 + 32))(
      a2,
      11,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v5);
    v6 = &s1;
    if ( v12 )
      v6 = v11;
    (*(void (__fastcall **)(__int64 *, __int64, const char *))(*a2 + 8))(a2, 11, v6);
    if ( v11 )
    {
      v12 = 0;
      qfree((__int64)v11);
    }
  }
  return 1;
}
