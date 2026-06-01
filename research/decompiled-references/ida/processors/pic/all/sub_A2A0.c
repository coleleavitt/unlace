_QWORD *__fastcall sub_A2A0(_QWORD *a1, __m128 a2, double a3)
{
  int v3; // r12d
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 i; // r12
  _QWORD *result; // rax

  v3 = 0;
  if ( a1[20] )
  {
    while ( 1 )
    {
      v4 = sub_7740((__int64)a1);
      v5 = getseg();
      if ( !v5 )
      {
        if ( a1[29] >= v4 )
          goto LABEL_3;
        result = (_QWORD *)getseg();
        if ( !result )
          return result;
        if ( result[1] - *result == 512 )
          set_segm_end();
        v5 = getseg();
        if ( !v5 )
          goto LABEL_3;
      }
      if ( *(_BYTE *)(v5 + 184) == 12 && (create_data(), !(unsigned __int8)set_name()) )
      {
        ++v3;
        set_cmt();
        if ( (unsigned __int64)v3 >= a1[20] )
          break;
      }
      else
      {
LABEL_3:
        if ( (unsigned __int64)++v3 >= a1[20] )
          break;
      }
    }
  }
  for ( i = getseg(); i; i = get_next_seg() )
  {
    if ( *(_BYTE *)(i + 184) == 12 )
    {
      while ( next_that() != -1 )
      {
        next_that();
        create_data();
      }
    }
  }
  return (_QWORD *)sub_A130(a1, a2, a3);
}

