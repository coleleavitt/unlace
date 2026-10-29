__int64 __fastcall sub_5E260(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  unsigned __int64 i; // rbp
  __int64 v9; // r8
  size_t v10; // r9
  __int64 v11; // r8
  void *v12; // r10
  size_t v13; // r11
  __int64 v14; // rsi
  size_t v15; // rdx
  int v16; // eax
  void *v17; // rdi
  size_t v19; // [rsp+Ch] [rbp-B8h]
  void *v20; // [rsp+14h] [rbp-B0h]
  size_t v21; // [rsp+1Ch] [rbp-A8h]
  __int64 v22; // [rsp+24h] [rbp-A0h]
  size_t v23; // [rsp+2Ch] [rbp-98h]
  int v25; // [rsp+48h] [rbp-7Ch] BYREF
  __int64 v26; // [rsp+4Ch] [rbp-78h] BYREF
  __int128 v27; // [rsp+54h] [rbp-70h]
  void *src; // [rsp+6Ch] [rbp-58h] BYREF
  size_t n[2]; // [rsp+74h] [rbp-50h]
  unsigned __int64 v30; // [rsp+84h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v27 = 0;
  v26 = 0;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( a3 )
  {
    for ( i = 0; i < a3; i += v25 )
    {
      sub_15620(&v26);
      v9 = qword_8F6A8;
      if ( qword_8F6A8 <= 0 )
      {
        v9 = *(_QWORD *)(a1 + 200);
        if ( v9 <= 0 )
        {
          v9 = *(_QWORD *)(a1 + 192);
          if ( v9 < 399 )
            v9 = 399;
        }
      }
      sub_59860(a1, (__int64 *)&src, (char *)(a5 + i), a3 - i, v9 - (((_QWORD)v27 == 0) + (_QWORD)v27 - 1LL));
      v10 = n[0];
      v11 = v27;
      v12 = src;
      v13 = n[0];
      if ( (_QWORD)v27 )
      {
        v11 = v27 - 1;
        v13 = n[0] + v27 - 1;
      }
      v14 = v26;
      v15 = v13 + 1;
      if ( *((_QWORD *)&v27 + 1) < v13 + 1 )
      {
        v23 = v13;
        v22 = v11;
        v21 = n[0];
        v20 = src;
        v19 = v13 + 1;
        v26 = qvector_reserve();
        v13 = v23;
        v14 = v26;
        v11 = v22;
        v10 = v21;
        v12 = v20;
        v15 = v19;
      }
      *(_QWORD *)&v27 = v15;
      *(_BYTE *)(v14 + v13) = 0;
      memmove((void *)(v11 + v26), v12, v10);
      if ( (unsigned int)sub_5ABF0(a1, &v26) == 1 )
      {
        v16 = sub_5AB40(a1);
        *(_BYTE *)(a1 + 16) = 0;
        if ( v16 == 1 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            if ( **(_BYTE **)(a1 + 24) == 70 )
            {
              sub_59740((_QWORD *)a1, &v25, a6, nullptr);
              if ( v25 >= 0 )
                continue;
            }
          }
        }
      }
      v17 = src;
      LODWORD(i) = -1;
      goto LABEL_13;
    }
    v17 = src;
LABEL_13:
    if ( v17 )
    {
      n[0] = 0;
      qfree();
    }
  }
  else
  {
    LODWORD(i) = 0;
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return (unsigned int)i;
}

