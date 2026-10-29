__int64 __fastcall sub_2B66E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = operator new(0x50u);
  v3 = *a1;
  *(_QWORD *)v2 = &off_4AD7B0;
  *(_QWORD *)(v2 + 8) = a2;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = v3;
  *(_QWORD *)(v2 + 48) = -1;
  *(_OWORD *)(v2 + 24) = 0;
  switch_dbctx();
  *(_QWORD *)(v2 + 48) = sub_2AED00(*(_QWORD *)(v2 + 40), 0);
  sub_652F0((__int64 *)(v2 + 16));
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)v2 = &off_4AD9E0;
  *(_OWORD *)(v2 + 64) = 0;
  return v2;
}

