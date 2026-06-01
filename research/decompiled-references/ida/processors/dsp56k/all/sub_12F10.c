__int64 __fastcall sub_12F10(__int64 *a1, const char *a2, int a3)
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
      v10 = (void *)a1[17];
      v11 = v5 + 1;
      if ( a1[19] < v5 + 1 )
      {
        v12 = qvector_reserve();
        a1[17] = v12;
        v10 = (void *)v12;
      }
      a1[18] = v11;
      memmove(v10, a2, v6);
      *(_BYTE *)(a1[17] + v6) = 0;
    }
    else
    {
      a1[18] = 0;
    }
    netnode_supset();
    sub_12140(a1 + 16, a3);
  }
  v7 = 0;
  sub_12EA0((__int64)a1);
  result = 0;
  if ( a1[21] )
  {
    do
    {
      while ( 1 )
      {
        v9 = a1[29] + *(_QWORD *)(a1[20] + 88 * result);
        if ( v9 != get_name_ea() )
        {
          set_name();
          if ( !(unsigned __int8)set_name() )
            break;
        }
        result = ++v7;
        if ( v7 >= (unsigned __int64)a1[21] )
          return result;
      }
      ++v7;
      set_cmt();
      result = v7;
    }
    while ( v7 < (unsigned __int64)a1[21] );
  }
  return result;
}

