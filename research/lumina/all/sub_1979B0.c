int __fastcall sub_1979B0(int a1, __off64_t a2)
{
  int result; // eax

  result = ftruncate64(a1, a2);
  if ( result )
  {
    sub_18FA40(1u);
    return -1;
  }
  return result;
}
