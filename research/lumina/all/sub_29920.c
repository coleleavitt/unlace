char **__fastcall sub_29920(char **a1)
{
  char *v2; // rdi
  __int64 v3; // rax
  char *v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 v7; // rax

  v2 = *a1;
  if ( v2 )
  {
    a1[1] = nullptr;
    j__free(v2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  v3 = (int)sub_19D6B0(nullptr);
  if ( (_DWORD)v3 )
  {
    v4 = *a1;
    v5 = (int)v3 + 1LL;
    if ( (unsigned __int64)a1[2] < v5 )
    {
      v7 = sub_1987B0(a1, *a1, v3 + 1, 1);
      *a1 = (char *)v7;
      v4 = (char *)v7;
    }
    a1[1] = (char *)v5;
    sub_19D6B0(v4);
  }
  return a1;
}
