__int64 __fastcall sub_14FB0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = (unsigned int)dword_8F9A4;
  result = get_module_data();
  if ( result )
  {
    *(_DWORD *)(result + 216) = a2;
  }
  else
  {
    sub_11FC0();
    return sub_14FD0(v2);
  }
  return result;
}

