__int64 __fastcall sub_5A220(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax

  v6 = operator new(0x1A8u);
  sub_571B0(v6, a2, 2);
  *(_QWORD *)(v6 + 384) = 0;
  *(_DWORD *)(v6 + 408) = a3;
  *(_QWORD *)v6 = &off_C9BE0;
  *(_BYTE *)(v6 + 412) = 0;
  *(_QWORD *)(v6 + 416) = 0;
  *(_OWORD *)(v6 + 392) = 0;
  sub_59E30(v6, a4, 0);
  v7 = a1[1];
  v8 = *a1;
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(a1, v8, v7 + 1, 8);
    *a1 = v10;
    v8 = v10;
    v7 = a1[1];
  }
  *(_QWORD *)(v8 + 8 * v7) = v6;
  ++a1[1];
  return v6;
}
