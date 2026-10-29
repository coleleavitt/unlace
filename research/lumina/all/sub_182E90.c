unsigned __int64 __fastcall sub_182E90(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 result; // rax
  int v4; // r13d
  char v5; // r12
  __int64 v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rdx

  v2 = *(_DWORD *)(a1 + 352) + 1;
  *(_DWORD *)(a1 + 352) = v2;
  if ( v2 > 1023 )
    __longjmp_chk(a1 + 360, 54);
  sub_183C40(a1, a2, 1);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) != 41 )
    sub_17E010(a1);
  result = sub_182E30(a1);
  if ( *(_BYTE *)(a1 + 568) )
  {
    *(_BYTE *)(a1 + 568) = 0;
    v4 = *(_DWORD *)(a1 + 576);
    v5 = *(_BYTE *)(a1 + 572);
    sub_183140(a1, a2, 0);
    v6 = *(_QWORD *)(a2 + 8);
    *(_BYTE *)a2 = v5;
    v7 = 8 * (8 - v4);
    result = 0xFFFFFFFFFFFFFFFFLL >> v7;
    v8 = (0xFFFFFFFFFFFFFFFFLL >> v7) & v6;
    *(_QWORD *)(a2 + 8) = v8;
    if ( !v5 && ((0x8000000000000000LL >> v7) & v8) != 0 )
    {
      result = v8 | (0x8000000000000000LL >> v7) | ~result;
      *(_QWORD *)(a2 + 8) = result;
    }
    *(_BYTE *)(a1 + 572) = v5;
    *(_DWORD *)(a1 + 576) = v4;
  }
  --*(_DWORD *)(a1 + 352);
  return result;
}
