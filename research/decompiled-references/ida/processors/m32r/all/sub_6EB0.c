unsigned __int64 __fastcall sub_6EB0(__int64 a1)
{
  __int64 v1; // rax
  char v2; // al
  _BYTE v4[3]; // [rsp+5h] [rbp-23h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 616);
  v5 = __readfsqword(0x28u);
  v4[0] = 0;
  if ( (*(_BYTE *)(v1 + 232) & 1) != 0 )
  {
    v2 = *(_BYTE *)(a1 + 256);
    if ( (v2 & 0x10) != 0 )
    {
      qstrncpy();
      v2 = *(_BYTE *)(a1 + 256);
    }
    if ( (v2 & 0x20) != 0 )
      qstrncpy();
  }
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 8, v4);
  return v5 - __readfsqword(0x28u);
}

