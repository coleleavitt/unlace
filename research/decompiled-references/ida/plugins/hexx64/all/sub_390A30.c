__int64 __fastcall sub_390A30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 *v5; // rdx
  __int64 v6; // rdx

  v3 = *a3;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)a1 = v3;
  *(_DWORD *)(a1 + 8) = *((_DWORD *)a3 + 2);
  if ( *(_QWORD *)a2 )
  {
    result = **(_QWORD **)a2;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = result;
  }
  else if ( *(_QWORD *)(a2 + 16) )
  {
    v5 = *(__int64 **)(a2 + 8);
    result = *v5;
    v6 = v5[1];
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = -1;
    *(_QWORD *)(a1 + 24) = -1;
    return -1;
  }
  return result;
}

