__int64 __fastcall sub_329F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // eax
  _QWORD *v6; // rax

  sub_165900(a1, a3, *(unsigned __int8 *)(a2 + 107));
  sub_168790(a1 + 192, 0, (unsigned int)dword_241AF0, 0, 0);
  *(_QWORD *)(a1 + 288) = a3;
  *(_BYTE *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 300) = 6;
  *(_QWORD *)(a1 + 192) = &off_23DB68;
  sub_1687E0(a1 + 192, &unk_237640, 40);
  *(_QWORD *)(a1 + 304) = a2;
  *(_QWORD *)a1 = &off_23D358;
  *(_QWORD *)(a1 + 192) = off_23D3A8;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  *(_BYTE *)(a1 + 500) = 0;
  *(_OWORD *)(a1 + 328) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 504) = sub_19A2A0();
  v4 = *(_QWORD *)(a1 + 304);
  *(_BYTE *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 520) = 0;
  v5 = *(_DWORD *)(v4 + 260);
  if ( v5 == 2 )
  {
    v6 = (_QWORD *)operator new(0x10u);
    v6[1] = a1;
    *v6 = off_236550;
    *(_QWORD *)(a1 + 312) = v6;
  }
  else if ( v5 == 4 )
  {
    v6 = (_QWORD *)operator new(0x10u);
    v6[1] = a1;
    *v6 = off_236638;
    *(_QWORD *)(a1 + 312) = v6;
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 312);
  }
  if ( !v6 )
  {
    if ( !unk_2439A0 )
      sub_198E10(2786);
    BUG();
  }
  return nullsub_74(*(_QWORD *)(a1 + 304), a1 + 192);
}
