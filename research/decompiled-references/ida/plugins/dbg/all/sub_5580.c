__int64 __fastcall sub_5580(_QWORD *a1, unsigned int *a2, unsigned int a3, char a4)
{
  unsigned int v5; // esi
  unsigned __int32 v6; // eax
  __int64 result; // rax
  size_t v8; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  void *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax

  v5 = *a2;
  v6 = _byteswap_ulong(v5);
  if ( a4 )
    v5 = v6;
  result = 0;
  if ( v5 > 3 )
  {
    v8 = v5;
    v11 = a3 - 4;
    if ( v11 < (unsigned __int64)v5 - 4 )
    {
      v8 = a3;
      sub_53E0((__int64)"Corrupt string table length: %d (only %d bytes left). Truncating.", v5, v11);
      v12 = a1[2];
      v13 = a3 + 1LL;
      if ( v12 >= v8 + 1 )
      {
LABEL_6:
        if ( v13 != v12 )
          a1[2] = v13;
LABEL_8:
        v14 = &unk_13371;
        *(_BYTE *)(a1[1] + v8) = 0;
        if ( a1[2] )
          v14 = (void *)a1[1];
        memcpy(v14, a2, v8);
        return 1;
      }
    }
    else
    {
      v12 = a1[2];
      v13 = v5 + 1LL;
      if ( v12 >= v13 )
        goto LABEL_6;
    }
    v15 = a1[1];
    if ( a1[3] < v13 )
    {
      v16 = qvector_reserve(a1 + 1, v15, v13, 1);
      v12 = a1[2];
      a1[1] = v16;
      v15 = v16;
    }
    memset((void *)(v15 + v12), 0, v13 - v12);
    a1[2] = v13;
    goto LABEL_8;
  }
  return result;
}

