unsigned __int64 __fastcall sub_3C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _BYTE v7[264]; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int64 v8; // [rsp+108h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  qsnprintf();
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v7, 33);
  if ( a5 != -1 )
  {
    qsnprintf();
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v7, 1);
  }
  return v8 - __readfsqword(0x28u);
}

