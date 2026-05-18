__int64 __fastcall sub_177190(__int64 *a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax

  v4 = a1[1];
  v5 = *a1;
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v8 = sub_1987B0(a1, v5, v4 + 1, 32);
    *a1 = v8;
    v5 = v8;
    v4 = a1[1];
  }
  v6 = v5 + 32 * v4;
  *(_BYTE *)v6 = 2;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  ++a1[1];
  return sub_1770A0((unsigned __int8 *)v6, a2);
}
