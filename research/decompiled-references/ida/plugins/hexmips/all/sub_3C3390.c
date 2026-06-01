__int64 __fastcall sub_3C3390(__int64 a1, __int64 a2)
{
  __int64 module_data; // rax

  module_data = get_module_data();
  if ( sub_384D40(module_data, a2) )
    JUMPOUT(0x3C3330);
  return -1;
}

