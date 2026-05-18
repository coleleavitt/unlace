__int64 __fastcall sub_E1710(__int64 a1, char a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v6; // rdi

  result = *(unsigned int *)(a1 + 144);
  if ( *(_DWORD *)(a1 + 148) <= (int)result )
    return sub_E16C0(a1, a2, a3, a4, a5);
  *(_DWORD *)(a1 + 144) = result + 1;
  v6 = *(_QWORD *)(a1 + 136) + 24LL * (int)result;
  *(_BYTE *)v6 = a2;
  *(_DWORD *)(v6 + 4) = a3;
  *(_WORD *)(v6 + 2) = 0;
  *(_DWORD *)(v6 + 8) = a4;
  *(_DWORD *)(v6 + 12) = a5;
  *(_QWORD *)(v6 + 16) = 0;
  *(_BYTE *)(v6 + 1) = 0;
  return result;
}
