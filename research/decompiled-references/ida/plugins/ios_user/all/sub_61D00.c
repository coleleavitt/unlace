__int64 __fastcall sub_61D00(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall *a3)(_QWORD *, __int64, __int64, __int64, __int64),
        __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v6 = sub_60C10(&v8);
  if ( (_BYTE)v6 )
    v6 = sub_61B50(a1, (__int64)&v8, a3, a4);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v6;
}

