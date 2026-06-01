__int64 __fastcall sub_10850(__int64 a1, char a2)
{
  const char *v2; // rbp
  __int64 module_data; // rax

  v2 = "begin";
  *(_DWORD *)(a1 + 144) |= 0x90u;
  if ( a2 )
    v2 = "end";
  module_data = get_module_data((unsigned int)dword_2D4F4);
  return sub_88B0(a1, 0, (__int64)&unk_22D85, *(unsigned __int16 *)(module_data + 33147), v2, &unk_22D7F);
}

