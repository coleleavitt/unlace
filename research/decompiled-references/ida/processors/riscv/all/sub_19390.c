__int64 __fastcall sub_19390(__int64 a1, __int64 *a2)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rbp
  unsigned __int8 v6; // r9
  const __m128i *v7; // rdx
  __int64 v8; // rax
  unsigned __int8 v9; // bp
  unsigned __int8 v10; // al
  bool v11; // r13
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  unsigned __int8 v13; // al
  bool v14; // dl
  bool v15; // cc
  bool v16; // al
  __int64 v17; // rdx
  char v18; // cl
  int v19; // esi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int16 v23; // di
  char v24; // al
  _QWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rbp
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx

  v3 = *(_WORD *)(a1 + 40);
  if ( v3 <= 0x32u )
  {
    if ( v3 > 0xAu )
    {
      switch ( *(_WORD *)(a1 + 40) )
      {
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x30:
        case 0x31:
          goto LABEL_7;
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x32:
          v7 = (const __m128i *)(a1 + 56);
          v8 = a1 + 96;
          v6 = 10;
          goto LABEL_9;
        case 0x18:
          if ( *(_BYTE *)(a1 + 137) != 5 || *(_QWORD *)(a1 + 144) != 255 )
            return 0;
          v6 = 0;
          goto LABEL_8;
        case 0x19:
        case 0x1A:
          v4 = *(_QWORD *)(a1 + 864);
          if ( !*(_BYTE *)(v4 + 1) )
          {
            *(_BYTE *)(a1 + 792) = 1;
            return 0;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
                  a1,
                  a1 + 56,
                  *(_QWORD *)(a1 + 864)) )
            return 0;
          v9 = *(_BYTE *)(v4 + 5);
          v10 = *(_BYTE *)(a1 + 61);
          v11 = v9 <= 0xF9u;
          if ( v10 <= 0xF9u )
          {
            if ( v9 > 0xF9u || v10 >= v9 || v10 == 2 && *(_BYTE *)(a1 + 8) )
              goto LABEL_26;
          }
          else if ( v9 > 0xF9u && v10 >= v9 )
          {
            goto LABEL_26;
          }
          v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
          if ( v12 == sub_14E20 )
            return 0;
          v13 = v12(a1, a1 + 56);
          v14 = v11 || v13 < v9;
          v15 = v13 <= 0xF9u;
          v16 = v11 && v13 < v9;
          if ( !v15 )
            v16 = v14;
          if ( v16 )
            return 0;
LABEL_26:
          v17 = *(_QWORD *)(a1 + 144);
          v18 = *(_BYTE *)(a1 + 101);
          LOBYTE(v19) = v17;
          if ( *(_WORD *)(a1 + 40) == 26 )
          {
            v19 = -(int)v17;
            goto LABEL_34;
          }
          v20 = 32;
          if ( v18 == 7 )
            v20 = 64;
          if ( v20 > (int)v17 )
          {
            v21 = v20 - v17;
            if ( v21 <= 8 )
            {
              v18 = 0;
            }
            else if ( v21 <= 16 )
            {
              v18 = 1;
            }
            else if ( v21 <= 32 )
            {
              v18 = 2;
            }
LABEL_34:
            v22 = *(_QWORD *)(a1 + 864);
            v23 = *(_WORD *)(a1 + 102);
            v24 = *(_BYTE *)(v22 + 32);
            *(_BYTE *)(v22 + 1) = 1;
            *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v23;
            *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v18;
            *(_BYTE *)(*(_QWORD *)(a1 + 864) + 32LL) = v19 + v24;
            v25 = *(_QWORD **)(a1 + 840);
            v26 = *(_QWORD *)(a1 + 848);
            v27 = *(_QWORD *)(a1 + 32);
            v28 = &v25[v26];
            if ( v25 != v28 )
            {
              v29 = *(_QWORD **)(a1 + 840);
              while ( v27 != *v29 )
              {
                if ( v28 == ++v29 )
                  goto LABEL_39;
              }
              if ( v29 != v28 )
                return 1;
            }
LABEL_39:
            v30 = v26 + 1;
            if ( *(_QWORD *)(a1 + 856) < v30 )
            {
              v31 = qvector_reserve(a1 + 840, v25, v30, 8);
              v32 = *(_QWORD *)(a1 + 848);
              *(_QWORD *)(a1 + 840) = v31;
              v28 = (_QWORD *)(v31 + 8 * v32);
            }
            *v28 = v27;
            ++*(_QWORD *)(a1 + 848);
            return 1;
          }
          break;
        default:
          return 0;
      }
    }
    return 0;
  }
  if ( v3 == 123 )
  {
LABEL_7:
    v6 = 10;
  }
  else
  {
    v6 = 2;
    if ( v3 != 127 )
      return 0;
  }
LABEL_8:
  v7 = (const __m128i *)(a1 + 96);
  v8 = a1 + 56;
LABEL_9:
  sub_19140(a1, v8, v7, a2, 0xAu, v6);
  return 1;
}

