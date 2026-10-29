unsigned __int64 __fastcall sub_102A0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // r10d
  unsigned __int64 v4; // rbp
  __int64 v5; // r8
  int i; // r11d
  int v7; // eax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = fopenWB();
  if ( !v1 )
    sub_E890((__int64)"Can't open signature file '%s'", a1);
  v2 = v1;
  v3 = 1;
  if ( !(_BYTE)qword_218B0 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(qword_218B8 + 8);
    if ( v4 )
    {
      v5 = *(_QWORD *)qword_218B8;
      for ( i = 0; i < v4; ++i )
      {
        v7 = 1;
        if ( !*(_BYTE *)v5 )
          v7 = sub_8F80(*(__int64 **)(v5 + 8));
        v3 += v7;
        v5 += 40;
      }
    }
  }
  dword_203C5 = v3;
  word_203C9 = dword_21868;
  v9 = v2;
  sub_101D0(&v9, (__int64)aIdasgn, (__int64)&xmmword_20790, aUnnamedSampleL, (__int64)&qword_218B0);
  qfclose(v2);
  return v10 - __readfsqword(0x28u);
}
