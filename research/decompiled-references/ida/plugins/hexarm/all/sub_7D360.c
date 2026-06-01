__int64 __fastcall sub_7D360(_QWORD *a1)
{
  __int64 v1; // rbp
  int v2; // edx
  int v3; // ebx

  if ( *a1 >= a1[1] )
LABEL_14:
    sub_79F50(a1);
  v1 = (__int64)a1;
  v2 = unpack_dd();
  v3 = v2;
  if ( a1[1] - *a1 < (unsigned __int64)v2 || v2 < 0 )
    return 0;
  if ( v2 )
  {
    do
    {
      if ( *(_DWORD *)(v1 + 48) > 3u )
      {
        a1 = (_QWORD *)v1;
        sub_7C940((_QWORD *)v1);
      }
      else if ( (unsigned __int8)is_cvt64() )
      {
        if ( *(_QWORD *)v1 >= *(_QWORD *)(v1 + 8) )
          goto LABEL_14;
        a1 = (_QWORD *)v1;
        unpack_dd();
      }
      else
      {
        a1 = (_QWORD *)v1;
        sub_7C780(v1);
      }
      --v3;
    }
    while ( v3 );
  }
  return 1;
}

