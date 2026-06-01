__int64 __fastcall sub_176A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char *v5; // rsi
  char *v6; // rcx
  __int64 v7; // rax
  char *v8; // rdi
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rax

  result = 0;
  if ( *(_DWORD *)(a1 + 1820) )
  {
    v5 = *(char **)(a1 + 1760);
    v6 = &v5[16 * *(_QWORD *)(a1 + 1768)];
    if ( v5 != v6 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)v5;
        v8 = v5;
        v5 += 16;
        if ( a3 == v7 )
          break;
        if ( v5 == v6 )
          return 0;
      }
      v9 = *((_DWORD *)v8 + 2);
      memmove(v8, v5, v6 - v8 - 16);
      v10 = *(_QWORD *)(a1 + 1704);
      --*(_QWORD *)(a1 + 1768);
      v11 = a1 + 1696;
      if ( !v10 )
        goto LABEL_16;
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v10 + 16);
          v13 = *(_QWORD *)(v10 + 24);
          if ( (signed int)v9 > *(_DWORD *)(v10 + 32) )
            break;
          v11 = v10;
          v10 = *(_QWORD *)(v10 + 16);
          if ( !v12 )
            goto LABEL_11;
        }
        v10 = *(_QWORD *)(v10 + 24);
      }
      while ( v13 );
LABEL_11:
      if ( v11 == a1 + 1696 || (signed int)v9 < *(_DWORD *)(v11 + 32) )
      {
LABEL_16:
        sub_51C30(a1 + 864, 2, v9);
      }
      else
      {
        v14 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v14, 0x30u);
        --*(_QWORD *)(a1 + 1728);
        sub_51C30(a1 + 864, 8, v9);
      }
      return 1;
    }
  }
  return result;
}

