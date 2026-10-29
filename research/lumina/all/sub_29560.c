__int64 __fastcall sub_29560(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rsi
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[3] = __readfsqword(0x28u);
  v4 = s1;
  if ( *(_QWORD *)(a1 + 152) )
    v4 = *(const char **)(a1 + 144);
  return unk_241E80(a3, v4, v6, a1 + 168, a2);
}
