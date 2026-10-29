unsigned __int64 __fastcall sub_8A60(__int64 a1)
{
  unsigned __int16 v1; // ax
  _BYTE v3[8]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v1 = *(_WORD *)(a1 + 248);
  v4 = __readfsqword(0x28u);
  v3[0] = 0;
  if ( v1 > 0x4Cu )
  {
    if ( (unsigned __int16)(v1 - 82) > 5u )
      goto LABEL_3;
  }
  else if ( v1 <= 0x4Au )
  {
    goto LABEL_3;
  }
  qstrncpy();
  if ( *(char *)(a1 + 252) < 0 )
    qstrncat();
LABEL_3:
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 8, v3);
  return v4 - __readfsqword(0x28u);
}

