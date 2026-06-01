__int64 __fastcall sub_15EB0(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD v13[2]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v14; // [rsp+8h] [rbp-60h]
  _BYTE v15[28]; // [rsp+18h] [rbp-50h]
  int v16; // [rsp+34h] [rbp-34h]
  __int64 v17; // [rsp+38h] [rbp-30h]
  unsigned __int64 v18; // [rsp+48h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( a1 )
  {
    v7 = sub_F0D0((__int64)&off_70FC0, 1u, 1);
    if ( !(_BYTE)v7 )
      sub_EBD0((__int64)"Failed to register Bochs IDC function!\n");
    v16 = 0;
    v13[1] = 0;
    *(_OWORD *)&v15[12] = 0;
    v13[0] = 64;
    v14 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_711C0), (__m128i)(unsigned __int64)"Bochs command");
    v17 = 0xFFFFFFFFLL;
    *(__m128 *)v15 = _mm_loadh_ps((const double *)&PLUGIN_ptr);
    if ( (unsigned __int8)callui(127, v13, v9, v10) )
    {
      if ( (unsigned __int8)callui(129, "Debug/Take memory", "bochs:command", 1) )
      {
LABEL_8:
        callui(85, &unk_71000, 1, v12);
        return v7;
      }
      callui(128, "bochs:command", v11, v12);
    }
    v7 = 0;
    sub_EBD0((__int64)"Failed to register Bochs \"send command\" debugger menu item!\n");
    goto LABEL_8;
  }
  callui(85, &unk_71000, 0, a4);
  v6 = callui(128, "bochs:command", v4, v5);
  return (unsigned int)sub_F0D0((__int64)&off_70FC0, 1u, 0) & v6;
}

