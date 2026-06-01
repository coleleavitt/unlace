__int64 __fastcall sub_896E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v8; // esi
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  bool v13; // cl

  v8 = *(unsigned __int8 *)(a4 + 32);
  if ( (unsigned __int8)(v8 - 80) <= 0x1Fu )
  {
    LOBYTE(v10) = *(_BYTE *)(a5 + 32);
    v11 = v8 - 80;
    if ( (unsigned __int8)(v10 - 80) <= 0x1Fu )
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
               a1,
               a2,
               a3,
               a6,
               a7);
LABEL_14:
    if ( (unsigned __int8)(v10 - 112) > 0x1Fu )
      goto LABEL_6;
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
             a1,
             a2,
             a3,
             a6,
             a7);
  }
  if ( (unsigned __int8)(v8 - 112) <= 0x1Fu )
  {
    LOBYTE(v10) = *(_BYTE *)(a5 + 32);
    v11 = v8 - 112;
    if ( (unsigned __int8)(v10 - 80) <= 0x1Fu )
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
               a1,
               a2,
               a3,
               a6,
               a7);
    goto LABEL_14;
  }
  if ( (v8 & 0xFD) == 0x90 )
  {
    v10 = *(unsigned __int8 *)(a5 + 32);
    v11 = *(_DWORD *)a4;
    if ( (unsigned __int8)(v10 - 80) <= 0x1Fu )
    {
      v12 = v10 - 80;
      v13 = 1;
      goto LABEL_8;
    }
    if ( (unsigned __int8)(v10 - 112) <= 0x1Fu )
    {
      v12 = v10 - 112;
      v13 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    v10 = *(unsigned __int8 *)(a5 + 32);
    if ( (unsigned __int8)(v10 - 80) <= 0x1Fu )
    {
      v12 = v10 - 80;
      v11 = -1;
      goto LABEL_10;
    }
    v11 = -1;
    if ( (unsigned __int8)(v10 - 112) <= 0x1Fu )
    {
      v12 = v10 - 112;
      goto LABEL_10;
    }
  }
LABEL_6:
  if ( (v10 & 0xFD) != 0x90 )
  {
    v12 = -1;
    goto LABEL_10;
  }
  v12 = *(_QWORD *)a5;
  v13 = v12 != -1;
LABEL_8:
  if ( v11 != -1 && v13 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
             a1,
             a2,
             a3,
             a6,
             a7);
LABEL_10:
  if ( (debug & 0x400000) != 0 )
    sub_88B80((__int64)"Cannot find IDA registers # for DWARF registers %d,%d.\n", v11, v12);
  return 0;
}

