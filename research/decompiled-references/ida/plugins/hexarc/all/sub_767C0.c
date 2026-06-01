__int64 __fastcall sub_767C0(__int64 a1)
{
  unsigned __int8 *v1; // rdx
  unsigned __int64 v2; // rcx
  _BYTE *v3; // rax
  unsigned __int8 v5; // r9
  unsigned int v6; // r11d
  int v7; // r10d
  _BYTE *v8; // rdx
  __int64 result; // rax
  _BYTE *v10; // r8
  __int64 v11; // rdi
  int v12; // r9d
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rdx

  v1 = *(unsigned __int8 **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 >= v2 )
  {
    if ( !under_debugger )
      sub_37B760(50584);
LABEL_23:
    BUG();
  }
  v3 = v1 + 1;
  *(_QWORD *)a1 = v1 + 1;
  v5 = *v1;
  if ( (*v1 & 0x80u) == 0 )
    return v5;
  v6 = *(_DWORD *)(a1 + 48);
  if ( v6 <= 3 )
  {
    v7 = v5 & 0x7F;
    if ( v2 >= (unsigned __int64)&v3[v5 & 0x7F] )
    {
      result = 0;
      if ( (v5 & 0x7F) == 0 )
        return result;
LABEL_6:
      v8 = v1 + 2;
      result = 0;
      v10 = &v8[v7];
      do
      {
        *(_QWORD *)a1 = v8;
        v11 = (unsigned __int8)*(v8++ - 1);
        result = v11 | (result << 8);
      }
      while ( v10 != v8 );
      if ( v6 <= 3 )
        return result;
      v12 = (v5 >> 4) & 7;
      v13 = 8 - v12 - v7;
      if ( 8 - v12 == v7 )
        return result;
      goto LABEL_16;
    }
    goto LABEL_21;
  }
  v7 = v5 & 0xF;
  if ( v2 < (unsigned __int64)&v3[v5 & 0xF] )
  {
LABEL_21:
    if ( !under_debugger )
      sub_37B760(50585);
    goto LABEL_23;
  }
  if ( (v5 & 0xF) != 0 )
    goto LABEL_6;
  result = 0;
  v13 = 8 - ((v5 >> 4) & 7);
LABEL_16:
  v14 = 8 * v13;
  v15 = -1;
  if ( (unsigned __int64)v14 <= 0x3F )
    v15 = (1LL << v14) - 1;
  return (v15 << (8 * (unsigned __int8)v7)) | result;
}

