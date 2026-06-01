__int64 __fastcall sub_42E60(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // r15d
  __int64 v4; // r13
  unsigned __int64 tinfo_size; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  _QWORD *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  int v17; // r12d
  __int64 v18; // rax
  __int64 *v19; // rbp
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r14
  __int16 v24; // ax
  char v25; // al
  int v26; // r12d
  int v27; // r12d
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  char v33; // bp
  char v34; // bl
  char v35; // bl
  __int16 v36; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v37; // [rsp+8h] [rbp-C0h]
  __int64 v38; // [rsp+10h] [rbp-B8h]
  int v39; // [rsp+18h] [rbp-B0h]
  char v40; // [rsp+1Fh] [rbp-A9h]
  __int64 v41; // [rsp+20h] [rbp-A8h]
  __int64 *v42; // [rsp+28h] [rbp-A0h]
  __int64 v45; // [rsp+40h] [rbp-88h]
  char v46; // [rsp+48h] [rbp-80h]
  __int64 tinfo_property; // [rsp+50h] [rbp-78h] BYREF
  __int128 v48; // [rsp+58h] [rbp-70h]
  __int128 v49; // [rsp+68h] [rbp-60h]
  __int64 v50; // [rsp+78h] [rbp-50h]
  int v51; // [rsp+80h] [rbp-48h]
  unsigned __int64 v52; // [rsp+88h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v40 = getinf_flag(67, 32);
  v2 = a2[1];
  if ( (int)v2 > 0 )
  {
    v39 = 36;
    v3 = 3;
    v38 = 0;
    v37 = 48;
    v45 = 16 * (5LL * (unsigned int)(v2 - 1) + 5);
    while ( 1 )
    {
      v4 = *a2 + v38;
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v4 + 64), 0);
      if ( tinfo_size == -1 )
        return 0;
      tinfo_property = 0;
      v6 = 2;
      v50 = 0;
      v51 = 1;
      v48 = 0;
      v49 = 0;
      v42 = (__int64 *)(v4 + 64);
      if ( (get_tinfo_property(*(_QWORD *)(v4 + 64), 2) & 0x2F) == 0xD )
      {
        v6 = 13;
        if ( (unsigned __int8)get_tinfo_details(*(_QWORD *)(v4 + 64), 13, &tinfo_property) )
        {
          if ( !(unsigned __int8)sub_42C50((_QWORD *)(v4 + 64)) && (*(_BYTE *)(a1 + 461) & 2) == 0 )
          {
            v31 = v37;
            v7 = v37 + (int)v50 - 1;
            v32 = v7 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & -(int)v50;
            if ( v37 != v32 )
            {
              v37 = v7 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & -(int)v50;
              v7 = (v32 - v31) >> 3;
              v3 += v7;
            }
          }
        }
      }
      v8 = tinfo_property;
      if ( tinfo_property )
      {
        v9 = v48;
        if ( (_QWORD)v48 )
        {
          v10 = 0;
          do
          {
            v11 = (_QWORD *)(v8 + 144 * v10);
            clear_tinfo_t(v11 + 8);
            v12 = v11[5];
            if ( v12 )
            {
              v11[6] = 0;
              qfree(v12, v6, v7, 0.0);
            }
            v13 = v11[2];
            if ( v13 )
            {
              v11[3] = 0;
              qfree(v13, v6, v7, 0.0);
            }
            ++v10;
            v8 = tinfo_property;
          }
          while ( v9 != v10 );
        }
        *(_QWORD *)&v48 = 0;
        qfree(v8, v6, v7, 0.0);
      }
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (tinfo_size + 7);
      v15 = v14 >> 3;
      v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      v17 = v15;
      if ( (_DWORD)v15 == 1 )
      {
        if ( v40
          && v39 <= 48
          && ((tinfo_property = 0,
               tinfo_property = get_tinfo_property(*(_QWORD *)(v4 + 64), 18),
               v35 = get_tinfo_property(tinfo_property, 2),
               clear_tinfo_t(&tinfo_property),
               (v35 & 0xF) == 9)
           || (unsigned __int8)sub_42C50(v42)) )
        {
          ++v3;
          cleanup_argloc(v4);
          *(_DWORD *)v4 = 3;
          *(_DWORD *)(v4 + 8) = v39++;
        }
        else
        {
          cleanup_argloc(v4);
          if ( v3 > 10 )
          {
            *(_DWORD *)v4 = 1;
            *(_QWORD *)(v4 + 8) = v37;
          }
          else
          {
            *(_DWORD *)v4 = 3;
            *(_DWORD *)(v4 + 8) = v3++;
          }
        }
        v37 += 8LL;
      }
      else
      {
        if ( v40 && v39 <= 48 )
        {
          tinfo_property = 0;
          tinfo_property = get_tinfo_property(*(_QWORD *)(v4 + 64), 18);
          v33 = get_tinfo_property(tinfo_property, 2) & 0xF;
          clear_tinfo_t(&tinfo_property);
          if ( v33 != 9 && !(unsigned __int8)sub_42C50(v42) && v3 > 10 )
          {
            tinfo_property = 0;
            tinfo_property = get_tinfo_property(*(_QWORD *)(v4 + 64), 18);
            v34 = get_tinfo_property(tinfo_property, 2) & 0xF;
            clear_tinfo_t(&tinfo_property);
            if ( v34 == 9 || (unsigned __int8)sub_42C50(v42) )
            {
              ++v3;
              cleanup_argloc(v4);
              *(_DWORD *)v4 = 3;
              *(_DWORD *)(v4 + 8) = v39++;
            }
            else
            {
LABEL_58:
              cleanup_argloc(v4);
              *(_DWORD *)v4 = 1;
              *(_QWORD *)(v4 + 8) = v37;
            }
            if ( !v16 )
              v16 = 8;
            v37 += v16;
            goto LABEL_43;
          }
        }
        else if ( v3 > 10 )
        {
          goto LABEL_58;
        }
        v18 = qalloc_or_throw(24);
        *(_QWORD *)v18 = 0;
        v19 = (__int64 *)v18;
        *(_OWORD *)(v18 + 8) = 0;
        if ( v17 > 0 )
        {
          v20 = 0;
          v21 = 0;
          v36 = 0;
          v41 = tinfo_size - 8 - 8LL * (unsigned int)(v17 - 1);
          v22 = 0;
          while ( 1 )
          {
            if ( v21 < v22 + 1 )
            {
              v28 = qvector_reserve(v19, v20, v22 + 1, 24);
              v22 = v19[1];
              *v19 = v28;
              v20 = v28;
            }
            v23 = v20 + 24 * v22;
            *(_QWORD *)v23 = 0;
            *(_DWORD *)(v23 + 16) = 0xFFFF;
            *(_QWORD *)(v23 + 8) = 0;
            ++v19[1];
            *(_WORD *)(v23 + 16) = v36;
            v24 = 8;
            if ( tinfo_size <= 8 )
              v24 = tinfo_size;
            *(_WORD *)(v23 + 18) = v24;
            v25 = getinf_flag(3, 32);
            if ( tinfo_size > 7 || (v26 = 8 - tinfo_size, !v25) )
              v26 = 0;
            if ( v40
              && v39 <= 48
              && ((tinfo_property = 0,
                   tinfo_property = get_tinfo_property(*(_QWORD *)(v4 + 64), 18),
                   v46 = get_tinfo_property(tinfo_property, 2),
                   clear_tinfo_t(&tinfo_property),
                   (v46 & 0xF) == 9)
               || (unsigned __int8)sub_42C50(v42)) )
            {
              ++v3;
              cleanup_argloc(v23);
              *(_DWORD *)v23 = 3;
              *(_DWORD *)(v23 + 8) = v39++;
            }
            else
            {
              cleanup_argloc(v23);
              if ( v3 > 10 )
              {
                *(_DWORD *)v23 = 1;
                *(_QWORD *)(v23 + 8) = v37;
              }
              else
              {
                v27 = v3 | (v26 << 16);
                *(_DWORD *)v23 = 3;
                ++v3;
                *(_DWORD *)(v23 + 8) = v27;
              }
            }
            v36 += *(_WORD *)(v23 + 18);
            tinfo_size -= 8LL;
            v37 += 8LL;
            if ( tinfo_size == v41 )
              break;
            v22 = v19[1];
            v21 = v19[2];
            v20 = *v19;
          }
        }
        cleanup_argloc(v4);
        if ( v19 )
        {
          *(_DWORD *)v4 = 2;
          *(_QWORD *)(v4 + 8) = v19;
        }
      }
LABEL_43:
      sub_408F0(v4, v42, -1);
      v38 += 80;
      if ( v45 == v38 )
      {
        v29 = 112;
        if ( v37 >= 0x70 )
          v29 = v37;
        goto LABEL_46;
      }
    }
  }
  v29 = 112;
LABEL_46:
  a2[7] = v29;
  return 1;
}

