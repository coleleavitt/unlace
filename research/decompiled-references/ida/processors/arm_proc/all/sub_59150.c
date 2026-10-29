__int64 __fastcall sub_59150(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  __int64 result; // rax

  *(_WORD *)(a1 + 664) = register_custom_fixup();
  *(_WORD *)(a1 + 666) = register_custom_fixup();
  *(_WORD *)(a1 + 668) = register_custom_fixup();
  *(_WORD *)(a1 + 670) = register_custom_fixup();
  *(_WORD *)(a1 + 678) = register_custom_fixup();
  *(_WORD *)(a1 + 680) = register_custom_fixup();
  *(_WORD *)(a1 + 682) = register_custom_fixup();
  *(_WORD *)(a1 + 684) = register_custom_fixup();
  *(_WORD *)(a1 + 672) = register_custom_fixup();
  *(_WORD *)(a1 + 674) = register_custom_fixup();
  *(_WORD *)(a1 + 676) = register_custom_fixup();
  *(_DWORD *)(a1 + 688) = register_custom_refinfo();
  *(_DWORD *)(a1 + 692) = register_custom_refinfo();
  *(_DWORD *)(a1 + 696) = register_custom_refinfo();
  *(_DWORD *)(a1 + 700) = register_custom_refinfo();
  *(_DWORD *)(a1 + 704) = register_custom_refinfo();
  *(_DWORD *)(a1 + 708) = register_custom_refinfo();
  *(_DWORD *)(a1 + 712) = register_custom_refinfo();
  v1 = register_custom_refinfo();
  v2 = *(_QWORD *)(a1 + 656);
  *(_DWORD *)(a1 + 716) = v1;
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(a1 + 688) | 0x40;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 80LL) = *(_DWORD *)(a1 + 692) | 0x40;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 136LL) = *(_DWORD *)(a1 + 696) | 0x40;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 192LL) = *(_DWORD *)(a1 + 700) | 0x40;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 248LL) = *(_DWORD *)(a1 + 704) | 0x40;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 304LL) = *(_DWORD *)(a1 + 708) | 0x40;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 360LL) = *(_DWORD *)(a1 + 712) | 0x40;
  *(_DWORD *)(*(_QWORD *)(a1 + 656) + 416LL) = *(_DWORD *)(a1 + 716) | 0x40;
  *(_WORD *)(a1 + 720) = register_custom_fixup();
  v3 = register_custom_refinfo();
  v4 = *(_QWORD *)(a1 + 656);
  *(_DWORD *)(a1 + 724) = v3;
  result = v3 | 0x40u;
  *(_DWORD *)(v4 + 472) = result;
  return result;
}

