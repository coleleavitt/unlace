unsigned __int64 __fastcall sub_C2E0(char a1)
{
  unsigned __int64 result; // rax

  result = get_module_data();
  if ( result )
    return sub_BFC0(result, a1 & *(_BYTE *)(result + 208));
  return result;
}

