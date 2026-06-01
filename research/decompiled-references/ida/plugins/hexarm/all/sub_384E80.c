__int64 __fastcall sub_384E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
         207,
         &v8,
         "SetTypeRenames",
         &callui,
         a5,
         a6);
  if ( (_BYTE)v6 )
  {
    if ( (_DWORD)v8 != 1 )
      sub_384E60();
    LOBYTE(v6) = v9 != 0;
  }
  jvalue_t_clear();
  return v6;
}

