__int64 sub_A7E0()
{
  __int64 result; // rax

  result = find_ioport();
  if ( result )
    result += 56;
  return result;
}

