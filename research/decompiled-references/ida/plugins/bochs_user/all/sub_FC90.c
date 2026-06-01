unsigned __int64 __fastcall sub_FC90(char a1)
{
  unsigned __int64 result; // rax

  result = get_module_data();
  if ( result )
    return sub_F970(result, a1 & *(_BYTE *)(result + 208));
  return result;
}

