__int64 __fastcall sub_6C60(_QWORD *a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // edx
  __int64 v4; // r12
  int *v5; // r13
  _QWORD *v6; // r14
  int v7; // ebp
  int v8; // r15d
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // r11
  __int64 v13; // rsi
  void (__fastcall *v14)(_QWORD *, _QWORD, __int64); // rax
  __int64 v16; // rax
  int v17; // [rsp+4h] [rbp-54h]
  unsigned __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+18h] [rbp-40h]

  v2 = *((_WORD *)a1 + 124);
  if ( v2 > 0x41u )
  {
    v3 = 0;
    if ( v2 != 77 )
      return v3;
LABEL_4:
    v17 = 0;
    goto LABEL_6;
  }
  if ( v2 <= 0x3Fu )
  {
    v3 = 0;
    if ( v2 != 20 )
      return v3;
    goto LABEL_4;
  }
  v17 = 1;
LABEL_6:
  v4 = *(_QWORD *)(a2 + 8);
  v3 = 0;
  if ( v4 )
  {
    v5 = &dword_C45C;
    v6 = &off_F6B8;
    v7 = 0;
    v8 = 1;
    while ( (int)(v8 & v4) >> v7 != 1 )
    {
LABEL_17:
      ++v7;
      v8 *= 2;
      --v5;
      --v6;
      if ( v7 == 8 )
        return 1;
    }
    if ( !(_BYTE)v3 )
    {
LABEL_14:
      v14 = *(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL);
      if ( v17 == 1 )
        v14(a1, *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *v5), 33);
      else
        v14(a1, *v6, 33);
      LOBYTE(v3) = 1;
      goto LABEL_17;
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v9 != sub_6460 )
    {
      v9(a1, 32);
      goto LABEL_14;
    }
    v10 = a1[4];
    if ( v10 )
    {
      v11 = v10 + 1;
      v12 = a1[4];
      v13 = a1[3];
      --v10;
      if ( a1[5] >= v11 )
      {
LABEL_13:
        a1[4] = v11;
        *(_BYTE *)(v13 + v10) = 32;
        *(_BYTE *)(a1[3] + v12) = 0;
        goto LABEL_14;
      }
    }
    else
    {
      v13 = a1[3];
      v12 = 1;
      v11 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_13;
    }
    v20 = v10;
    v19 = v12;
    v18 = v11;
    v16 = qvector_reserve();
    v10 = v20;
    v12 = v19;
    a1[3] = v16;
    v11 = v18;
    v13 = v16;
    goto LABEL_13;
  }
  return v3;
}

