__int64 __fastcall sub_3F1CC0(__int64 a1, int a2)
{
  char *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // r9d
  char *v9; // r11
  char *v10; // r8
  _DWORD *v11; // r10
  int v12; // eax
  unsigned int v13; // esi
  int v14; // edx
  int v15; // edi
  __int64 v16; // rsi
  int v17; // edx
  int v18; // esi
  __int64 v19; // rdx
  int v20; // esi
  __int64 v21; // rdx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  char v25; // [rsp+28h] [rbp-170h] BYREF
  char v26; // [rsp+29h] [rbp-16Fh] BYREF
  _QWORD v27[6]; // [rsp+168h] [rbp-30h] BYREF

  v27[0] = __readfsqword(0x28u);
  v4 = &v25;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v4 != (char *)v27 );
  v5 = decode_insn();
  result = 0;
  if ( v5 )
  {
    v8 = 0;
    if ( a2 == 13 )
      v8 = 0;
    v9 = (char *)v27 + 1;
    v10 = &v26;
    v11 = dword_429E60;
    while ( *v10 )
    {
      switch ( *v10 )
      {
        case 1:
          if ( !(unsigned __int8)sub_3F1B50(a1, *(unsigned __int16 *)(v10 + 5), (unsigned int)a2, v6) )
            goto LABEL_10;
          LODWORD(v6) = 2;
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
          v20 = *(_DWORD *)(v19 + 104);
          if ( v20 <= 0
            && *(int *)(v19 + 108) > 0
            && (*v11 & *(_DWORD *)(*(_QWORD *)(v19 + 112) + 16LL * -v20 + 8)) != 0 )
          {
            LODWORD(v6) = 1;
          }
          v10 += 40;
          v8 |= v6;
          ++v11;
          if ( v10 != v9 )
            continue;
          return v8;
        case 3:
          if ( *(unsigned __int16 *)(v10 + 5) != a2 && (unsigned __int8)v10[31] != a2 )
            goto LABEL_10;
          v10 += 40;
          v8 |= 2u;
          ++v11;
          if ( v10 != v9 )
            continue;
          return v8;
        case 4:
        case 8:
          if ( *(unsigned __int16 *)(v10 + 5) != a2 )
            goto LABEL_10;
          v8 |= 2u;
          v10 += 40;
          ++v11;
          if ( v10 != v9 )
            continue;
          return v8;
        case 9:
          if ( (unsigned __int64)a2 > 0x1F )
            goto LABEL_10;
          LODWORD(v6) = a2;
          if ( (*(_QWORD *)(v10 + 23) & (unsigned int)(1 << a2)) == 0 )
            goto LABEL_10;
          goto LABEL_23;
        case 12:
          v6 = *(_QWORD *)(v10 + 7);
          v12 = *(unsigned __int16 *)(v10 + 5);
          if ( *(_DWORD *)(a1 + 80) != 8 )
          {
            v13 = a2 - 93;
            if ( (unsigned int)(v12 - 93) <= 0x1F )
            {
              v14 = 1;
              if ( v13 > 0x1F )
                goto LABEL_18;
            }
            else
            {
              if ( (unsigned int)(v12 - 61) > 0x1F )
              {
                if ( (unsigned int)(v12 - 45) > 0xF )
                  goto LABEL_10;
                v12 = 4 * v12 - 87;
                v14 = 4;
              }
              else
              {
                v12 = 2 * v12 - 29;
                v14 = 2;
              }
              if ( v13 > 0x1F )
              {
LABEL_18:
                if ( (unsigned int)(a2 - 61) <= 0x1F )
                {
                  v15 = 2 * a2 - 29;
                  v16 = 2;
                }
                else
                {
                  if ( (unsigned int)(a2 - 45) > 0xF )
                    goto LABEL_10;
                  v15 = 4 * a2 - 87;
                  v16 = 4;
                }
LABEL_44:
                v21 = (int)v6 * v14;
                if ( !v21 )
                  goto LABEL_10;
                LODWORD(v6) = v15;
                if ( v21 + v12 - 1 < (unsigned __int64)v15 || v16 + v15 - 1 < (unsigned __int64)v12 )
                  goto LABEL_10;
                goto LABEL_23;
              }
            }
            v15 = a2;
            v16 = 1;
            goto LABEL_44;
          }
          v22 = v12 - 163;
          v23 = a2 - 163;
          LODWORD(v6) = v22 + v6;
          if ( v22 > a2 - 163 )
            goto LABEL_61;
          v24 = 32;
          if ( (int)v6 <= 32 )
            v24 = v6;
          if ( v24 <= v23 )
          {
LABEL_61:
            if ( (int)v6 <= 32 || v23 < 0 || (LODWORD(v6) = v6 - 32, (int)v6 <= v23) )
            {
LABEL_10:
              v10 += 40;
              ++v11;
              if ( v10 == v9 )
                return v8;
              continue;
            }
          }
LABEL_23:
          v17 = 2;
          v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
          v18 = *(_DWORD *)(v6 + 104);
          if ( v18 <= 0 && *(int *)(v6 + 108) > 0 )
            v17 = ((*v11 & *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * -v18 + 8)) == 0) + 1;
          v10 += 40;
          v8 |= v17;
          ++v11;
          if ( v10 == v9 )
            return v8;
          break;
        default:
          goto LABEL_10;
      }
    }
    return v8;
  }
  return result;
}

