unsigned __int64 __fastcall sub_2262B0(__int64 a1)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int v6; // eax
  unsigned int v7; // esi
  double v8; // xmm0_8
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // r15
  char v24; // al
  unsigned __int64 *v25; // rax
  __int64 v26; // [rsp+10h] [rbp-D0h]
  signed int v27; // [rsp+1Ch] [rbp-C4h]
  unsigned int v28; // [rsp+2Ch] [rbp-B4h] BYREF
  __int64 v29; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-98h]
  __int64 v33; // [rsp+50h] [rbp-90h] BYREF
  __int128 v34; // [rsp+58h] [rbp-88h]
  __int64 v35; // [rsp+70h] [rbp-70h] BYREF
  __int128 v36; // [rsp+78h] [rbp-68h] BYREF
  __int128 v37; // [rsp+88h] [rbp-58h]
  double v38; // [rsp+98h] [rbp-48h]
  char v39; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  v29 = -1;
  v28 = 0;
  v30 = 0;
  if ( !(unsigned __int8)sub_22D230(*(_QWORD *)(a1 + 16), &v29, &v28, (__int64)&v30) )
    goto LABEL_12;
  v2 = (int)v28;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v29;
  v5 = v3;
  v6 = v28;
  if ( (int)v28 + v29 > *(_QWORD *)(v3 + 128) )
    goto LABEL_3;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v3 + 1440) + v29);
  v35 = 0;
  v36 = 0u;
  v37 = 0;
  if ( v14 + (int)v28 - 1 >= v14 )
  {
    *((_QWORD *)&v36 + 1) = qvector_reserve((__int64)&v36 + 8, 0, 1, 16);
    v25 = (unsigned __int64 *)(16 * v37 + *((_QWORD *)&v36 + 1));
    *v25 = v14;
    v25[1] = v2;
    *(_QWORD *)&v37 = v37 + 1;
  }
  if ( (unsigned __int8)sub_64780((_QWORD *)(v3 + 832), &v35) )
  {
    v15 = *((_QWORD *)&v36 + 1);
    if ( !*((_QWORD *)&v36 + 1) )
    {
LABEL_18:
      qfree(v35);
      v16 = *(_QWORD *)(a1 + 16);
      v4 = v29;
      v17 = *(_QWORD *)(v16 + 128);
      v6 = v28;
      v5 = v16;
      if ( v29 + (int)v28 <= v17 && v29 < v17 )
      {
        if ( !sub_317040(
                (unsigned __int64 **)(v16 + 848),
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 1496) + 24LL) + 16LL) & (v29 + *(_QWORD *)(v16 + 1440))) )
        {
          if ( !under_debugger )
            sub_383060(0xCDADu, 0.0);
          goto LABEL_45;
        }
        v5 = *(_QWORD *)(a1 + 16);
        v6 = v28;
        v4 = v29;
      }
LABEL_3:
      v7 = *(_DWORD *)(v5 + 480);
      v35 = 0;
      *(_QWORD *)&v37 = v4;
      BYTE8(v37) = 5;
      *(_QWORD *)&v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(v7)).m128i_u64[0];
      v39 = 1;
      v36 = 0;
      v38 = v8;
      v9 = *(_DWORD *)(*(_QWORD *)(v5 + 944) + 64LL);
      if ( v9 == -1 )
      {
        v31 = 0;
        v32 = 0;
        cleanup_argloc();
        v32 = v4;
        LODWORD(v31) = 1;
        v18 = sub_225D30(a1, -1, &v30, &v31, 0, 0, v28, 0);
        v19 = *(__int64 **)(a1 + 88);
        v9 = v18;
        if ( v19[1] )
        {
          v27 = 0;
          v26 = 104LL * v18;
          v20 = 0;
          do
          {
            if ( v9 != v27 )
            {
              v21 = *v19;
              v33 = 0;
              v34 = 0;
              sub_1C37C0(
                (int *)(v21 + 104 * v20),
                &v33,
                *(_DWORD *)(v21 + 104 * v20 + 88),
                v26 + v21,
                *(_DWORD *)(v26 + v21 + 88),
                1);
              v22 = v33 + 24 * v34;
              if ( v33 != v22 )
              {
                v23 = v33;
                do
                {
                  sub_225530(a1, v27, v9, *(int *)(v23 + 16), *(int *)(v23 + 20), *(_DWORD *)v23);
                  v23 += 24;
                }
                while ( v22 != v23 );
                v22 = v33;
              }
              if ( v22 )
              {
                *(_QWORD *)&v34 = 0;
                qfree(v22);
              }
              v19 = *(__int64 **)(a1 + 88);
            }
            v20 = ++v27;
          }
          while ( v27 < (unsigned __int64)v19[1] );
        }
        cleanup_argloc();
        v5 = *(_QWORD *)(a1 + 16);
        goto LABEL_8;
      }
      v10 = **(_QWORD **)(a1 + 88) + 104LL * v9;
      if ( *(_DWORD *)v10 == 1 )
        v11 = *(_QWORD *)(v10 + 8);
      else
        v11 = -1;
      if ( v11 == v4 && *(_DWORD *)(v10 + 88) == v6 )
      {
LABEL_8:
        v12 = *(_QWORD *)(a1 + 32) == 0;
        HIDWORD(v38) = v9;
        if ( v12 )
        {
          sub_21DF90(v5, v9, *(_DWORD *)(a1 + 148), v8);
          v5 = *(_QWORD *)(a1 + 16);
        }
        (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL))(
          a1,
          (unsigned int)(*(_DWORD *)(v5 + 64) - 1),
          &v35);
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree(v35);
        }
        goto LABEL_12;
      }
      if ( !under_debugger )
        sub_383060(0xCE6Fu, v8);
LABEL_45:
      BUG();
    }
LABEL_17:
    *(_QWORD *)&v37 = 0;
    qfree(v15);
    goto LABEL_18;
  }
  v24 = sub_318470((unsigned __int64 **)(v3 + 848), (__int64)&v36 + 8);
  v15 = *((_QWORD *)&v36 + 1);
  if ( v24 )
  {
    if ( !*((_QWORD *)&v36 + 1) )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( *((_QWORD *)&v36 + 1) )
  {
    *(_QWORD *)&v37 = 0;
    qfree(*((__int64 *)&v36 + 1));
  }
  qfree(v35);
LABEL_12:
  clear_tinfo_t();
  return v40 - __readfsqword(0x28u);
}

