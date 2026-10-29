unsigned __int64 __fastcall sub_1F45B0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  const char *v3; // rcx
  unsigned __int64 result; // rax

  sub_1F4550(a3, *(_DWORD **)(a1 + 1504), (__int64 *)(a1 + 496), 3);
  v3 = s1;
  if ( *(_QWORD *)(a1 + 504) )
    v3 = *(const char **)(a1 + 496);
  result = sub_3311F0((_QWORD *)a1, a2, 0x22u, v3);
  *(_QWORD *)(a1 + 504) = 0;
  return result;
}

