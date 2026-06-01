__int64 __fastcall sub_52A0(unsigned __int16 *a1)
{
  __int64 (__fastcall *v1)(unsigned __int16 *, char); // rax
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned int v7; // ebp
  unsigned __int16 v8; // r12
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // r12d
  __int64 v12; // rax
  unsigned __int16 v13; // r12
  __int64 v14; // rax

  (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)a1 + 296LL))(a1);
  if ( a1[124] == 107 )
  {
    v7 = a1[135];
    v8 = a1[135];
    (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 60);
    if ( v7 > 0xF )
    {
      v13 = v8 ^ 0x10;
      v7 = v13;
      if ( v13 )
      {
        v9 = 4;
LABEL_12:
        v10 = 0;
        while ( (v7 & 1) == 0 )
        {
LABEL_18:
          ++v9;
          v7 >>= 1;
        }
        while ( 1 )
        {
          v11 = v10 + 1;
          if ( v10 )
            (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 33);
          v12 = v9++;
          (*(void (__fastcall **)(unsigned __int16 *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 78) + 112LL) + 16LL * *((unsigned int *)qword_75E0 + v12)),
            5);
          v7 >>= 1;
          if ( !v7 )
            goto LABEL_21;
          v10 = v11;
          if ( (v7 & 1) == 0 )
            goto LABEL_18;
        }
      }
      (*(void (__fastcall **)(unsigned __int16 *, __int64 *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, &qword_7350, 0);
    }
    else if ( v7 )
    {
      v9 = 0;
      goto LABEL_12;
    }
LABEL_21:
    (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 62);
  }
  (*(void (__fastcall **)(unsigned __int16 *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( *((_BYTE *)a1 + 305) )
  {
    (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v1 = *(__int64 (__fastcall **)(unsigned __int16 *, char))(*(_QWORD *)a1 + 96LL);
    if ( (char *)v1 != (char *)sub_4A80 )
    {
      v1(a1, 32);
      goto LABEL_7;
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
LABEL_6:
        *((_QWORD *)a1 + 4) = v3;
        *(_BYTE *)(v5 + v2) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v4) = 0;
LABEL_7:
        (*(void (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
        goto LABEL_8;
      }
    }
    else
    {
      v5 = *((_QWORD *)a1 + 3);
      v4 = 1;
      v3 = 2;
      if ( *((_QWORD *)a1 + 5) >= 2u )
        goto LABEL_6;
    }
    v14 = qvector_reserve();
    *((_QWORD *)a1 + 3) = v14;
    v5 = v14;
    goto LABEL_6;
  }
LABEL_8:
  (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

