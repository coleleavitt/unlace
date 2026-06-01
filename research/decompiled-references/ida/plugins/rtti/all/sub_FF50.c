bool __fastcall sub_FF50(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // rbp
  int flags; // eax
  unsigned __int64 max_strlit_length; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  const void *v13; // r14
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax

  if ( a1[47] == a3 )
    goto LABEL_3;
  a1[47] = a3;
  flags = get_flags_ex();
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
    max_strlit_length = get_item_end() - a3;
  else
    max_strlit_length = get_max_strlit_length();
  if ( max_strlit_length - 2 > 0xFFD )
    goto LABEL_14;
  v10 = a1[49];
  v11 = max_strlit_length - 1;
  if ( v10 < max_strlit_length )
  {
    v12 = a1[48];
    if ( a1[50] < max_strlit_length )
    {
      v15 = qvector_reserve();
      v10 = a1[49];
      a1[48] = v15;
      v12 = v15;
    }
    memset((void *)(v12 + v10), 0, max_strlit_length - v10);
    a1[49] = max_strlit_length;
  }
  else if ( max_strlit_length != v10 )
  {
    a1[49] = max_strlit_length;
  }
  *(_BYTE *)(a1[48] + v11) = 0;
  if ( get_bytes() == v11 )
  {
LABEL_3:
    if ( a2 && a2 != a1 + 48 )
    {
      v5 = a1[49];
      if ( v5 > 1 )
      {
        v13 = (const void *)a1[48];
        v14 = (void *)*a2;
        if ( a2[2] < v5 )
        {
          v16 = qvector_reserve();
          *a2 = v16;
          v14 = (void *)v16;
        }
        a2[1] = v5;
        memmove(v14, v13, v5 - 1);
        *(_BYTE *)(*a2 + v5 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    return a1[49] > 1u;
  }
  else
  {
LABEL_14:
    a1[49] = 0;
    return 0;
  }
}
