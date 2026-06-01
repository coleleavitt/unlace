char *__fastcall sub_D240(unsigned int *a1)
{
  unsigned int v1; // edx
  char *result; // rax

  v1 = *a1;
  result = "INDIRECT CALL";
  if ( *a1 != 2 )
  {
    if ( v1 > 2 )
    {
      result = "INDIRECT BRANCH";
      if ( v1 != 3 )
        return &byte_10907;
    }
    else
    {
      result = "CALL";
      if ( v1 )
        return "BRANCH";
    }
  }
  return result;
}

