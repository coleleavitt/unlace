__int64 __fastcall sub_15D80(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = (unsigned int)dword_9AB84;
  result = get_module_data();
  if ( result )
  {
    *(_DWORD *)(result + 216) = a2;
  }
  else
  {
    sub_12B90();
    return sub_15DA0(v2);
  }
  return result;
}

