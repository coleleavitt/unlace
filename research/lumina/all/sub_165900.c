__int64 __fastcall sub_165900(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax

  *(_QWORD *)a1 = &unk_23DB00;
  v5 = dword_241638;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 168) = v5;
  *(_OWORD *)(a1 + 152) = 0;
  dword_241638 = v5 + 1;
  v6 = sub_199140(a1, a2);
  *(_BYTE *)(a1 + 184) = a3;
  v7 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 176) = v6;
  if ( !(unsigned __int8)sub_167260(v7, a1 + 144, 0) )
  {
    v8 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 160) <= 9u )
    {
      v10 = sub_1987B0(a1 + 144, v8, 10, 1);
      *(_QWORD *)(a1 + 144) = v10;
      v8 = v10;
    }
    *(_QWORD *)(a1 + 152) = 10;
    *(_QWORD *)v8 = 0x6E776F6E6B6E7528LL;
    *(_BYTE *)(v8 + 8) = 41;
    *(_BYTE *)(*(_QWORD *)(a1 + 144) + 9LL) = 0;
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  memset(
    (void *)((a1 + 16) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 16) & 0xFFFFFFF8) + 136) >> 3));
  return 0;
}
