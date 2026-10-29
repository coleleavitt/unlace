__int64 __fastcall sub_4510(_QWORD *a1)
{
  __int64 result; // rax

  result = 0;
  if ( *a1 )
  {
    do
      ++result;
    while ( a1[result] );
  }
  return result;
}

