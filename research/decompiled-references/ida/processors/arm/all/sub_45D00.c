__int64 __fastcall sub_45D00(__int64 a1)
{
  const char *v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // r14
  int v8; // r13d
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rbp
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rbp
  void *v25; // r15
  void *v26; // r15
  __int64 v27; // [rsp+0h] [rbp-518h]
  __int64 v28; // [rsp+8h] [rbp-510h]
  __m128i v29; // [rsp+10h] [rbp-508h] BYREF
  int v30; // [rsp+20h] [rbp-4F8h]
  __m128i v31; // [rsp+24h] [rbp-4F4h] BYREF
  __int64 v32; // [rsp+34h] [rbp-4E4h]
  void *src; // [rsp+40h] [rbp-4D8h]
  __int128 v34; // [rsp+48h] [rbp-4D0h]
  void *v35; // [rsp+58h] [rbp-4C0h]
  __int128 v36; // [rsp+60h] [rbp-4B8h]
  __int16 v37; // [rsp+70h] [rbp-4A8h]
  unsigned int v38; // [rsp+B0h] [rbp-468h]
  int v39; // [rsp+D0h] [rbp-448h] BYREF
  unsigned __int64 v40; // [rsp+4D8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( (getinf(3) & 0x1006) == 0x1002 )
    goto LABEL_2;
  if ( (unsigned int)getinf(5) != 25 )
  {
    if ( (unsigned int)getinf(5) != 18 )
      goto LABEL_7;
    netnode_check();
    if ( !netnode_hashval_long() )
      goto LABEL_7;
    v29 = 0;
    v31 = 0;
    v32 = 0;
    src = 0;
    v35 = 0;
    v37 = 0;
    v34 = 0;
    v36 = 0;
    if ( netnode_supstr() > 0 && (unsigned __int8)sub_56980(&v29, &v39) )
      goto LABEL_21;
    v7 = 0;
    if ( netnode_supstr() > 0 )
    {
      if ( (unsigned __int8)sub_56980(&v29, &v39) )
      {
LABEL_21:
        v7 = 1;
        goto LABEL_22;
      }
      qstrncpy();
      v39 = 1984778817;
      v7 = sub_56980(&v29, &v39);
    }
LABEL_22:
    v8 = netnode_altval() - 1;
    if ( v7 == 1 )
      goto LABEL_26;
    if ( v8 >= 0 )
    {
      v9 = sub_55300((unsigned int)v8, 6);
      v7 = sub_56980(&v29, v9);
    }
    if ( v7 )
    {
LABEL_26:
      if ( (unsigned int)v8 <= 0x16 )
        v29.m128i_i32[0] = v8;
      v10 = netnode_altval() - 1;
      if ( v10 >= 0 )
        v29.m128i_i32[1] = v10;
      v11 = netnode_altval() - 1;
      if ( v11 >= 0 )
        v31.m128i_i32[0] = v11;
      v12 = netnode_altval() - 1;
      if ( v12 >= 0 )
        v31.m128i_i32[1] = v12;
      v13 = netnode_altval() - 1;
      if ( v13 >= 0 )
        v29.m128i_i32[2] = v13;
      v14 = netnode_altval() - 1;
      if ( v14 >= 0 )
        v29.m128i_i32[3] = v14;
      v15 = netnode_altval() - 1;
      if ( v15 >= 0 )
        v30 = v15;
      v16 = netnode_altval() - 1;
      if ( v16 >= 0 )
      {
        v31.m128i_i32[3] = v16;
        v31.m128i_i32[2] = 1;
      }
      v17 = netnode_altval() - 1;
      if ( v17 >= 0 )
        LODWORD(v32) = v17;
      v18 = netnode_altval() - 1;
      if ( v18 >= 0 )
        HIDWORD(v32) = v18;
      netnode_check();
      if ( netnode_valobj() == 72 )
      {
        v19 = (v38 >> 23) & 1;
        if ( (v38 & 0xFF000000) <= 0x4FFFFFF )
          LOBYTE(v19) = 0;
        LOBYTE(v37) = v19;
      }
      v20 = _mm_load_si128(&v29);
      v21 = v34;
      *(_DWORD *)(a1 + 208) = v30;
      v22 = v32;
      *(__m128i *)(a1 + 192) = v20;
      v23 = _mm_loadu_si128(&v31);
      *(_QWORD *)(a1 + 228) = v22;
      *(__m128i *)(a1 + 212) = v23;
      if ( v21 > 1 )
      {
        v25 = src;
        if ( *(_QWORD *)(a1 + 256) < v21 )
          *(_QWORD *)(a1 + 240) = qvector_reserve(a1 + 240, *(_QWORD *)(a1 + 240), v21, 1);
        *(_QWORD *)(a1 + 248) = v21;
        memmove(*(void **)(a1 + 240), v25, v21 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 240) + v21 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 248) = 0;
      }
      v24 = v36;
      if ( (unsigned __int64)v36 > 1 )
      {
        v26 = v35;
        if ( *(_QWORD *)(a1 + 280) < (unsigned __int64)v36 )
          *(_QWORD *)(a1 + 264) = qvector_reserve(a1 + 264, *(_QWORD *)(a1 + 264), v36, 1);
        *(_QWORD *)(a1 + 272) = v24;
        memmove(*(void **)(a1 + 264), v26, v24 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 264) + v24 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 272) = 0;
      }
      *(_WORD *)(a1 + 288) = v37;
      sub_55330(a1 + 192);
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree((__int64)v35);
      }
      if ( src )
      {
        *(_QWORD *)&v34 = 0;
        qfree((__int64)src);
      }
      return v40 - __readfsqword(0x28u);
    }
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree((__int64)v35);
    }
    if ( src )
    {
      *(_QWORD *)&v34 = 0;
      qfree((__int64)src);
    }
