unsigned __int64 __fastcall sub_CFF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 120);
  v6 = __readfsqword(0x28u);
  v5 = a3;
  netnode_supset(v3, a2, &v5, 8, 868);
  return v6 - __readfsqword(0x28u);
}

