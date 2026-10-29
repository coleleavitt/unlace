unsigned __int64 __fastcall sub_1E550(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // r10
  int v8; // eax
  __int64 v10; // r12
  __int64 v11; // [rsp+8h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  sub_1D540(a2, a4);
  v8 = HIWORD(v6) & 0xF;
  if ( (v6 & 0x400000) != 0 )
  {
    *(_WORD *)(a3 + 6) = v8;
    v10 = v5;
    *(_BYTE *)(a3 + 1) = 4;
    *(_QWORD *)(a3 + 16) = v6 & 0xF | (v6 >> 4) & 0xF0;
    sub_1E470(v7, a2, a3, 1);
    if ( v10 )
    {
      get_flags_ex();
      if ( (unsigned __int8)is_off() )
      {
        if ( (unsigned __int8)get_refinfo()
          && !v11
          && (unsigned __int8)get_refinfo()
          && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD))sub_38180)(*(_QWORD *)(a2 + 16)) )
        {
          sub_1DB20(v10, 4, 4, 0);
          sub_1DB20(v10, 12, 12, 8);
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(a3 + 1) = 3;
    *(_WORD *)(a3 + 6) = v8;
    *(_BYTE *)(a3 + 32) = v6 & 0xF;
  }
  return v12 - __readfsqword(0x28u);
}

