__int64 __fastcall sub_23350(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 (__fastcall *a4)(__m128i *, __int64, __int64, __int64),
        __int64 a5,
        __int64 a6)
{
  int i; // eax
  int v9; // eax
  unsigned int v12; // [rsp+18h] [rbp-5088h]
  _BYTE v13[4]; // [rsp+20h] [rbp-5080h] BYREF
  _BYTE v14[8228]; // [rsp+24h] [rbp-507Ch] BYREF
  __int64 v15; // [rsp+2048h] [rbp-3058h]
  int v16; // [rsp+2054h] [rbp-304Ch]
  _BYTE v17[4104]; // [rsp+4060h] [rbp-1040h] BYREF
  unsigned __int64 v18; // [rsp+5068h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  qmakepath(v17, 4096, a1, "*.kext", 0, a6);
  v15 = 0;
  v16 = 0;
  for ( i = qfindfirst(v17, v13, 0x4000); !i; i = qfindnext(v13) )
  {
    qmakepath(v17, 4096, a1, v14, "Contents", "PlugIns");
    v9 = sub_23240((__int64)v17, a2, a3, a4, a5);
    if ( v9 != -1 )
      goto LABEL_6;
  }
  v9 = -1;
LABEL_6:
  v12 = v9;
  qfindclose(v13);
  return v12;
}

