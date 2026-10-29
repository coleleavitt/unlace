unsigned __int64 __fastcall sub_3C4E90(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 module_data; // rax
  int v6; // r8d
  int v7; // r9d
  int v8; // ebx
  size_t v9; // r13
  int v10; // ecx
  const char *v11; // rdi
  int v13; // esi
  void *v14; // [rsp+0h] [rbp-1058h]
  __int64 v15; // [rsp+0h] [rbp-1058h]
  __int128 v16; // [rsp+8h] [rbp-1050h]
  unsigned __int64 v17; // [rsp+1028h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a3 )
    sub_67420((__int64 *)(a1 + 8));
  module_data = get_module_data();
  v8 = module_data;
  if ( *(_QWORD *)(module_data + 1344) && *(_BYTE *)(module_data + 720) )
  {
    qtmpnam();
    gen_gdl();
    display_gdl();
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = a2;
    LODWORD(v14) = 0;
    v16 = 0;
    v11 = s1;
    if ( v9 )
    {
      DWORD2(v16) = v9;
      v14 = (void *)qalloc_or_throw();
      memcpy(v14, *(const void **)(a1 + 8), v9);
      LODWORD(v16) = v9;
      v13 = (int)v14;
      if ( v9 == 1 )
      {
        v10 = a2;
      }
      else
      {
        tag_remove();
        v10 = a2;
        v13 = (int)v14;
      }
      LODWORD(v11) = v13;
    }
    sub_3C75E0((_DWORD)v11, a1, v8, v10, v6, v7, (_DWORD)v14, v16, DWORD2(v16));
    if ( v15 )
      qfree();
  }
  return v17 - __readfsqword(0x28u);
}

