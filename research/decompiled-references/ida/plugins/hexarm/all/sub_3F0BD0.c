bool __fastcall sub_3F0BD0(__int64 a1, double a2)
{
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 3) > 1u )
  {
    if ( !under_debugger )
      sub_3835A0(0xCCDBu, a2);
    BUG();
  }
  return (sub_32EB60(
            v3,
            *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL),
            *(unsigned __int16 *)(a1 + 110),
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
            *(_QWORD *)(a1 + 40),
            1)
        & 1) != 0
      && get_first_dref_from() != -1
      && get_next_dref_from() == -1
      && (unsigned __int8)segtype() == 1;
}

