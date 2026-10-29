unsigned __int64 sub_59E80()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-C0h]

  v1 = __readfsqword(0x28u);
  if ( !errorexit )
    invoke_callbacks();
  return v1 - __readfsqword(0x28u);
}

