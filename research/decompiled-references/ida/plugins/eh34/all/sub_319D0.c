unsigned __int64 __fastcall sub_319D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = sub_31370();
  v3 = *(unsigned __int8 *)(a1 + 1);
  netnode_supset(v1, 0, &v3, 8, 65);
  return v4 - __readfsqword(0x28u);
}

