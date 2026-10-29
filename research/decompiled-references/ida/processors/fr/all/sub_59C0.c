__int64 __fastcall sub_59C0(_QWORD *a1)
{
  unsigned int v1; // ebp
  _BYTE *v2; // r12
  __int64 (__fastcall *v3)(_QWORD *, char); // rax
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v10; // rax

  v1 = 0;
  v2 = (char *)a1 + 265;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  if ( *((_BYTE *)a1 + 265) )
LABEL_2:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, v1);
LABEL_3:
  if ( ++v1 != 4 )
  {
    do
    {
      v2 += 40;
      if ( !*v2 )
        goto LABEL_3;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v3 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v3 != sub_4D30 )
      {
        v3(a1, 32);
        goto LABEL_2;
      }
      v4 = a1[4];
      if ( v4 )
      {
        v5 = v4 + 1;
        v6 = a1[4];
        v7 = a1[3];
        --v4;
        if ( a1[5] < v5 )
          goto LABEL_11;
      }
      else
      {
        v7 = a1[3];
        v6 = 1;
        v5 = 2;
        if ( a1[5] < 2u )
        {
LABEL_11:
          v10 = qvector_reserve();
          a1[3] = v10;
          v7 = v10;
        }
      }
      a1[4] = v5;
      *(_BYTE *)(v7 + v4) = 32;
      v8 = v1++;
      *(_BYTE *)(a1[3] + v6) = 0;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, v8);
    }
    while ( v1 != 4 );
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

