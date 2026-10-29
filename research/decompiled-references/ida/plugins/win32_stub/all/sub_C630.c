__int64 __fastcall sub_C630(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = (unsigned int)dword_3BBE4;
  result = get_module_data();
  if ( result )
  {
    *(_DWORD *)(result + 216) = a2;
  }
  else
  {
    sub_A930(v2);
    return sub_C650();
  }
  return result;
}

