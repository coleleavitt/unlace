__int64 __fastcall sub_DCB0(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // ecx

  result = 0;
  if ( *(_WORD *)(a1 + 40) == 1 && *(_BYTE *)(a1 + 57) == 5 )
  {
    v3 = *(unsigned __int8 *)(a1 + 101);
    if ( *(_BYTE *)(a1 + 908) == (_BYTE)v3 )
    {
      v4 = *(_QWORD *)(a1 + 864);
      v5 = *(unsigned __int8 *)(v4 + 5);
      if ( v3 + 1 == (_DWORD)v5 && *(_BYTE *)(a1 + 97) == 1 && *(_BYTE *)(v4 + 1) == 1 )
      {
        v6 = *(unsigned __int16 *)(a1 + 102);
        result = (unsigned int)((v6 >> 3) - 1);
        LOBYTE(result) = (unsigned __int8)v5 > 2u || (unsigned int)result <= 1;
        if ( (_BYTE)result )
        {
          return 0;
        }
        else if ( *((_DWORD *)qword_18240 + 3 * (v6 & 7) + v5) == *(unsigned __int16 *)(v4 + 6) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) += *(_QWORD *)(a1 + 64);
          return 1;
        }
      }
    }
  }
  return result;
}

