_BOOL8 __fastcall sub_2949C0(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  __int64 v3; // rdx

  result = 0;
  if ( *(_BYTE *)a2 == 9 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)(v3 + 16) == *(_DWORD *)(a1 + 44) )
      return *(_QWORD *)(v3 + 8) >= *(int *)(a1 + 48);
  }
  return result;
}

