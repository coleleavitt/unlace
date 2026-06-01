unsigned __int64 *__fastcall sub_9A40(__int64 a1, __int64 a2)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // al
  unsigned __int64 v6; // rdi
  unsigned __int8 default_reftype; // al

  result = (unsigned __int64 *)get_segm_by_name(a2);
  if ( result )
  {
    v3 = result[1];
    v4 = *result;
    if ( *result < v3 )
    {
      if ( (((*(_WORD *)(a1 + 57) - 387) & 0xFFFD) == 0 ? 4 : 0) == 4 )
      {
        do
        {
          create_data(v4, 805306368, 8, -1);
          result = (unsigned __int64 *)get_qword(v4);
          if ( result )
          {
            default_reftype = get_default_reftype(v4);
            result = (unsigned __int64 *)op_offset(v4, 0, default_reftype, -1, 0, 0);
          }
          v4 += 8LL;
        }
        while ( v4 < v3 );
      }
      else
      {
        do
        {
          while ( 1 )
          {
            create_data(v4, 0x20000000, 4, -1);
            result = (unsigned __int64 *)get_dword(v4);
            if ( !(_DWORD)result )
              break;
            v5 = get_default_reftype(v4);
            v6 = v4;
            v4 += 4LL;
            result = (unsigned __int64 *)op_offset(v6, 0, v5, -1, 0, 0);
            if ( v4 >= v3 )
              return result;
          }
          v4 += 4LL;
        }
        while ( v4 < v3 );
      }
    }
  }
  return result;
}
