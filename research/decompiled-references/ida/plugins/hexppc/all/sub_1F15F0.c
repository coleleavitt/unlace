void __fastcall sub_1F15F0(__int64 a1, int a2)
{
  __int64 v3; // rdi
  int v4; // eax
  _QWORD *v5; // rax
  _QWORD *v6; // rax

  sub_1F1480(a1, a2);
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 784);
    v4 = *(_DWORD *)(v3 + 48);
    if ( (v4 & 1) != 0 )
    {
      if ( (v4 & 2) != 0 )
        return;
      goto LABEL_5;
    }
    v6 = (_QWORD *)sub_10C900(v3, 0);
    if ( v6 )
      sub_101700(v6, *(_QWORD *)(a1 + 1504), a2);
    v3 = *(_QWORD *)(a1 + 784);
    if ( (*(_DWORD *)(v3 + 48) & 2) == 0 )
    {
LABEL_5:
      v5 = (_QWORD *)sub_10CEA0(v3, 0);
      if ( v5 )
        sub_101700(v5, *(_QWORD *)(a1 + 1504), a2);
    }
  }
}

