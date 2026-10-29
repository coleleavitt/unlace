__int64 __fastcall sub_3CF40(__int64 a1, int a2)
{
  unsigned __int16 v2; // ax
  __int16 v3; // r13
  char v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  char *v13; // rax
  __int128 v14; // [rsp+0h] [rbp-198h] BYREF
  __int64 v15; // [rsp+10h] [rbp-188h]
  __int64 v16; // [rsp+18h] [rbp-180h]
  __int64 v17; // [rsp+20h] [rbp-178h]
  char v18; // [rsp+28h] [rbp-170h] BYREF
  __int64 v19; // [rsp+38h] [rbp-160h]
  _QWORD v20[6]; // [rsp+168h] [rbp-30h] BYREF

  v20[0] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 57) != 11 )
    return 0;
  v2 = *(_WORD *)(a1 + 40);
  if ( v2 == 332 )
  {
    v3 = *(_WORD *)(a1 + 62);
    v4 = 0;
  }
  else
  {
    if ( v2 <= 0x14Cu )
    {
      if ( v2 == 329 )
      {
        v3 = *(_WORD *)(a1 + 62);
        v4 = 0;
        goto LABEL_7;
      }
      if ( v2 == 330 )
      {
        v3 = *(_WORD *)(a1 + 62);
        v4 = 1;
LABEL_7:
        if ( (*(_WORD *)(a1 + 44) & 0x308) != 0 )
          return 0;
        v5 = *(_QWORD *)(a1 + 112) + 16LL * *(_QWORD *)(a1 + 16);
        v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
        if ( v5 != v6 )
        {
          v6 &= v5;
          if ( v5 == -1 )
            v6 = -1;
        }
        if ( *(_QWORD *)(a1 + 8LL * a2 + 384) < v6 )
          return 0;
        v9 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
        v15 = -1;
        v16 = 0;
        v13 = &v18;
        v17 = 0;
        v14 = -1;
        do
        {
          *(_WORD *)v13 = 0;
          v13 += 40;
          *((_WORD *)v13 - 19) = 0;
          *((_WORD *)v13 - 18) = 0;
          *((_DWORD *)v13 - 2) = 0;
          *((_WORD *)v13 - 17) = 0;
          *((_OWORD *)v13 - 2) = 0;
          *((_QWORD *)v13 - 2) = 0;
        }
        while ( v13 != (char *)v20 );
        if ( (int)decode_insn(&v14, v9, v20, 0.0) > 0 && (v16 & 0x3080000FFFFLL) == 0xD )
        {
          v10 = v19 + 16 * v14;
LABEL_18:
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
          if ( v10 != v9 )
          {
            v9 &= v10;
            if ( v10 == -1 )
              v9 = -1;
          }
          goto LABEL_21;
        }
        goto LABEL_21;
      }
      return 0;
    }
    if ( v2 != 333 )
      return 0;
    v3 = *(_WORD *)(a1 + 62);
    v4 = 1;
  }
  v8 = *(_DWORD *)(a1 + 44);
  if ( (v8 & 0x208) != 0 )
    return 0;
  v9 = -1;
  if ( (v8 & 0x100) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 112) + 16LL * *(_QWORD *)(a1 + 16);
    goto LABEL_18;
  }
LABEL_21:
  v11 = *(_QWORD *)(a1 + 864);
  v12 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(v11 + 40) = 25344;
  *(_WORD *)(v11 + 44) = 0;
  *(_WORD *)(v11 + 46) = v3;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 56) = v12;
  *(_QWORD *)(v11 + 64) = v9;
  *(_BYTE *)(v11 + 72) = v4;
  *(_WORD *)(v11 + 73) = 0;
  *(_BYTE *)(v11 + 75) = 0;
  return 1;
}

