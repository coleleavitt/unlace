__int64 __fastcall sub_5120(__int64 a1, __int64 a2)
{
  const char *v3; // rax
  const char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r12
  size_t v8; // rax
  size_t v9; // r12
  const char *v10; // rsi
  void *v11; // rdi
  unsigned __int64 v12; // r13
  void *v13; // rdi
  size_t v14; // r13
  void *dest; // [rsp+0h] [rbp-1058h]
  unsigned __int64 v16; // [rsp+8h] [rbp-1050h]
  char s[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v18; // [rsp+1028h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  dest = nullptr;
  if ( a2 == 2 )
  {
    get_root_filename();
    set_file_ext();
    v8 = strlen(s);
    v9 = v8;
    if ( v8 )
    {
      v13 = nullptr;
      v14 = v8 + 1;
      if ( v8 != -1 )
      {
        dest = (void *)qvector_reserve();
        v13 = dest;
      }
      v16 = v14;
      memmove(v13, s, v9);
      *((_BYTE *)dest + v9) = 0;
    }
    else
    {
      v16 = 0;
    }
    goto LABEL_9;
  }
  v3 = (const char *)sub_3400(1u, (__int64)"*.idt", (__int64)"Enter the name of the IDT file");
  v4 = v3;
  if ( v3 )
  {
    v5 = strlen(v3);
    v6 = v5;
    if ( v5 )
    {
      v11 = nullptr;
      v12 = v5 + 1;
      if ( v5 != -1 )
      {
        dest = (void *)qvector_reserve();
        v11 = dest;
      }
      v16 = v12;
      memmove(v11, v4, v6);
      *((_BYTE *)dest + v6) = 0;
      if ( v12 > 1 )
      {
LABEL_9:
        set_file_ext();
        v10 = &s1;
        if ( v16 )
          v10 = (const char *)dest;
        sub_3740(a1, v10, s);
      }
    }
  }
  if ( dest )
    qfree();
  return 1;
}

