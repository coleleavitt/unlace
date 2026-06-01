__int64 __fastcall sub_64880(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = 0;
  do
  {
    if ( a1[1] >> 6 == v1 )
      return 1;
    ++v1;
  }
  while ( !*(_QWORD *)(*a1 + 8 * v1 - 8) );
  return 0;
}

