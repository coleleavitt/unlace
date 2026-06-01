__int64 __fastcall sub_AE70(__int64 a1, const char *a2, int a3)
{
  size_t v5; // rax
  size_t v6; // rbp
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rbx
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  if ( a2 )
  {
    v5 = strlen(a2);
    v6 = v5;
    if ( v5 )
    {
      v10 = *(void **)(a1 + 136);
      v11 = v5 + 1;
      if ( *(_QWORD *)(a1 + 152) < v5 + 1 )
      {
        v12 = qvector_reserve();
        *(_QWORD *)(a1 + 136) = v12;
        v10 = (void *)v12;
      }
      *(_QWORD *)(a1 + 144) = v11;
      memmove(v10, a2, v6);
      *(_BYTE *)(*(_QWORD *)(a1 + 136) + v6) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 144) = 0;
    }
    netnode_supset();
    sub_A120((__int64 *)(a1 + 128), a3);
  }
  if ( *(_QWORD *)(a1 + 232) == -1 )
    *(_QWORD *)(a1 + 232) = sub_AD30(a1, *(int *)(a1 + 240), 0);
  v7 = 0;
  for ( result = 0; (unsigned __int64)v7 < *(_QWORD *)(a1 + 168); result = v7 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 232) + *(_QWORD *)(*(_QWORD *)(a1 + 160) + 88 * result);
      if ( v9 != get_name_ea() )
      {
        set_name();
        if ( !(unsigned __int8)set_name() )
          break;
      }
      result = ++v7;
      if ( (unsigned __int64)v7 >= *(_QWORD *)(a1 + 168) )
        return result;
    }
    ++v7;
    set_cmt();
  }
  return result;
}

