bool sub_6F420()
{
  __int64 loader_name; // rdx
  bool result; // al
  int v2; // [rsp+0h] [rbp-18h]

  loader_name = get_loader_name();
  result = 0;
  if ( loader_name == 3 )
    return v2 == 6644344;
  return result;
}

