__int64 __fastcall sub_8180(__int64 a1, int a2)
{
  __int64 result; // rax
  _QWORD *first_seg; // rbp
  __int64 i; // rbp
  int v6; // ebp
  void *v7; // r13
  size_t v8; // rax
  size_t v9; // r14
  size_t v10; // r15
  void *v11; // rdi
  __int64 v12; // rax

  result = choose_ioport_device();
  if ( !(_BYTE)result )
    return result;
  if ( !*(_QWORD *)(a1 + 144) )
  {
    if ( !&unk_B62C )
      goto LABEL_6;
    goto LABEL_4;
  }
  v7 = *(void **)(a1 + 136);
  if ( v7 )
  {
    v8 = strlen(*(const char **)(a1 + 136));
    v9 = v8;
    if ( v8 )
    {
      v10 = v8 + 1;
      v11 = v7;
      if ( *(_QWORD *)(a1 + 152) < v8 + 1 )
      {
        v12 = qvector_reserve();
        *(_QWORD *)(a1 + 136) = v12;
        v11 = (void *)v12;
      }
      *(_QWORD *)(a1 + 144) = v10;
      memmove(v11, v7, v9);
      *(_BYTE *)(*(_QWORD *)(a1 + 136) + v9) = 0;
      goto LABEL_5;
    }
LABEL_4:
    *(_QWORD *)(a1 + 144) = 0;
LABEL_5:
    netnode_supset();
    sub_7270((__int64 *)(a1 + 128), a2);
  }
LABEL_6:
  result = get_first_seg();
  if ( !result )
    return result;
  auto_mark_range();
  netnode_altval();
  node2ea();
  first_seg = (_QWORD *)getseg();
  if ( first_seg || (first_seg = (_QWORD *)get_first_seg()) != nullptr )
  {
    if ( (unsigned __int64)*(unsigned int *)(a1 + 340) < first_seg[1] - *first_seg )
      sub_55C0((__int64)"The input file is bigger than the ROM size of the current device");
    set_segm_end();
  }
  result = get_segm_by_name();
  if ( result )
  {
    *(_QWORD *)(a1 + 328) = -1;
LABEL_13:
    *(_QWORD *)(a1 + 328) = *(_QWORD *)result;
    result = set_segm_end();
    if ( *(int *)(a1 + 320) <= 99 )
    {
      for ( i = 0; i != 32; ++i )
      {
        while ( 1 )
        {
          result = get_flags_ex();
          if ( (result & 0xC000) == 0 )
            break;
          if ( ++i == 32 )
            goto LABEL_18;
        }
        result = set_name();
      }
    }
LABEL_18:
    if ( *(_QWORD *)(a1 + 168) )
    {
      v6 = 0;
      do
      {
        set_name();
        ++v6;
        set_cmt();
        result = v6;
      }
      while ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 168) );
    }
    return result;
  }
  result = *(unsigned int *)(a1 + 336);
  if ( !(_DWORD)result )
  {
    *(_QWORD *)(a1 + 328) = -1;
    return result;
  }
  getinf();
  add_segm();
  result = getseg();
  *(_QWORD *)(a1 + 328) = -1;
  if ( result )
    goto LABEL_13;
  return result;
}

