__int64 __fastcall sub_43540(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // rbx
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v9 = *(_QWORD *)(a1 + 12);
  }
  else if ( (unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)&v9, 4, 1) )
  {
    v9 = -1;
  }
  v5 = operator new(0x48u);
  v6 = v9;
  v7 = v5;
  *(_QWORD *)(v5 + 8) = -1;
  *(_QWORD *)v5 = 0xFFFFFFFFLL;
  *(_QWORD *)(v5 + 16) = 0;
  *(_OWORD *)(v5 + 24) = 0;
  *(_OWORD *)(v5 + 40) = 0;
  *(_OWORD *)(v5 + 56) = 0;
  sub_434D0(v5, v6);
  *a2 = v7;
  *a3 = 1;
  return 1;
}

