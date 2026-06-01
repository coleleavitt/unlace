__int64 __fastcall sub_C080(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  v4 = &qword_10CA0;
  while ( 1 )
  {
    result = *(unsigned __int8 *)v4;
    if ( (_DWORD)result == *(_DWORD *)(a1 + 120) )
    {
      result = *((unsigned __int16 *)v4 + 1);
      if ( a3 == (_DWORD)result )
      {
        result = *((unsigned __int8 *)v4 + 4);
        if ( a4 == (_DWORD)result )
          break;
      }
    }
    v4 += 3;
    if ( !v4[1] )
      return result;
  }
  result = get_cmt();
  if ( result <= 0 )
    return set_cmt();
  return result;
}

