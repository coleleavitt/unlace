__off64_t __fastcall sub_197950(int a1)
{
  __off64_t result; // rax

  result = lseek64(a1, 0, 1);
  if ( result == -1 )
  {
    sub_18FA40(1u);
    return -1;
  }
  return result;
}
