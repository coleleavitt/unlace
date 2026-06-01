__int64 __fastcall sub_380480(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( *(int *)(a2 + 16) <= 0 )
  {
LABEL_5:
    if ( a3[1] )
    {
      if ( *a3 )
        goto LABEL_7;
    }
    else if ( s1 )
    {
LABEL_7:
      if ( !a2 )
        get_idati();
      return create_tinfo();
    }
    return 0;
  }
  v4 = 0;
  while ( 1 )
  {
    result = sub_380480(a1, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v4), a3);
    if ( (_BYTE)result )
      return result;
    if ( *(_DWORD *)(a2 + 16) <= (int)++v4 )
      goto LABEL_5;
  }
}

