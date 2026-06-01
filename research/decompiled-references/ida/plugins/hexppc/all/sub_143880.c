__int64 __fastcall sub_143880(_QWORD *a1, unsigned __int64 **a2)
{
  __int64 v2; // rbp
  __m128 v4; // xmm1
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __m128i *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v11; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-78h]
  __int128 v13; // [rsp+18h] [rbp-70h]
  _OWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]
  __int64 v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+60h] [rbp-28h]
  char v18; // [rsp+64h] [rbp-24h]
  unsigned __int64 v19; // [rsp+68h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( !*a2 || *((char *)*a2 + 17) < 0 || !(unsigned __int8)sub_325B90(a1, 0) )
    return 0;
  v10 = **a2;
  sub_2B2530(a1, v10, 0);
  v13 = 0;
  v12 = 0;
  if ( netnode_qgetblob() <= 0 )
    goto LABEL_11;
  v2 = j__qalloc_or_throw();
  sub_332920(v2, a1);
  v4 = _mm_loadh_ps((const double *)(v2 + 1504));
  v15 = -1;
  v18 = 0;
  v5 = v10;
  v14[1] = v4;
  v6 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)(v12 + (unsigned __int64)v13));
  v17 = 0;
  a1[51] = v10;
  v16 = 3;
  v14[0] = v6;
  if ( !(unsigned __int8)sub_88640(v2, (__int64)v14, v5)
    || (unsigned __int8)sub_36EC40(v2) && (*(_BYTE *)(v2 + 5) & 4) == 0 )
  {
    if ( v2 )
    {
      sub_80850(v2);
      j__qfree();
    }
    netnode_delblob();
    v7 = (__m128i *)a1[99];
    v11 = &v10;
    v8 = sub_142A40(v7 + 1, &v10, &v11);
    *(_DWORD *)(v8 + 32) |= 1u;
    sub_69660((__int64)"%a: deleted stale microcode from idb\n", *(double *)v6.m128i_i64);
LABEL_11:
    v2 = 0;
    goto LABEL_12;
  }
  v9 = v10;
  a1[168] = v2;
  a1[51] = v9;
  sub_69660((__int64)"%a: restored microcode from idb\n", *(double *)v6.m128i_i64);
  sub_1AB2C0(v2);
  sub_63560(v2, 0, (__int64)"restored mba");
LABEL_12:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v2;
}

