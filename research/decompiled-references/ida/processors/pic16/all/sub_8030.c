unsigned __int64 __fastcall sub_8030(_DWORD *a1)
{
  int v1; // eax
  _BYTE v3[4]; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = a1[63];
  v3[0] = 46;
  v3[3] = 0;
  v3[1] = *((_BYTE *)qword_D9B0 + (v1 & 0xF));
  v3[2] = byte_D9A5[(unsigned __int8)v1 >> 4];
  (*(void (__fastcall **)(_DWORD *, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 9, v3);
  return v4 - __readfsqword(0x28u);
}

