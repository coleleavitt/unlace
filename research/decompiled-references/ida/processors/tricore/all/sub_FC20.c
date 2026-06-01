__int64 __fastcall sub_FC20(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 (__fastcall *v7)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall *v13)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 24);
  v23 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(v2 + 40) )
    return sub_ED10((__int64)a2, (__int64)"end of file");
  (*(void (__fastcall **)(_QWORD *))(*a2 + 160LL))(a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), 27);
  v21 = 0;
  v22 = 0;
  v4 = getinf(16);
  if ( get_ea_name(&v21, v4, 3, 0) > 0 )
  {
    v7 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a2 + 96LL);
    if ( v7 != sub_EB20 )
    {
      ((void (__fastcall *)(_QWORD *, __int64))v7)(a2, 32);
LABEL_7:
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 0);
      v13 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a2 + 96LL);
      if ( v13 != sub_EB20 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v13)(a2, 32);
        goto LABEL_11;
      }
      v14 = a2[4];
      v15 = 2;
      if ( v14 )
      {
        v15 = v14 + 1;
        v16 = a2[3];
        --v14;
        if ( a2[5] >= v15 )
          goto LABEL_10;
      }
      else
      {
        v16 = a2[3];
        if ( a2[5] >= 2u )
        {
LABEL_10:
          a2[4] = v15;
          *(_BYTE *)(v16 + v14) = 32;
          *(_BYTE *)(a2[3] + v14 + 1) = 0;
LABEL_11:
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 56LL))(a2, v21, 0);
          goto LABEL_12;
        }
      }
      v19 = qvector_reserve(a2 + 3, v16, v15, 1, v11, v12);
      a2[3] = v19;
      v16 = v19;
      goto LABEL_10;
    }
    v8 = a2[4];
    v9 = 2;
    if ( v8 )
    {
      v9 = v8 + 1;
      v10 = a2[3];
      --v8;
      if ( a2[5] >= v9 )
        goto LABEL_6;
    }
    else
    {
      v10 = a2[3];
      if ( a2[5] >= 2u )
      {
LABEL_6:
        a2[4] = v9;
        *(_BYTE *)(v10 + v8) = 32;
        *(_BYTE *)(a2[3] + v8 + 1) = 0;
        goto LABEL_7;
      }
    }
    v20 = qvector_reserve(a2 + 3, v10, v9, 1, v5, v6);
    a2[3] = v20;
    v10 = v20;
    goto LABEL_6;
  }
LABEL_12:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, 0xFFFF, v17, 0.0);
  }
  return v23 - __readfsqword(0x28u);
}

