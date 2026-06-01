unsigned __int64 __fastcall sub_1E270(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 33336);
  v4 = __readfsqword(0x28u);
  v3 = 1;
  netnode_supset(v1, -2, &v3, 8, 65);
  return v4 - __readfsqword(0x28u);
}
