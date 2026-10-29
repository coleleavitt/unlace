__int64 __fastcall sub_CB00(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 9;
  *(_DWORD *)(a2 + 28) |= a3 & 1;
  v3 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v3 + 40;
  *(_BYTE *)(v3 + 73) |= 0x80u;
  return 1;
}

