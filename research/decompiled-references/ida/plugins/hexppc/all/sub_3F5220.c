__int64 __fastcall sub_3F5220(_DWORD *a1, __int64 a2, __int64 a3, double a4)
{
  int v6; // eax
  int *v7; // r15
  int v8; // r12d
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // r12
  int v28; // eax
  signed int v29; // r15d
  unsigned int v30; // eax
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  _QWORD *v33; // rsi
  int v34; // eax
  int v35; // eax
  char v36; // al
  char v37; // al
  int v38; // [rsp+4h] [rbp-ECh]
  __int64 v39; // [rsp+8h] [rbp-E8h]
  __int64 v40; // [rsp+8h] [rbp-E8h]
  __int64 v41; // [rsp+8h] [rbp-E8h]
  unsigned int v42; // [rsp+8h] [rbp-E8h]
  __int64 v43; // [rsp+10h] [rbp-E0h]
  _QWORD *v44; // [rsp+20h] [rbp-D0h]
  char v46; // [rsp+28h] [rbp-C8h]
  unsigned __int8 v47; // [rsp+28h] [rbp-C8h]
  char v48; // [rsp+28h] [rbp-C8h]
  char v49; // [rsp+28h] [rbp-C8h]
  int *v50; // [rsp+38h] [rbp-B8h] BYREF
  char v51[16]; // [rsp+40h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+58h] [rbp-98h]
  __int64 v54; // [rsp+60h] [rbp-90h] BYREF
  __int128 v55; // [rsp+68h] [rbp-88h]
  __int64 v56[3]; // [rsp+80h] [rbp-70h] BYREF
  __int128 v57; // [rsp+98h] [rbp-58h]
  int v58; // [rsp+A8h] [rbp-48h]
  int v59; // [rsp+ACh] [rbp-44h]
  char v60; // [rsp+B0h] [rbp-40h]
  unsigned __int64 v61; // [rsp+B8h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  v6 = sub_3F4FE0((__int64)a1, &v50, *(_DWORD **)(a3 + 40));
  if ( v6 == -1 )
    return 0;
  v7 = v50;
  if ( *(_BYTE *)v50 != 1 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC94Eu, a4);
    goto LABEL_44;
  }
  v8 = v6;
  if ( a1[117] == v50[2] )
    return 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 784LL);
  if ( !v10 )
    return 0;
  v11 = sub_10C900(v10, 0);
  v12 = v11;
  if ( !v11 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC50Eu, a4);
    goto LABEL_44;
  }
  ++*(_DWORD *)(v11 + 24);
  v13 = (unsigned __int64 *)(*(_QWORD *)v11 + 24LL * *(int *)(a2 + 72));
  v14 = v7[1];
  v15 = v7[2];
  BYTE8(v57) = 1;
  memset(v56, 0, sizeof(v56));
  v58 = v14;
  *(_QWORD *)&v57 = v15;
  v59 = -1;
  v60 = 1;
  v16 = sub_1013B0(v13, (__int64)v56);
  if ( v56[0] )
  {
    v44 = v16;
    v56[1] = 0;
    qfree();
    v16 = v44;
  }
  if ( v16 && v16[1] == 1 )
  {
    v17 = *(int *)*v16;
    v18 = 0;
    if ( (_DWORD)v17 )
    {
      v19 = (__int64)v7;
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 528LL) + 8 * v17);
      v52 = 0;
      v53 = 0;
      v43 = v20;
      v21 = v20;
      v54 = 0;
      v55 = 0;
      sub_1245A0(v20, &v52, v19, 1u);
      v22 = sub_125710(v21, &v52, *(_QWORD *)(v21 + 56), 0, nullptr, 0, 0x101u);
      v23 = v22;
      if ( v22 )
      {
        if ( *(_DWORD *)v22 != 4 || *(_BYTE *)(v22 + 32) != 1 || a1[117] != *(_DWORD *)(v22 + 40) )
          goto LABEL_35;
        v24 = a1[118];
        v53 = 0;
        v25 = v24 + 31 - v8;
        if ( v54 )
        {
          v38 = v24 + 31 - v8;
          v39 = v23;
          *(_QWORD *)&v55 = 0;
          qfree();
          *((_QWORD *)&v55 + 1) = 0;
          v25 = v38;
          v54 = 0;
          v23 = v39;
        }
        v40 = v23;
        v56[0] = 0;
        v56[1] = 0;
        sub_60440(v56, v25, 1);
        v56[2] = 0;
        v57 = 0;
        sub_60840(&v52, v56);
        sub_312B30(&v54, (__int64 **)&v56[2]);
        v26 = v40;
        if ( v56[2] )
        {
          *(_QWORD *)&v57 = 0;
          qfree();
          v26 = v40;
        }
        v41 = v26;
        qfree();
        v27 = sub_125710(v43, &v52, *(_QWORD *)(v41 + 16), 0, nullptr, 0, 0x101u);
        if ( v27
          && (unsigned int)(*(_DWORD *)v27 - 29) <= 0xC
          && *(_BYTE *)(v27 + 64) == 1
          && (v28 = *(_DWORD *)(v27 + 72), v28 >= a1[118])
          && v28 <= a1[119]
          && (v29 = *(_DWORD *)(a3 + 52),
              v30 = sub_134700(*(_QWORD **)(v43 + 64), v29, 1),
              v31 = _mm_cvtsi32_si128(v30),
              v30 != -1) )
        {
          v32 = _mm_cvtsi32_si128(*(_DWORD *)(v27 + 68));
          *(_DWORD *)v51 = 1;
          v42 = _mm_cvtsi128_si32(v31);
          *(_QWORD *)&v51[4] = _mm_unpacklo_epi32(v32, v31).m128i_u64[0];
          v33 = sub_9F800(v43, v27, 4, v27 + 64, 0, (__int64)v51);
          if ( v33 )
          {
            v34 = *(_DWORD *)(v43 + 24);
            BYTE1(v34) &= ~2u;
            LOBYTE(v34) = v34 | 0x80;
            *(_DWORD *)(v43 + 24) = v34;
            v35 = *(_DWORD *)(a2 + 24);
            BYTE1(v35) &= ~2u;
            LOBYTE(v35) = v35 | 0x80;
            *(_DWORD *)(a2 + 24) = v35;
            if ( *(_DWORD *)(v27 + 68) != v29 )
            {
              LODWORD(v56[0]) = 1;
              *(__int64 *)((char *)v56 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v42)).m128i_u64[0];
              sub_9F800(v43, (__int64)v33, 9, (__int64)v51, 0, (__int64)v56);
              sub_121740((__int64)v51, (unsigned __int8 *)v56);
              sub_119360((__int64)v56);
            }
            sub_118FD0((char *)(a3 + 32), v51);
            v36 = 1;
          }
          else
          {
            v36 = 0;
          }
          v46 = v36;
          sub_119360((__int64)v51);
          v37 = v46;
        }
        else
        {
LABEL_35:
          v37 = 0;
        }
        if ( v54 )
        {
          v48 = v37;
          *(_QWORD *)&v55 = 0;
          qfree();
          v37 = v48;
        }
        v49 = v37;
        qfree();
        v18 = v49;
        goto LABEL_34;
      }
      if ( !under_debugger )
        sub_37EEE0(0xC94Fu, 0.0);
LABEL_44:
      BUG();
    }
  }
  else
  {
    v18 = 0;
  }
LABEL_34:
  v47 = v18;
  sub_1013D0(v12);
  return v47;
}

