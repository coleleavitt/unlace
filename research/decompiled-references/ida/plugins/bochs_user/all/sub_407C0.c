__int64 __fastcall sub_407C0(
        _DWORD *a1,
        unsigned __int16 a2,
        int a3,
        unsigned int *a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        char a9)
{
  _DWORD *v11; // r9
  int v12; // r10d
  unsigned int v13; // r15d
  _DWORD *v14; // rbx
  signed int v15; // r13d
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // ebp
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rdx
  _QWORD *v24; // rax
  _BYTE *v25; // r8
  int v26; // edx
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned int v30; // [rsp+14h] [rbp-54h]
  _QWORD v31[9]; // [rsp+20h] [rbp-48h] BYREF

  v31[1] = __readfsqword(0x28u);
  v13 = sub_3FD90((__int64)a1, a2, a3, v31);
  if ( v13 )
    return v13;
  v14 = v11;
  if ( v11 )
    *v11 = 0;
  if ( a5 )
    *a5 = 0;
  v30 = v12
      + (*(unsigned __int16 *)(v31[0] + 2LL) | __ROR4__(_byteswap_ulong(*(_DWORD *)(v31[0] + 4LL)) & 0xFF0000FF, 8));
  v15 = v30 >> 22;
  v16 = sub_3F960((__int64)a1, v30 >> 22);
  v17 = v30;
  if ( !v16 )
  {
    v16 = sub_406B0((__int64)a1, v30 >> 22);
    v17 = v30;
    if ( !v16 )
      return 2;
    v29 = v15 + 8LL;
    a1[v29 + 2] = a1[1049];
    a1[v29 + 2] = a1[v29 + 2] & 0xF6E | (a1[3] + ((v15 + 1) << 12)) & 0xFFFFF000 | 1;
    if ( a7 )
      *a7 = a1[v29 + 2];
    if ( a5 )
      *a5 = a1[3] + 4 * v15;
  }
  v18 = v16 + 8;
  v19 = *(_QWORD *)(v16 + 16);
  v20 = (v17 >> 12) & 0x3FF;
  if ( v19 )
  {
    v21 = v18;
    do
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)(v19 + 16);
        v23 = *(_QWORD *)(v19 + 24);
        if ( v20 > *(_DWORD *)(v19 + 32) )
          break;
        v21 = v19;
        v19 = *(_QWORD *)(v19 + 16);
        if ( !v22 )
          goto LABEL_12;
      }
      v19 = *(_QWORD *)(v19 + 24);
    }
    while ( v23 );
LABEL_12:
    if ( v18 != v21 && v20 >= *(_DWORD *)(v21 + 32) )
    {
      v25 = (_BYTE *)(v21 + 36);
      if ( (*v25 & 1) == 0 )
        goto LABEL_16;
      goto LABEL_25;
    }
  }
  v24 = sub_40420((__int64)a1, v15);
  v25 = v24;
  if ( !v24 )
    return 2;
  if ( (*(_BYTE *)v24 & 1) == 0 )
  {
LABEL_16:
    v26 = a1[1048];
    *(_DWORD *)v25 = v26;
    if ( a4 && a9 )
    {
      *(_DWORD *)v25 = v26 & 0xFFE | *a4 & 0xFFFFF000 | 1;
    }
    else
    {
      v28 = a1[2] & 0xFFFFF000;
      *(_DWORD *)v25 = *(_DWORD *)v25 & 0xFFE | v28 | 1;
      if ( a9 == 1 || !a4 )
      {
        if ( a9 )
          goto LABEL_19;
      }
      else
      {
        *a4 = v28;
      }
      a1[2] += 4096;
    }
LABEL_19:
    if ( v14 )
      *v14 = a1[3] + ((v15 + 1) << 12) + 4 * v20;
    if ( a8 )
      *a8 = *(_DWORD *)v25;
    return v13;
  }
LABEL_25:
  if ( a4 )
    *a4 = ((v25[1] >> 4) | (16 * (unsigned __int8)v25[2]) | ((unsigned __int8)v25[3] << 12)) << 12;
  if ( a8 )
    *a8 = *(_DWORD *)v25;
  return 3;
}

