int *__fastcall sub_19100(__int64 a1, unsigned __int64 a2, __m128i a3, double a4, double a5, __m128 a6)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r13
  int dword; // r15d
  int *v21; // rbp
  unsigned __int64 v23; // rax
  const char *v24; // rsi
  unsigned int v25; // r14d
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-F8h]
  __int64 *v43; // [rsp+0h] [rbp-F8h]
  _QWORD *v44; // [rsp+8h] [rbp-F0h]
  __int64 v45; // [rsp+10h] [rbp-E8h]
  __int64 v46; // [rsp+18h] [rbp-E0h] BYREF
  const char *v47; // [rsp+20h] [rbp-D8h] BYREF
  __m128 v48; // [rsp+28h] [rbp-D0h]
  __int64 v49; // [rsp+38h] [rbp-C0h]
  _BYTE v50[120]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v51; // [rsp+B8h] [rbp-40h]

  v46 = a2;
  v51 = __readfsqword(0x28u);
  memset(v50, 0, sizeof(v50));
  v7 = *(_QWORD **)(a1 + 456);
  v8 = (_QWORD *)(a1 + 448);
  *(_DWORD *)v50 = 12;
  *(_QWORD *)&v50[96] = -1;
  v9 = v8;
  *(_QWORD *)&v50[104] = -1;
  if ( v7 )
  {
    do
    {
      while ( 1 )
      {
        v10 = v7[2];
        v11 = v7[3];
        if ( v7[4] < a2 )
          break;
        v9 = v7;
        v7 = (_QWORD *)v7[2];
        if ( !v10 )
          goto LABEL_6;
      }
      v7 = (_QWORD *)v7[3];
    }
    while ( v11 );
LABEL_6:
    if ( v8 != v9 && a2 >= v9[4] )
      return (int *)(v9 + 5);
  }
  v44 = sub_18DE0(
          (_QWORD *)(a1 + 440),
          v9,
          (unsigned __int64 *)&v46,
          (const __m128i *)v50,
          *(double *)a3.m128i_i64,
          a4,
          a5,
          a6);
  v12 = *(_QWORD *)&v50[72];
  v42 = *(_QWORD *)&v50[40];
  v13 = *(_QWORD *)&v50[8];
  v45 = *(_QWORD *)&v50[8];
  if ( *(_QWORD *)&v50[72] )
  {
    v14 = *(_QWORD *)&v50[80];
    v15 = *(__int64 **)&v50[72];
    v16 = 0;
    if ( *(_QWORD *)&v50[80] )
    {
      do
      {
        v17 = v15[3];
        if ( v17 )
        {
          v15[4] = 0;
          qfree(v17);
        }
        v18 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v18);
        }
        ++v16;
        v15 += 7;
      }
      while ( v14 != v16 );
    }
    *(double *)a3.m128i_i64 = qfree(v12);
    if ( !v42 )
    {
      if ( v45 )
        *(double *)a3.m128i_i64 = qfree(v45);
      goto LABEL_19;
    }
    goto LABEL_16;
  }
  if ( *(_QWORD *)&v50[40] )
  {
LABEL_16:
    *(double *)a3.m128i_i64 = qfree(v42);
    v13 = v45;
  }
  if ( v13 )
    *(double *)a3.m128i_i64 = qfree(v13);
