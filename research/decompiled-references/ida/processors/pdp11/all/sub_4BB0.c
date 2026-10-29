__int64 __fastcall sub_4BB0(__int64 a1, __int64 a2)
{
  _BYTE v3[1032]; // [rsp+90h] [rbp-438h] BYREF
  unsigned __int64 v4; // [rsp+498h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  get_item_end();
  btoa64();
  sub_4B00();
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 136LL))(a2, v3, 0xFFFFFFFFLL);
  return 1;
}

