unsigned __int64 __fastcall sub_177FB0(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int8 v4[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 < a2 )
  {
    if ( !unk_2439A0 )
      sub_198E10(285);
    BUG();
  }
  if ( v2 - a2 != v2 )
  {
    v4[0] = 2;
    v6 = 0;
    v5 = 0;
    sub_177BC0((__int64 *)(a1 + 24), v2 - a2, v4);
    sub_176520((__int64)v4);
  }
  return v7 - __readfsqword(0x28u);
}
