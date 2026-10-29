unsigned __int64 __fastcall sub_32A5C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) != *(_BYTE *)(a2 + 8) )
  {
    if ( !under_debugger )
      sub_37DDE0(51883);
    BUG();
  }
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a2;
  if ( *(_QWORD *)a1 >= *(_QWORD *)a2 )
    v3 = *(_QWORD *)a1;
  v4 = v2 + *(int *)(a1 + 12);
  if ( v4 > *(_QWORD *)a2 + *(int *)(a2 + 12) )
    v4 = *(_QWORD *)a2 + *(int *)(a2 + 12);
  if ( v3 < v4 )
  {
    result = v4 - v3;
    *(_QWORD *)a1 = v3;
    *(_DWORD *)(a1 + 12) = result;
  }
  else
  {
    *(_QWORD *)a1 = v2;
    *(_DWORD *)(a1 + 12) = 0;
    return 0;
  }
  return result;
}

