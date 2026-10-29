__int64 __fastcall sub_5D40(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbx
  __int64 v3; // rbp

  result = read_ioports();
  if ( a1[16] )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = a1[22] + *(_QWORD *)(a1[15] + 88 * v2);
        result = get_name_ea();
        if ( v3 != result )
        {
          set_name();
          result = set_name();
          if ( !(_BYTE)result )
            break;
        }
        if ( ++v2 >= a1[16] )
          return result;
      }
      ++v2;
      result = set_cmt();
    }
    while ( v2 < a1[16] );
  }
  return result;
}

