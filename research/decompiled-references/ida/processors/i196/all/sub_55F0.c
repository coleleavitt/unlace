unsigned __int64 __fastcall sub_55F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char sreg; // al
  int v6; // eax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // rdx
  int v11; // r8d
  unsigned __int8 v12; // al

  if ( *(_DWORD *)(a1 + 124) != 2 )
    return a3;
  if ( a3 <= 0x3F )
    return a3;
  sreg = get_sreg();
  if ( (sreg & 0x70) == 0 )
    return a3;
  v6 = sreg & 0x7F;
  v7 = 70;
  v8 = 0;
LABEL_6:
  if ( v8 >= v7 )
    return a3;
  while ( 1 )
  {
    v9 = (v8 + v7) >> 1;
    v10 = (unsigned __int8 *)qword_9160 + 2 * v9 + 2 * ((v8 + v7) & 0xFFFFFFFFFFFFFFFELL);
    v11 = v10[2];
    if ( v6 - v11 < 0 )
    {
      v7 = (v8 + v7) >> 1;
      goto LABEL_6;
    }
    if ( v6 == v11 )
      break;
    v8 = v9 + 1;
    if ( v9 + 1 >= v7 )
      return a3;
  }
  if ( !v10 )
    return a3;
  v12 = v10[3];
  if ( a3 <= 0x7F )
    v12 = v10[4];
  if ( a3 >= v12 )
    return *(unsigned __int16 *)v10 + a3 - v12;
  else
    return a3;
}

