__int64 __fastcall sub_30E50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  sub_2ECA0((_QWORD *)(v2 + 1040), nullptr, &v4, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32));
  return v4;
}

