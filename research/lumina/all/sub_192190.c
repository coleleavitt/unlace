unsigned __int64 __fastcall sub_192190(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r11
  __int128 v4; // rt0
  _WORD v6[12]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v2 = a1;
  v7 = __readfsqword(0x28u);
  v3 = a2;
  memset(v6, 0, 22);
  if ( a1 < 0 )
  {
    v2 = -a1;
    v6[0] = -1;
    goto LABEL_3;
  }
  if ( a1 )
  {
LABEL_3:
    *((_QWORD *)&v4 + 1) = WORD2(v2) | ((WORD1(v2) | ((unsigned __int64)(unsigned __int16)v2 << 16)) << 16);
    *(_QWORD *)&v4 = v2;
    *(_QWORD *)&v6[2] = v4 >> 48;
    v6[1] = 16430 - sub_190980((__int64)v6);
  }
  sub_191160(v6, v3);
  return v7 - __readfsqword(0x28u);
}
