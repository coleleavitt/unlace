__int64 __fastcall sub_7330(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE v5[1032]; // [rsp+20h] [rbp-428h] BYREF
  unsigned __int64 v6; // [rsp+428h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( !a3 )
    return 3;
  qstrncpy();
  if ( !(unsigned __int8)is_valid_utf8() )
  {
    if ( (unsigned __int8)idb_utf8() )
      qstrncpy();
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD))(*(_QWORD *)(a1 + 16) + 8LL))(
    a3,
    v5,
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
  return 0;
}
