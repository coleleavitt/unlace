__int64 __fastcall sub_166320(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  __int64 result; // rax
  __int64 v5; // rbp

  *(_QWORD *)a1 = &unk_23DB30;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = sub_199140(a1, a2);
  *(_DWORD *)(a1 + 104) = 0x1FFFF;
  if ( (_BYTE)a2 )
  {
    v2 = operator new(0x40u);
    *(_DWORD *)(v2 + 16) = 0;
    v3 = (_QWORD *)v2;
    v2 += 16;
    *(_QWORD *)(v2 + 8) = 0;
    v3[4] = v2;
    v3[5] = v2;
    v3[6] = 0;
    *v3 = &off_23C248;
    result = sub_19A2A0();
    v3[7] = result;
    if ( !result )
    {
      if ( !unk_2439A0 )
        sub_198E10(1540);
      BUG();
    }
    *(_QWORD *)(a1 + 88) = v3;
  }
  else
  {
    v5 = operator new(0x38u);
    *(_QWORD *)v5 = &off_23C210;
    *(_DWORD *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 24) = 0;
    *(_QWORD *)(v5 + 32) = v5 + 16;
    *(_QWORD *)(v5 + 40) = v5 + 16;
    *(_QWORD *)(v5 + 48) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    return v5 + 16;
  }
  return result;
}
