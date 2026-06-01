__int64 __fastcall sub_3B120(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__m128i *, __int64, const char *, __int64),
        __int64 a5)
{
  int i; // eax
  int v8; // eax
  unsigned int v11; // [rsp+18h] [rbp-5088h]
  _BYTE v12[4104]; // [rsp+4060h] [rbp-1040h] BYREF
  unsigned __int64 v13; // [rsp+5068h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  qmakepath();
  for ( i = qfindfirst(); !i; i = qfindnext() )
  {
    qmakepath();
    v8 = sub_3B010((__int64)v12, a2, a3, a4, a5);
    if ( v8 != -1 )
      goto LABEL_6;
  }
  v8 = -1;
LABEL_6:
  v11 = v8;
  qfindclose();
  return v11;
}

