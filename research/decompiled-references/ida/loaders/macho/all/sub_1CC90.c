unsigned __int64 __fastcall sub_1CC90(_QWORD *a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // rbp
  void *v6; // rdi
  size_t v7; // r13
  unsigned __int64 file_ext; // rax
  size_t v9; // rax
  size_t v10; // rbp
  __int64 v11; // rax
  void *v12; // rdi
  size_t v13; // r13
  __int64 v14; // rax
  char v16[1032]; // [rsp+2h] [rbp-438h] BYREF
  unsigned __int64 v17; // [rsp+40Ah] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !a2 || (v3 = strlen(a2), (v4 = v3) == 0) )
  {
    a1[17] = 0;
    if ( !(unsigned __int8)qisabspath() )
      return v17 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  v6 = (void *)a1[16];
  v7 = v3 + 1;
  if ( a1[18] < v3 + 1 )
  {
    v11 = qvector_reserve();
    a1[16] = v11;
    v6 = (void *)v11;
  }
  a1[17] = v7;
  memmove(v6, a2, v4);
  *(_BYTE *)(a1[16] + v4) = 0;
  if ( (unsigned __int8)qisabspath() )
  {
LABEL_8:
    if ( qbasename() )
    {
      qstrncpy();
      file_ext = get_file_ext();
      if ( (unsigned __int64)v16 < file_ext && *(_BYTE *)(file_ext - 1) == 46 )
        v16[file_ext - (_QWORD)v16 - 1] = 0;
      v9 = strlen(v16);
      v10 = v9;
      if ( v9 )
      {
        v12 = (void *)a1[16];
        v13 = v9 + 1;
        if ( a1[18] < v9 + 1 )
        {
          v14 = qvector_reserve();
          a1[16] = v14;
          v12 = (void *)v14;
        }
        a1[17] = v13;
        memmove(v12, v16, v10);
        *(_BYTE *)(a1[16] + v10) = 0;
      }
      else
      {
        a1[17] = 0;
      }
    }
  }
  return v17 - __readfsqword(0x28u);
}

