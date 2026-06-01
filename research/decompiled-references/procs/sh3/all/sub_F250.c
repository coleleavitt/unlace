void *__fastcall sub_F250(__int64 a1, char a2)
{
  int v2; // eax
  _BOOL8 v3; // rdx
  bool v4; // zf
  void *result; // rax

  if ( !a2 )
  {
    v2 = *(_DWORD *)(a1 + 280);
    v3 = 1;
    if ( v2 != *(_DWORD *)(a1 + 264) && v2 != *(_DWORD *)(a1 + 272) )
      v3 = *(_DWORD *)(a1 + 276) == v2;
    setinf_flag(3, 32, v3);
  }
  v4 = (unsigned __int8)getinf_flag(3, 32) == 0;
  result = &unk_144C0;
  if ( !v4 )
    result = &unk_14480;
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) = result;
  return result;
}
