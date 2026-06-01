__int64 __fastcall sub_7CD40(__int64 a1, double a2)
{
  unsigned __int8 *v2; // rdx
  unsigned __int64 v3; // rcx
  _BYTE *v4; // rax
  unsigned __int8 v6; // r9
  unsigned int v7; // r11d
  int v8; // r10d
  _BYTE *v9; // rdx
  __int64 result; // rax
  _BYTE *v11; // r8
  __int64 v12; // rdi
  int v13; // r9d
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx

  v2 = *(unsigned __int8 **)a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 >= v3 )
  {
    if ( !under_debugger )
      sub_383060(0xC598u, a2);
LABEL_23:
    BUG();
  }
  v4 = v2 + 1;
  *(_QWORD *)a1 = v2 + 1;
  v6 = *v2;
  if ( (*v2 & 0x80u) == 0 )
    return v6;
  v7 = *(_DWORD *)(a1 + 48);
  if ( v7 <= 3 )
  {
    v8 = v6 & 0x7F;
    if ( v3 >= (unsigned __int64)&v4[v6 & 0x7F] )
    {
      result = 0;
      if ( (v6 & 0x7F) == 0 )
        return result;
LABEL_6:
      v9 = v2 + 2;
      result = 0;
      v11 = &v9[v8];
      do
      {
        *(_QWORD *)a1 = v9;
        v12 = (unsigned __int8)*(v9++ - 1);
        result = v12 | (result << 8);
      }
      while ( v11 != v9 );
      if ( v7 <= 3 )
        return result;
      v13 = (v6 >> 4) & 7;
      v14 = 8 - v13 - v8;
      if ( 8 - v13 == v8 )
        return result;
      goto LABEL_16;
    }
    goto LABEL_21;
  }
  v8 = v6 & 0xF;
  if ( v3 < (unsigned __int64)&v4[v6 & 0xF] )
  {
LABEL_21:
    if ( !under_debugger )
      sub_383060(0xC599u, a2);
    goto LABEL_23;
  }
  if ( (v6 & 0xF) != 0 )
    goto LABEL_6;
  result = 0;
  v14 = 8 - ((v6 >> 4) & 7);
LABEL_16:
  v15 = 8 * v14;
  v16 = -1;
  if ( (unsigned __int64)v15 <= 0x3F )
    v16 = (1LL << v15) - 1;
  return (v16 << (8 * (unsigned __int8)v8)) | result;
}

