__int64 __fastcall sub_15850(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rbx

  result = 1;
  if ( a1[21] == a1[17] )
  {
    v3 = a1[154];
    v4 = a1 + 152;
    if ( v4 == (_QWORD *)v3 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        result = *(unsigned __int8 *)(v3 + 65);
        if ( (_BYTE)result )
        {
          if ( !*(_DWORD *)(v3 + 48) && !*(_DWORD *)(v3 + 44) )
            break;
        }
        v3 = std::_Rb_tree_increment();
        if ( v4 == (_QWORD *)v3 )
          return 0;
      }
    }
  }
  return result;
}

