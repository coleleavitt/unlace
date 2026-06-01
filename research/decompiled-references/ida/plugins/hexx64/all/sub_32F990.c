unsigned __int64 __fastcall sub_32F990(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) != *(_BYTE *)(a2 + 8) )
  {
    if ( !under_debugger )
      sub_383060(0xCAABu, a3);
    BUG();
  }
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a1 >= *(_QWORD *)a2 )
    v4 = *(_QWORD *)a1;
  v5 = v3 + *(int *)(a1 + 12);
  if ( v5 > *(_QWORD *)a2 + *(int *)(a2 + 12) )
    v5 = *(_QWORD *)a2 + *(int *)(a2 + 12);
  if ( v4 < v5 )
  {
    result = v5 - v4;
    *(_QWORD *)a1 = v4;
    *(_DWORD *)(a1 + 12) = result;
  }
  else
  {
    *(_QWORD *)a1 = v3;
    *(_DWORD *)(a1 + 12) = 0;
    return 0;
  }
  return result;
}

