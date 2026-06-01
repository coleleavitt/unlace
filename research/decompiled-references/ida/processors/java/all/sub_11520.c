__int64 __fastcall sub_11520(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 module_data; // rax

  if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33087) & 0x40) == 0 )
    return 0;
  sub_114B0(a1);
  sub_88B0(a1, 0xFFFF, (__int64)&unk_23778, a3);
  if ( !*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33101)
    || ((*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1),
        module_data = get_module_data((unsigned int)dword_2D4F4),
        (unsigned int)sub_120B0(module_data, a2, a3, a1) != -1) )
  {
    sub_114B0(a1);
    return 0;
  }
  return 1;
}

