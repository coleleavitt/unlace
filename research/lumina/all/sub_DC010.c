__int64 *__fastcall sub_DC010(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 *result; // rax
  int v4; // edx

  if ( *(_BYTE *)(a1 + 28) )
    return nullptr;
  if ( *(unsigned int *)(a1 + 16) < a2 && (v2 = *(unsigned int *)(a1 + 20), v2 < a2) )
  {
    *(_BYTE *)(a1 + 28) = 18;
    if ( (_DWORD)v2 )
      sub_C92E0(a1);
    sub_CA280((__int64 *)a1);
    return nullptr;
  }
  else
  {
    result = sub_DBFF0(*(_QWORD *)a1, a2);
    if ( !result )
    {
      v4 = *(_DWORD *)(a1 + 20);
      *(_BYTE *)(a1 + 28) = 7;
      if ( v4 )
        sub_C92E0(a1);
      return nullptr;
    }
  }
  return result;
}
