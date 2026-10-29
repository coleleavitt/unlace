__int64 __fastcall sub_D8C0(_QWORD *a1, double a2)
{
  unsigned int v2; // ebp
  _BYTE *v3; // r12
  char v4; // al
  __int64 (__fastcall *v5)(_QWORD *, char); // rax
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-40h]

  v2 = 0;
  v3 = (char *)a1 + 265;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  v4 = 0;
  do
  {
    if ( !*v3 )
      goto LABEL_9;
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v5 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v5 != sub_B860 )
      {
        v5(a1, 32);
        goto LABEL_8;
      }
      v6 = a1[4];
      if ( v6 )
      {
        v7 = v6 + 1;
        v8 = a1[4];
        v9 = a1[3];
        --v6;
        if ( a1[5] >= v7 )
        {
LABEL_7:
          a1[4] = v7;
          *(_BYTE *)(v9 + v6) = 32;
          *(_BYTE *)(a1[3] + v8) = 0;
          goto LABEL_8;
        }
      }
      else
      {
        v9 = a1[3];
        v8 = 1;
        v7 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_7;
      }
      v12 = v8;
      v11 = qvector_reserve();
      v8 = v12;
      a1[3] = v11;
      v9 = v11;
      goto LABEL_7;
    }
LABEL_8:
    v4 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, v2);
LABEL_9:
    ++v2;
    v3 += 40;
  }
  while ( v2 != 5 );
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  if ( *((_BYTE *)a1 + 265) == 4 && sub_A070(a1[77], (__int64)(a1 + 28), (__int64)(a1 + 33)) != -1 )
    sub_D5C0(a1, a2);
  if ( *((_BYTE *)a1 + 305) == 4 && sub_A070(a1[77], (__int64)(a1 + 28), (__int64)(a1 + 38)) != -1 )
    sub_D5C0(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

