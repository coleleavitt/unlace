__int64 __fastcall sub_3FE20(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        _DWORD *a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  unsigned int v9; // r12d
  __int64 v12; // r10
  unsigned int v13; // esi
  __int64 v14; // rax
  _QWORD *v15; // r9
  __int64 v16; // r10
  int v17; // r11d
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rdi
  unsigned int v26; // [rsp+Ch] [rbp-4Ch]
  unsigned int v27; // [rsp+Ch] [rbp-4Ch]
  _QWORD v28[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = a3 & 0xFFFFF000;
  v28[1] = __readfsqword(0x28u);
  if ( (unsigned int)sub_3FD90(a1, a2, a3 & 0xFFFFF000, v28) )
    return 0;
  v26 = v9
      + (*(unsigned __int16 *)(v28[0] + 2LL) | __ROR4__(_byteswap_ulong(*(_DWORD *)(v28[0] + 4LL)) & 0xFF0000FF, 8));
  v13 = v26 >> 22;
  v14 = sub_3F960(v12, v26 >> 22);
  if ( !v14 )
    return 0;
  v18 = v26;
  if ( a5 )
    *a5 = v16 + 4LL * (int)(v13 + 10);
  v19 = v14 + 8;
  v20 = *(_QWORD *)(v14 + 16);
  v21 = (v26 >> 12) & 0x3FF;
  if ( !v20 )
    return 0;
  v27 = v9;
  v22 = v19;
  do
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)(v20 + 16);
      v24 = *(_QWORD *)(v20 + 24);
      if ( v21 > *(_DWORD *)(v20 + 32) )
        break;
      v22 = v20;
      v20 = *(_QWORD *)(v20 + 16);
      if ( !v23 )
        goto LABEL_10;
    }
    v20 = *(_QWORD *)(v20 + 24);
  }
  while ( v24 );
LABEL_10:
  if ( v19 == v22 || v21 < *(_DWORD *)(v22 + 32) )
    return 0;
  if ( v15 )
    *v15 = v22 + 36;
  if ( a4 )
    *a4 = (((*(_BYTE *)(v22 + 37) >> 4) | (16 * *(unsigned __int8 *)(v22 + 38)) | (*(unsigned __int8 *)(v22 + 39) << 12)) << 12)
        + v17
        - v27;
  if ( a7 )
    *a7 = v18;
  if ( a9 )
    *a9 = *(_DWORD *)(v16 + 12) + ((v13 + 1) << 12) + 4 * v21;
  if ( a8 )
    *a8 = *(_DWORD *)(v16 + 12) + 4 * v13;
  return 1;
}

