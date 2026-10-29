__int64 __fastcall sub_12B00(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( a3 == 1 )
  {
    qsnprintf();
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 33);
    return (unsigned __int16)a2 & 0xFF3F;
  }
  else
  {
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "DP0", 32);
    return a2;
  }
}

