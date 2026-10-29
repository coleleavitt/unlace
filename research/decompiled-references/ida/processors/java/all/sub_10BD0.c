__int64 __fastcall sub_10BD0(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    return sub_88B0(a1, a2, (__int64)&unk_22DA7, a3);
  else
    return (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, &unk_22DA1, a2);
}

