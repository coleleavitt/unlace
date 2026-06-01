__int64 __fastcall sub_20EE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_ret_insn(a2, 2) )
  {
    v4 = *(_WORD *)(a2 + 24);
    if ( (v4 == 30 || v4 == 23) && *(_BYTE *)(a2 + 41) == 1 && !*(_WORD *)(a2 + 46) )
    {
      if ( sub_7FF0(0x54u, v6, a2, 1) == 1 && (unsigned __int8)is_mapped(v6[0]) )
        return v6[0];
      else
        return -1;
    }
  }
  return a3;
}
