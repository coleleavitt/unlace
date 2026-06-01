bool sub_38140()
{
  __int64 fchunk; // rbx
  bool result; // al

  fchunk = get_fchunk();
  result = 1;
  if ( fchunk )
    return fchunk != get_fchunk();
  return result;
}

