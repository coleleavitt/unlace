__int64 __fastcall sub_52F90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int32 v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  v6 = __readfsqword(0x28u);
  v5 = 0;
  v3 = sub_135E0(a1, a2);
  if ( (unsigned __int8)sub_4FFF0(v3 + 864, &v5, v2) )
    *(_QWORD *)(a2 + 8) = v5;
  return 0;
}

