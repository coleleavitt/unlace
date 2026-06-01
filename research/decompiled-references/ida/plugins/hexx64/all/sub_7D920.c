__int64 __fastcall sub_7D920(_QWORD *a1, double a2)
{
  int v2; // edx
  int v3; // ebx

  if ( *a1 >= a1[1] )
LABEL_14:
    sub_7A510(a2);
  v2 = unpack_dd();
  v3 = v2;
  if ( a1[1] - *a1 < (unsigned __int64)v2 || v2 < 0 )
    return 0;
  if ( v2 )
  {
    do
    {
      if ( *((_DWORD *)a1 + 12) > 3u )
      {
        sub_7CF00(a1, a2);
      }
      else if ( (unsigned __int8)is_cvt64() )
      {
        if ( *a1 >= a1[1] )
          goto LABEL_14;
        unpack_dd();
      }
      else
      {
        sub_7CD40((__int64)a1, a2);
      }
      --v3;
    }
    while ( v3 );
  }
  return 1;
}

