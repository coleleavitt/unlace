__int64 __fastcall dirtree_findfirst(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  char *v8; // r13
  __int64 v9; // rbp
  size_t v10; // rax
  size_t v11; // r14
  void *v13; // rdi
  size_t v14; // r15
  __int64 v15; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF
  int v17; // [rsp+10h] [rbp-38h]
  void *v18; // [rsp+18h] [rbp-30h]
  __int64 v19; // [rsp+20h] [rbp-28h]
  int v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]

  v7 = sub_775C40(a1, (int)&s, a3, a4, a5, a6, a3, __readfsqword(0x28u), v17, v18, v19, v20, v21);
  if ( v7 == -1 )
    return 0;
  v8 = s;
  v9 = v7;
  if ( s && (v10 = strlen(s), (v11 = v10) != 0) )
  {
    v13 = (void *)*a2;
    v14 = v10 + 1;
    if ( a2[2] < v10 + 1 )
    {
      v15 = qvector_reserve(a2, *a2, v10 + 1, 1);
      *a2 = v15;
      v13 = (void *)v15;
    }
    a2[1] = v14;
    memmove(v13, v8, v11);
    *(_BYTE *)(*a2 + v11) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  a2[4] = 0;
  if ( v9 || *v8 )
  {
    a2[3] = v9;
    return sub_773840(a1, a2, 0);
  }
  else
  {
    a2[3] = -1;
    return 1;
  }
}
