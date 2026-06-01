void __fastcall sub_11320(__int64 a1, int a2, __int64 a3, double a4)
{
  __int16 v5; // ax
  double v6; // xmm0_8
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 (__fastcall *v12)(_QWORD *, char); // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-48h]

  if ( *(_BYTE *)(a3 + 1) )
  {
    v5 = *(_WORD *)(a1 + 248);
    if ( v5 == 80 && !a2 )
    {
LABEL_4:
      sub_10EB0((_QWORD *)a1, a3, a4);
      if ( *(_BYTE *)(a3 + 41) )
      {
        v6 = (*(double (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        sub_10EB0((_QWORD *)a1, a3 + 40, v6);
      }
      return;
    }
    v7 = 16;
    if ( (v5 == 80) == a2 )
      v7 = tag_strlen();
    while ( 1 )
    {
      v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v12 != sub_10B80 )
      {
        v12((_QWORD *)a1, 32);
        goto LABEL_11;
      }
      v11 = *(_QWORD *)(a1 + 32);
      if ( v11 )
      {
        v8 = v11 + 1;
        v9 = *(_QWORD *)(a1 + 32);
        v10 = *(_QWORD *)(a1 + 24);
        --v11;
        if ( *(_QWORD *)(a1 + 40) < v8 )
          goto LABEL_15;
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 24);
        v9 = 1;
        v8 = 2;
        if ( *(_QWORD *)(a1 + 40) < 2u )
        {
LABEL_15:
          v14 = v9;
          v13 = qvector_reserve();
          v9 = v14;
          *(_QWORD *)(a1 + 24) = v13;
          v10 = v13;
        }
      }
      *(_QWORD *)(a1 + 32) = v8;
      *(_BYTE *)(v10 + v11) = 32;
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9) = 0;
LABEL_11:
      if ( (unsigned __int64)++v7 > 0x13 )
        goto LABEL_4;
    }
  }
}

