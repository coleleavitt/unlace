__int64 __fastcall sub_299A90(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  int v4; // ebx
  unsigned int v5; // r13d
  char tinfo_property; // r15
  __int64 v7; // r14
  __int64 v8; // rdi
  char v9; // r15
  unsigned __int8 scalar_bt; // al
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v12[1] = __readfsqword(0x28u);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 440) )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v7 = *(_QWORD *)(v1 + 432) + 104 * v2;
      v8 = *(_QWORD *)(v7 + 80);
      if ( !(_BYTE)v8
        || (v8 & 0xE) == 0 && (v8 & 0x30) != 0
        || (v12[0] = 0, v12[0] = get_tinfo_property(), v9 = get_tinfo_property(), clear_tinfo_t(), (v9 & 0x3F) == 0x30) )
      {
        v12[0] = 0;
        v12[0] = get_tinfo_property();
        tinfo_property = get_tinfo_property();
        clear_tinfo_t();
        if ( (tinfo_property & 0x3F) != 0x30 )
        {
          scalar_bt = get_scalar_bt();
          v12[0] = scalar_bt;
          if ( scalar_bt )
          {
            sub_1EB0D0(
              v7,
              *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL),
              v12,
              *(_DWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              (16 * *(_BYTE *)(*(_QWORD *)(a1 + 8) + 320LL)) | 8);
            *(_DWORD *)(v7 + 24) |= 0x4000u;
            ++v5;
          }
          clear_tinfo_t();
        }
      }
      v1 = *(_QWORD *)(a1 + 8);
      v2 = ++v4;
    }
    while ( (unsigned __int64)v4 < *(_QWORD *)(v1 + 440) );
  }
  else
  {
    return 0;
  }
  return v5;
}