LABEL_19:
  v19 = v46;
  dword = get_dword(v46);
  switch ( dword & 0x1F )
  {
    case 0:
      v25 = 3;
      goto LABEL_32;
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
      switch ( dword & 0x1F )
      {
        case 1:
          sub_B940((__int64)&v47, "Extension");
          v23 = v48.m128_u64[0];
          break;
        case 2:
          sub_B940((__int64)&v47, "Anonymous");
          v23 = v48.m128_u64[0];
          break;
        case 3:
          sub_B940((__int64)&v47, "Protocol");
          v23 = v48.m128_u64[0];
          break;
        case 4:
          sub_B940((__int64)&v47, "OpaqueType");
          v23 = v48.m128_u64[0];
          break;
        case 0x10:
          sub_B940((__int64)&v47, "Class");
          v23 = v48.m128_u64[0];
          break;
        case 0x11:
          sub_B940((__int64)&v47, "Struct");
          v23 = v48.m128_u64[0];
          break;
        case 0x12:
          sub_B940((__int64)&v47, "Enum");
          v23 = v48.m128_u64[0];
          break;
        default:
          goto LABEL_25;
      }
      goto LABEL_26;
    case 2:
      v25 = 5;
      goto LABEL_32;
    case 3:
      v25 = 4;
      goto LABEL_32;
    case 0x10:
      v25 = 0;
      goto LABEL_32;
    case 0x11:
      v25 = 1;
      goto LABEL_32;
    case 0x12:
      v25 = 2;
LABEL_32:
      if ( !(unsigned __int8)sub_FA00(a1, v25, v19, 0, *(double *)a3.m128i_i64, a4) )
        return nullptr;
      v47 = nullptr;
      v43 = (__int64 *)&v47;
      if ( !(unsigned __int8)sub_7980(&v47, v19) )
      {
        v21 = nullptr;
        goto LABEL_55;
      }
      v26 = v44;
      *((_DWORD *)v44 + 10) = v25;
      v21 = (int *)(v44 + 5);
      if ( v25 > 2 )
        goto LABEL_39;
      v27 = (__int64)v47;
      *((_BYTE *)v44 + 156) = !((unsigned __int8)dword >> 7);
      if ( v25 == 2
        && (!(unsigned __int8)sub_BCA0((__int64)v50, v19, v27, "NumPayloadCasesAndPayloadSizeOffset") || *(_QWORD *)v50) )
      {
        v26 = v44;
LABEL_39:
        *((_BYTE *)v26 + 156) = 0;
      }
      v28 = sub_BF20(v19, (__int64)v47, "Name");
      if ( v28 != -1 )
        sub_DF90(a1, v44 + 6, v28, *(double *)a3.m128i_i64, a4);
      if ( v25 <= 2 && v44[7] <= 1u )
        sub_10D20(v44 + 6, (__int64)"descr%a", *(double *)a3.m128i_i64);
      v29 = sub_BF20(v19, (__int64)v47, "Parent");
      if ( v29 != -1 )
      {
        v34 = sub_19100(
                a1,
                v29,
                v30,
                v31,
                v32,
                v33,
                (unsigned int)&v47,
                (_DWORD)v44,
                v45,
                v46,
                (__int64)v47,
                v48.m128_i32[0],
                v48.m128_i32[2],
                v49,
                *(__int64 *)v50,
                *(_DWORD *)&v50[8],
                *(_DWORD *)&v50[16],
                *(_DWORD *)&v50[24],
                *(_DWORD *)&v50[32],
                *(_DWORD *)&v50[40],
                *(_DWORD *)&v50[48],
                *(_DWORD *)&v50[56],
                *(_DWORD *)&v50[64],
                *(_DWORD *)&v50[72],
                *(_DWORD *)&v50[80],
                *(_DWORD *)&v50[88],
                *(_DWORD *)&v50[96],
                *(_DWORD *)&v50[104],
                *(__int64 *)&v50[112]);
        v44[9] = v34;
      }
      if ( (*(_BYTE *)(a1 + 240) & 4) == 0 )
        goto LABEL_50;
      if ( v25 == 5 )
      {
        sub_100A0(v19, v21, nullptr, *(double *)a3.m128i_i64);
        goto LABEL_51;
      }
      sub_100A0(v19, v21, off_28520[v25], *(double *)a3.m128i_i64);
LABEL_50:
      if ( v25 > 2 )
      {
LABEL_51:
        v35 = *((_DWORD *)v44 + 10);
        if ( v35 != 4 )
        {
          v36 = -1;
          if ( v35 != 5 )
            goto LABEL_53;
          if ( (dword & 0x10000) == 0 )
            goto LABEL_55;
          sub_CB10(
            (__int64)"the plugin does not support anonymous context descriptors with a mangled name at %a\n",
            *(double *)a3.m128i_i64);
          goto LABEL_78;
        }
        v41 = sub_BF20(v19, (__int64)v47, "AssociatedTypeNames");
        v36 = v41;
        if ( v41 != -1 )
        {
          sub_DF90(a1, v44 + 6, v41, *(double *)a3.m128i_i64, a4);
          v35 = *((_DWORD *)v44 + 10);
          v36 = -1;
          goto LABEL_53;
        }
LABEL_78:
        v35 = *((_DWORD *)v44 + 10);
        goto LABEL_53;
      }
      v37 = sub_BF20(v19, (__int64)v47, "AccessFunction");
      v36 = v37;
      if ( v37 != -1 )
      {
        v38 = v37 + 1;
        auto_mark_range(v37, v37 + 1, 20);
        auto_mark_range(v36, v38, 30);
        if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
          sub_100A0(v36, v21, "Ma", *(double *)a3.m128i_i64);
      }
      sub_1AF50(a1, v44 + 10, v19, v43, "SuperclassType");
      v39 = sub_BF20(v19, (__int64)v47, "FieldDescriptor");
      v40 = v39;
      if ( v39 != -1 )
      {
        sub_1B140(a1, v21, v39);
        if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
          sub_100A0(v40, v21, "MF", *(double *)a3.m128i_i64);
      }
      v35 = *((_DWORD *)v44 + 10);
      if ( v35 == 1 )
      {
        if ( (unsigned __int8)sub_BCA0((__int64)v50, v19, (__int64)v47, "FieldOffsetVectorOffset") )
          v44[13] = *(_QWORD *)v50;
        goto LABEL_78;
      }
LABEL_53:
      if ( (unsigned int)(v35 - 1) <= 1 )
        sub_11D70(a1, (__int64)v21, v19, v36, *(double *)a3.m128i_i64, a4);
LABEL_55:
      clear_tinfo_t();
      return v21;
    default:
LABEL_25:
      memset(v50, 0, 24);
      sub_10D20((__int64 *)v50, (__int64)"%u", dword & 0x1F);
      a3 = _mm_loadu_si128((const __m128i *)&v50[8]);
      v47 = *(const char **)v50;
      v23 = *(_QWORD *)&v50[8];
      v48 = (__m128)a3;
LABEL_26:
      v24 = s1;
      if ( v23 )
        v24 = v47;
      sub_CB10((__int64)"unsupported context descriptor kind %s at %a\n", v24, *(double *)a3.m128i_i64);
      if ( v47 )
      {
        v48.m128_u64[0] = 0;
        qfree(v47);
      }
      return nullptr;
  }
}