LABEL_7:
    if ( *(_QWORD *)(a1 + 408) > 1u )
    {
      v1 = *(const char **)(a1 + 400);
      goto LABEL_3;
    }
    if ( !(unsigned __int8)getinf_flag(3, 4, v3, v4, v5, v6, v27, v28, v29.m128i_i64[0]) )
    {
      v1 = "ARMv7";
      if ( (*(_BYTE *)(a1 + 184) & 8) == 0 )
LABEL_17:
        v1 = "ARMv4T";
      goto LABEL_3;
    }
LABEL_2:
    v1 = "ARMv8";
    goto LABEL_3;
  }
  netnode_check();
  if ( (unsigned __int64)netnode_supval() <= 0x1B )
    goto LABEL_7;
  if ( v29.m128i_i32[1] != 12 )
  {
    if ( ((v29.m128i_i32[1] - 16777228) & 0xFEFFFFFF) == 0 )
    {
      v3 = v29.m128i_u32[2];
      if ( v29.m128i_i32[2] > 0 )
        goto LABEL_2;
    }
    goto LABEL_7;
  }
  v3 = v29.m128i_u32[2];
  switch ( v29.m128i_i32[2] )
  {
    case 1:
    case 2:
    case 3:
      v1 = "ARMv3";
      break;
    case 4:
      v1 = "ARMv4";
      break;
    case 5:
      goto LABEL_17;
    case 6:
      v1 = "ARMv6";
      break;
    case 7:
      v1 = "ARMv5TEJ";
      break;
    case 8:
      v1 = "XScale";
      break;
    case 9:
    case 0xA:
    case 0xC:
      v1 = "ARMv7-A";
      break;
    case 0xD:
      goto LABEL_2;
    default:
      if ( v29.m128i_i32[2] <= 12 )
        goto LABEL_7;
      goto LABEL_2;
  }
LABEL_3:
  if ( !(unsigned __int8)sub_56980(a1 + 192, v1) )
    return v40 - __readfsqword(0x28u);
  return sub_55330(a1 + 192);
}
