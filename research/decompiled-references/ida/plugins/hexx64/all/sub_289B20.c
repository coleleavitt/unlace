__int64 __fastcall sub_289B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r12d
  int v15; // eax
  __int64 *v16; // r14
  __int64 *v17; // r13
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // r13
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rbx
  __int64 v38; // rdx

  v6 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v6 + 8) != 16 )
    return 0;
  if ( sub_241890(*(_QWORD *)(a1 + 72), *(_QWORD *)(v6 + 24), a3, a4, a5) )
  {
    sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(v6 + 24), v8, v9, v10, *(double *)a6.m128_u64);
    a6 = _mm_loadh_ps((const double *)(v6 + 40));
    *(_QWORD *)(v6 + 40) = *(_QWORD *)(v6 + 32);
    *(__m128 *)(v6 + 24) = a6;
LABEL_14:
    sub_2441C0(v6, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a6.m128_u64);
    if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a6) )
      *(_DWORD *)(a1 + 8) |= 8u;
    return 1;
  }
  v11 = *(_QWORD *)(v6 + 32);
  v12 = *(_DWORD *)(v11 + 8);
  if ( (unsigned int)(v12 - 2) <= 0xD )
  {
    v13 = *(_QWORD *)(v6 + 40);
    if ( v12 == *(_DWORD *)(v13 + 8)
      && !sub_259AA0(*(_QWORD *)(v11 + 24), *(_QWORD *)(v13 + 24), *(double *)a6.m128_u64) )
    {
      v32 = *(_QWORD *)(v6 + 24);
      if ( !(unsigned __int8)sub_285160(v32, 1, 1)
        && !(unsigned __int8)sub_285160(v32, 66, 1)
        && !(unsigned __int8)sub_285230(v32)
        && *(_DWORD *)(*(_QWORD *)(v6 + 32) + 12LL) == -1
        && *(_DWORD *)(*(_QWORD *)(v6 + 40) + 12LL) == -1 )
      {
        if ( (get_tinfo_property() & 0x2F) != 0xD )
        {
LABEL_26:
          v34 = *(_QWORD *)(v6 + 32);
          v35 = *(_QWORD *)(v6 + 24);
          *(_QWORD *)(v6 + 24) = *(_QWORD *)(v34 + 24);
          v36 = *(_DWORD *)(v34 + 8);
          *(_QWORD *)(v34 + 24) = v35;
          LODWORD(v35) = *(_DWORD *)(v6 + 8);
          *(_DWORD *)(v6 + 8) = v36;
          *(_DWORD *)(v34 + 8) = v35;
          *(_QWORD *)(v34 + 40) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 32LL);
          *(_QWORD *)(*(_QWORD *)(v6 + 40) + 32LL) = 0;
          v37 = *(_QWORD *)(v6 + 40);
          if ( v37 )
          {
            sub_255630(*(_QWORD *)(v6 + 40), *(double *)a6.m128_u64);
            clear_tinfo_t();
            j__qfree(v37);
          }
          sub_2441C0(*(_QWORD *)(v6 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a6.m128_u64);
          goto LABEL_14;
        }
        if ( get_tinfo_property() )
        {
          v33 = *(unsigned int *)(v6 + 8);
          if ( (unsigned int)v33 <= 0x17 )
          {
            v38 = -12648455;
            if ( !_bittest64(&v38, v33) )
              goto LABEL_26;
          }
          else if ( (unsigned int)(v33 - 70) <= 0xE )
          {
            goto LABEL_26;
          }
        }
      }
    }
  }
  v14 = *(_DWORD *)(a2 + 12);
  v15 = *(_DWORD *)(v6 + 12);
  if ( v14 == -1 )
  {
    *(_DWORD *)(v6 + 12) = -1;
    v14 = v15;
  }
  else
  {
    if ( v15 != -1 )
      return 0;
    *(_DWORD *)(a2 + 12) = -1;
  }
  if ( v14 == -2 )
    return 0;
  v16 = *(__int64 **)(v6 + 32);
  v17 = *(__int64 **)(v6 + 40);
  v18 = *(_QWORD *)(v6 + 24);
  sub_254DA0(v6);
  sub_255050(a2, *(double *)a6.m128_u64);
  *(_DWORD *)(a2 + 12) = v14;
  v21 = sub_286930(a2, v18, v19, v20);
  v24 = sub_241330(a2, v18, v22, v23);
  v25 = *(_QWORD *)(v21 + 64);
  *(_QWORD *)(v21 + 72) = v24;
  v28 = sub_2413C0(v25, *v16, v26, v27, *(double *)a6.m128_u64);
  v31 = sub_2413C0(*(_QWORD *)(v21 + 72), *v17, v29, v30, *(double *)a6.m128_u64);
  *((_DWORD *)v28 + 2) = 72;
  *((_DWORD *)v31 + 2) = 72;
  v28[3] = (__int64)v16;
  v31[3] = (__int64)v17;
  return 1;
}

