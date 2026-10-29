__int64 __fastcall sub_189980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned __int64 *v10; // r13
  int v11; // eax
  _DWORD *v12; // rax
  unsigned __int8 *v13; // rsi
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // r14d
  int v20; // esi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // eax
  int v27; // eax
  int v28; // [rsp+Ch] [rbp-B4h]
  __int64 v29; // [rsp+10h] [rbp-B0h]
  __int64 v30; // [rsp+10h] [rbp-B0h]
  unsigned __int8 *v31; // [rsp+18h] [rbp-A8h]
  int v32; // [rsp+20h] [rbp-A0h]
  _DWORD *v33; // [rsp+28h] [rbp-98h]
  unsigned __int8 v35[16]; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-70h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v38; // [rsp+70h] [rbp-50h] BYREF
  int v39; // [rsp+78h] [rbp-48h]
  unsigned __int64 v40; // [rsp+88h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(v6 + 1344);
  v40 = __readfsqword(0x28u);
  v8 = a3;
  if ( !*(_QWORD *)(v7 + 8)
    || (v15 = *(_QWORD *)(a2 + 24), v39 = 0, v38 = v15, (sub_137670(v6, (__int64)&v38) & 7) == 0)
    && ((v16 = *(_QWORD *)(a1 + 64), !*(_QWORD *)(*(_QWORD *)(v16 + 1344) + 8LL))
     || (v17 = *(_QWORD *)(v8 + 24), v39 = 0, v38 = v17, (sub_137670(v16, (__int64)&v38) & 7) == 0)) )
  {
    sub_123A40((__int64)v35, (unsigned __int8 *)(v8 + 64), a3, a4);
    v10 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 64) + 1504LL);
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 == 2 )
    {
      if ( (unsigned __int8)(v35[0] - 5) > 1u && v35[0] != 9 )
        goto LABEL_16;
      v14 = *(_DWORD *)(v8 + 68);
      sub_11C950(v35, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), (unsigned int)v35[0] - 5, v9, *(double *)a5.m128i_i64);
      v33 = (_DWORD *)v8;
    }
    else
    {
      if ( v11 == 1 )
      {
        v14 = *(_DWORD *)(v8 + 36);
        v13 = nullptr;
      }
      else
      {
        if ( v11 != 12 )
          goto LABEL_16;
        v12 = *(_DWORD **)(v8 + 8);
        if ( !v12
          || *v12 != 1
          || !sub_125B60((unsigned __int8 *)(v8 + 64), (__int64)(v12 + 16), 0, *(double *)a5.m128i_i64) )
        {
          goto LABEL_16;
        }
        sub_11CDA0((__int64)v35);
        v13 = (unsigned __int8 *)v8;
        v14 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 36LL);
        v8 = *(_QWORD *)(v8 + 8);
      }
      if ( *(_BYTE *)(v8 + 32) != 4 || (v33 = *(_DWORD **)(v8 + 40), *v33 != 2) )
      {
LABEL_16:
        v18 = 0;
LABEL_17:
        sub_11CDA0((__int64)v35);
        return v18;
      }
      if ( !v35[0] )
        sub_1262E0((__int64)v35, v13, *(double *)a5.m128i_i64);
    }
    v20 = 0;
    if ( *(_BYTE *)(a2 + 64) == 8 )
      v20 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL);
    v21 = sub_32FB00(*(_QWORD *)(a1 + 480), v20);
    if ( v21 != -1 )
    {
      if ( (unsigned int)(v21 - 1) > 1 && v21 != 4 )
      {
        if ( !under_debugger )
          sub_383060(0xCD0Du, *(double *)a5.m128i_i64);
        BUG();
      }
      v32 = v21;
      v22 = (unsigned int)(v14 >> 31);
      LODWORD(v22) = v14 % v21;
      v28 = v14 / v21;
      if ( !(v14 % v21) )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL);
        v29 = *(_QWORD *)(a2 + 72);
        v31 = (unsigned __int8 *)(v23 + 160);
        sub_123A40((__int64)&v38, (unsigned __int8 *)(v23 + 160), v22, (__int64)&v38);
        sub_183B80(v36, (__int64)v10, *(_QWORD *)(a2 + 24), v23, (__int64)&v38, v32, a5, 1);
        sub_11CDA0((__int64)&v38);
        LOBYTE(v24) = sub_1255D0((unsigned __int8 *)v36, (__int64)v10, (__int64)v35, 8, *(double *)a5.m128i_i64);
        v18 = v24;
        if ( (_BYTE)v24 )
        {
          v30 = *(_QWORD *)(v29 + 24) + 80LL;
          sub_123A40((__int64)&v38, v31, v25, v30);
          sub_183B80(v37, (__int64)v10, *(_QWORD *)(a2 + 24), v30, (__int64)&v38, v32, a5, 1);
          sub_11CDA0((__int64)&v38);
          LOBYTE(v26) = sub_1255D0(
                          (unsigned __int8 *)v37,
                          (__int64)v10,
                          (__int64)(v33 + 12),
                          8,
                          *(double *)a5.m128i_i64);
          v18 = v26;
          if ( (_BYTE)v26 )
          {
            sub_A2B00((__int64)&v38, v10, *(_QWORD *)(a2 + 24), (__int64)v31, v28, 1, a5);
            sub_125180(v31, (unsigned __int8 *)&v38);
            sub_11CDA0((__int64)&v38);
            sub_11D5A0(v8);
            v27 = *(_DWORD *)(a1 + 24);
            BYTE1(v27) &= ~2u;
            LOBYTE(v27) = v27 | 0x80;
            *(_DWORD *)(a1 + 24) = v27;
          }
          sub_11CDA0((__int64)v37);
        }
        sub_11CDA0((__int64)v36);
        goto LABEL_17;
      }
    }
    goto LABEL_16;
  }
  return 0;
}

