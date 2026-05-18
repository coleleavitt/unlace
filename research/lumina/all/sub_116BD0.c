__int64 __fastcall sub_116BD0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rax
  int v6; // eax

  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(unsigned __int16 *)(a1 + 68);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL);
  *(_QWORD *)(a3 + 8) = v3;
  v6 = v5 - v3;
  if ( v6 < 0 )
    v6 = 0;
  if ( v4 <= v6 )
    v6 = v4;
  if ( a2 > v6 )
    return sub_116AC0(a1, 0, a2, a3);
  *(_DWORD *)(a3 + 16) = a2;
  *(_WORD *)(a3 + 20) = 16400;
  return 0;
}
