unsigned __int64 __fastcall sub_11490(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  _BYTE v4[4]; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v1 = a1[124];
  v5 = __readfsqword(0x28u);
  v4[0] = 0;
  if ( (unsigned __int16)v1 <= 0x3Eu )
  {
    if ( (unsigned __int16)v1 <= 0x11u )
      goto LABEL_5;
    v2 = 0x4800008002040000LL;
    if ( !_bittest64(&v2, v1) && (_WORD)v1 != 43 )
      goto LABEL_5;
LABEL_9:
    qstrncpy();
    goto LABEL_5;
  }
  if ( (_WORD)v1 == 88 )
    goto LABEL_9;
  if ( (unsigned __int16)v1 <= 0x58u )
  {
    if ( (_WORD)v1 != 74 )
      goto LABEL_5;
    goto LABEL_9;
  }
  if ( (_WORD)v1 == 120 || (_WORD)v1 == 125 )
    goto LABEL_9;
LABEL_5:
  (*(void (__fastcall **)(unsigned __int16 *, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 8, v4);
  return v5 - __readfsqword(0x28u);
}

