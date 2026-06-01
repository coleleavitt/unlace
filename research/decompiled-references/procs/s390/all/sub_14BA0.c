__int64 __fastcall sub_14BA0(__int64 a1)
{
  __int64 result; // rax

  *(_WORD *)(a1 + 120) = register_custom_fixup(&unk_2DB40);
  result = register_custom_fixup(&unk_2DB00);
  *(_WORD *)(a1 + 122) = result;
  return result;
}
