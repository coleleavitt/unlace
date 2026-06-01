__int64 __fastcall sub_16A960(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  _DWORD *v5; // rax

  if ( *(_DWORD *)(a1 + 76) != 3 || *(_DWORD *)(a1 + 352) != 1 )
    return 0;
  v3 = sub_11EF60(*(_QWORD *)(a1 + 48));
  v4 = v3;
  if ( !v3 )
    return 0;
  v5 = (_DWORD *)sub_11EF60(*(_QWORD *)(v3 + 8));
  if ( v5 )
  {
    if ( *v5 != 55 )
      return 0;
  }
  *a2 = v4;
  return 1;
}

