__int64 __fastcall sub_6EF0(__int64 a1, unsigned int a2, const char *a3, __int64 a4, int *a5, char a6, __int64 *a7)
{
  const char *v7; // r10
  char v11; // al
  bool v12; // r13
  const char *v13; // rbx
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  char v17; // bl
  __int64 v18; // rdi
  unsigned int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  char v27; // [rsp+Ch] [rbp-5Ch]
  __m128i v28; // [rsp+10h] [rbp-58h] BYREF
  __int16 v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v7 = a3;
  v30 = __readfsqword(0x28u);
  if ( !a3 )
    goto LABEL_26;
  v11 = *a3;
  v12 = 0;
  if ( !*a3 )
    goto LABEL_9;
  v13 = a3;
  if ( v11 == 36 )
  {
    if ( a3[1] == 76 )
    {
      v12 = 1;
      if ( a3[2] == 78 )
        goto LABEL_9;
    }
  }
  else if ( v11 == 95 )
  {
    do
      ++v13;
    while ( *v13 == 95 );
  }
  v27 = a6;
  v14 = strstr(v13, "catch$");
  v7 = a3;
  a6 = v27;
  if ( !v14 )
  {
    v14 = strstr(v13, "unwindfunclet$");
    v7 = a3;
    a6 = v27;
    if ( !v14 )
    {
LABEL_26:
      v12 = 0;
      goto LABEL_9;
    }
  }
  v12 = 1;
  if ( v13 != v14 )
    v12 = *(v14 - 1) == 36;
LABEL_9:
  if ( *(_BYTE *)(a1 + 56) )
  {
    v15 = 56324;
    if ( a6 )
    {
      add_entry(a4, a4, v7, 1, 1);
      goto LABEL_24;
    }
  }
  else
  {
    v15 = a6 == 0 ? 56324 : 56322;
  }
  set_name(a4, v7, v15);
  v16 = a4 + 1;
  if ( !v12 )
  {
    auto_mark_range(a4, v16, 20);
    auto_mark_range(a4, a4 + 1, 30);
LABEL_24:
    v17 = 1;
    goto LABEL_13;
  }
  auto_mark_range(a4, v16, 20);
  v17 = 0;
LABEL_13:
  v18 = *(_QWORD *)(a1 + 40);
  v29 = 0;
  v28 = 0;
  if ( !(unsigned __int8)sub_6570(v18, a2, &v28, a5) )
    return v30 - __readfsqword(0x28u);
  v19 = v28.m128i_u32[1];
  if ( *(_BYTE *)(a1 + 382) )
    v19 = _byteswap_ulong(v28.m128i_u32[1]);
  if ( !v17 )
    return v30 - __readfsqword(0x28u);
  if ( a7 )
  {
    v20 = a7[1];
    v21 = *a7;
    v22 = v20 + 1;
    if ( a7[2] < (unsigned __int64)(v20 + 1) )
    {
      v21 = qvector_reserve(a7, *a7, v20 + 1, 12);
      v20 = a7[1];
      *a7 = v21;
      v22 = v20 + 1;
    }
    a7[1] = v22;
    v23 = v21 + 12 * v20;
    *(_QWORD *)v23 = a4;
    *(_DWORD *)(v23 + 8) = v19;
    return v30 - __readfsqword(0x28u);
  }
  return sub_5AB0(a4, v19);
}

