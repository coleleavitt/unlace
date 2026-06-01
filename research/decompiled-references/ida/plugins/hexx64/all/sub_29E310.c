__int64 __fastcall sub_29E310(__int64 a1, double a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v5; // ebx
  unsigned int v6; // r13d
  char tinfo_property; // r15
  __int64 v8; // r14
  __int64 v9; // rdi
  char v10; // r15
  unsigned __int8 scalar_bt; // al
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v13[1] = __readfsqword(0x28u);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 440) )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v8 = *(_QWORD *)(v2 + 432) + 104 * v3;
      v9 = *(_QWORD *)(v8 + 80);
      if ( !(_BYTE)v9
        || (v9 & 0xE) == 0 && (v9 & 0x30) != 0
        || (v13[0] = 0, v13[0] = get_tinfo_property(), v10 = get_tinfo_property(), clear_tinfo_t(), (v10 & 0x3F) == 0x30) )
      {
        v13[0] = 0;
        v13[0] = get_tinfo_property();
        tinfo_property = get_tinfo_property();
        clear_tinfo_t();
        if ( (tinfo_property & 0x3F) != 0x30 )
        {
          scalar_bt = get_scalar_bt();
          v13[0] = scalar_bt;
          if ( scalar_bt )
          {
            sub_1EF950(
              v8,
              *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL),
              v13,
              *(_DWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              (16 * *(_BYTE *)(*(_QWORD *)(a1 + 8) + 320LL)) | 8,
              a2);
            *(_DWORD *)(v8 + 24) |= 0x4000u;
            ++v6;
          }
          clear_tinfo_t();
        }
      }
      v2 = *(_QWORD *)(a1 + 8);
      v3 = ++v5;
    }
    while ( (unsigned __int64)v5 < *(_QWORD *)(v2 + 440) );
  }
  else
  {
    return 0;
  }
  return v6;
}

