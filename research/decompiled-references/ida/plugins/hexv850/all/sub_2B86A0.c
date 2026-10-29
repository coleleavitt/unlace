__int64 __fastcall sub_2B86A0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = operator new(0x50u);
  v3 = *a1;
  *(_QWORD *)v2 = &off_4B4950;
  *(_QWORD *)(v2 + 8) = a2;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = v3;
  *(_QWORD *)(v2 + 48) = -1;
  *(_OWORD *)(v2 + 24) = 0;
  switch_dbctx();
  *(_QWORD *)(v2 + 48) = sub_2B0CC0(*(_QWORD *)(v2 + 40), 0);
  sub_66DF0((__int64 *)(v2 + 16));
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)v2 = &off_4B4B80;
  *(_OWORD *)(v2 + 64) = 0;
  return v2;
}

