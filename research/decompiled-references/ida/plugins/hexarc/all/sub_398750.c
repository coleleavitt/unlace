__int64 __fastcall sub_398750(__int64 a1, int a2, __m128 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax

  sub_383B90(a1, 0);
  v3 = 0;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v4 = sub_37D1F0(*(_QWORD *)(a1 + 88));
    if ( v4 )
    {
      if ( a2 == 10 )
      {
LABEL_12:
        v5 = 0x22222202200000LL;
        goto LABEL_7;
      }
      if ( a2 > 10 )
      {
        if ( a2 == 16 )
          goto LABEL_10;
      }
      else
      {
        v5 = 0x33333303300000LL;
        if ( !a2 )
          goto LABEL_7;
        v5 = 0x77777707700000LL;
        if ( a2 == 8 )
          goto LABEL_7;
      }
      if ( (unsigned int)get_radix() != 10 )
        goto LABEL_12;
LABEL_10:
      v5 = 0x11111101100000LL;
LABEL_7:
      v6 = *(_QWORD *)(v4 + 40) & 0xFF000000F00FFFFFLL;
      *(_BYTE *)(v4 + 13) |= 1u;
      *(_QWORD *)(v4 + 40) = v5 | v6;
      sub_398480(a1, v4, 1, a3);
      return 1;
    }
  }
  return v3;
}

