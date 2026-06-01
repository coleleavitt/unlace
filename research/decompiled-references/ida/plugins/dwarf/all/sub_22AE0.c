__int64 __fastcall sub_22AE0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  const char *v6; // rbx
  const void *v7; // r14
  const char *elf_debug_file_directory; // rax
  size_t v9; // rax
  size_t v10; // r14
  void *v11; // rdi
  size_t v12; // r15
  void *dest; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  LODWORD(v6) = sub_22A10(a1, (__int64)a2, a3);
  if ( !(_BYTE)v6 )
  {
    dest = nullptr;
    v15 = 0;
    if ( !a4
      || (v6 = *(const char **)(a4 + 8), (unsigned __int64)v6 < 2)
      || (v7 = *(const void **)a4,
          dest = (void *)qvector_reserve(&dest, 0, *(_QWORD *)(a4 + 8), 1),
          *(_QWORD *)&v15 = v6,
          memmove(dest, v7, (size_t)(v6 - 1)),
          v6[(_QWORD)dest - 1] = 0,
          (unsigned __int64)v15 <= 1) )
    {
      elf_debug_file_directory = (const char *)get_elf_debug_file_directory();
      v6 = elf_debug_file_directory;
      if ( elf_debug_file_directory && (v9 = strlen(elf_debug_file_directory), (v10 = v9) != 0) )
      {
        v11 = dest;
        v12 = v9 + 1;
        if ( *((_QWORD *)&v15 + 1) < v9 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v9 + 1, 1);
          v11 = dest;
        }
        *(_QWORD *)&v15 = v12;
        memmove(v11, v6, v10);
        *((_BYTE *)dest + v10) = 0;
      }
      else
      {
        *(_QWORD *)&v15 = 0;
      }
    }
    LOBYTE(v6) = (unsigned int)sub_22700(a2, a3, (__int64)&dest) != -1;
    if ( dest )
    {
      *(_QWORD *)&v15 = 0;
      qfree(dest);
    }
  }
  return (unsigned int)v6;
}

