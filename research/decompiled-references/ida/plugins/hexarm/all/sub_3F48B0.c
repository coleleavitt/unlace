__int64 __fastcall sub_3F48B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 (__fastcall *v9)(__int64, int); // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r12d
  unsigned int v14; // r13d
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  __int64 v20; // rdx
  int v21; // r13d
  __int64 v22; // rcx
  int v23; // r12d
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-148h] BYREF
  unsigned int v33; // [rsp+1Ch] [rbp-12Ch] BYREF
  _QWORD v34[3]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v35; // [rsp+38h] [rbp-110h]
  __int128 v36; // [rsp+40h] [rbp-108h]
  __int64 v37; // [rsp+50h] [rbp-F8h]
  __int128 v38; // [rsp+58h] [rbp-F0h]
  __m128i v39; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+80h] [rbp-C8h]
  int v41; // [rsp+88h] [rbp-C0h]
  __int64 (__fastcall **v42)(); // [rsp+90h] [rbp-B8h]
  __int64 v43; // [rsp+98h] [rbp-B0h]
  int v44; // [rsp+A0h] [rbp-A8h]
  __int64 v45; // [rsp+B0h] [rbp-98h]
  __int128 v46; // [rsp+B8h] [rbp-90h]
  __int64 v47; // [rsp+C8h] [rbp-80h]
  __int64 v48; // [rsp+D0h] [rbp-78h]
  __int64 v49; // [rsp+D8h] [rbp-70h]
  __int128 v50; // [rsp+E0h] [rbp-68h]
  __int64 v51; // [rsp+F0h] [rbp-58h]
  __int128 v52; // [rsp+F8h] [rbp-50h]
  char v53; // [rsp+108h] [rbp-40h]
  unsigned __int64 v54; // [rsp+118h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 800);
  v54 = __readfsqword(0x28u);
  sub_1D2430(v3);
  sub_1511B0(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 832) + 712LL);
  sub_3F4830(a1);
  v4 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v4 + 604) & 8) != 0 )
  {
    sub_CF9B0();
    v4 = *(_QWORD *)(a1 + 800);
    if ( *(_BYTE *)(v4 + 137) != 12 )
      goto LABEL_3;
  }
  else if ( *(_BYTE *)(v4 + 137) != 12 )
  {
    goto LABEL_3;
  }
  if ( !sub_33F4D0(v4) )
    return (unsigned int)-2;
LABEL_3:
  *(_QWORD *)(*(_QWORD *)(a1 + 832) + 720LL) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1352LL);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 840) = a2;
  v6 = *(_QWORD **)(v5 + 920);
  if ( (*(_BYTE *)(v5 + 112) & 0x10) != 0 )
  {
    if ( sub_CF9B0() != 1 )
      return (unsigned int)-13;
    v7 = *(_QWORD *)(a1 + 832);
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 168LL);
    if ( v9 == sub_3EA010 )
      v10 = sub_3EA010(v7, (unsigned __int16)v45);
    else
      v10 = v9(v7, (unsigned __int16)v45);
    *(_DWORD *)(v8 + 1184) = v10;
    *(_DWORD *)(a1 + 872) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1184LL);
  }
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 16;
  v46 = 0;
  v50 = 0;
  v52 = 0;
  get_tinfo_details();
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 840);
  v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
  v34[0] = off_4E4010;
  v34[1] = v6 + 8;
  if ( (unsigned __int8)sub_1CF000((__int64)v34, &v33, v11, v12) )
  {
    sub_3F2210((__int64)v6, *(_QWORD *)(a1 + 8));
    if ( v13 == 8 )
    {
      if ( !v6 )
        sub_3EAEE0(0.0);
      if ( (v6[20] || v6[21]) && v6[14] && (unsigned __int8)sub_3ED9D0(*(_QWORD *)(a1 + 832)) )
      {
        v36 = 0;
        v34[2] = 0;
        v35 = 0;
        v38 = 0;
        v37 = 0;
        v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4D6450, (__m128i)(unsigned __int64)off_4D6430);
        sub_CF9B0();
        v20 = v6[20];
        v40 = -1;
        v21 = v36;
        v22 = v6[21];
        v43 = -1;
        v23 = v38;
        v24 = _mm_load_si128(&v32);
        v42 = off_4D6430;
        v39 = v24;
        v41 = v36 - (int)v20 / 8;
        v44 = v38 - (int)v22 / 16;
        if ( (v44 | v41) < 0 )
          goto LABEL_31;
        v25 = *(_QWORD *)(a1 + 8);
        v26 = _mm_loadu_si128((const __m128i *)(v25 + 88));
        v27 = sub_1CF810(v25, _mm_add_epi64(v26, _mm_srli_si128(v26, 8)).m128i_i64[0]);
        v28 = v23;
        v29 = *(_QWORD *)(a1 + 8);
        v40 = v27 - (v6[18] + 8 * v21);
        v30 = *(_QWORD *)(v29 + 928);
        v43 = v27 - (v6[19] + 16 * v28);
        if ( !v30 )
        {
          v31 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v29 + 1504) + 312LL))(
                  *(_QWORD *)(v29 + 1504),
                  v29);
          *(_QWORD *)(v29 + 928) = v31;
          v30 = v31;
        }
        if ( !(unsigned __int8)sub_199160(v30, (__int64)&v39) )
        {
LABEL_31:
          if ( v37 )
          {
            *(_QWORD *)&v38 = 0;
            qfree();
          }
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree();
          }
          v14 = -13;
          goto LABEL_10;
        }
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree();
        }
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree();
        }
      }
    }
  }
  v14 = v33;
  v6[22] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL);
LABEL_10:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v15 = v45;
  if ( v45 )
  {
    v16 = v46;
    if ( (_QWORD)v46 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t();
        if ( v18[5] )
        {
          v18[6] = 0;
          qfree();
        }
        if ( v18[2] )
        {
          v18[3] = 0;
          qfree();
        }
        ++v17;
        cleanup_argloc();
        v15 = v45;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  return v14;
}

