__int64 __fastcall sub_3B7C0(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // r10
  char *v6; // rbp
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edi
  bool v15; // r9
  bool v16; // al
  _QWORD **v18; // rdi
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, unsigned __int16, __int64); // rax
  unsigned int v21; // [rsp+4h] [rbp-54h]
  unsigned __int64 v22; // [rsp+8h] [rbp-50h]
  unsigned __int64 v23; // [rsp+8h] [rbp-50h]
  void *dest[9]; // [rsp+10h] [rbp-48h] BYREF

  dest[1] = (void *)__readfsqword(0x28u);
  if ( !sub_3B6D0(a1, a2, *a3, dest, 0) )
    return 1;
  v6 = (char *)dest[0];
  v7 = *(_QWORD **)dest[0];
  if ( !v4 )
  {
    *v5 = v7[3];
    v21 = v7[14] & 0x100;
    if ( !v21 )
      goto LABEL_4;
    return 1;
  }
  v21 = v7[14] & 0x100;
  if ( v21 )
    return 1;
LABEL_4:
  v8 = a2 & 0xFFFFFFFFFFFFF000LL;
  v9 = (((a2 + *v5 + 4095) & 0xFFFFFFFFFFFFF000LL) - (a2 & 0xFFFFFFFFFFFFF000LL)) >> 12;
  if ( v9 )
  {
    LODWORD(v10) = 0;
    do
    {
      v11 = *(_QWORD *)(a1 + 56);
      v12 = 8LL * *(_QWORD *)(a1 + 64);
      v13 = v11 + v12;
      if ( v12 )
      {
        v14 = 0;
        do
        {
          v15 = v8 >= (*(_QWORD *)(*(_QWORD *)v11 + 32LL) & 0xFFFFFFFFFFFFF000LL);
          v16 = v8 < ((*(_QWORD *)(*(_QWORD *)v11 + 40LL) + 4095LL) & 0xFFFFFFFFFFFFF000LL);
          v11 += 8;
          v14 += v15 && v16;
        }
        while ( v11 != v13 );
        if ( v14 == 1 )
        {
          v18 = *(_QWORD ***)(a1 + 8);
          v19 = *(unsigned __int16 *)(a1 + 16);
          v20 = (__int64 (__fastcall *)(__int64, unsigned __int16, __int64))(*v18)[13];
          if ( v20 == sub_3B150
            && (v18 = (_QWORD **)v18[1],
                v20 = (__int64 (__fastcall *)(__int64, unsigned __int16, __int64))(*v18)[13],
                v20 == sub_3B150)
            && (v18 = (_QWORD **)v18[1],
                v20 = (__int64 (__fastcall *)(__int64, unsigned __int16, __int64))(*v18)[13],
                v20 == sub_3B150)
            && (v18 = (_QWORD **)v18[1],
                v20 = (__int64 (__fastcall *)(__int64, unsigned __int16, __int64))(*v18)[13],
                v20 == sub_3B150) )
          {
            v22 = v8;
            (*(void (__fastcall **)(_QWORD *, __int64))(*v18[1] + 104LL))(v18[1], v19);
            v8 = v22;
          }
          else
          {
            v23 = v8;
            ((void (__fastcall *)(_QWORD **, __int64))v20)(v18, v19);
            v8 = v23;
          }
        }
      }
      v8 += 4096LL;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( v10 < v9 );
  }
  if ( v7 )
  {
    if ( v7[9] )
    {
      v7[10] = 0;
      qfree();
    }
    if ( v7[6] )
    {
      v7[7] = 0;
      qfree();
    }
    if ( *v7 )
    {
      v7[1] = 0;
      qfree();
    }
    operator delete(v7, 0x78u);
  }
  memmove(v6, v6 + 8, *(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64) - (_QWORD)v6 - 8);
  --*(_QWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 48) = 1;
  return v21;
}

