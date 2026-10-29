__int64 sub_17C40()
{
  __int64 result; // rax

  result = find_ioport();
  if ( result )
    result += 56;
  return result;
}

