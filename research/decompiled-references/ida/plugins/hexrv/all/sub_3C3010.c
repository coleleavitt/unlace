__int64 __fastcall sub_3C3010(__int64 a1, __int64 a2)
{
  __int64 module_data; // rax

  module_data = get_module_data();
  if ( sub_3849C0(module_data, a2) )
    JUMPOUT(0x3C2FB0);
  return -1;
}

