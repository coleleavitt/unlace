_QWORD *__fastcall sub_24FFD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __m128i *v12; // rax
  __int64 (__fastcall *v14)(__int64, int); // rax
  int v15; // edx
  __int64 (__fastcall *v16)(__int64, int, int); // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // r13
  __int64 (__fastcall *v20)(__int64, int, int); // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 (__fastcall *v25)(__int64, int, int); // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rdx
  unsigned __int64 v34; // rax

  v5 = (int)a2;
  switch ( *(_DWORD *)(a1[38] + 4LL * (int)a2) )
  {
    case 0:
      v32 = *(_QWORD *)(a1[22] + 8LL);
      if ( *(_DWORD *)(v32 + 64) > (int)a2 )
        return (_QWORD *)sub_24FE40((__int64)a1, *(_QWORD *)(*(_QWORD *)(v32 + 528) + 8LL * (int)a2), a3, a4, a5);
      v33 = (_QWORD *)a1[30];
      if ( !v33 )
        goto LABEL_21;
      v34 = *v33 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v34 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)v34 & 2) != 0 )
              goto LABEL_21;
            if ( *(_DWORD *)(v34 + 24) <= (int)a2 )
              break;
            v34 = *(_QWORD *)(v34 + 8);
          }
          if ( *(_DWORD *)(v34 + 24) >= (int)a2 )
            break;
          v34 = *(_QWORD *)(v34 + 16);
        }
        if ( v33 == (_QWORD *)v34 )
        {
LABEL_21:
          if ( !under_debugger )
            sub_383060(0xC4D5u, a5);
LABEL_35:
          BUG();
        }
      }
      return nullptr;
    case 1:
      v14 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
      if ( v14 == sub_65090 )
      {
        v15 = 0;
        if ( a1[7] )
          v15 = *(_DWORD *)(a1[6] + 24LL * (int)a2 + 8);
      }
      else
      {
        v15 = v14((__int64)a1, a2);
      }
      return (_QWORD *)sub_251E50(a1, (unsigned int)a2, v15);
    case 2:
    case 3:
    case 5:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
      v6 = j__qalloc_or_throw(64, a2, a3, a4);
      *(_QWORD *)v6 = -1;
      *(_QWORD *)(v6 + 8) = -4294967230LL;
      *(_QWORD *)(v6 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v6 + 40) = 0;
      *(_QWORD *)(v6 + 48) = 0;
      *(_DWORD *)(v6 + 56) = 0;
      *(_OWORD *)(v6 + 24) = 0;
      v9 = (_QWORD *)j__qalloc_or_throw(32, a2, v7, v8);
      *v9 = -1;
      v9[1] = -4294967225LL;
      v9[2] = 0xFFFFFFFFLL;
      v9[3] = 0;
      v12 = (__m128i *)qalloc_or_throw(24, a2, v10, v11);
      v12[1].m128i_i64[0] = 0;
      *v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
      v9[3] = v12;
      *(_QWORD *)(v6 + 24) = v9;
      sub_250510(a1, (unsigned int)a2, v9, 0);
      *(_QWORD *)v6 = **(_QWORD **)(v6 + 24);
      return (_QWORD *)v6;
    case 4:
      v16 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v16 == sub_650D0 )
        v17 = **(unsigned int **)(a1[6] + 24LL * (int)a2);
      else
        v17 = (unsigned int)v16((__int64)a1, a2, 0);
      v19 = (_QWORD *)sub_24FFD0(a1, v17, a3, a4);
      v20 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v20 == sub_650D0 )
      {
        v21 = a1[6];
        v22 = *(unsigned int *)(*(_QWORD *)(v21 + 24 * v5) + 4LL);
      }
      else
      {
        v22 = (unsigned int)v20((__int64)a1, v5, 1);
      }
      v24 = sub_24FFD0(a1, v22, v18, v21);
      v25 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v25 == sub_650D0 )
      {
        v26 = a1[6];
        v27 = *(unsigned int *)(*(_QWORD *)(v26 + 24 * v5) + 8LL);
      }
      else
      {
        v27 = (unsigned int)v25((__int64)a1, v5, 2);
      }
      v28 = sub_24FFD0(a1, v27, v26, v23);
      v31 = j__qalloc_or_throw(64, v27, v29, v30);
      *(_QWORD *)(v31 + 24) = v19;
      v6 = v31;
      *(_QWORD *)(v31 + 32) = v24;
      *(_QWORD *)(v31 + 40) = v28;
      *(_QWORD *)v31 = -1;
      *(_DWORD *)(v31 + 8) = 16;
      *(_QWORD *)(v31 + 12) = -1;
      *(_QWORD *)(v31 + 48) = 0;
      *(_DWORD *)(v31 + 56) = 0;
      *(_QWORD *)v31 = *v19;
      sub_2441C0(v31, *(_QWORD *)(a1[41] + 112LL), 0, a5);
      return (_QWORD *)v6;
    case 6:
    case 7:
    case 8:
    case 9:
      return sub_250350(a1, (unsigned int)a2, 0);
    default:
      if ( !under_debugger )
        sub_383060(0xC4D6u, a5);
      goto LABEL_35;
  }
}

