size_t __fastcall sub_43E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  size_t result; // rax
  _QWORD *v7; // r12
  __int64 v8; // rdx
  char *v9; // rbp
  size_t v10; // rbx
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v5 = 16 * a5;
  sub_4310(*a2);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 184) + v5 + 8);
  if ( result <= 4 )
  {
    v7 = (_QWORD *)*a2;
    v8 = 7 * result;
    result = (size_t)off_A8E0;
    v9 = off_A8E0[v8];
    if ( v9 && (result = strlen(off_A8E0[v8]), (v10 = result) != 0) )
    {
      v11 = (void *)v7[3];
      v12 = result + 1;
      if ( v7[5] < result + 1 )
      {
        v13 = qvector_reserve();
        v7[3] = v13;
        v11 = (void *)v13;
      }
      v7[4] = v12;
      memmove(v11, v9, v10);
      result = v7[3];
      *(_BYTE *)(result + v10) = 0;
    }
    else
    {
      v7[4] = 0;
    }
  }
  return result;
}

