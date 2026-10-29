__int64 __fastcall sub_E330(__int64 a1, _WORD *a2, unsigned int *a3, char a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v18; // r15
  __int64 v19; // rsi
  __int16 v21; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int16 v22; // [rsp+12h] [rbp-56h]
  _BYTE v23[20]; // [rsp+14h] [rbp-54h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v6 = (unsigned __int16)*a2;
  if ( a4 )
  {
    LOWORD(v6) = v6 - 320;
    v7 = 24;
    if ( (unsigned __int16)v6 <= 0x23u )
    {
      v8 = 0x900000001LL;
      v7 = _bittest64(&v8, v6) == 0 ? 24LL : 16LL;
    }
  }
  else
  {
    v7 = 8LL * ((v6 & 0xFFDF) != 322) + 16;
  }
  sub_DB90(a1, a3, v7, "ECOFF ext count", -1, -1);
  v9 = *a3;
  if ( !v9 )
    return 0;
  v10 = qcalloc(v9, 24);
  v11 = v10;
  if ( !v10 )
    sub_5B40((__int64)"ecoff ext");
  if ( v9 > 0 )
  {
    v12 = v10;
    v13 = 0x900000001LL;
    v14 = v10 + 24LL * (unsigned int)v9;
    v15 = (unsigned __int16)*a2;
    if ( !a4 )
    {
      v18 = v11;
      while ( 1 )
      {
        if ( (v15 & 0xFFDF) == 0x142 )
        {
          lread(a1, &v21, 16);
          sub_4C40((__int64)v23, v18, 0);
          v18 += 24;
          *(_WORD *)(v18 - 8) = v21;
          *(_DWORD *)(v18 - 4) = v22;
          if ( v14 == v18 )
            return v11;
        }
        else
        {
          v19 = v18;
          v18 += 24;
          lread(a1, v19, 24);
          if ( v14 == v18 )
            return v11;
        }
        LOWORD(v15) = *a2;
      }
    }
    LOWORD(v15) = v15 - 320;
    if ( (unsigned __int16)v15 > 0x23u )
      goto LABEL_12;
LABEL_9:
    if ( _bittest64(&v13, v15) )
    {
      lread(a1, &v21, 16);
      sub_4C40((__int64)v23, v12, 1);
      v12 += 24;
      *(_WORD *)(v12 - 8) = v21;
      *(_DWORD *)(v12 - 4) = (unsigned __int16)__ROL2__(v22, 8);
      if ( v14 != v12 )
        goto LABEL_11;
    }
    else
    {
LABEL_12:
      while ( 1 )
      {
        v16 = v12;
        v12 += 24;
        lread(a1, v16, 24);
        *(_QWORD *)(v12 - 24) = swap64(*(_QWORD *)(v12 - 24));
        *(_DWORD *)(v12 - 16) = _byteswap_ulong(*(_DWORD *)(v12 - 16));
        *(_DWORD *)(v12 - 4) = _byteswap_ulong(*(_DWORD *)(v12 - 4));
        if ( v14 == v12 )
          break;
LABEL_11:
        v15 = (unsigned __int16)*a2;
        LOWORD(v15) = v15 - 320;
        if ( (unsigned __int16)v15 <= 0x23u )
          goto LABEL_9;
      }
    }
  }
  return v11;
}
