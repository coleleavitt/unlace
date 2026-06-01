__int64 __fastcall sub_4BE00(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rax
  size_t v7; // r13
  void *v8; // r15
  int *v9; // rbx
  int *v10; // rax
  unsigned __int64 v11; // rbx
  const void *v12; // r13
  void *v13; // rdi
  __int64 v15; // rax
  void *v16; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v3 = s;
  v4 = *(int *)(a1 + 1176);
  v18 = __readfsqword(0x28u);
  v6 = qword_8FB50 + 144 * v4;
  if ( *(_QWORD *)(v6 + 8) )
    v3 = *(const char **)v6;
  v16 = nullptr;
  v17 = 0;
  if ( v3 )
  {
    v7 = strlen(v3);
    *(_QWORD *)&v17 = v7 + 1;
    v16 = (void *)qvector_reserve();
    memmove(v16, v3, v7);
    *((_BYTE *)v16 + v7) = 0;
    v8 = v16;
    v9 = (int *)sub_4BBE0((__int64)&unk_8F9C0, (__int64)&v16);
    if ( v8 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
    if ( v9 == &dword_8F9C8 )
      return 0;
  }
  else
  {
    v9 = (int *)sub_4BBE0((__int64)&unk_8F9C0, (__int64)&v16);
    if ( v9 == &dword_8F9C8 )
      return 0;
  }
  v10 = (int *)sub_4BCF0((__int64)(v9 + 14), a3);
  if ( v10 == v9 + 16 )
    return 0;
  if ( a2 != (__int64 *)(v10 + 14) )
  {
    v11 = *((_QWORD *)v10 + 8);
    if ( v11 < 2 )
    {
      a2[1] = 0;
    }
    else
    {
      v12 = *((const void **)v10 + 7);
      v13 = (void *)*a2;
      if ( a2[2] < v11 )
      {
        v15 = qvector_reserve();
        *a2 = v15;
        v13 = (void *)v15;
      }
      a2[1] = v11;
      memmove(v13, v12, v11 - 1);
      *(_BYTE *)(*a2 + v11 - 1) = 0;
    }
  }
  return 1;
}

