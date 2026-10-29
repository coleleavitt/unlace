unsigned __int64 __fastcall sub_62760(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  unsigned __int64 v7; // [rsp+428h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  pack_dd();
  pack_dw();
  pack_dw();
  pack_dw();
  v5 = *(unsigned __int16 *)(a4 + 4);
  if ( (unsigned __int16)v5 < *(_WORD *)(a4 + 2) )
    v5 = *(unsigned __int16 *)(a4 + 2);
  strlen((const char *)(a4 + v5 + 6));
  pack_ds();
  netnode_supset();
  return v7 - __readfsqword(0x28u);
}

