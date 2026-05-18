__int64 __fastcall sub_C39B0(__int64 a1, __int64 a2)
{
  char *v2; // rcx
  unsigned int v3; // eax
  char *v4; // r9
  unsigned int v5; // r8d
  int v6; // ecx
  __int64 result; // rax
  int v8; // esi
  unsigned int v9; // eax

  v2 = (char *)(a2 + *(unsigned __int8 *)(a1 + 10));
  v3 = (unsigned __int8)*v2;
  if ( v3 > 0x7F )
  {
    v4 = v2 + 8;
    v3 &= 0x7Fu;
    do
      v3 = *++v2 & 0x7F | (v3 << 7);
    while ( v4 > v2 && *v2 < 0 );
  }
  v5 = *(unsigned __int16 *)(a1 + 14);
  v6 = (_DWORD)v2 + 1 - a2;
  if ( v5 < v3 )
  {
    v8 = *(unsigned __int16 *)(a1 + 16);
    v9 = v8 + (v3 - v8) % (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL) - 4);
    if ( v5 >= v9 )
      v8 = v9;
    return v8 + (unsigned int)(unsigned __int16)v6 + 4;
  }
  else
  {
    result = v6 + v3;
    if ( (unsigned int)result < 4 )
      return 4;
  }
  return result;
}
