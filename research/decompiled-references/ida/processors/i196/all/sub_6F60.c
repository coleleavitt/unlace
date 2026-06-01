__int64 __fastcall sub_6F60(unsigned __int16 *a1, unsigned __int8 a2)
{
  __int64 (__fastcall *v2)(unsigned __int16 *, char); // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(unsigned __int16 *, char); // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  sub_6EA0((__int64)a1, a1[124], a2);
  (*(void (__fastcall **)(unsigned __int16 *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( *((_BYTE *)a1 + 305) )
  {
    (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v2 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(*(_QWORD *)a1 + 96LL);
    if ( (char *)v2 != (char *)sub_6A30 )
    {
      v2(a1, 32);
      goto LABEL_6;
    }
    v3 = *((_QWORD *)a1 + 4);
    if ( v3 )
    {
      v4 = v3 + 1;
      v5 = *((_QWORD *)a1 + 4);
      v6 = *((_QWORD *)a1 + 3);
      --v3;
      if ( *((_QWORD *)a1 + 5) >= v4 )
      {
LABEL_5:
        *((_QWORD *)a1 + 4) = v4;
        *(_BYTE *)(v6 + v3) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v5) = 0;
LABEL_6:
        (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
        goto LABEL_7;
      }
    }
    else
    {
      v6 = *((_QWORD *)a1 + 3);
      v5 = 1;
      v4 = 2;
      if ( *((_QWORD *)a1 + 5) >= 2u )
        goto LABEL_5;
    }
    v13 = qvector_reserve();
    *((_QWORD *)a1 + 3) = v13;
    v6 = v13;
    goto LABEL_5;
  }
LABEL_7:
  if ( *((_BYTE *)a1 + 345) )
  {
    (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v7 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(*(_QWORD *)a1 + 96LL);
    if ( (char *)v7 != (char *)sub_6A30 )
    {
      v7(a1, 32);
      goto LABEL_12;
    }
    v8 = *((_QWORD *)a1 + 4);
    if ( v8 )
    {
      v9 = v8 + 1;
      v10 = *((_QWORD *)a1 + 4);
      v11 = *((_QWORD *)a1 + 3);
      --v8;
      if ( *((_QWORD *)a1 + 5) >= v9 )
      {
LABEL_11:
        *((_QWORD *)a1 + 4) = v9;
        *(_BYTE *)(v11 + v8) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v10) = 0;
LABEL_12:
        (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
        goto LABEL_13;
      }
    }
    else
    {
      v11 = *((_QWORD *)a1 + 3);
      v10 = 1;
      v9 = 2;
      if ( *((_QWORD *)a1 + 5) >= 2u )
        goto LABEL_11;
    }
    v14 = qvector_reserve();
    *((_QWORD *)a1 + 3) = v14;
    v11 = v14;
    goto LABEL_11;
  }
LABEL_13:
  (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

