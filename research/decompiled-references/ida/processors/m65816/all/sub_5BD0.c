unsigned __int64 __fastcall sub_5BD0(_BYTE *a1)
{
  __int64 v2; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v3; // [rsp+48h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  if ( (a1[721] & 8) == 0 )
  {
    qsnprintf();
    (*(void (__fastcall **)(_BYTE *, __int64 *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, &v2, 0);
  }
  return v3 - __readfsqword(0x28u);
}

