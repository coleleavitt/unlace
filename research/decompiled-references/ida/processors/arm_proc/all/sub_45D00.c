__int64 __fastcall sub_45D00(__int64 a1)
{
  const char *v1; // rsi
  char v3; // r14
  int v4; // r13d
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __m128i v16; // xmm0
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rbp
  void *v21; // r15
  void *v22; // r15
  __m128i v23; // [rsp+10h] [rbp-508h] BYREF
  int v24; // [rsp+20h] [rbp-4F8h]
  __m128i v25; // [rsp+24h] [rbp-4F4h] BYREF
  __int64 v26; // [rsp+34h] [rbp-4E4h]
  void *src; // [rsp+40h] [rbp-4D8h]
  __int128 v28; // [rsp+48h] [rbp-4D0h]
  void *v29; // [rsp+58h] [rbp-4C0h]
  __int128 v30; // [rsp+60h] [rbp-4B8h]
  __int16 v31; // [rsp+70h] [rbp-4A8h]
  unsigned int v32; // [rsp+B0h] [rbp-468h]
  int v33; // [rsp+D0h] [rbp-448h] BYREF
  unsigned __int64 v34; // [rsp+4D8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( (getinf() & 0x1006) == 0x1002 )
    goto LABEL_2;
  if ( (unsigned int)getinf() != 25 )
  {
    if ( (unsigned int)getinf() != 18 )
      goto LABEL_7;
    netnode_check();
    if ( !netnode_hashval_long() )
      goto LABEL_7;
    v23 = 0;
    v25 = 0;
    v26 = 0;
    src = nullptr;
    v29 = nullptr;
    v31 = 0;
    v28 = 0;
    v30 = 0;
    if ( netnode_supstr() > 0 && (unsigned __int8)sub_56980(&v23, &v33) )
      goto LABEL_21;
    v3 = 0;
    if ( netnode_supstr() > 0 )
    {
      if ( (unsigned __int8)sub_56980(&v23, &v33) )
      {
LABEL_21:
        v3 = 1;
        goto LABEL_22;
      }
      qstrncpy();
      v33 = 1984778817;
      v3 = sub_56980(&v23, &v33);
    }
LABEL_22:
    v4 = netnode_altval() - 1;
    if ( v3 == 1 )
      goto LABEL_26;
    if ( v4 >= 0 )
    {
      v5 = sub_55300((unsigned int)v4, 6);
      v3 = sub_56980(&v23, v5);
    }
    if ( v3 )
    {
LABEL_26:
      if ( (unsigned int)v4 <= 0x16 )
        v23.m128i_i32[0] = v4;
      v6 = netnode_altval() - 1;
      if ( v6 >= 0 )
        v23.m128i_i32[1] = v6;
      v7 = netnode_altval() - 1;
      if ( v7 >= 0 )
        v25.m128i_i32[0] = v7;
      v8 = netnode_altval() - 1;
      if ( v8 >= 0 )
        v25.m128i_i32[1] = v8;
      v9 = netnode_altval() - 1;
      if ( v9 >= 0 )
        v23.m128i_i32[2] = v9;
      v10 = netnode_altval() - 1;
      if ( v10 >= 0 )
        v23.m128i_i32[3] = v10;
      v11 = netnode_altval() - 1;
      if ( v11 >= 0 )
        v24 = v11;
      v12 = netnode_altval() - 1;
      if ( v12 >= 0 )
      {
        v25.m128i_i32[3] = v12;
        v25.m128i_i32[2] = 1;
      }
      v13 = netnode_altval() - 1;
      if ( v13 >= 0 )
        LODWORD(v26) = v13;
      v14 = netnode_altval() - 1;
      if ( v14 >= 0 )
        HIDWORD(v26) = v14;
      netnode_check();
      if ( netnode_valobj() == 72 )
      {
        v15 = (v32 >> 23) & 1;
        if ( (v32 & 0xFF000000) <= 0x4FFFFFF )
          LOBYTE(v15) = 0;
        LOBYTE(v31) = v15;
      }
      v16 = _mm_load_si128(&v23);
      v17 = v28;
      *(_DWORD *)(a1 + 208) = v24;
      v18 = v26;
      *(__m128i *)(a1 + 192) = v16;
      v19 = _mm_loadu_si128(&v25);
      *(_QWORD *)(a1 + 228) = v18;
      *(__m128i *)(a1 + 212) = v19;
      if ( v17 > 1 )
      {
        v21 = src;
        if ( *(_QWORD *)(a1 + 256) < v17 )
          *(_QWORD *)(a1 + 240) = qvector_reserve();
        *(_QWORD *)(a1 + 248) = v17;
        memmove(*(void **)(a1 + 240), v21, v17 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 240) + v17 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 248) = 0;
      }
      v20 = v30;
      if ( (unsigned __int64)v30 > 1 )
      {
        v22 = v29;
        if ( *(_QWORD *)(a1 + 280) < (unsigned __int64)v30 )
          *(_QWORD *)(a1 + 264) = qvector_reserve();
        *(_QWORD *)(a1 + 272) = v20;
        memmove(*(void **)(a1 + 264), v22, v20 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 264) + v20 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 272) = 0;
      }
      *(_WORD *)(a1 + 288) = v31;
      sub_55330(a1 + 192);
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree();
      }
      if ( src )
      {
        *(_QWORD *)&v28 = 0;
        qfree();
      }
      return v34 - __readfsqword(0x28u);
    }
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree();
    }
    if ( src )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
LABEL_7:
    if ( *(_QWORD *)(a1 + 408) > 1u )
    {
      v1 = *(const char **)(a1 + 400);
      goto LABEL_3;
    }
    if ( !(unsigned __int8)getinf_flag() )
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
  if ( v23.m128i_i32[1] != 12 )
  {
    if ( ((v23.m128i_i32[1] - 16777228) & 0xFEFFFFFF) == 0 && v23.m128i_i32[2] > 0 )
      goto LABEL_2;
    goto LABEL_7;
  }
  switch ( v23.m128i_i32[2] )
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
      if ( v23.m128i_i32[2] <= 12 )
        goto LABEL_7;
      goto LABEL_2;
  }
LABEL_3:
  if ( !(unsigned __int8)sub_56980(a1 + 192, v1) )
    return v34 - __readfsqword(0x28u);
  return sub_55330(a1 + 192);
}

