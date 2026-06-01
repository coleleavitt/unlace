unsigned __int64 __fastcall sub_12400(_WORD *a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _BYTE v6[8]; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v7[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = a1[124];
  v3 = *(unsigned __int16 *)(a2 + 24);
  v8 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v2 - 253) <= 1u )
    qsnprintf(v6, 8, "e%u", v3);
  else
    qstrncpy(v6, *(&off_2CEA0 + v3), 8);
  v4 = *(unsigned __int16 *)(a2 + 26);
  if ( (unsigned __int16)(a1[124] - 253) <= 1u )
    qsnprintf(v7, 8, "e%u", v4);
  else
    qstrncpy(v7, *(&off_2CEA0 + v4), 8);
  (*(void (__fastcall **)(_WORD *, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v6, 33);
  (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
  (*(void (__fastcall **)(_WORD *, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v7, 33);
  return v8 - __readfsqword(0x28u);
}
