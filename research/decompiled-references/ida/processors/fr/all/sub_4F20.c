unsigned __int64 __fastcall sub_4F20(_BYTE *a1)
{
  _BYTE v2[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  v2[0] = 0;
  if ( (a1[252] & 1) != 0 )
    qstrncpy();
  (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 8, v2);
  return v3 - __readfsqword(0x28u);
}

