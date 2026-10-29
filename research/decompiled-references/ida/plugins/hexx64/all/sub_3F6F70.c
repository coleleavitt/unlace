__int64 __fastcall sub_3F6F70(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rdx

  if ( (*(_BYTE *)(a1 + 888) & 1) != 0 )
    return 1;
  v2 = *(_QWORD *)(a1 + 832);
  v3 = *(_QWORD *)(v2 + 3792);
  if ( !v3 )
  {
    v5 = (_QWORD *)operator new(0x18u);
    v6 = *(_QWORD *)(a1 + 800);
    *v5 = off_4E99C8;
    v5[1] = v6;
    v5[2] = *(_QWORD *)(v6 + 112);
    *(_QWORD *)(*(_QWORD *)(a1 + 832) + 3792LL) = v5;
    v2 = *(_QWORD *)(a1 + 832);
    v3 = *(_QWORD *)(v2 + 3792);
  }
  sub_1516D0(v2, v3);
  *(_DWORD *)(a1 + 888) |= 1u;
  return 1;
}

