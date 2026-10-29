bool sub_38180()
{
  __int64 fchunk; // rbx
  bool result; // al

  fchunk = get_fchunk();
  result = 0;
  if ( fchunk )
    return fchunk == get_fchunk();
  return result;
}

