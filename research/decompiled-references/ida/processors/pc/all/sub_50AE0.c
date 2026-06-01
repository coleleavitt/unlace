__int64 __fastcall sub_50AE0(__int64 a1, double a2, __m128i a3, __m128i a4)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int8 v9; // r14
  unsigned __int8 v10; // al
  bool v11; // r12
  unsigned __int8 v12; // al
  bool v13; // cl
  bool v14; // r12
  __int16 v15; // ax
  __int16 v16; // cx
  char v17; // dl
  int v18; // eax
  unsigned __int64 v19; // rdx
  bool v20; // zf
  char v21; // al
  __int64 v22; // r12
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  bool v31; // [rsp+Bh] [rbp-3Dh] BYREF
  int v32; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v33[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 864);
  v33[1] = __readfsqword(0x28u);
  if ( !*(_BYTE *)(v4 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v4);
  if ( !(_BYTE)v5 )
    return 0;
  v9 = *(_BYTE *)(v4 + 5);
  v10 = *(_BYTE *)(a1 + 61);
  v11 = v9 <= 0xF9u;
  if ( v10 <= 0xF9u )
  {
    if ( v9 > 0xF9u || v10 >= v9 || *(_BYTE *)(a1 + 8) && v10 == 2 )
      goto LABEL_12;
  }
  else if ( v9 > 0xF9u && v10 >= v9 )
  {
    goto LABEL_12;
  }
  LOBYTE(v7) = v10 < v9;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v7);
  v13 = v12 < v9 && v11;
  v14 = v12 < v9 || v11;
  if ( v12 <= 0xF9u )
    v14 = v13;
  if ( v14 )
    return 0;
LABEL_12:
  v33[0] = -1;
  v15 = *(_WORD *)(a1 + 40);
  if ( v15 == 209 || v15 == 6 )
  {
    v31 = v15 == 6;
    if ( !(unsigned __int8)sub_50980(a1, v33, (unsigned __int64 *)(a1 + 936), &v32, &v31, v8, a2, a3, a4) )
      return 0;
    if ( !v31 )
    {
      v21 = *(_BYTE *)(a1 + 97);
      if ( (unsigned __int8)(v21 - 3) <= 1u || *(_BYTE *)(a1 + 128) && v21 == 2 )
      {
        if ( !(unsigned __int8)sub_4FE40(a1, a1 + 96, 1, v32, v33[0], *(_QWORD *)(a1 + 936), a2, a3, a4) )
          return 0;
        v22 = *(_QWORD *)(a1 + 936);
        *(_BYTE *)(a1 + 514) = 1;
        if ( v22 != -1 )
        {
          v23 = *(_QWORD **)(a1 + 840);
          v24 = *(_QWORD *)(a1 + 848);
          v25 = &v23[v24];
          if ( v23 == v25 )
            goto LABEL_44;
          v26 = *(_QWORD **)(a1 + 840);
          while ( v22 != *v26 )
          {
            if ( v25 == ++v26 )
              goto LABEL_44;
          }
          if ( v26 == v25 )
          {
LABEL_44:
            if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v24 + 1) )
            {
              v29 = qvector_reserve();
              v30 = *(_QWORD *)(a1 + 848);
              *(_QWORD *)(a1 + 840) = v29;
              v25 = (_QWORD *)(v29 + 8 * v30);
            }
            *v25 = v22;
            ++*(_QWORD *)(a1 + 848);
          }
          *(_QWORD *)(a1 + 936) = -1;
        }
      }
    }
    v19 = v33[0];
  }
  else
  {
    if ( v15 != 92
      || (unsigned __int8)(*(_BYTE *)(a1 + 97) - 3) > 1u
      || !(unsigned __int8)sub_4FB50(
                             a1,
                             (unsigned __int64 *)(a1 + 928),
                             (unsigned __int64 *)(a1 + 936),
                             (unsigned int *)&v32,
                             a1 + 96,
                             0,
                             a2,
                             a3,
                             a4,
                             -1,
                             0xFFFFFFFFFFFFFFFFLL,
                             0xFFFFFFFFFFFFFFFFLL) )
    {
      return 0;
    }
    v16 = v32;
    v17 = 7;
    v18 = *(_DWORD *)(a1 + 44) & 0x1018;
    if ( v18 != 4112 )
      v17 = 2 - (v18 == 4096 || v18 == 8);
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v16;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v17;
    v19 = *(_QWORD *)(a1 + 928);
    v20 = *(_BYTE *)(a1 + 97) == 4;
    v33[0] = v19;
    if ( v20 && (v28 = *(_QWORD *)(a1 + 112)) != 0 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL) & (v28 + v19);
      v33[0] = v19;
    }
    else
    {
      *(_QWORD *)(a1 + 928) = -1;
    }
  }
  v27 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)v27 |= 0x200u;
  *(_QWORD *)(v27 + 56) = v19;
  if ( *(_WORD *)(a1 + 40) == 209 )
    **(_DWORD **)(a1 + 376) |= 0x20000u;
  return v5;
}
