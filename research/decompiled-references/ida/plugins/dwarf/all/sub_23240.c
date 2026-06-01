__int64 __fastcall sub_23240(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 (__fastcall *a4)(__m128i *, __int64, __int64, __int64),
        __int64 a5)
{
  const char *v7; // rcx
  unsigned int v8; // ebx
  const char *v10; // [rsp+10h] [rbp-1060h] BYREF
  __int128 v11; // [rsp+18h] [rbp-1058h]
  _BYTE v12[4104]; // [rsp+30h] [rbp-1040h] BYREF
  unsigned __int64 v13; // [rsp+1038h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v10 = nullptr;
  sub_20160((__int64 *)&v10, (__int64)"%s.kext", a3);
  v7 = src;
  if ( (_QWORD)v11 )
    v7 = v10;
  qmakepath(v12, 4096, a1, v7, "Contents", "MacOS");
  v8 = sub_21580((__int64)v12, a2, a4, a5);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v8;
}

