__int64 __fastcall sub_4D520(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // rcx

  result = sub_4D3C0((unsigned __int64 *)a1, 20 - (unsigned int)a3, a2 + *(_DWORD *)(a1 + 24), 0);
  v4 = *(_DWORD *)(result + 4);
  if ( v4 == 2 )
  {
    *(_BYTE *)(*(_QWORD *)(result + 16) + 4LL) = 1;
  }
  else
  {
    v5 = 0;
    if ( v4 == 3 )
      v5 = **(_QWORD **)(result + 16);
    *(_BYTE *)(v5 + 4) = 1;
  }
  return result;
}
