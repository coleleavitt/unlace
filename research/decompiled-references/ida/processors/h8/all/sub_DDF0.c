__int64 __fastcall sub_DDF0(__int64 a1)
{
  __int64 result; // rax
  char v2; // si
  unsigned __int16 v3; // ax
  __int64 v4; // rax
  __int64 v5; // rdx

  result = 0;
  if ( *(_WORD *)(a1 + 40) == 7 && *(_BYTE *)(a1 + 57) == 9 )
  {
    v2 = 10;
    v3 = *(_WORD *)(a1 + 62);
    if ( v3 <= 0x27u )
      v2 = *((_BYTE *)&qword_181C8 + ((int)*(unsigned __int16 *)(a1 + 62) >> 3));
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v3;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v2;
    v4 = *(_QWORD *)(a1 + 376);
    v5 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
    *(_BYTE *)(a1 + 518) = 1;
    *(_QWORD *)(v4 + 56) = v5;
    *(_DWORD *)v4 |= 0x200u;
    return 1;
  }
  return result;
}

