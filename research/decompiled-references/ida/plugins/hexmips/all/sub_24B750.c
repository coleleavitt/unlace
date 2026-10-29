_QWORD *__fastcall sub_24B750(_QWORD *a1, int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbp
  _QWORD *v4; // r13
  __m128i *v5; // rax
  __int64 (__fastcall *v7)(__int64, int); // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, int, int); // rax
  __int64 v10; // rsi
  _QWORD *v11; // r13
  __int64 (__fastcall *v12)(__int64, int, int); // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 (__fastcall *v15)(__int64, int, int); // rax
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rax

  v2 = a2;
  switch ( *(_DWORD *)(a1[38] + 4LL * a2) )
  {
    case 0:
      v19 = *(_QWORD *)(a1[22] + 8LL);
      if ( *(_DWORD *)(v19 + 64) > a2 )
        return sub_24B5C0((__int64)a1, *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8LL * a2));
      v20 = (_QWORD *)a1[30];
      if ( !v20 )
        goto LABEL_21;
      v21 = *v20 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v21 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)v21 & 2) != 0 )
              goto LABEL_21;
            if ( *(_DWORD *)(v21 + 24) <= a2 )
              break;
            v21 = *(_QWORD *)(v21 + 8);
          }
          if ( *(_DWORD *)(v21 + 24) >= a2 )
            break;
          v21 = *(_QWORD *)(v21 + 16);
        }
        if ( v20 == (_QWORD *)v21 )
        {
LABEL_21:
          if ( !under_debugger )
            sub_37E160(50389);
LABEL_35:
          BUG();
        }
      }
      return nullptr;
    case 1:
      v7 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
      if ( v7 == sub_60E90 )
      {
        v8 = 0;
        if ( a1[7] )
          v8 = *(unsigned int *)(a1[6] + 24LL * a2 + 8);
      }
      else
      {
        v8 = (unsigned int)v7((__int64)a1, a2);
      }
      return (_QWORD *)sub_24D5D0(a1, (unsigned int)a2, v8);
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
      v3 = j__qalloc_or_throw();
      *(_QWORD *)v3 = -1;
      *(_QWORD *)(v3 + 8) = -4294967230LL;
      *(_QWORD *)(v3 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v3 + 40) = 0;
      *(_QWORD *)(v3 + 48) = 0;
      *(_DWORD *)(v3 + 56) = 0;
      *(_OWORD *)(v3 + 24) = 0;
      v4 = (_QWORD *)j__qalloc_or_throw();
      *v4 = -1;
      v4[1] = -4294967225LL;
      v4[2] = 0xFFFFFFFFLL;
      v4[3] = 0;
      v5 = (__m128i *)qalloc_or_throw();
      v5[1].m128i_i64[0] = 0;
      *v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
      v4[3] = v5;
      *(_QWORD *)(v3 + 24) = v4;
      sub_24BC90(a1, (unsigned int)a2, v4, 0);
      *(_QWORD *)v3 = **(_QWORD **)(v3 + 24);
      return (_QWORD *)v3;
    case 4:
      v9 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v9 == sub_60ED0 )
        v10 = **(unsigned int **)(a1[6] + 24LL * a2);
      else
        v10 = (unsigned int)v9((__int64)a1, a2, 0);
      v11 = (_QWORD *)sub_24B750(a1, v10);
      v12 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v12 == sub_60ED0 )
        v13 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v2) + 4LL);
      else
        v13 = (unsigned int)v12((__int64)a1, v2, 1);
      v14 = sub_24B750(a1, v13);
      v15 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v15 == sub_60ED0 )
        v16 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v2) + 8LL);
      else
        v16 = (unsigned int)v15((__int64)a1, v2, 2);
      v17 = sub_24B750(a1, v16);
      v18 = j__qalloc_or_throw();
      *(_QWORD *)(v18 + 24) = v11;
      v3 = v18;
      *(_QWORD *)(v18 + 32) = v14;
      *(_QWORD *)(v18 + 40) = v17;
      *(_QWORD *)v18 = -1;
      *(_DWORD *)(v18 + 8) = 16;
      *(_QWORD *)(v18 + 12) = -1;
      *(_QWORD *)(v18 + 48) = 0;
      *(_DWORD *)(v18 + 56) = 0;
      *(_QWORD *)v18 = *v11;
      sub_23F940(v18, *(_QWORD *)(a1[41] + 112LL), 0);
      return (_QWORD *)v3;
    case 6:
    case 7:
    case 8:
    case 9:
      return (_QWORD *)sub_24BAD0(a1, (unsigned int)a2, 0);
    default:
      if ( !under_debugger )
        sub_37E160(50390);
      goto LABEL_35;
  }
}

