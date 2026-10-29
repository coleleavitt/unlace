char __fastcall sub_39EC60(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  bool (__fastcall *v4)(__int64); // rax
  __int64 that; // rax
  unsigned __int64 *func; // rbp

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 52) = 1;
  *(_QWORD *)(a1 + 40) = v2;
  v4 = *(bool (__fastcall **)(__int64))(v3 + 16);
  if ( v4 != sub_39E060 )
    return v4(a1);
  if ( *(_DWORD *)(a1 + 48) != 2 )
  {
    if ( v2 != -1 || (*(_QWORD *)(a1 + 40) = 0, (get_flags_ex() & 0x600) != 0x400) )
    {
      that = next_that();
      *(_QWORD *)(a1 + 40) = that;
      return that != -1;
    }
    return 1;
  }
  func = (unsigned __int64 *)get_func();
  if ( (func || (func = (unsigned __int64 *)get_next_func()) != nullptr)
    && *func < *(_QWORD *)(a1 + 32)
    && sub_1397E0(*(_QWORD *)(a1 + 16), *func) )
  {
    *(_BYTE *)(a1 + 52) = 0;
    *(_QWORD *)(a1 + 40) = *func;
    return 1;
  }
  return 0;
}

