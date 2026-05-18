__int64 __fastcall sub_C3160(__int64 a1)
{
  _QWORD *v1; // r8

  v1 = (_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 52) & 2) != 0 )
    sub_C2FA0(a1, 1);
  --*(_DWORD *)(v1[3] + 24LL);
  return xmmword_241568(*(_QWORD *)(v1[3] + 64LL), *v1, 1);
}
