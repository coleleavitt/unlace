__int64 __fastcall sub_8E60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // r9d
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rdx

  v3 = (int)sub_8DC0(a1, a2, a3, 0);
  result = 0;
  if ( (_DWORD)v3 != -1 )
  {
    *(_BYTE *)(a2 + 41) = 4;
    *(_BYTE *)(a2 + 73) = 5;
    *(_QWORD *)(a2 + 64) = v3;
    *(_WORD *)(a2 + 46) = ((unsigned __int8)v4 >> 7) + 46;
    *(_QWORD *)(a2 + 56) = ((v4 >> 8) & 0x7FFF) << v3;
    v6 = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned __int16)v6 > 0x44u )
    {
      if ( (unsigned __int16)(v6 - 214) > 2u )
        return *(unsigned __int16 *)(a2 + 26);
    }
    else
    {
      if ( (unsigned __int16)v6 <= 0x3Fu )
        return *(unsigned __int16 *)(a2 + 26);
      v7 = 21;
      if ( !_bittest64(&v7, (unsigned int)(v6 - 64)) )
        return *(unsigned __int16 *)(a2 + 26);
    }
    sub_7210(a2);
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}

