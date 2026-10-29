__int64 sub_3BE840()
{
  __int64 result; // rax

  result = get_func();
  if ( !result )
  {
    sub_2B4E70((__int64)"Please position the cursor within a function");
    return 0;
  }
  return result;
}

