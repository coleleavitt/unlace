__int64 __fastcall sub_15AC80(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int v8; // r14d
  _DWORD *v11; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  char *v17; // rax
  char *v18; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v19[11]; // [rsp+30h] [rbp-58h] BYREF

  v19[3] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a4 + 72);
  v7 = *(_QWORD *)(v6 + 24);
  if ( *(_BYTE *)v7 == 4
    && (v11 = *(_DWORD **)(v7 + 8), *v11 == 12)
    && v11
    && (v14 = sub_11C8E0((__int64)v11, &v18, 56)) != 0
    && *(_BYTE *)(v14 + 64) == 8
    && (v15 = *(_QWORD *)(v14 + 72), *(_DWORD *)(v15 + 284) == 7)
    && (v8 = sub_12EA80(a1, a2, a3, (__int64)v18, a3, *(_QWORD *)(v15 + 24), a5, a6, 0), (_BYTE)v8) )
  {
    *(_DWORD *)(v6 + 8) = 2;
    sub_82440((__int64 *)(v6 + 24), 2u);
    v19[0] = 0xFFFFFFFF00000000LL;
    v19[1] = 0;
    sub_11CA10((char *)v19, v18);
    sub_125180(*(unsigned __int8 **)(v6 + 24), (unsigned __int8 *)v19);
    copy_tinfo_t();
    copy_tinfo_t();
    *(_DWORD *)(v6 + 284) = 8;
    sub_11D4A0(a4 + 32);
    v16 = *(_QWORD *)(a4 + 16);
    if ( v16
      && *(_DWORD *)v16 == 4
      && sub_125B60((unsigned __int8 *)(v16 + 32), *(_QWORD *)(v6 + 24), 0, *(double *)a5.m128i_i64) )
    {
      v17 = (char *)sub_15A9C0((__int64 *)(v6 + 48));
      sub_11CA10((char *)(v16 + 64), v17);
      *(_DWORD *)(a4 + 68) = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 4LL);
      copy_tinfo_t();
      sub_123EA0((__int64)a2, (__int64 *)(v6 + 96), v16 + 32, 1, 0xFFFF0000, *(double *)a5.m128i_i64);
      sub_14E8D0((__int64 *)(v6 + 136), (__int64 *)(v6 + 96), *(double *)a5.m128i_i64);
      sub_F2530((__int64)a2, a4, 0, *(double *)a5.m128i_i64);
      sub_11D5A0(v16);
    }
    sub_11CDA0((__int64)v19);
  }
  else
  {
    return 0;
  }
  return v8;
}

