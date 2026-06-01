__int64 __fastcall sub_1F8C0(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // edx

  *(_WORD *)(a1 + 440) = register_custom_fixup(a1 + 160);
  *(_WORD *)(a1 + 442) = register_custom_fixup(a1 + 216);
  *(_WORD *)(a1 + 444) = register_custom_fixup(a1 + 272);
  *(_WORD *)(a1 + 446) = register_custom_fixup(a1 + 328);
  *(_WORD *)(a1 + 448) = register_custom_fixup(a1 + 384);
  *(_DWORD *)(a1 + 452) = register_custom_refinfo(&unk_342A0) | 0x40;
  *(_DWORD *)(a1 + 456) = register_custom_refinfo(&unk_34260) | 0x40;
  *(_DWORD *)(a1 + 460) = register_custom_refinfo(&unk_34220) | 0x40;
  result = (unsigned int)register_custom_refinfo(&unk_341E0) | 0x40;
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a1 + 452);
  v2 = *(_DWORD *)(a1 + 456);
  *(_DWORD *)(a1 + 464) = result;
  *(_DWORD *)(a1 + 240) = v2;
  v3 = *(_DWORD *)(a1 + 460);
  *(_DWORD *)(a1 + 408) = result;
  *(_DWORD *)(a1 + 296) = v3;
  *(_DWORD *)(a1 + 352) = v3;
  return result;
}
