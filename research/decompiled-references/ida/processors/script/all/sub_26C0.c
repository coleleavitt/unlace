__int64 __fastcall sub_26C0(const char **a1, const char *a2)
{
  const char *v2; // rax

  v2 = a1[1];
  if ( a2 )
  {
    if ( v2 )
      return sub_25F0((__int64)"Processor module script error in '%s': %s", a2, *a1);
    else
      return sub_25F0((__int64)"Processor module script error in '%s': %s", a2, &byte_520F);
  }
  else if ( v2 )
  {
    return sub_25F0((__int64)"Processor module script error: %s", *a1);
  }
  else
  {
    return sub_25F0((__int64)"Processor module script error: %s", &byte_520F);
  }
}

