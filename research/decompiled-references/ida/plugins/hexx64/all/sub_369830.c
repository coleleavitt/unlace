_BOOL8 __fastcall sub_369830(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( *(_BYTE *)a2 == 9 )
    return *(_DWORD *)(*(_QWORD *)(a2 + 8) + 16LL) == *(_DWORD *)(a1 + 44);
  return result;
}

