__int64 sub_11B0()
{
  __int64 next_fixup_ea; // rax
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  callui(11, v2);
  get_item_end();
  next_fixup_ea = get_next_fixup_ea();
  return callui(115, next_fixup_ea);
}

