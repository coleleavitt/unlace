__int64 __fastcall sub_D90E0(__int64 a1, __int64 *a2)
{
  bool v3; // cc
  __int64 v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rsi
  unsigned int v18; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h] BYREF
  void *v20[5]; // [rsp+20h] [rbp-28h] BYREF

  v20[1] = (void *)__readfsqword(0x28u);
  v3 = *(_QWORD *)a1 < *(_QWORD *)(a1 + 8);
  v19 = 0;
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a1 + 72);
    if ( !v4 )
      goto LABEL_10;
    if ( *(_DWORD *)(v4 + 32) )
    {
      v5 = *(__int64 **)v4;
      v6 = **(_QWORD **)v4;
      if ( v6 )
      {
        a2 = (__int64 *)v20;
        v20[0] = &dword_0 + 1;
        sub_D63C0(v6, v20);
        v7 = (unsigned int)v20[0];
        *((_DWORD *)v5 + 2) = 0;
        *v5 = 0;
        v8 = v7;
        if ( v7 )
          goto LABEL_11;
      }
      v9 = *(_QWORD *)(v4 + 40);
      v10 = _mm_loadu_si128((const __m128i *)(v4 + 56));
      *(_QWORD *)(v4 + 64) = *(_QWORD *)(v4 + 48);
      v11 = *(_QWORD *)(v4 + 16);
      *(__m128i *)(v4 + 40) = v10;
      v12 = *(_QWORD *)(v4 + 48) == v11;
      *(_QWORD *)(v4 + 56) = v9;
      if ( v12 )
      {
        *(_DWORD *)(v4 + 28) = 1;
        v8 = 0;
LABEL_11:
        v18 = v8;
        sub_D64C0(a1, a2);
        return v18;
      }
      a2 = (__int64 *)sub_D95D0;
      v8 = sub_D3D10(*(__int64 **)v4, (void *(*)(void *))sub_D95D0, (void *)v4);
    }
    else
    {
      v8 = sub_D8F20(*(_QWORD *)(a1 + 72), (__int64)a2);
      v13 = *(_QWORD *)(v4 + 16);
      *(__m128i *)(v4 + 40) = _mm_loadu_si128((const __m128i *)(v4 + 56));
      if ( *(_QWORD *)(v4 + 48) == v13 )
      {
        *(_DWORD *)(v4 + 28) = 1;
        if ( v8 )
          goto LABEL_11;
        goto LABEL_10;
      }
    }
    if ( v8 )
      goto LABEL_11;
    if ( !*(_DWORD *)(v4 + 28) )
    {
      result = sub_D3690(*(_QWORD *)v4, a1, (__int64 **)(v4 + 40), *(_QWORD *)(v4 + 16));
      if ( (_DWORD)result )
        return result;
      goto LABEL_17;
    }
LABEL_10:
    v8 = 0;
    goto LABEL_11;
  }
LABEL_17:
  result = sub_D4150(a1, &v19);
  if ( !(_DWORD)result )
  {
    v15 = *(_QWORD *)(a1 + 64);
    v16 = v19;
    *(_DWORD *)(a1 + 20) = v19;
    if ( v15 )
    {
      v17 = *(_QWORD *)a1 + v16;
      *(_QWORD *)(a1 + 40) = *(_QWORD *)a1 + v15;
      *(_QWORD *)a1 = v17;
    }
    else
    {
      return sub_D3FB0(a1, v16, (_QWORD *)(a1 + 40));
    }
  }
  return result;
}
