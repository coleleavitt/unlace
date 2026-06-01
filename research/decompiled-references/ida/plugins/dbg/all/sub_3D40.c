__int64 __fastcall sub_3D40(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  _QWORD *v4; // rcx

  v2 = *(unsigned int *)(a2 + 16);
  if ( !(unsigned __int16)*(_DWORD *)(a2 + 16) )
    return -1;
  result = -1;
  if ( (unsigned int)(unsigned __int16)*(_DWORD *)(a2 + 16) - 65532 > 3 )
  {
    v4 = *(_QWORD **)(a1 + 141);
    if ( v2 < v4[1] )
      return *(_QWORD *)(*v4 + 32 * v2 + 16) + *(_QWORD *)(a2 + 8);
  }
  return result;
}

