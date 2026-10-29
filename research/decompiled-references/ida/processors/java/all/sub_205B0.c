__int64 __fastcall sub_205B0(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  _WORD *v3; // rcx

  if ( !*(_DWORD *)(a1 + 16) || **(_WORD **)(a1 + 8) != 86 )
    return sub_20500(a1);
  result = sub_1F8E0(a1, (__int64)"void", 4);
  if ( (_BYTE)result )
  {
    v2 = *(_DWORD *)(a1 + 16);
    if ( v2 && (v3 = *(_WORD **)(a1 + 8), *v3 == 86) )
    {
      *(_DWORD *)(a1 + 16) = v2 - 1;
      *(_QWORD *)(a1 + 8) = v3 + 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

