__int64 __fastcall sub_9FE0(_QWORD *a1, __m128 a2, double a3)
{
  int i; // ebp
  __int64 v4; // rax
  __int64 j; // rbp

  for ( i = 0; (unsigned __int64)i < a1[20]; ++i )
  {
    while ( 1 )
    {
      sub_7AD0((__int64)a1);
      v4 = getseg();
      if ( v4 )
      {
        if ( *(_BYTE *)(v4 + 184) == 12 )
        {
          create_data();
          if ( !(unsigned __int8)set_name() )
            break;
        }
      }
      if ( (unsigned __int64)++i >= a1[20] )
        goto LABEL_8;
    }
    set_cmt();
  }
LABEL_8:
  for ( j = getseg(); j; j = get_next_seg() )
  {
    if ( *(_BYTE *)(j + 184) == 12 )
    {
      while ( next_that() != -1 )
      {
        next_that();
        create_data();
      }
    }
  }
  return sub_9E70(a1, a2, a3);
}

