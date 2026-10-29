unsigned __int64 __fastcall sub_8EC0(__int64 a1, unsigned int a2, __int64 *a3)
{
  size_t v4; // rax
  void *v6; // rdi
  size_t v7; // rbp
  size_t v8; // r13
  __int64 v9; // rax
  char v10[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v11; // [rsp+408h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  qregerror(a2, a1 + 16, v10, 1024);
  v4 = strlen(v10);
  if ( v4 )
  {
    v6 = (void *)*a3;
    v7 = v4;
    v8 = v4 + 1;
    if ( a3[2] < v4 + 1 )
    {
      v9 = qvector_reserve(a3, *a3, v4 + 1, 1);
      *a3 = v9;
      v6 = (void *)v9;
    }
    a3[1] = v8;
    memmove(v6, v10, v7);
    *(_BYTE *)(*a3 + v7) = 0;
  }
  else
  {
    a3[1] = 0;
  }
  return v11 - __readfsqword(0x28u);
}
