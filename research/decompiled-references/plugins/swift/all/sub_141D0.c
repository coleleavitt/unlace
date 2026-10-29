unsigned __int64 __fastcall sub_141D0(__int64 a1)
{
  char **v1; // rbx
  __int64 v2; // rsi
  char **v3; // rbx
  __int64 v4; // rsi
  unsigned __int64 result; // rax

  v1 = &off_27780;
  sub_7B90(*(void **)(a1 + 504));
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = a1 + 496;
  *(_QWORD *)(a1 + 520) = a1 + 496;
  *(_QWORD *)(a1 + 528) = 0;
  do
  {
    v2 = (__int64)v1;
    v1 += 4;
    sub_13C00(a1, v2);
  }
  while ( v1 != off_279A0 );
  v3 = &off_27720;
  do
  {
    v4 = (__int64)v3;
    v3 += 3;
    result = sub_13FB0(a1, v4);
  }
  while ( v3 != &off_27780 );
  *(_BYTE *)(a1 + 246) = 1;
  return result;
}
