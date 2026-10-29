__int64 __fastcall sub_23500(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 (__fastcall *a4)(__m128i *, __int64, __int64, __int64),
        __int64 a5)
{
  size_t v8; // rbx
  const char *file_ext; // rax
  const char *v10; // rbx
  size_t v11; // rax
  size_t v12; // r8
  const char *v13; // rdx
  unsigned int v14; // ebx
  const char *v16; // rdx
  void *v17; // rdi
  size_t v18; // rdx
  size_t v19; // [rsp+0h] [rbp-1080h]
  size_t v20; // [rsp+10h] [rbp-1070h]
  size_t v21; // [rsp+10h] [rbp-1070h]
  void *dest; // [rsp+20h] [rbp-1060h] BYREF
  __int128 v24; // [rsp+28h] [rbp-1058h]
  _BYTE v25[4104]; // [rsp+40h] [rbp-1040h] BYREF
  unsigned __int64 v26; // [rsp+1048h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( a1 && a3 )
  {
    dest = nullptr;
    v24 = 0;
    v8 = strlen(a3);
    dest = (void *)qvector_reserve(&dest, 0, v8 + 1, 1);
    *(_QWORD *)&v24 = v8 + 1;
    memmove(dest, a3, v8);
    *((_BYTE *)dest + v8) = 0;
    file_ext = (const char *)get_file_ext(a3);
    v10 = file_ext;
    if ( file_ext )
    {
      v11 = strlen(file_ext);
      v12 = v11;
      if ( v11 )
      {
        v17 = dest;
        v18 = v11 + 1;
        if ( *((_QWORD *)&v24 + 1) < v11 + 1 )
        {
          v19 = v11;
          v21 = v11 + 1;
          dest = (void *)qvector_reserve(&dest, dest, v18, 1);
          v12 = v19;
          v17 = dest;
          v18 = v21;
        }
        *(_QWORD *)&v24 = v18;
        v20 = v12;
        memmove(v17, v10, v12);
        *((_BYTE *)dest + v20) = 0;
      }
      else
      {
        *(_QWORD *)&v24 = 0;
      }
    }
    qmakepath(v25, 4096, a1, "System", "Library", "Extensions");
    v13 = src;
    if ( (_QWORD)v24 )
      v13 = (const char *)dest;
    v14 = sub_23490((__int64)v25, a2, v13, a4, a5);
    if ( v14 == -1 )
    {
      v16 = src;
      if ( (_QWORD)v24 )
        v16 = (const char *)dest;
      v14 = sub_23490(a1, a2, v16, a4, a5);
    }
    if ( dest )
    {
      *(_QWORD *)&v24 = 0;
      qfree(dest);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v14;
}

