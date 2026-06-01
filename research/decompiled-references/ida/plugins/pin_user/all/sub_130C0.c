__int64 __fastcall sub_130C0(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = *(_QWORD *)(a1 + 528);
  while ( v2 )
  {
    sub_12070(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x40u);
  }
  *(_BYTE *)(a1 + 2292) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = a1 + 520;
  *(_QWORD *)(a1 + 544) = a1 + 520;
  *(_QWORD *)(a1 + 552) = 0;
  *(_DWORD *)(a1 + 2288) = 23946;
  sub_19890(a1 + 952);
  return sub_22840(a1);
}

