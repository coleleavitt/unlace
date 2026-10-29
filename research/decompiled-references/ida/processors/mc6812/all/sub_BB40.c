__int64 __fastcall sub_BB40(_BYTE *a1, double a2)
{
  _BYTE *v2; // rbp
  __int64 (__fastcall *v3)(_BYTE *, char); // rax
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 word; // r15
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_BYTE *, char); // rax
  __int64 v12; // rbp
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(_BYTE *, char); // rax
  __int64 v17; // rbp
  __int64 v18; // r13
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+8h] [rbp-40h]

  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 296LL))(a1);
  if ( a1[265] )
    (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( a1[305] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 79) + 4LL) & 8) != 0 )
    {
      v16 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
      if ( (char *)v16 == (char *)sub_B240 )
      {
        v17 = *((_QWORD *)a1 + 4);
        if ( v17 )
        {
          v19 = v17 + 1;
          v18 = *((_QWORD *)a1 + 4);
          --v17;
        }
        else
        {
          v18 = 1;
          v19 = 2;
        }
        v20 = *((_QWORD *)a1 + 3);
        if ( *((_QWORD *)a1 + 5) < v19 )
        {
          v21 = qvector_reserve();
          *((_QWORD *)a1 + 3) = v21;
          v20 = v21;
        }
        *((_QWORD *)a1 + 4) = v19;
        *(_BYTE *)(v20 + v17) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v18) = 0;
      }
      else
      {
        v16(a1, 32);
      }
    }
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
  }
  if ( a1[345] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 79) + 4LL) & 8) != 0 )
    {
      v11 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
      if ( (char *)v11 == (char *)sub_B240 )
      {
        v12 = *((_QWORD *)a1 + 4);
        if ( v12 )
        {
          v14 = v12 + 1;
          v13 = *((_QWORD *)a1 + 4);
          --v12;
        }
        else
        {
          v13 = 1;
          v14 = 2;
        }
        v15 = *((_QWORD *)a1 + 3);
        if ( *((_QWORD *)a1 + 5) < v14 )
        {
          v22 = qvector_reserve();
          *((_QWORD *)a1 + 3) = v22;
          v15 = v22;
        }
        *((_QWORD *)a1 + 4) = v14;
        *(_BYTE *)(v15 + v12) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v13) = 0;
      }
      else
      {
        v11(a1, 32);
      }
    }
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
  }
  v2 = a1 + 265;
  do
  {
    if ( *(_WORD *)(v2 + 5) != 6 || ((*v2 - 4) & 0xFB) != 0 )
      goto LABEL_10;
    sub_9AA0(
      *((_QWORD *)a1 + 77),
      (__int64)(a1 + 224),
      *(_WORD *)(v2 + 15) + *((_WORD *)a1 + 120) + *((_WORD *)a1 + 125));
    (*(void (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
      a1,
      *(_QWORD *)(*((_QWORD *)a1 + 79) + 48LL),
      4);
    v3 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
    if ( (char *)v3 != (char *)sub_B240 )
    {
      v3(a1, 32);
      goto LABEL_17;
    }
    v4 = *((_QWORD *)a1 + 4);
    if ( v4 )
    {
      v7 = v4 + 1;
      v6 = *((_QWORD *)a1 + 4);
      v5 = *((_QWORD *)a1 + 3);
      --v4;
      if ( *((_QWORD *)a1 + 5) < v7 )
      {
LABEL_27:
        v24 = v6;
        v23 = v7;
        v10 = qvector_reserve();
        v6 = v24;
        v7 = v23;
        *((_QWORD *)a1 + 3) = v10;
        v5 = v10;
      }
    }
    else
    {
      v5 = *((_QWORD *)a1 + 3);
      v6 = 1;
      v7 = 2;
      if ( *((_QWORD *)a1 + 5) < 2u )
        goto LABEL_27;
    }
    *((_QWORD *)a1 + 4) = v7;
    *(_BYTE *)(v5 + v4) = 32;
    *(_BYTE *)(*((_QWORD *)a1 + 3) + v6) = 0;
LABEL_17:
    if ( (v2[31] & 4) != 0 )
      a2 = (*(double (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
    sub_BA50((__int64)a1, a2);
    if ( (v2[31] & 4) != 0 )
    {
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
      word = (unsigned __int16)get_word();
      if ( *((_WORD *)a1 + 124) == 45 )
        word |= ((unsigned int)get_byte() << 16) & 0xFF0000;
      if ( word && (unsigned __int8)is_mapped() )
      {
        a2 = (*(double (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 61);
        sub_BA50((__int64)a1, a2);
      }
    }
LABEL_10:
    v2 += 40;
  }
  while ( v2 != a1 + 585 );
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

