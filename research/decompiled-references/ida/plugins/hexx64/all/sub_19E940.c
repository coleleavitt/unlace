__int64 __fastcall sub_19E940(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // r15
  int v7; // r12d
  unsigned __int64 i; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // r10
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 v24; // al
  _DWORD *v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rsi
  _DWORD *v28; // r10
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int32 v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  _DWORD *v39; // [rsp+8h] [rbp-98h]
  unsigned __int8 v40; // [rsp+13h] [rbp-8Dh]
  unsigned int v41; // [rsp+14h] [rbp-8Ch]
  __int64 v42; // [rsp+18h] [rbp-88h]
  _DWORD *v43; // [rsp+18h] [rbp-88h]
  int v44; // [rsp+18h] [rbp-88h]
  _DWORD *v45; // [rsp+20h] [rbp-80h]
  _DWORD *v46; // [rsp+20h] [rbp-80h]
  _DWORD *v47; // [rsp+20h] [rbp-80h]
  _DWORD *v48; // [rsp+20h] [rbp-80h]
  __int64 v49; // [rsp+20h] [rbp-80h]
  __int64 v50; // [rsp+28h] [rbp-78h]
  __int64 v51; // [rsp+28h] [rbp-78h]
  unsigned int v52; // [rsp+28h] [rbp-78h]
  __int64 v53; // [rsp+28h] [rbp-78h]
  __m128i *v54; // [rsp+30h] [rbp-70h]
  __int64 v55; // [rsp+38h] [rbp-68h]
  unsigned __int8 v56; // [rsp+40h] [rbp-60h]
  _DWORD *v57; // [rsp+40h] [rbp-60h]
  __int64 v58; // [rsp+40h] [rbp-60h]
  __int64 v59; // [rsp+48h] [rbp-58h]

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v55 = *(_QWORD *)(v6 + 1504);
  v54 = sub_D21A0(v6, (__int64)a2, a3, a4, a5);
  if ( a2[1] )
  {
    v56 = 0;
    v7 = 0;
    i = 0;
    while ( 1 )
    {
      v9 = *(_QWORD *)(*a2 + 8 * i);
      v59 = v9;
      if ( !v9 )
        goto LABEL_3;
      if ( *(_DWORD *)v9 != 4 )
        goto LABEL_3;
      if ( *(_BYTE *)(v9 + 32) != 4 )
        goto LABEL_3;
      v10 = *(_QWORD *)(v9 + 40);
      if ( *(_BYTE *)(v10 + 64) != 8 || *(_DWORD *)(*(_QWORD *)(v10 + 72) + 284LL) != 23 || *(_BYTE *)(v59 + 64) != 9 )
        goto LABEL_3;
      v11 = *(__int64 **)(v59 + 72);
      v12 = *v11;
      v13 = *((int *)v11 + 4);
      if ( *(_QWORD *)(v12 + 440) < v13 )
        sub_1953E0(0.0);
      v14 = 13 * v13;
      v15 = *(_QWORD *)(v12 + 432);
      if ( *(_DWORD *)(v15 + 8 * v14) != 1 )
        goto LABEL_3;
      v50 = v15 + 8 * v14;
      if ( (get_tinfo_property() & 0xF) == 0xB )
        goto LABEL_3;
      v16 = (_DWORD *)v50;
      v17 = *(_QWORD *)(v59 + 72);
      if ( *(_QWORD *)(v17 + 8) )
        break;
      if ( *(_DWORD *)(v59 + 68) < *(_DWORD *)(v50 + 88) )
      {
        if ( *(_DWORD *)v50 != 1 )
        {
          if ( v7 >= 0 )
          {
LABEL_60:
            if ( !under_debugger )
              sub_383060(0xC99Fu, 0.0);
LABEL_66:
            BUG();
          }
          goto LABEL_3;
        }
        if ( v7 >= 0 )
        {
          v51 = *(_QWORD *)(v50 + 8);
          v41 = *(_DWORD *)(v17 + 16);
LABEL_34:
          v46 = v16;
          sub_D67C0(*(int **)(a1 + 8), v16, (_DWORD **)v16 + 10, -1, *(_DWORD *)(v6 + 72));
          ++v7;
          v40 = v24;
          v25 = v46;
          for ( i = v7; (unsigned __int64)v7 < a2[1]; i = ++v7 )
          {
            v26 = *(_QWORD *)(*a2 + 8 * i);
            if ( v26 )
            {
              if ( v59 == v26 )
              {
                if ( !under_debugger )
                  sub_383060(0xC9A0u, 0.0);
                goto LABEL_66;
              }
              if ( *(_DWORD *)v26 != 4 )
                break;
              if ( *(_BYTE *)(v26 + 32) != 4 )
                break;
              v34 = *(_QWORD *)(v26 + 40);
              if ( *(_BYTE *)(v34 + 64) != 8 )
                break;
              if ( *(_DWORD *)(*(_QWORD *)(v34 + 72) + 284LL) != 23 )
                break;
              v43 = v25;
              v49 = *(_QWORD *)(*a2 + 8 * i);
              v35 = sub_195FF0(v55, v26 + 64, 0.0);
              v25 = v43;
              if ( v51 >= v35 || v51 + (int)v43[22] <= v35 )
                break;
              if ( *(_BYTE *)(v49 + 64) == 9 && *(_DWORD *)(*(_QWORD *)(v49 + 72) + 16LL) == v41 )
              {
                if ( v40 )
                {
                  sub_A3480((__int64)v54, (_BYTE *)v49);
                  v25 = v43;
                }
                *(_QWORD *)(*a2 + 8 * i) = 0;
              }
              else
              {
                v36 = *(unsigned int *)(v49 + 36);
                *(_BYTE *)(v49 + 32) = 9;
                v39 = v43;
                v44 = v36;
                v37 = (int)v35 - (int)v51;
                v38 = j__qalloc_or_throw(24, (unsigned int)v51, v49, v36);
                *(_QWORD *)v38 = v6;
                *(_QWORD *)(v38 + 8) = v37;
                *(_DWORD *)(v38 + 16) = v41;
                v25 = v39;
                *(_QWORD *)(v49 + 40) = v38;
                *(_DWORD *)(v49 + 36) = v44;
              }
            }
          }
          if ( v40 )
          {
            v57 = v25;
            v27 = 0;
            print_tinfo();
            v28 = v57;
            if ( *(_BYTE *)(v59 + 64) != 9 || (v27 = v41, *(_DWORD *)(*(_QWORD *)(v59 + 72) + 16LL) != v41) )
            {
              v47 = v57;
              v58 = j__qalloc_or_throw(80, v27, 0, 0);
              v29 = *(_QWORD *)(v59 + 24);
              *(_QWORD *)(v58 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v58 + 40) = 0;
              *(_QWORD *)(v58 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v58 + 56) = 0;
              *(_QWORD *)(v58 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v58 + 72) = 0;
              sub_330970(v58, v29);
              *(_DWORD *)v58 = 4;
              sub_125180((unsigned __int8 *)(v58 + 64), (unsigned __int8 *)(v59 + 64));
              *(_BYTE *)(v58 + 32) = 9;
              v52 = *(_DWORD *)(v58 + 68);
              v31 = j__qalloc_or_throw(24, v59 + 64, v52, v30);
              *(_QWORD *)v31 = v6;
              *(_QWORD *)(v31 + 8) = 0;
              *(_DWORD *)(v31 + 16) = v41;
              *(_DWORD *)(v58 + 36) = v52;
              *(_QWORD *)(v58 + 40) = v31;
              sub_A3160((__int64)v54, (_QWORD *)v58, v59, 0.0);
              v28 = v47;
            }
            v48 = v28;
            v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 40) + 72LL) + 24LL);
            qfree(*(_QWORD *)(v53 + 88));
            *(_QWORD *)(v53 + 88) = qstrdup();
            copy_tinfo_t();
            v32 = v48[22];
            *(_DWORD *)(*(_QWORD *)(v59 + 40) + 68LL) = v32;
            *(_DWORD *)(v59 + 36) = v32;
            *(_DWORD *)(v59 + 68) = v32;
            *(_QWORD *)(*(_QWORD *)(v59 + 72) + 8LL) = 0;
            *(_DWORD *)(*(_QWORD *)(v59 + 72) + 16LL) = v41;
            if ( (get_tinfo_property() & 0x2F) == 0xD )
            {
              *(_BYTE *)(*(_QWORD *)(v59 + 40) + 65LL) |= 2u;
              *(_BYTE *)(v59 + 33) |= 2u;
              *(_BYTE *)(v59 + 65) |= 2u;
            }
            v33 = v54[1].m128i_i32[2];
            BYTE1(v33) &= ~2u;
            LOBYTE(v33) = v33 | 0x80;
            v54[1].m128i_i32[2] = v33;
            sub_1B5B40((int *)v59);
            sub_A2520((__int64)v54, "combine va_args: %s");
            v56 = v40;
            goto LABEL_4;
          }
        }
      }
