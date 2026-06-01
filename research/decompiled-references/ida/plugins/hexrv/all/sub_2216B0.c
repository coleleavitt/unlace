unsigned __int64 __fastcall sub_2216B0(__int64 a1)
{
  __int64 v1; // r8
  int v2; // r9d
  unsigned __int64 v3; // r12
  __int64 *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  unsigned int v8; // esi
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  unsigned __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r15
  unsigned __int64 *v23; // rax
  __int64 v24; // [rsp+10h] [rbp-D0h]
  int v25; // [rsp+1Ch] [rbp-C4h]
  unsigned int v26; // [rsp+2Ch] [rbp-B4h] BYREF
  __int64 v27; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-98h]
  __int64 v31; // [rsp+50h] [rbp-90h] BYREF
  __int128 v32; // [rsp+58h] [rbp-88h]
  __int64 v33; // [rsp+70h] [rbp-70h] BYREF
  __int128 v34; // [rsp+78h] [rbp-68h] BYREF
  __int128 v35; // [rsp+88h] [rbp-58h]
  unsigned __int64 v36; // [rsp+98h] [rbp-48h]
  char v37; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  v27 = -1;
  v26 = 0;
  v28 = 0;
  if ( !(unsigned __int8)sub_228630(*(_QWORD *)(a1 + 16), &v27, &v26, &v28) )
    goto LABEL_12;
  v3 = (int)v26;
  v4 = *(__int64 **)(a1 + 16);
  v5 = v27;
  v6 = (__int64)v4;
  v7 = v26;
  if ( (int)v26 + v27 > v4[16] )
    goto LABEL_3;
  v14 = *(_QWORD *)(*(_QWORD *)(v4[187] + 24) + 16LL) & (v4[180] + v27);
  v33 = 0;
  v34 = 0u;
  v35 = 0;
  if ( v14 + (int)v26 - 1 >= v14 )
  {
    *((_QWORD *)&v34 + 1) = qvector_reserve();
    v23 = (unsigned __int64 *)(16 * v35 + *((_QWORD *)&v34 + 1));
    *v23 = v14;
    v23[1] = v3;
    *(_QWORD *)&v35 = v35 + 1;
  }
  if ( (unsigned __int8)sub_60400(v4 + 104, &v33) )
  {
    if ( !*((_QWORD *)&v34 + 1) )
    {
LABEL_18:
      qfree();
      v15 = *(_QWORD **)(a1 + 16);
      v5 = v27;
      v16 = v15[16];
      v7 = v26;
      v6 = (__int64)v15;
      if ( v27 + (int)v26 <= v16 && v27 < v16 )
      {
        if ( !(unsigned __int8)sub_311F40(
                                 v15 + 106,
                                 *(_QWORD *)(*(_QWORD *)(v15[187] + 24LL) + 16LL) & (v27 + v15[180])) )
        {
          if ( !under_debugger )
            sub_37DDE0(52653);
          goto LABEL_45;
        }
        v6 = *(_QWORD *)(a1 + 16);
        v7 = v26;
        v5 = v27;
      }
LABEL_3:
      v8 = *(_DWORD *)(v6 + 480);
      v33 = 0;
      *(_QWORD *)&v35 = v5;
      BYTE8(v35) = 5;
      v37 = 1;
      v34 = 0;
      v36 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v8)).m128i_u64[0];
      v9 = *(_DWORD *)(*(_QWORD *)(v6 + 944) + 64LL);
      if ( v9 == -1 )
      {
        v29 = 0;
        v30 = 0;
        cleanup_argloc();
        v30 = v5;
        LODWORD(v29) = 1;
        v17 = sub_221130(a1, -1, &v28, &v29, 0, 0, v26, 0);
        v18 = *(__int64 **)(a1 + 88);
        v9 = v17;
        if ( v18[1] )
        {
          v25 = 0;
          v24 = 104LL * v17;
          v19 = 0;
          do
          {
            if ( v9 != v25 )
            {
              v20 = *v18;
              v31 = 0;
              v32 = 0;
              sub_1BF140(
                (int *)(v20 + 104 * v19),
                &v31,
                *(_DWORD *)(v20 + 104 * v19 + 88),
                v24 + v20,
                *(_DWORD *)(v24 + v20 + 88),
                1);
              v21 = v31 + 24 * v32;
              if ( v31 != v21 )
              {
                v22 = v31;
                do
                {
                  sub_220930(a1, v25, v9, *(int *)(v22 + 16), *(int *)(v22 + 20), *(_DWORD *)v22);
                  v22 += 24;
                }
                while ( v21 != v22 );
                v21 = v31;
              }
              if ( v21 )
              {
                *(_QWORD *)&v32 = 0;
                qfree();
              }
              v18 = *(__int64 **)(a1 + 88);
            }
            v19 = ++v25;
          }
          while ( v25 < (unsigned __int64)v18[1] );
        }
        cleanup_argloc();
        v6 = *(_QWORD *)(a1 + 16);
        goto LABEL_8;
      }
      v10 = **(_QWORD **)(a1 + 88) + 104LL * v9;
      if ( *(_DWORD *)v10 == 1 )
        v11 = *(_QWORD *)(v10 + 8);
      else
        v11 = -1;
      if ( v11 == v5 && *(_DWORD *)(v10 + 88) == v7 )
      {
LABEL_8:
        v12 = *(_QWORD *)(a1 + 32) == 0;
        HIDWORD(v36) = v9;
        if ( v12 )
        {
          sub_219390(v6, v9, *(_DWORD *)(a1 + 148), v11, v1, v2);
          v6 = *(_QWORD *)(a1 + 16);
        }
        (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL))(
          a1,
          (unsigned int)(*(_DWORD *)(v6 + 64) - 1),
          &v33);
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree();
        }
        goto LABEL_12;
      }
      if ( !under_debugger )
        sub_37DDE0(52847);
LABEL_45:
      BUG();
    }
LABEL_17:
    *(_QWORD *)&v35 = 0;
    qfree();
    goto LABEL_18;
  }
  if ( (unsigned __int8)sub_313370(v4 + 106, (char *)&v34 + 8) )
  {
    if ( !*((_QWORD *)&v34 + 1) )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( *((_QWORD *)&v34 + 1) )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  qfree();
LABEL_12:
  clear_tinfo_t();
  return v38 - __readfsqword(0x28u);
}

