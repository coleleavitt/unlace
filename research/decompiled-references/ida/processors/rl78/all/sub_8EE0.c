__int64 sub_8EE0()
{
  __int64 result; // rax

  result = find_ioport();
  if ( result )
  {
    if ( *(_QWORD *)(result + 16) <= 1u )
      return 0;
    else
      return *(_QWORD *)(result + 8);
  }
  return result;
}

