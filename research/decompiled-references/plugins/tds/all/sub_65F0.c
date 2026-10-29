__int64 __fastcall sub_65F0(__int64 a1, __int64 a2, double a3, __m128i a4)
{
  unsigned int v4; // ebp
  int v6; // eax
  const char *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int128 v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+10h] [rbp-58h]
  __int128 v13; // [rsp+20h] [rbp-48h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v4 = netnode_exist(a1 + 152);
  if ( (_BYTE)v4 )
  {
    v6 = netnode_altval(*(_QWORD *)(a1 + 152), -5, 65);
    if ( v6 )
    {
      if ( !a2 )
      {
        v7 = "rejected";
        if ( v6 >= 0 )
        {
          v7 = "accepted, but cancelled";
          if ( v6 == 1 )
            v7 = "accepted";
        }
        sub_2D50((__int64)"AUTOHIDE REGISTRY\nTDS-info has already been %s", v7);
      }
    }
    else
    {
      v11 = 0;
      v12 = 0;
      v13 = 0;
      if ( (unsigned __int8)sub_3900(a1, a2 != 0, &v11) )
      {
        *(_QWORD *)(a1 + 144) = netnode_altval(*(_QWORD *)(a1 + 152), -2, 65);
        sub_2BB0((__int64)"Loading TDS information");
        v10 = *((_QWORD *)&v12 + 1);
        if ( *((_QWORD *)&v12 + 1) )
        {
          sub_2EE0((__int64)"TDS: load %s information\n", "global symbols");
          if ( !(unsigned __int8)sub_6450(a1, v10, 0.0, a4) && (debug & 0x400000) != 0 )
            sub_2AE0((__int64)"TDS: there were errors during parsing %s information\n", "global symbols");
        }
        if ( !*(_BYTE *)(a1 + 164) )
        {
          v9 = (unsigned int)v13;
          if ( (_DWORD)v13 )
          {
            sub_64B0(a1, "modules", (__int64 (__fastcall *)(__int64, _WORD *))sub_28D0, (_WORD *)v11, 288, v13);
            sub_64B0(
              a1,
              "linenumbers",
              (__int64 (__fastcall *)(__int64, _WORD *))sub_3F50,
              (_WORD *)v11,
              295,
              DWORD1(v13));
            if ( !(unsigned __int8)sub_3180(a1, 0) )
              sub_64B0(
                a1,
                "local symbols",
                (__int64 (__fastcall *)(__int64, _WORD *))sub_63D0,
                (_WORD *)v11,
                293,
                DWORD2(v13));
          }
        }
        callui(24, 10, 0, &callui, v8, v9, v11, *((_QWORD *)&v11 + 1), v12, *((_QWORD *)&v12 + 1));
      }
      qfree(*(_QWORD *)(a1 + 136));
      qfree(*(_QWORD *)(a1 + 120));
      *(_QWORD *)(a1 + 120) = 0;
    }
  }
  return v4;
}
