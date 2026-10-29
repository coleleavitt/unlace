__int64 __fastcall sub_7820(__int64 *a1)
{
  char v1; // dl
  __int16 v2; // ax
  __int64 (__fastcall *v3)(__int64 *, char); // rax
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  char v9; // r12
  __int64 (__fastcall *v10)(__int64 *, char); // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rax

  (*(void (__fastcall **)(__int64 *))(*a1 + 296))(a1);
  v1 = *((_BYTE *)a1 + 265);
  v2 = *(_WORD *)(a1[79] + 4);
  if ( (v2 & 0x400) == 0 || *(_DWORD *)(a1[77] + 224) != 5 )
    goto LABEL_3;
  v15 = *((_WORD *)a1 + 124);
  if ( v15 == 36 )
  {
LABEL_33:
    if ( v1 )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 304))(a1, 0);
      if ( !*((_BYTE *)a1 + 305) )
      {
        if ( !*((_BYTE *)a1 + 345) )
          goto LABEL_17;
        goto LABEL_8;
      }
      v9 = 0;
      v2 = *(_WORD *)(a1[79] + 4);
    }
    else
    {
      if ( !*((_BYTE *)a1 + 305) )
      {
        if ( !*((_BYTE *)a1 + 345) )
          goto LABEL_17;
        goto LABEL_9;
      }
      v9 = 0;
    }
    goto LABEL_19;
  }
  if ( v15 > 0x24u )
  {
    if ( v15 == 37 )
      goto LABEL_33;
  }
  else if ( v15 == 12 || v15 == 34 )
  {
    goto LABEL_33;
  }
LABEL_3:
  if ( v1 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 304))(a1, 0);
  if ( !*((_BYTE *)a1 + 305) )
  {
    if ( !*((_BYTE *)a1 + 345) )
      goto LABEL_17;
LABEL_7:
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
LABEL_8:
    v2 = *(_WORD *)(a1[79] + 4);
LABEL_9:
    if ( (v2 & 1) == 0 )
    {
      v3 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v3 == sub_63A0 )
      {
        v4 = a1[4];
        if ( v4 )
        {
          v6 = v4 + 1;
          v5 = a1[4];
          --v4;
        }
        else
        {
          v5 = 1;
          v6 = 2;
        }
        v7 = a1[3];
        if ( a1[5] < v6 )
        {
          v16 = qvector_reserve();
          a1[3] = v16;
          v7 = v16;
        }
        a1[4] = v6;
        *(_BYTE *)(v7 + v4) = 32;
        *(_BYTE *)(a1[3] + v5) = 0;
      }
      else
      {
        v3(a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 2);
    goto LABEL_17;
  }
  v9 = 1;
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
  v2 = *(_WORD *)(a1[79] + 4);
LABEL_19:
  if ( (v2 & 1) == 0 )
  {
    v10 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
    if ( v10 == sub_63A0 )
    {
      v11 = a1[4];
      if ( v11 )
      {
        v13 = v11 + 1;
        v12 = a1[4];
        --v11;
      }
      else
      {
        v12 = 1;
        v13 = 2;
      }
      v14 = a1[3];
      if ( a1[5] < v13 )
      {
        v17 = qvector_reserve();
        a1[3] = v17;
        v14 = v17;
      }
      a1[4] = v13;
      *(_BYTE *)(v14 + v11) = 32;
      *(_BYTE *)(a1[3] + v12) = 0;
    }
    else
    {
      v10(a1, 32);
    }
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 1);
  if ( *((_BYTE *)a1 + 345) )
  {
    if ( !v9 )
      goto LABEL_8;
    goto LABEL_7;
  }
LABEL_17:
  (*(void (__fastcall **)(__int64 *))(*a1 + 320))(a1);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
}

