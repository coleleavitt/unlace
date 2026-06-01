unsigned __int64 __fastcall sub_1319E0(__int64 a1, int a2, __int64 a3)
{
  _QWORD v5[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) > a2 )
    return v6 - __readfsqword(0x28u);
  if ( (unsigned __int64)(a2 + a3) > 0xFFFF )
    return v6 - __readfsqword(0x28u);
  v5[0] = a2;
  v5[1] = a3;
  if ( (unsigned __int8)sub_310AF0(a1 + 1160, v5, 0) )
    return v6 - __readfsqword(0x28u);
  else
    return sub_1318F0(a1, a2, a3);
}

