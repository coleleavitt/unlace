__int64 __fastcall sub_FF10(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) != 50 || *(_BYTE *)(a2 + 81) != 1 || (unsigned __int16)(*(_WORD *)(a2 + 86) - 47) > 1u )
    return v4 - __readfsqword(0x28u);
  v3 = -1;
  sub_F340(a1, &v3, a2, a2 + 40);
  return split_sreg_range();
}

