unsigned __int64 __fastcall sub_31680(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v6; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v4 = sub_31370();
  v6 = *(_BYTE *)(a3 + 1) + 1;
  netnode_supset(v4, a2, &v6, 1, 323);
  return v7 - __readfsqword(0x28u);
}

