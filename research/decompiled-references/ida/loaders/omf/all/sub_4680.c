unsigned __int64 __fastcall sub_4680(__int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( !netnode_altval(qword_144A8, a1, 65) )
  {
    v2 = dword_144B0++;
    netnode_supset(qword_144A8, a1, &v2, 8, 65);
  }
  return v3 - __readfsqword(0x28u);
}

