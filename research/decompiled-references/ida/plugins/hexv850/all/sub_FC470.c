unsigned __int64 __fastcall sub_FC470(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 *v22; // r15
  __int64 v23; // r14
  __m128i v24; // xmm0
  __int64 v25; // r14
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbx
  char v30; // al
  _QWORD *v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rsi
  _DWORD *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  unsigned __int64 v38; // rax
  int v39; // [rsp+0h] [rbp-138h]
  unsigned int v40; // [rsp+8h] [rbp-130h]
  __int64 *v41; // [rsp+8h] [rbp-130h]
  _QWORD *v42; // [rsp+10h] [rbp-128h]
  __int64 v43; // [rsp+18h] [rbp-120h]
  __int64 v45; // [rsp+38h] [rbp-100h]
  _QWORD *v47; // [rsp+50h] [rbp-E8h]
  _BYTE v48[16]; // [rsp+60h] [rbp-D8h] BYREF
  _DWORD v49[4]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+80h] [rbp-B8h]
  __int128 v51; // [rsp+88h] [rbp-B0h]
  _QWORD v52[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-80h]
  _QWORD v55[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v57; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+F8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 24) &= ~8u;
  sub_631D0(*(_QWORD **)(a1 + 64));
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a3 + 64) != 8 )
    goto LABEL_2;
  if ( *(_DWORD *)a2 == 4 || *(_DWORD *)a2 == 67 && *(_DWORD *)(a2 + 68) == *(_DWORD *)(a2 + 36) )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    v30 = *(_BYTE *)(a2 + 64);
    if ( v30 == 1 )
    {
      v32 = *(unsigned int *)(a2 + 72);
      if ( *(_DWORD *)(v29 + 68) <= (int)v32 && (_DWORD)v32 != -1 )
        goto LABEL_49;
    }
    else if ( v30 == 15 )
    {
      v31 = *(_QWORD **)(*(_QWORD *)(a2 + 72) + 8LL);
      if ( v31[1] == 1 && (unsigned int)(*(_DWORD *)*v31 - 3) <= 1 )
      {
        v32 = *(unsigned __int16 *)(*v31 + 8LL);
        if ( *(_DWORD *)(v29 + 68) <= (int)v32 )
        {
LABEL_49:
          if ( v5 )
          {
            while ( 1 )
            {
              if ( *(_QWORD *)(v5 + 24) != *(_QWORD *)(a2 + 24)
                || *(_DWORD *)v5 != 4 && (*(_DWORD *)v5 != 67 || *(_DWORD *)(v5 + 36) != *(_DWORD *)(v5 + 68)) )
              {
LABEL_53:
                v32 = (unsigned int)v32;
                goto LABEL_54;
              }
              v33 = *(int *)(a2 + 68);
              if ( *(_BYTE *)(v5 + 32) != 1 )
                break;
              v38 = *(int *)(v5 + 40);
              if ( (int)v38 < *(_DWORD *)(v29 + 68)
                || !*(_DWORD *)(a2 + 68)
                || v38 < (int)v32
                || (int)v32 + v33 - 1 < v38 )
              {
                break;
              }
              sub_1189E0(v5);
              v5 = *(_QWORD *)(v5 + 8);
              if ( !v5 )
                goto LABEL_53;
            }
            v32 = (unsigned int)v32;
          }
          else
          {
LABEL_54:
            v33 = *(int *)(a2 + 68);
          }
          sub_1333F0(*(_QWORD *)(a1 + 64), v32, v33);
        }
      }
    }
  }
  v50 = 0;
  v54 = 0;
  v15 = *(_QWORD **)(a2 + 16);
  v52[0] = 0;
  v52[1] = 0;
  v47 = v15;
  v53 = 0;
  v16 = *(_QWORD *)(a3 + 72);
  v51 = 0;
  v17 = *(_QWORD *)(v16 + 24);
  v45 = v17 + 80LL * *(_QWORD *)(v16 + 32);
  if ( v45 != v17 )
  {
    do
    {
      if ( *(_DWORD *)(v17 + 56) != 1 )
      {
        v18 = j__qalloc_or_throw();
        v19 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)(v18 + 40) = 0;
        *(_QWORD *)(v18 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v18 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v18 + 56) = 0;
        *(_QWORD *)(v18 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v18 + 72) = 0;
        sub_32ADE0(v18, v19);
        *(_DWORD *)v18 = 4;
        sub_1205C0(v18 + 32);
        sub_1C1290(v48, *(_QWORD *)(a1 + 64), v17 + 56, *(unsigned int *)(v17 + 4));
        sub_121860(
          v18 + 64,
          *(_QWORD *)(a1 + 64),
          (unsigned int)v48,
          *(_DWORD *)(v17 + 4),
          v20,
          v21,
          v39,
          v40,
          (_DWORD)v42,
          v18 + 32,
          (__int64)v48);
        if ( (get_tinfo_property() & 0xF) == 9 )
          *(_DWORD *)(v18 + 4) |= 0x10u;
        v55[0] = 0;
        v55[1] = 0;
        v56 = 0;
        v57 = 0;
        sub_11F2E0(a1, v55, v17, 0, 4294901760LL);
        v42 = v52;
        if ( (unsigned __int8)sub_5FD00(v52, v55) || (unsigned __int8)sub_312BB0(&v53, &v56) )
        {
          v22 = (__int64 *)v50;
          v41 = (__int64 *)(v50 + 8 * v51);
          if ( v41 == (__int64 *)v50 )
            goto LABEL_39;
          while ( 1 )
          {
            v23 = *v22;
            if ( (unsigned __int8)sub_120FA0(*v22 + 32, v17, 0) )
              break;
            if ( v41 == ++v22 )
              goto LABEL_39;
          }
          v40 = *(_DWORD *)(v23 + 72);
          if ( v40 == -1 )
          {
LABEL_39:
            v40 = sub_133580(*(_QWORD *)(a1 + 64), *(int *)(v17 + 4), 1);
            if ( v40 == -1 )
            {
              if ( !under_debugger )
                sub_37CFE0(52221);
LABEL_77:
              BUG();
            }
            v25 = j__qalloc_or_throw();
            *(_QWORD *)(v25 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v25 + 40) = 0;
            *(_QWORD *)(v25 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v25 + 56) = 0;
            *(_QWORD *)(v25 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v25 + 72) = 0;
            *(_OWORD *)(v25 + 8) = 0;
            sub_1207E0(v25, v18);
            v26 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + 4));
            v49[0] = 1;
            *(_QWORD *)&v49[1] = _mm_unpacklo_epi32(v26, _mm_cvtsi32_si128(v40)).m128i_u64[0];
            sub_1205C0(v25 + 64);
            sub_1181E0(v49);
            v47 = sub_9E5A0(a1, (_QWORD *)v25, (__int64)v47);
            v27 = v51;
            v28 = v50;
            if ( *((_QWORD *)&v51 + 1) < (unsigned __int64)(v51 + 1) )
            {
              v50 = qvector_reserve();
              v28 = v50;
              v27 = v51;
            }
            *(_QWORD *)(v28 + 8 * v27) = v47;
            *(_QWORD *)&v51 = v51 + 1;
          }
          v24 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + 4));
          v49[0] = 1;
          *(_QWORD *)&v49[1] = _mm_unpacklo_epi32(v24, _mm_cvtsi32_si128(v40)).m128i_u64[0];
          sub_1205C0(v43);
          sub_1181E0(v49);
        }
        sub_123420(a1, v52, v18 + 64, 0);
        sub_9E5A0(a1, (_QWORD *)v18, *(_QWORD *)(a2 + 16));
        if ( v56 )
        {
          *(_QWORD *)&v57 = 0;
          qfree();
        }
        qfree();
        cleanup_argloc();
      }
      v17 += 80;
    }
    while ( v17 != v45 );
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree();
    }
  }
  qfree();
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 76) )
  {
    v6 = *(_QWORD *)(a3 + 24);
    sub_1189E0(a2);
    v7 = *(_DWORD *)(a1 + 24);
    BYTE1(v7) &= ~2u;
    LOBYTE(v7) = v7 | 0x80;
    *(_DWORD *)(a1 + 24) = v7;
    if ( v5 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v5 + 24);
        if ( v6 != sub_32B3E0(*(_QWORD *)(a1 + 64)) || *(_DWORD *)v5 != 4 )
          break;
        sub_1189E0(v5);
        v8 = *(_DWORD *)(a1 + 24);
        BYTE1(v8) &= ~2u;
        LOBYTE(v8) = v8 | 0x80;
        *(_DWORD *)(a1 + 24) = v8;
        v5 = *(_QWORD *)(v5 + 8);
        if ( !v5 )
          goto LABEL_56;
      }
      v10 = *(_QWORD *)(a1 + 64);
      v11 = sub_1D0330(v10);
      if ( *(_DWORD *)v5 != 55 || *(_BYTE *)(v5 + 32) != 7 )
        goto LABEL_12;
      v12 = *(_QWORD *)(a1 + 64);
      v13 = *(unsigned int *)(v5 + 40);
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 64) )
        sub_F8F80(v10, v9);
      if ( v11 != sub_10D500(*(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v13), 0) )
      {
LABEL_12:
        if ( !under_debugger )
          sub_37CFE0(51203);
        goto LABEL_77;
      }
    }
    else
    {
LABEL_56:
      v34 = sub_1D0330(*(_QWORD *)(a1 + 64));
      if ( *(_DWORD *)(a1 + 72) + 1 != *(_DWORD *)(v34 + 72) )
      {
        v35 = *(_DWORD **)(a1 + 56);
        if ( *v35 )
        {
          if ( !under_debugger )
            sub_37CFE0(52866);
          goto LABEL_77;
        }
        *v35 = 55;
        v36 = *(_QWORD *)(a1 + 56);
        v37 = *(_DWORD *)(v34 + 72);
        *(_BYTE *)(v36 + 32) = 7;
        *(_DWORD *)(v36 + 40) = v37;
        sub_A27F0(a1, v34);
      }
    }
  }
  else
  {
    *(_DWORD *)(a3 + 4) &= ~0x40u;
    sub_32AE00(a1, a2);
  }
  return sub_9D960(a1, (__int64)"after tail_call_to_ret");
}

