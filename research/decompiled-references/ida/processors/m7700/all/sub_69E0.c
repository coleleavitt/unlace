__int64 __fastcall sub_69E0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  int v4; // eax

  v2 = qword_C098;
  if ( *(_QWORD *)(a1 + 144) )
    v2 = *(__int64 **)(a1 + 136);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 368LL))(a2, 11, 0, v2);
  result = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(result + 4) & 8) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 256);
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        return sub_64E0(a2, 0xFFFF, (__int64)".MCU M37750");
      }
      else
      {
        if ( under_debugger )
          BUG();
        interr();
        return sub_6A90(10029);
      }
    }
    else
    {
      return sub_64E0(a2, 0xFFFF, (__int64)".MCU M37700");
    }
  }
  return result;
}

