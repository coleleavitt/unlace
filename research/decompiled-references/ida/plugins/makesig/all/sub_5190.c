unsigned __int64 __fastcall sub_5190(__int64 *a1, __int64 a2)
{
  size_t v3; // rax
  void *v5; // rdi
  size_t v6; // rbp
  size_t v7; // r13
  __int64 v8; // rax
  char v9[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v10; // [rsp+1008h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  set_file_ext(v9, 4096, a2, "exc");
  v3 = strlen(v9);
  if ( v3 )
  {
    v5 = (void *)*a1;
    v6 = v3;
    v7 = v3 + 1;
    if ( a1[2] < v3 + 1 )
    {
      v8 = qvector_reserve(a1, *a1, v3 + 1, 1);
      *a1 = v8;
      v5 = (void *)v8;
    }
    a1[1] = v7;
    memmove(v5, v9, v6);
    *(_BYTE *)(*a1 + v6) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  return v10 - __readfsqword(0x28u);
}

