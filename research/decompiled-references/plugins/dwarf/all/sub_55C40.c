__int64 __fastcall sub_55C40(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  const __m128i *v25; // [rsp+0h] [rbp-58h] BYREF
  __int128 v26; // [rsp+8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( (*(_DWORD *)(a2 + 336) & 0xFFFFFFFD) != 1 )
    return 0;
  v3 = a1[4];
  v5 = a1[3];
  if ( a1[5] < (unsigned __int64)(v3 + 1) )
  {
    v19 = qvector_reserve(a1 + 3, v5, v3 + 1, 8);
    a1[3] = v19;
    v5 = v19;
    v3 = a1[4];
  }
  *(_QWORD *)(v5 + 8 * v3) = a2;
  ++a1[4];
  v6 = *(_DWORD *)(a2 + 272);
  if ( v6 == 2 )
  {
    v7 = *(_QWORD *)(a2 + 384);
    v8 = v7 + 104LL * *(_QWORD *)(a2 + 392);
    if ( v7 == v8 )
      return 0;
    for ( i = v7 + 104; ; i += 104 )
    {
      v25 = nullptr;
      v26 = 0;
      v10 = i;
      if ( !(unsigned __int8)sub_55920((_DWORD *)(i - 56), a2, &v25) )
        goto LABEL_19;
      if ( (debug & 0x400000) != 0 )
      {
        v13 = sub_81860(i - 16, 0, 0);
        sub_88B80((unsigned int)"Member @ %s aggregates itself. Turning into dummy.\n", v13, v14, v15, v16, v17);
        *(_BYTE *)(i - 32) |= 2u;
        v10 = i;
        if ( v8 != i )
        {
LABEL_16:
          v11 = *(_QWORD *)(i + 40);
          if ( v11 == -1 )
            goto LABEL_27;
          v12 = v11 - *(_QWORD *)(i - 64);
          goto LABEL_18;
        }
      }
      else
      {
        *(_BYTE *)(i - 32) |= 2u;
        v10 = i;
        if ( v8 != i )
          goto LABEL_16;
      }
      v18 = sub_97AE0(a2 + 8);
      if ( v18 == -1 )
      {
LABEL_27:
        v12 = 8;
        goto LABEL_18;
      }
      v12 = (v18 & 0xFFFFFFFFFFFFFFF8LL) - *(_QWORD *)(i - 64);
LABEL_18:
      *(_QWORD *)(i - 24) = v12;
LABEL_19:
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      if ( v8 == v10 )
        return 0;
    }
  }
  if ( v6 == 1 )
  {
    v25 = nullptr;
    v26 = 0;
    if ( (unsigned __int8)sub_55920((_DWORD *)(a2 + 392), a2, &v25) )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v20 = sub_81C40(a2 + 8);
        sub_88B80(
          (unsigned int)"Typedef @ %s aggregates itself (possibly indirectly). Turning into dummy.\n",
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      *(_DWORD *)(a2 + 448) |= 1u;
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
  }
  return 0;
}
