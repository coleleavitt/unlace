__int64 __fastcall sub_40C0(__int64 a1, double a2)
{
  int v3; // eax
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int8 v15; // dl
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // rbp
  __int64 v19; // r13
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  unsigned __int8 v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  v3 = *(unsigned __int16 *)(a1 + 248);
  if ( (_WORD)v3 == 34 )
  {
    v22 = *(_BYTE *)(a1 + 252);
    v16 = v22;
    if ( v22 <= 0xFu )
      goto LABEL_20;
  }
  else
  {
    if ( (_WORD)v3 != 33 )
      goto LABEL_3;
    v15 = *(_BYTE *)(a1 + 252);
    if ( v15 == 0xFF )
      goto LABEL_3;
    v16 = v15;
    if ( v15 <= 0xFu )
    {
LABEL_20:
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, off_6CA0[v16], 32);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v17 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v17 == sub_3B60 )
      {
        v18 = *(_QWORD *)(a1 + 32);
        if ( v18 )
        {
          v20 = v18 + 1;
          v19 = *(_QWORD *)(a1 + 32);
          --v18;
        }
        else
        {
          v19 = 1;
          v20 = 2;
        }
        v21 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v20 )
        {
          v28 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v28;
          v21 = v28;
        }
        *(_QWORD *)(a1 + 32) = v20;
        *(_BYTE *)(v21 + v18) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v19) = 0;
        if ( !*(_BYTE *)(a1 + 265) )
        {
LABEL_5:
          if ( !*(_BYTE *)(a1 + 305) )
            goto LABEL_11;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
          v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
          if ( v4 != sub_3B60 )
          {
            v4((_QWORD *)a1, 32);
            goto LABEL_10;
          }
          v5 = *(_QWORD *)(a1 + 32);
          if ( v5 )
          {
            v8 = v5 + 1;
            v7 = *(_QWORD *)(a1 + 32);
            v6 = *(_QWORD *)(a1 + 24);
            --v5;
            if ( *(_QWORD *)(a1 + 40) >= v8 )
              goto LABEL_9;
          }
          else
          {
            v6 = *(_QWORD *)(a1 + 24);
            v7 = 1;
            v8 = 2;
            if ( *(_QWORD *)(a1 + 40) >= 2u )
            {
LABEL_9:
              *(_QWORD *)(a1 + 32) = v8;
              *(_BYTE *)(v6 + v5) = 32;
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + v7) = 0;
LABEL_10:
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
LABEL_11:
              if ( !*(_BYTE *)(a1 + 345) )
                return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
              v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
              if ( v9 != sub_3B60 )
              {
                v9((_QWORD *)a1, 32);
                goto LABEL_16;
              }
              v10 = *(_QWORD *)(a1 + 32);
              if ( v10 )
              {
                v13 = v10 + 1;
                v12 = *(_QWORD *)(a1 + 32);
                v11 = *(_QWORD *)(a1 + 24);
                --v10;
                if ( *(_QWORD *)(a1 + 40) >= v13 )
                  goto LABEL_15;
              }
              else
              {
                v11 = *(_QWORD *)(a1 + 24);
                v12 = 1;
                v13 = 2;
                if ( *(_QWORD *)(a1 + 40) >= 2u )
                {
LABEL_15:
                  *(_QWORD *)(a1 + 32) = v13;
                  *(_BYTE *)(v11 + v10) = 32;
                  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v12) = 0;
LABEL_16:
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
                  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
                }
              }
              v27 = qvector_reserve();
              *(_QWORD *)(a1 + 24) = v27;
              v11 = v27;
              goto LABEL_15;
            }
          }
          v26 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v26;
          v6 = v26;
          goto LABEL_9;
        }
LABEL_4:
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
        goto LABEL_5;
      }
      v17((_QWORD *)a1, 32);
LABEL_3:
      if ( !*(_BYTE *)(a1 + 265) )
        goto LABEL_5;
      goto LABEL_4;
    }
  }
  v23 = *(_QWORD *)(a1 + 624);
  LODWORD(v24) = 0;
  v25 = *(_DWORD *)(v23 + 104);
  if ( v3 >= v25 && v3 < *(_DWORD *)(v23 + 108) )
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 112) + 16LL * (v3 - v25));
  return sub_34D0((__int64)"%a (%s): Internal error: bad condition code %i", a2, *(const char **)(a1 + 240), v24);
}

