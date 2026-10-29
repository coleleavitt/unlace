__int64 __fastcall sub_11FC0(_BYTE *a1)
{
  __int64 (__fastcall *v1)(_BYTE *, char); // rax
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 (__fastcall *v7)(_BYTE *, char); // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax

  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 296LL))(a1);
  if ( (a1[268] & 8) != 0 )
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
    if ( !a1[305] )
      goto LABEL_3;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v7 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
    if ( (char *)v7 == (char *)sub_114F0 )
    {
      v8 = *((_QWORD *)a1 + 4);
      if ( v8 )
      {
        v10 = v8 + 1;
        v9 = *((_QWORD *)a1 + 4);
        --v8;
      }
      else
      {
        v9 = 1;
        v10 = 2;
      }
      v11 = *((_QWORD *)a1 + 3);
      if ( *((_QWORD *)a1 + 5) < v10 )
      {
        v13 = qvector_reserve();
        *((_QWORD *)a1 + 3) = v13;
        v11 = v13;
      }
      *((_QWORD *)a1 + 4) = v10;
      *(_BYTE *)(v11 + v8) = 32;
      *(_BYTE *)(*((_QWORD *)a1 + 3) + v9) = 0;
    }
    else
    {
      v7(a1, 32);
    }
  }
  else if ( !a1[305] )
  {
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
LABEL_3:
  if ( a1[345] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v1 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
    if ( (char *)v1 != (char *)sub_114F0 )
    {
      v1(a1, 32);
      goto LABEL_8;
    }
    v2 = *((_QWORD *)a1 + 4);
    if ( v2 )
    {
      v3 = v2 + 1;
      v4 = *((_QWORD *)a1 + 4);
      v5 = *((_QWORD *)a1 + 3);
      --v2;
      if ( *((_QWORD *)a1 + 5) >= v3 )
      {
LABEL_7:
        *((_QWORD *)a1 + 4) = v3;
        *(_BYTE *)(v5 + v2) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v4) = 0;
LABEL_8:
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
        goto LABEL_9;
      }
    }
    else
    {
      v5 = *((_QWORD *)a1 + 3);
      v4 = 1;
      v3 = 2;
      if ( *((_QWORD *)a1 + 5) >= 2u )
        goto LABEL_7;
    }
    v12 = qvector_reserve();
    *((_QWORD *)a1 + 3) = v12;
    v5 = v12;
    goto LABEL_7;
  }
LABEL_9:
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

