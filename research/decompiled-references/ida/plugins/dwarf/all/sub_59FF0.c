_QWORD *__fastcall sub_59FF0(__int64 *a1, __int64 a2, int a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v8; // rax

  v4 = (_QWORD *)operator new(0x188u);
  sub_571B0((__int64)v4, a2, 0);
  *v4 = &off_C8530;
  v4[48] = 0;
  sub_59E30((__int64)v4, a3, 0);
  v5 = a1[1];
  v6 = *a1;
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v8 = qvector_reserve(a1, v6, v5 + 1, 8);
    *a1 = v8;
    v6 = v8;
    v5 = a1[1];
  }
  *(_QWORD *)(v6 + 8 * v5) = v4;
  ++a1[1];
  return v4;
}

