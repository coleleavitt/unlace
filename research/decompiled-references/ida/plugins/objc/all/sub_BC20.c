__int64 __fastcall sub_BC20(__int64 *a1)
{
  unsigned int v1; // eax
  int v2; // edx
  __int64 result; // rax
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int16 v12; // [rsp+10h] [rbp-20h]
  __int16 v13; // [rsp+12h] [rbp-1Eh]
  __int16 v14; // [rsp+14h] [rbp-1Ch]
  __int16 v15; // [rsp+16h] [rbp-1Ah]
  int v16; // [rsp+18h] [rbp-18h]

  v1 = *((_DWORD *)a1 + 2);
  v12 = v1 & 1;
  v13 = (v1 >> 3) & 1;
  v15 = (v1 >> 2) & 1;
  v14 = (v1 >> 1) & 1;
  v16 = *((_DWORD *)a1 + 3);
  v2 = sub_AF30();
  result = 0;
  if ( v2 )
  {
    v4 = *((_DWORD *)a1 + 2);
    v5 = v4 & 0xFFFFFFFE;
    v6 = v4 | 1;
    if ( v12 )
      v5 = v6;
    v7 = v5 & 0xFFFFFFF7;
    if ( v13 )
      v7 = v5 | 8;
    v8 = v7 & 0xFFFFFFFD;
    if ( v14 )
      v8 = v7 | 2;
    v9 = v8 & 0xFFFFFFFB;
    if ( v15 )
      v9 = v8 | 4;
    v10 = *a1;
    *((_DWORD *)a1 + 2) = v9;
    *(_BYTE *)(v10 + 2216) = v12 != 0;
    v11 = *a1;
    *((_DWORD *)a1 + 3) = v16;
    *(_DWORD *)(v11 + 2208) = v16;
    return 1;
  }
  return result;
}
