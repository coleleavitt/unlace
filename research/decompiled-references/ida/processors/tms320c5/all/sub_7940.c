unsigned __int64 __fastcall sub_7940(__int64 a1)
{
  __int64 v2; // [rsp+8h] [rbp-430h] BYREF
  _BYTE v3[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v4; // [rsp+418h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  if ( (unsigned int)sub_5FC0(*(_QWORD *)(a1 + 616), a1 + 224, &v2) )
  {
    ea2str();
    sub_6990(a1, (__int64)&dword_96AC, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL), v3);
  }
  return v4 - __readfsqword(0x28u);
}

