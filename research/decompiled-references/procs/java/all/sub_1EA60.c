__int64 __fastcall sub_1EA60(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, char a4, unsigned int a5)
{
  __int64 v7; // rbp
  __int64 *outctx; // rbx
  __int64 v9; // r12
  __int64 (__fastcall *v10)(__int64 *, char); // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rsi
  __int64 v15; // r12
  const char *i; // rdi
  char *v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  __int64 v23; // [rsp+18h] [rbp-40h]

  v7 = a5;
  outctx = (__int64 *)create_outctx(-1, 0, 0);
  if ( !(unsigned int)sub_1B1E0((__int64)outctx, a1, a2, 510, 12, 0) )
  {
    if ( a4 <= 0 )
      goto LABEL_10;
    v9 = outctx[4];
    if ( !v9 )
    {
      v10 = *(__int64 (__fastcall **)(__int64 *, char))(*outctx + 96);
      if ( v10 == sub_8770 )
      {
        v11 = 1;
        v12 = 2;
        v13 = 510;
LABEL_6:
        v14 = outctx[3];
        if ( outctx[5] < v12 )
        {
          v23 = v11;
          v22 = v13;
          v20 = v12;
          v19 = qvector_reserve(outctx + 3, v14, v12, 1);
          v11 = v23;
          v13 = v22;
          outctx[3] = v19;
          v12 = v20;
          v14 = v19;
        }
        outctx[4] = v12;
        *(_BYTE *)(v14 + v9) = 32;
        *(_BYTE *)(outctx[3] + v11) = 0;
LABEL_9:
        if ( !(unsigned int)sub_1B1E0((__int64)outctx, a1, a3, v13, 13, 0) )
          goto LABEL_10;
        goto LABEL_17;
      }
      v13 = 510;
      goto LABEL_22;
    }
    if ( (unsigned __int64)(v9 - 1) <= 0x1FC )
    {
      v13 = 510 - (v9 - 1);
      v10 = *(__int64 (__fastcall **)(__int64 *, char))(*outctx + 96);
      if ( v10 == sub_8770 )
      {
        v12 = v9 + 1;
        v11 = outctx[4];
        --v9;
        goto LABEL_6;
      }
LABEL_22:
      v21 = v13;
      v10(outctx, 32);
      v13 = v21;
      goto LABEL_9;
    }
  }
LABEL_17:
  sub_1CF50(outctx, v7, a4 & 4);
LABEL_10:
  v15 = outctx[3];
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
  {
    for ( i = (const char *)outctx[3]; ; i = v17 + 1 )
    {
      v17 = strchr(i, 47);
      if ( !v17 )
        break;
      *v17 = 46;
    }
  }
  set_name(v7, v15, 6144);
  if ( outctx )
    (*(void (__fastcall **)(__int64 *))(*outctx + 8))(outctx);
  return hide_name(v7);
}
