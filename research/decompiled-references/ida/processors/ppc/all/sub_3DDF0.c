__int64 __fastcall sub_3DDF0(__int64 a1, __int64 a2)
{
  __int16 v2; // bp
  char v3; // al
  __int64 v4; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a2 + 16)
                                           & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
  v2 = *(_WORD *)(a2 + 6);
  v3 = getinf_flag(3, 4);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v2;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v3 == 0 ? 2 : 7;
  v4 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 952) = 1;
  *(_QWORD *)(a1 + 944) = v4;
  *(_QWORD *)(a1 + 912) = -1;
  *(_DWORD *)(a1 + 920) = -1;
  *(_QWORD *)(a1 + 928) = 0;
  *(_DWORD *)(a1 + 936) = 4;
  return 1;
}

