__int64 __fastcall sub_1FF50(__int64 a1)
{
  int v1; // eax
  _WORD *v2; // rdx
  __int64 result; // rax
  int v4; // edx
  _WORD *v5; // rcx

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  v2 = *(_WORD **)(a1 + 8);
  if ( *v2 != 84 )
    return 0;
  *(_DWORD *)(a1 + 16) = v1 - 1;
  *(_QWORD *)(a1 + 8) = v2 + 1;
  result = sub_1FDC0(a1);
  if ( !(_BYTE)result )
    return 0;
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v4 )
    return 0;
  v5 = *(_WORD **)(a1 + 8);
  if ( *v5 != 59 )
    return 0;
  *(_DWORD *)(a1 + 16) = v4 - 1;
  *(_QWORD *)(a1 + 8) = v5 + 1;
  return result;
}
