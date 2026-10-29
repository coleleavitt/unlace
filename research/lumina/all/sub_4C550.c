unsigned __int64 __fastcall sub_4C550(unsigned int **a1, char a2)
{
  unsigned int *v2; // rbp
  unsigned int *v3; // rcx
  unsigned int *v5; // rbp
  unsigned int *v7; // r14
  const char *v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rsi
  unsigned int *v11; // rbp
  unsigned int *i; // rbx
  char *v13; // rax
  void *v14; // rdi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v2 = a1[1];
  v3 = *a1;
  v18 = __readfsqword(0x28u);
  v5 = &v3[8 * (_QWORD)v2];
  if ( v5 != v3 )
  {
    v7 = v3;
    while ( 1 )
    {
      v10 = *v7;
      if ( a2 )
      {
        if ( (_DWORD)v10 == 10 )
          break;
      }
LABEL_3:
      v8 = s1;
      if ( *((_QWORD *)v7 + 2) )
        v8 = *((const char **)v7 + 1);
      sub_5ECD0(&ptr, v10, v8);
      v9 = s1;
      if ( v17 )
        v9 = (const char *)ptr;
      sub_4BC40((__int64 (__fastcall ***)(_QWORD))"%s\n", v9);
      if ( ptr )
      {
        v17 = 0;
        j__free(ptr);
      }
      v7 += 8;
      if ( v5 == v7 )
        goto LABEL_15;
    }
    while ( 1 )
    {
      v7 += 8;
      if ( v5 == v7 )
        break;
      v10 = *v7;
      if ( (_DWORD)v10 != 10 )
        goto LABEL_3;
    }
LABEL_15:
    v3 = *a1;
  }
  if ( v3 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      for ( i = nullptr; i != v11; i = (unsigned int *)((char *)i + 1) )
      {
        v13 = (char *)&v3[8 * (_QWORD)i];
        v14 = *((void **)v13 + 1);
        if ( v14 )
        {
          *((_QWORD *)v13 + 2) = 0;
          j__free(v14);
          v3 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    j__free(v3);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  return v18 - __readfsqword(0x28u);
}
