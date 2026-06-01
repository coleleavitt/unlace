__int64 __fastcall sub_3E4CC0(__int64 a1, __int64 a2, char a3, double a4)
{
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  if ( (unsigned __int8)getinf_flag() )
  {
    if ( !under_debugger )
      sub_37E160(0xCC0Du, a4);
    BUG();
  }
  *(_BYTE *)(a1 + 392) = a3;
  v5 = *(_DWORD *)(a2 + 24);
  if ( v5 != -1 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 384) = 4 * (v6 - v5);
    v7 = *(_QWORD *)(a2 + 16);
    if ( v7 != -1 && *(_DWORD *)(a2 + 24) < (int)v6 )
      *(_QWORD *)(a1 + 368) = v7 + 4 * (int)v6;
  }
  result = *(unsigned int *)(a2 + 48);
  if ( (_DWORD)result != -1 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 388) = 4 * (v9 - ((result + 1) & 0xFFFFFFFE));
    result = *(_QWORD *)(a2 + 40);
    if ( result != -1 && *(_DWORD *)(a2 + 48) < *(_DWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 376) = result + 4 * (int)v9;
  }
  return result;
}

