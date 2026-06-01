__int64 __fastcall sub_3B010(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__m128i *, __int64, const char *, __int64),
        __int64 a5)
{
  unsigned int v7; // ebx
  __int64 v9; // [rsp+10h] [rbp-1060h] BYREF
  __int128 v10; // [rsp+18h] [rbp-1058h]
  char v11[4104]; // [rsp+30h] [rbp-1040h] BYREF
  unsigned __int64 v12; // [rsp+1038h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  v10 = 0;
  v9 = 0;
  sub_15ED0(&v9);
  qmakepath();
  v7 = sub_3A030(v11, a2, a4, a5);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v7;
}

