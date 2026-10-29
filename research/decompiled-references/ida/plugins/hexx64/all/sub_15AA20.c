__int64 __fastcall sub_15AA20(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned int v8; // r13d
  _DWORD *v11; // rdi
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  __int64 v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a4 + 72);
  v7 = *(_QWORD *)(v6 + 24);
  if ( *(_BYTE *)(v7 + 160) == 4
    && (v11 = *(_DWORD **)(v7 + 168), *v11 == 12)
    && v11
    && (v14 = (char *)sub_11C8A0((__int64)v11, &v21)) != nullptr
    && (unsigned __int8)sub_11FD80(v14, v22, 1)
    && v22[0] == 1
    && *(_BYTE *)v21 == 4
    && (v15 = *(_QWORD *)(v21 + 8), *(_DWORD *)v15 == 56)
    && v15
    && *(_BYTE *)(v15 + 64) == 8
    && (v16 = *(_QWORD *)(v15 + 72), *(_DWORD *)(v16 + 284) == 7)
    && (v8 = sub_12EA80(a1, a2, a3, *(_QWORD *)(v6 + 24) + 80LL, a3, *(_QWORD *)(v16 + 24), a5, a6, 0), (_BYTE)v8) )
  {
    v17 = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)(v17 + 216) == 1 )
    {
      v20 = *(_QWORD *)(v17 + 224) + *(int *)(v6 + 12);
      if ( *(int *)(v6 + 16) > v20 )
        *(_DWORD *)(v6 + 16) = v20;
    }
    *(_DWORD *)(v6 + 8) = 2;
    sub_82440((__int64 *)(v6 + 24), 2u);
    copy_tinfo_t();
    copy_tinfo_t();
    *(_DWORD *)(v6 + 284) = 6;
    sub_11D4A0(a4 + 32);
    v18 = *(_QWORD *)(a4 + 16);
    if ( v18
      && *(_DWORD *)v18 == 4
      && sub_125B60((unsigned __int8 *)(v18 + 32), *(_QWORD *)(v6 + 24), 0, *(double *)a5.m128i_i64) )
    {
      v19 = (char *)sub_15A9C0((__int64 *)(v6 + 48));
      sub_11CA10((char *)(v18 + 64), v19);
      *(_DWORD *)(a4 + 68) = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 4LL);
      copy_tinfo_t();
      sub_123EA0((__int64)a2, (__int64 *)(v6 + 96), v18 + 32, 1, 0xFFFF0000, *(double *)a5.m128i_i64);
      sub_14E8D0((__int64 *)(v6 + 136), (__int64 *)(v6 + 96), *(double *)a5.m128i_i64);
      sub_F2530((__int64)a2, a4, 0, *(double *)a5.m128i_i64);
      sub_11D5A0(v18);
    }
  }
  else
  {
    return 0;
  }
  return v8;
}

