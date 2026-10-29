unsigned __int64 __fastcall sub_AF20(unsigned __int16 *a1)
{
  int v1; // eax
  _BYTE v3[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v1 = a1[124];
  v4 = __readfsqword(0x28u);
  v3[0] = 0;
  if ( (unsigned int)(v1 - 73) <= 1 )
    qstrncpy();
  (*(void (__fastcall **)(unsigned __int16 *, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 8, v3);
  return v4 - __readfsqword(0x28u);
}

