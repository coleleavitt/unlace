__int64 __fastcall sub_30CD0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  if ( (*(_BYTE *)(a1 + 488) & 1) == 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(0);
    BUG();
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 304) + 260LL) == 4 )
  {
    sub_2DC20((__int64 *)(a2 + 16), "Operation is not available (user management is delegated to the vault server)");
    return 0xFFFFFFFFLL;
  }
  v3 = *(_DWORD *)(a3 + 136);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 312) + 24LL))(
              *(_QWORD *)(a1 + 312),
              a2,
              a3 + 16) )
      {
        sub_30A50(a2, "Edit operation failed");
        return 0xFFFFFFFFLL;
      }
    }
    else if ( v3 == 2
           && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 312) + 32LL))(
                 *(_QWORD *)(a1 + 312),
                 a2,
                 a3 + 16) )
    {
      sub_30A50(a2, "Delete operation failed");
      return 0xFFFFFFFFLL;
    }
    return 0;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 312) + 16LL))(
         *(_QWORD *)(a1 + 312),
         a2,
         a3 + 16,
         0) )
  {
    return 0;
  }
  sub_30A50(a2, "Add operation failed");
  return 0xFFFFFFFFLL;
}
