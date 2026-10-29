int __fastcall sub_1FCC0(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rax
  int v5; // r14d
  int v7; // edx
  int v8; // r15d
  __int64 v9; // rbp
  int v10; // eax
  int v11; // r13d
  __int64 v12; // r11
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // r8d
  unsigned __int16 v17; // cx
  int v18; // r8d
  int v19; // esi
  __int64 v20; // rax
  __int64 v22; // [rsp+10h] [rbp-58h]
  __int64 v23; // [rsp+18h] [rbp-50h]
  int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+24h] [rbp-44h]
  __int64 v26; // [rsp+28h] [rbp-40h]

  v3 = *(unsigned __int16 *)(a2 + 352);
  v4 = (__int64)(*(_QWORD *)(a2 + 344) - *(_QWORD *)(a2 + 336)) >> 1;
  v24 = v4;
  if ( *(_WORD *)(a2 + 352) )
  {
    v5 = *(_QWORD *)(a2 + 152);
    v22 = *(_QWORD *)(a2 + 96);
    v7 = *(unsigned __int16 *)(a2 + 352);
    v8 = 0;
    v9 = a1;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 32);
      if ( v10 > 20 )
      {
        v11 = v8;
        if ( v10 <= 27 )
        {
          v16 = *(unsigned __int16 *)(a2 + 354);
          v17 = v7 - v16;
          v18 = v8 + v16;
          v19 = v8 - v17;
          if ( v8 < v17 )
            v19 = v18;
          v11 = v19;
        }
      }
      else
      {
        v11 = *(_DWORD *)(a2 + 88) & 8;
        if ( v11 || v8 != v3 - *(unsigned __int16 *)(a2 + 354) )
        {
          v11 = 1000;
          if ( v8 )
            v11 = v8;
        }
      }
      v12 = *(_QWORD *)(a2 + 144);
      if ( v5 <= 0 )
        goto LABEL_16;
      v13 = *(_QWORD *)(a2 + 144);
      while ( *(_DWORD *)(v13 + 84) != v11 )
      {
        v13 += 120;
        if ( v13 == v12 + 120LL * (unsigned int)(v5 - 1) + 120 )
          goto LABEL_16;
      }
      v26 = *(_QWORD *)(a2 + 144);
      v25 = v7;
      v23 = *(_QWORD *)(v13 + 16);
      if ( !v23 )
        goto LABEL_13;
      LODWORD(v4) = strcmp(*(const char **)(v13 + 8), "retval");
      v7 = v25;
      v12 = v26;
      if ( (_DWORD)v4 )
      {
        if ( v23 == 1 )
        {
LABEL_13:
          LODWORD(v4) = (unsigned int)sub_13B20((__int64 *)(v13 + 8));
          ++v8;
          v7 = *(unsigned __int16 *)(a2 + 352);
          v3 = (unsigned __int16)v7;
          if ( (unsigned __int16)v7 <= v8 )
            return v4;
        }
        else
        {
          ++v8;
          v3 = (unsigned __int16)v25;
          if ( (unsigned __int16)v25 <= v8 )
            return v4;
        }
      }
      else
      {
LABEL_16:
        v14 = *(_QWORD *)(a2 + 152);
        if ( *(_QWORD *)(a2 + 160) < (unsigned __int64)(v14 + 1) )
        {
          v20 = qvector_reserve();
          *(_QWORD *)(a2 + 144) = v20;
          v12 = v20;
          v14 = *(_QWORD *)(a2 + 152);
        }
        v15 = v12 + 120 * v14;
        ++v8;
        *(_QWORD *)(v15 + 8) = 0;
        *(_QWORD *)(v15 + 32) = 0;
        *(_QWORD *)(v15 + 56) = 0;
        *(_BYTE *)(v15 + 88) = 0;
        *(_BYTE *)(v15 + 112) = 0;
        *(_OWORD *)(v15 + 16) = 0;
        *(_OWORD *)(v15 + 40) = 0;
        *(_OWORD *)(v15 + 64) = 0;
        ++*(_QWORD *)(a2 + 152);
        *(_QWORD *)v15 = v22;
        *(_DWORD *)(v15 + 80) = v24;
        LODWORD(v4) = (unsigned int)sub_13B20((__int64 *)(v15 + 8));
        *(_DWORD *)(v15 + 84) = v11;
        v7 = *(unsigned __int16 *)(a2 + 352);
        v3 = (unsigned __int16)v7;
        if ( (unsigned __int16)v7 <= v8 )
          return v4;
      }
    }
  }
  return v4;
}

