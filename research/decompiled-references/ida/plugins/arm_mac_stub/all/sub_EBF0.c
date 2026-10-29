__int64 __fastcall sub_EBF0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = (unsigned int)dword_48824;
  result = get_module_data();
  if ( result )
  {
    *(_DWORD *)(result + 216) = a2;
  }
  else
  {
    sub_BE10(v2);
    return sub_EC10();
  }
  return result;
}