LABEL_3:
      i = ++v7;
LABEL_4:
      if ( i >= a2[1] )
        return v56;
    }
    if ( *(_DWORD *)v50 == 1 )
      v51 = *(_QWORD *)(v50 + 8);
    else
      v51 = -1;
    v18 = v7 - 1;
    if ( v7 - 1 < 0 )
      goto LABEL_3;
    v19 = 8LL * v18;
    v41 = *(_DWORD *)(v17 + 16);
    while ( 1 )
    {
      v20 = *(_QWORD *)(*a2 + v19);
      v59 = v20;
      if ( !v20 )
        goto LABEL_3;
      if ( *(_DWORD *)v20 == 4 && *(_BYTE *)(v20 + 32) == 4 )
      {
        v21 = *(_QWORD *)(v20 + 40);
        if ( *(_BYTE *)(v21 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v21 + 72) + 284LL) == 23 )
        {
          v42 = v19;
          v45 = v16;
          v22 = sub_195FF0(v55, v59 + 64, 0.0);
          v16 = v45;
          v19 = v42;
          if ( v22 == v51 )
            break;
        }
      }
      --v18;
      v19 -= 8;
      if ( v18 == -1 )
        goto LABEL_3;
    }
    if ( *(_DWORD *)(v59 + 68) >= v45[22] )
      goto LABEL_3;
    if ( *v45 != 1 )
      goto LABEL_60;
    v7 = v18;
    goto LABEL_34;
  }
  return 0;
}

