__int64 __fastcall sub_CCCE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  signed int v4; // edx
  char *v5; // rax
  unsigned int v6; // r9d
  char *v7; // r11
  char *v8; // rax
  __int64 result; // rax
  __int16 v11; // cx
  unsigned __int16 v12; // si

  v5 = (char *)(a2 + *(unsigned __int8 *)(a1 + 10));
  v6 = (unsigned __int8)*v5;
  if ( v6 > 0x7F )
  {
    v7 = v5 + 8;
    v6 &= 0x7Fu;
    do
      v6 = *++v5 & 0x7F | (v6 << 7);
    while ( v7 > v5 && *v5 < 0 );
  }
  v8 = v5 + 1;
  *(_DWORD *)(a3 + 16) = v6;
  *(_QWORD *)a3 = v6;
  *(_QWORD *)(a3 + 8) = v8;
  if ( *(unsigned __int16 *)(a1 + 14) < v6 )
  {
    v11 = a2;
    v12 = *(_WORD *)(a1 + 16);
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL) - 4;
    result = (*(_DWORD *)(a3 + 16) - (unsigned int)v12) / v3;
    v4 = v12 + (*(_DWORD *)(a3 + 16) - (unsigned int)v12) % v3;
    if ( *(unsigned __int16 *)(a1 + 14) >= v4 )
    {
      v12 = v4;
      *(_WORD *)(a3 + 20) = v4;
    }
    else
    {
      *(_WORD *)(a3 + 20) = v12;
    }
    *(_WORD *)(a3 + 22) = *(_WORD *)(a3 + 8) + v12 - v11 + 4;
  }
  else
  {
    *(_WORD *)(a3 + 20) = v6;
    result = v6 + (_DWORD)v8 - (_DWORD)a2;
    if ( (unsigned __int16)result < 4u )
      result = 4;
    *(_WORD *)(a3 + 22) = result;
  }
  return result;
}
