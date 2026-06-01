__int64 __fastcall sub_1CCB0(__int64 a1, const char *a2)
{
  __int64 result; // rax

  result = get_debug_name_ea();
  if ( result == -1 )
  {
    sub_1BF10(a1, (__int64)"Warning: failed to find debug symbol %s\n", a2);
    return -1;
  }
  return result;
}

