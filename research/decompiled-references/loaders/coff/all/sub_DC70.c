__int64 __fastcall sub_DC70(__int64 a1, _WORD *a2, unsigned int *a3, char a4)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ebx
  char v12; // al
  __int64 v13; // r13
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v20; // rsi
  char v21; // [rsp+4h] [rbp-64h]
  __int64 v22; // [rsp+8h] [rbp-60h]
  _BYTE v23[12]; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v8 = (unsigned __int16)*a2;
  if ( a4 )
  {
    LOWORD(v8) = v8 - 320;
    v9 = 16;
    if ( (unsigned __int16)v8 <= 0x23u )
    {
      v10 = 0x900000001LL;
      v9 = _bittest64(&v10, v8) == 0 ? 16LL : 12LL;
    }
  }
  else
  {
    v9 = 4LL * ((v8 & 0xFFDF) != 322) + 12;
  }
  sub_DB90(a1, a3, v9, "ECOFF symbol count", -1, -1);
  v11 = *a3;
  if ( !v11 )
    return 0;
  v22 = qcalloc(v11, 16);
  if ( !v22 )
    sub_5B40((__int64)"ecoff sym");
  if ( v11 > 0 )
  {
    v12 = a4;
    v13 = v22;
    v21 = v12;
    v14 = v22 + 16LL * (unsigned int)v11;
    do
    {
      v15 = (unsigned __int16)*a2;
      if ( a4 )
      {
        while ( 1 )
        {
          LOWORD(v15) = v15 - 320;
          if ( (unsigned __int16)v15 <= 0x23u )
          {
            v16 = 0x900000001LL;
            if ( _bittest64(&v16, v15) )
              break;
          }
          v20 = v13;
          v13 += 16;
          lread(a1, v20, 16);
          *(_QWORD *)(v13 - 16) = swap64(*(_QWORD *)(v13 - 16));
          *(_DWORD *)(v13 - 8) = _byteswap_ulong(*(_DWORD *)(v13 - 8));
          if ( v14 == v13 )
            return v22;
          v15 = (unsigned __int16)*a2;
        }
      }
      else if ( (v15 & 0xFFDF) != 0x142 )
      {
        do
        {
          v18 = v13;
          v13 += 16;
          lread(a1, v18, 16);
          if ( v14 == v13 )
            return v22;
        }
        while ( (*a2 & 0xFFDF) != 0x142 );
      }
      lread(a1, v23, 12);
      v17 = v13;
      v13 += 16;
      sub_4C40((__int64)v23, v17, v21);
    }
    while ( v13 != v14 );
  }
  return v22;
}
