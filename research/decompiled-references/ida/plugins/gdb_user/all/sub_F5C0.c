__int64 __fastcall sub_F5C0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = (unsigned int)dword_6AA64;
  result = get_module_data();
  if ( result )
  {
    *(_DWORD *)(result + 216) = a2;
  }
  else
  {
    sub_CC60();
    return sub_F5E0(v2);
  }
  return result;
}

