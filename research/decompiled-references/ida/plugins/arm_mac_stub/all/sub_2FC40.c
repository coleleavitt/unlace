unsigned __int64 __fastcall sub_2FC40(__int64 *a1, _QWORD *a2, char a3)
{
  size_t v4; // rax
  unsigned __int64 i; // r12
  __int64 v6; // rbp
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // r8
  void *v11; // r9
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned __int64 v20; // [rsp+8h] [rbp-60h]
  void *srca; // [rsp+10h] [rbp-58h]
  void *src; // [rsp+10h] [rbp-58h]
  size_t na; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+18h] [rbp-50h]
  _BYTE v25[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v4 = pack_dd() - (_QWORD)v25;
  if ( v4 )
    sub_2E840(a1, v25, v4);
  for ( i = 0; i < a2[1]; ++i )
  {
    v6 = *a2 + 32 * i;
    v7 = pack_dd() - (_QWORD)v25;
    if ( v7 )
      sub_2E840(a1, v25, v7);
    v8 = pack_dd() - (_QWORD)v25;
    if ( v8 )
      sub_2E840(a1, v25, v8);
    if ( !a3 )
      continue;
    v9 = pack_dd() - (_QWORD)v25;
    if ( v9 )
      sub_2E840(a1, v25, v9);
    v10 = *(_QWORD *)(v6 + 16);
    if ( !v10 )
      continue;
    v11 = *(void **)(v6 + 8);
    v12 = a1[1];
    v13 = v12 + v10;
    if ( __CFADD__(v12, v10) )
    {
      if ( v12 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v12 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_22;
      }
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v14 = *a1;
    v15 = a1[1];
    if ( a1[2] < v13 )
    {
      n = v10;
      src = v11;
      v20 = v13;
      v17 = qvector_reserve();
      v10 = n;
      v11 = src;
      *a1 = v17;
      v14 = v17;
      v13 = v20;
      v15 = a1[1];
    }
    na = v10;
    srca = v11;
    v19 = v13;
    memset((void *)(v14 + v15), 0, v13 - v15);
    v11 = srca;
    v10 = na;
    a1[1] = v19;
LABEL_22:
    memcpy((void *)(v12 + *a1), v11, v10);
  }
  return v26 - __readfsqword(0x28u);
}

