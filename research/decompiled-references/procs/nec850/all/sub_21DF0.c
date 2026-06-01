__int64 __fastcall sub_21DF0(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rdx
  char v6; // dl
  __int64 v7; // rax
  int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v3 = sub_21900(a1, a2, &v8, a3);
  if ( v3 == 5 )
  {
    v6 = v8;
    v7 = 8;
    if ( (v8 & 0xB) != 9 )
      v7 = 1032;
    *a2 = v7;
    if ( (v6 & 1) != 0 && (v6 & 6) != 4 )
    {
      if ( (v6 & 8) != 0 )
      {
        if ( (v6 & 2) != 0 )
        {
          BYTE1(v7) |= 8u;
          *a2 = v7;
        }
      }
      else
      {
        BYTE1(v7) |= 0x18u;
        *a2 = v7;
      }
      if ( (v6 & 4) == 0 )
        *a2 |= 0x20000000uLL;
    }
    return 1;
  }
  if ( v3 != 6 )
    return 0;
  v5 = *a2;
  *a2 |= 0x80000008uLL;
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 8) != 0 )
    {
      if ( (~(_BYTE)v8 & 6) != 0 )
        return 1;
      goto LABEL_7;
    }
    if ( (v8 & 4) == 0 )
LABEL_7:
      *a2 = v5 | 0x80001008LL;
  }
  return 1;
}
