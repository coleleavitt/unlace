char __fastcall sub_32CC60(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 *v3; // rbp
  char result; // al

  v2 = (unsigned __int64 *)a2[1];
  v3 = &v2[2 * a2[2]];
  if ( v3 == v2 )
  {
LABEL_6:
    result = 1;
    if ( *a2 )
      return *a1 == *a2;
  }
  else
  {
    while ( 1 )
    {
      result = sub_32CAB0((__int64)a1, v2);
      if ( !result )
        break;
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_6;
    }
  }
  return result;
}

