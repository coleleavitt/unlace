unsigned __int64 __fastcall sub_32480(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r13
  const void *v4; // r15
  void *v5; // rdi
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  char *v10; // rax
  void *v11; // rdi
  __int64 v13; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  ptr = nullptr;
  v15 = 0;
  if ( (unsigned __int8)sub_195B20(&ptr, 0) && a2 != ptr )
  {
    v3 = *((_QWORD *)ptr + 1);
    if ( v3 < 2 )
    {
      a2[1] = 0;
    }
    else
    {
      v4 = *(const void **)ptr;
      v5 = (void *)*a2;
      if ( a2[2] < v3 )
      {
        v13 = sub_1987B0(a2, *a2, *((_QWORD *)ptr + 1), 1);
        *a2 = v13;
        v5 = (void *)v13;
      }
      a2[1] = v3;
      memmove(v5, v4, v3 - 1);
      *(_BYTE *)(*a2 + v3 - 1) = 0;
    }
  }
  sub_299F0((char **)a2 + 3);
  a2[6] = *(_QWORD *)(a1 + 96);
  v6 = sub_199140(a2 + 3, "Hex-Rays IDA Pro Lumina Server v9.3");
  v7 = (char *)ptr;
  a2[7] = v6;
  if ( v7 )
  {
    v8 = v15;
    if ( (_QWORD)v15 )
    {
      v9 = 0;
      do
      {
        v10 = &v7[24 * v9];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          j__free(v11);
          v7 = (char *)ptr;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v15 = 0;
    j__free(v7);
  }
  return v16 - __readfsqword(0x28u);
}
