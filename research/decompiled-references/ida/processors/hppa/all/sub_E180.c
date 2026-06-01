__int64 __fastcall sub_E180(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = operator new(0x80u);
  *(_DWORD *)v1 = 56;
  *(_QWORD *)(v1 + 8) = "L21";
  *(_QWORD *)(v1 + 16) = 0x400000006LL;
  *(_QWORD *)(v1 + 72) = 0x400000006LL;
  *(_QWORD *)(v1 + 40) = sub_DF30;
  *(_QWORD *)(v1 + 96) = sub_E2A0;
  *(_QWORD *)(v1 + 48) = sub_DF80;
  *(_QWORD *)(v1 + 64) = "R11";
  *(_QWORD *)(a1 + 168) = v1;
  *(_DWORD *)(v1 + 24) = 64;
  *(_QWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 56) = 56;
  *(_DWORD *)(v1 + 80) = 64;
  *(_QWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 104) = sub_E000;
  *(_DWORD *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 116) = 0;
  *(_WORD *)(v1 + 112) = register_custom_fixup();
  v2 = *(_QWORD *)(a1 + 168);
  *(_WORD *)(v2 + 114) = register_custom_fixup();
  v3 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v3 + 116) = register_custom_refinfo();
  v4 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v4 + 120) = register_custom_refinfo();
  *(_DWORD *)(*(_QWORD *)(a1 + 168) + 24LL) = *(_DWORD *)(*(_QWORD *)(a1 + 168) + 116LL) | 0x40;
  v5 = *(_QWORD *)(a1 + 168);
  result = *(_DWORD *)(v5 + 120) | 0x40u;
  *(_DWORD *)(v5 + 80) = result;
  return result;
}

