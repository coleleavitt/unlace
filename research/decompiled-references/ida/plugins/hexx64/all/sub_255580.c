__int64 __fastcall sub_255580(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  int v4; // r13d
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  __int64 v9; // rdx
  __int64 result; // rax

  if ( a1 == (__int64 *)a2 )
  {
    if ( !under_debugger )
      sub_383060(0xC38Du, a3);
    BUG();
  }
  *((_DWORD *)a1 + 2) = 70;
  v3 = *a1;
  a1[3] = 0;
  v4 = *((_DWORD *)a1 + 3);
  *a1 = *(_QWORD *)a2;
  v5 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = v3;
  v6 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v5;
  v7 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = v6;
  v8 = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 3) = v7;
  v9 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 12) = v8;
  result = a1[3];
  a1[3] = v9;
  *(_QWORD *)(a2 + 24) = result;
  if ( a2 )
  {
    sub_255050(a2, a3);
    result = j__qfree(a2);
  }
  if ( *a1 == -1 )
    *a1 = v3;
  if ( *((_DWORD *)a1 + 3) == -1 )
    *((_DWORD *)a1 + 3) = v4;
  return result;
}

