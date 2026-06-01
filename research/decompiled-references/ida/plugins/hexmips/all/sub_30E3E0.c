unsigned __int64 __fastcall sub_30E3E0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD v9[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_30DE00(a1);
  v6 = *(unsigned int *)(a1 + 4);
  v7 = a1 + 8;
  *(_DWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( (_DWORD)v6 != 8 )
  {
    v6 = (unsigned int)(8 * v6);
    if ( (1LL << v6) - 1 < a2 )
      sub_30DCC0(v7);
  }
  v9[0] = a2;
  v9[1] = 1;
  sub_311E30(v7, v9, v3, v6, v4, v5);
  return v10 - __readfsqword(0x28u);
}

