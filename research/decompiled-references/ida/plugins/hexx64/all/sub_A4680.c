_QWORD *__fastcall sub_A4680(__int64 a1, __int64 a2, _QWORD *a3, __m128i a4, __m128 a5)
{
  int v7; // r12d
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+8h] [rbp-B0h]
  _QWORD *v21; // [rsp+8h] [rbp-B0h]
  _QWORD *v22; // [rsp+8h] [rbp-B0h]
  int v23; // [rsp+14h] [rbp-A4h]
  unsigned __int8 v24; // [rsp+20h] [rbp-98h]
  char v25[16]; // [rsp+30h] [rbp-88h] BYREF
  char v26[16]; // [rsp+40h] [rbp-78h] BYREF
  char v27[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v28[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 5) & 8) != 0
    || *(_DWORD *)a2 != 4 && (*(_DWORD *)a2 != 67 || *(_DWORD *)(a2 + 36) != *(_DWORD *)(a2 + 68)) )
  {
    return nullptr;
  }
  if ( (*(_BYTE *)(a2 + 32) & 0xFB) != 1 )
    return nullptr;
  v7 = *(_DWORD *)(a2 + 36);
  if ( v7 <= 1 )
    return nullptr;
  v23 = *(_DWORD *)(a2 + 36) & 1;
  if ( (v7 & 1) != 0 )
    return nullptr;
  v8 = v7 >> 1;
  if ( !sub_11CA80(v8) )
    return nullptr;
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_123A40((__int64)v25, (unsigned __int8 *)(a2 + 32), v9, v10);
  sub_123A40((__int64)v26, (unsigned __int8 *)(a2 + 32), v11, v12);
  if ( (unsigned __int8)sub_1272B0((unsigned __int64)v25, v20, v8, 0)
    && (unsigned __int8)sub_127850((unsigned __int64)v26, v20, v8, 0) )
  {
    v24 = sub_A1ED0(v25, a3, *(double *)a4.m128i_i64, a5);
    v13 = sub_A1ED0(v26, a3, *(double *)a4.m128i_i64, a5);
    if ( v24 )
    {
      if ( !v13 )
        goto LABEL_14;
    }
    else if ( v13 )
    {
      v23 = 1;
LABEL_14:
      sub_123A40((__int64)v27, (unsigned __int8 *)(a2 + 64), v24, v14);
      sub_123A40((__int64)v28, (unsigned __int8 *)(a2 + 64), v15, v16);
      if ( (unsigned __int8)sub_1272B0((unsigned __int64)v27, v20, v8, 1u)
        && (unsigned __int8)sub_127850((unsigned __int64)v28, v20, v8, 1) )
      {
        v17 = 16LL * (v23 ^ 1);
        sub_11CA10((char *)(a2 + 32), &v25[v17]);
        sub_11CA10((char *)(a2 + 64), &v27[v17]);
        v18 = sub_A3240(a1, a2, 61, nullptr, nullptr, (unsigned __int8 *)&v27[16 * v23], a4);
      }
      else
      {
        v18 = nullptr;
      }
      v21 = v18;
      sub_11CDA0((__int64)v28);
      sub_11CDA0((__int64)v27);
      v19 = v21;
      goto LABEL_19;
    }
  }
  v19 = nullptr;
LABEL_19:
  v22 = v19;
  sub_11CDA0((__int64)v26);
  sub_11CDA0((__int64)v25);
  return v22;
}

