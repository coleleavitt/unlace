__int64 __fastcall sub_CBC0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = (unsigned int)dword_3ABA4;
  result = get_module_data();
  if ( result )
  {
    *(_DWORD *)(result + 216) = a2;
  }
  else
  {
    sub_A850(v2);
    return sub_CBE0();
  }
  return result;
}

